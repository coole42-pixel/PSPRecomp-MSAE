#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0317[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 30, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53,
    0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 78, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 83, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0,
    101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 114, 0, 115, 116, 0, 117, 0, 0, 118, 119, 0, 120, 0, 0, 121, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125,
    126, 0, 0, 127, 0, 0, 0, 128, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138,
};
void recomp_unit_0317_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08941000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0317[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08941000;
    case 2u: goto L_08941020;
    case 3u: goto L_0894104C;
    case 4u: goto L_0894106C;
    case 5u: goto L_08941080;
    case 6u: goto L_0894108C;
    case 7u: goto L_089410B0;
    case 8u: goto L_089410CC;
    case 9u: goto L_089410E4;
    case 10u: goto L_089410F0;
    case 11u: goto L_089410FC;
    case 12u: goto L_08941114;
    case 13u: goto L_08941128;
    case 14u: goto L_08941130;
    case 15u: goto L_0894113C;
    case 16u: goto L_08941148;
    case 17u: goto L_08941150;
    case 18u: goto L_08941154;
    case 19u: goto L_08941168;
    case 20u: goto L_08941180;
    case 21u: goto L_0894119C;
    case 22u: goto L_089411B4;
    case 23u: goto L_089411C0;
    case 24u: goto L_089411E0;
    case 25u: goto L_089411F4;
    case 26u: goto L_08941238;
    case 27u: goto L_08941250;
    case 28u: goto L_0894126C;
    case 29u: goto L_089412AC;
    case 30u: goto L_089412B0;
    case 31u: goto L_089412C8;
    case 32u: goto L_089412D4;
    case 33u: goto L_08941310;
    case 34u: goto L_0894133C;
    case 35u: goto L_08941350;
    case 36u: goto L_08941360;
    case 37u: goto L_08941370;
    case 38u: goto L_08941378;
    case 39u: goto L_089413A4;
    case 40u: goto L_089413D4;
    case 41u: goto L_089413E8;
    case 42u: goto L_0894141C;
    case 43u: goto L_08941428;
    case 44u: goto L_08941430;
    case 45u: goto L_08941438;
    case 46u: goto L_08941454;
    case 47u: goto L_08941464;
    case 48u: goto L_0894147C;
    case 49u: goto L_08941488;
    case 50u: goto L_089414A8;
    case 51u: goto L_089414BC;
    case 52u: goto L_089414F4;
    case 53u: goto L_089414FC;
    case 54u: goto L_08941504;
    case 55u: goto L_08941518;
    case 56u: goto L_08941544;
    case 57u: goto L_08941570;
    case 58u: goto L_08941584;
    case 59u: goto L_0894174C;
    case 60u: goto L_0894175C;
    case 61u: goto L_089417E8;
    case 62u: goto L_089417F0;
    case 63u: goto L_08941800;
    case 64u: goto L_0894182C;
    case 65u: goto L_08941858;
    case 66u: goto L_0894186C;
    case 67u: goto L_08941A34;
    case 68u: goto L_08941A44;
    case 69u: goto L_08941AD0;
    case 70u: goto L_08941AF0;
    case 71u: goto L_08941B38;
    case 72u: goto L_08941B4C;
    case 73u: goto L_08941B54;
    case 74u: goto L_08941B68;
    case 75u: goto L_08941B7C;
    case 76u: goto L_08941B94;
    case 77u: goto L_08941BF0;
    case 78u: goto L_08941BF4;
    case 79u: goto L_08941C20;
    case 80u: goto L_08941C34;
    case 81u: goto L_08941C38;
    case 82u: goto L_08941C80;
    case 83u: goto L_08941C88;
    case 84u: goto L_08941C8C;
    case 85u: goto L_08941CBC;
    case 86u: goto L_08941CC4;
    case 87u: goto L_08941CCC;
    case 88u: goto L_08941CE4;
    case 89u: goto L_08941CEC;
    case 90u: goto L_08941D00;
    case 91u: goto L_08941D14;
    case 92u: goto L_08941D1C;
    case 93u: goto L_08941D24;
    case 94u: goto L_08941D38;
    case 95u: goto L_08941D40;
    case 96u: goto L_08941D48;
    case 97u: goto L_08941D50;
    case 98u: goto L_08941D58;
    case 99u: goto L_08941D60;
    case 100u: goto L_08941D78;
    case 101u: goto L_08941D80;
    case 102u: goto L_08941D88;
    case 103u: goto L_08941D90;
    case 104u: goto L_08941D98;
    case 105u: goto L_08941DA0;
    case 106u: goto L_08941DA8;
    case 107u: goto L_08941DB0;
    case 108u: goto L_08941DB8;
    case 109u: goto L_08941DC0;
    case 110u: goto L_08941DC8;
    case 111u: goto L_08941DD0;
    case 112u: goto L_08941DD8;
    case 113u: goto L_08941DF4;
    case 114u: goto L_08941E10;
    case 115u: goto L_08941E18;
    case 116u: goto L_08941E1C;
    case 117u: goto L_08941E24;
    case 118u: goto L_08941E30;
    case 119u: goto L_08941E34;
    case 120u: goto L_08941E3C;
    case 121u: goto L_08941E48;
    case 122u: goto L_08941E4C;
    case 123u: goto L_08941E60;
    case 124u: goto L_08941E6C;
    case 125u: goto L_08941E7C;
    case 126u: goto L_08941E80;
    case 127u: goto L_08941E8C;
    case 128u: goto L_08941E9C;
    case 129u: goto L_08941EA0;
    case 130u: goto L_08941EB4;
    case 131u: goto L_08941ECC;
    case 132u: goto L_08941F00;
    case 133u: goto L_08941F28;
    case 134u: goto L_08941F80;
    case 135u: goto L_08941FC4;
    case 136u: goto L_08941FD4;
    case 137u: goto L_08941FDC;
    case 138u: goto L_08941FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08941000:
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<15u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<15u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    goto L_08941020;
L_08941020:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 137u, 0x08940FBCu>(ctx, &aot_mem); return;
      }
      goto L_0894104C;
    }
L_0894104C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_0894106C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (aot_gpr[7] & 15u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0894108C;
      }
      goto L_08941080;
    }
L_08941080:
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0894108C;
L_0894108C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] << 7u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089410B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089410CCu);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x089410CCu) goto L_089410CC;
    return;
L_089410CC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2168));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x089410E4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 11u, 0x08945758u>(ctx, &aot_mem) && ctx.pc == 0x089410E4u) goto L_089410E4;
    return;
L_089410E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941168;
      }
      goto L_089410F0;
    }
L_089410F0:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x089410FCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 141u, 0x08A58948u>(ctx, &aot_mem) && ctx.pc == 0x089410FCu) goto L_089410FC;
    return;
L_089410FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(124), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08941168;
      }
      goto L_08941114;
    }
L_08941114:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(124)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894113C;
      }
      goto L_08941128;
    }
L_08941128:
    aot_gpr[31] = (0x08941130u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x08941130u) goto L_08941130;
    return;
L_08941130:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(124)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    goto L_0894113C;
L_0894113C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941154;
      }
      goto L_08941148;
    }
L_08941148:
    aot_gpr[31] = (0x08941150u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x08941150u) goto L_08941150;
    return;
L_08941150:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_08941154;
L_08941154:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08941114;
      }
      goto L_08941168;
    }
L_08941168:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941180:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089411E0;
      }
      goto L_0894119C;
    }
L_0894119C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2168));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089411B4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x089411B4u) goto L_089411B4;
    return;
L_089411B4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089411E0;
      }
      goto L_089411C0;
    }
L_089411C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089411E0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089411E0u) goto L_089411E0;
    return;
L_089411E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089411F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08941238u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08941238u) goto L_08941238;
    return;
L_08941238:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2168));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x08941250u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 11u, 0x08945758u>(ctx, &aot_mem) && ctx.pc == 0x08941250u) goto L_08941250;
    return;
L_08941250:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0894126Cu);
    aot_gpr[6] = (0u | 108u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0894126Cu) goto L_0894126C;
    return;
L_0894126C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] << 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[19] & 4u);
      if (branch_taken) {
          goto L_08941360;
      }
      goto L_089412AC;
    }
L_089412AC:
    aot_gpr[19] = (0u | 0u);
    goto L_089412B0;
L_089412B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(124)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[31] = (0x089412C8u);
    aot_gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089412C8u) goto L_089412C8;
    return;
L_089412C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
      if (branch_taken) {
          goto L_0894133C;
      }
      goto L_089412D4;
    }
L_089412D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(124)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[31] = (0x08941310u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08941310u) goto L_08941310;
    return;
L_08941310:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08941350;
      }
      goto L_0894133C;
    }
L_0894133C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(124)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    goto L_08941350;
L_08941350:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089412B0;
      }
      goto L_08941360;
    }
L_08941360:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] & 15u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
      if (branch_taken) {
          goto L_08941378;
      }
      goto L_08941370;
    }
L_08941370:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08941378;
L_08941378:
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
L_089413A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    aot_gpr[8] = (aot_gpr[8] << 3u);
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[5] & 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0894141C;
      }
      goto L_089413D4;
    }
L_089413D4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0894141C;
      }
      goto L_089413E8;
    }
L_089413E8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(124)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(116)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089413E8;
      }
      goto L_0894141C;
    }
L_0894141C:
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08941430;
      }
      goto L_08941428;
    }
L_08941428:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08941430;
L_08941430:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941438:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089414A8;
      }
      goto L_08941454;
    }
L_08941454:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2184));
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_0894147C;
      }
      goto L_08941464;
    }
L_08941464:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25448));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0894147Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x0894147Cu) goto L_0894147C;
    return;
L_0894147C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089414A8;
      }
      goto L_08941488;
    }
L_08941488:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089414A8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089414A8u) goto L_089414A8;
    return;
L_089414A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089414BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[18] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08941AD0;
      }
      goto L_089414F4;
    }
L_089414F4:
    aot_gpr[31] = (0x089414FCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x089414FCu) goto L_089414FC;
    return;
L_089414FC:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_089417F0;
      }
      goto L_08941504;
    }
L_08941504:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (4608u << 16u);
      if (branch_taken) {
          goto L_089417E8;
      }
      goto L_08941518;
    }
L_08941518:
    aot_gpr[6] = (aot_gpr[20] | aot_gpr[6]);
    aot_gpr[8] = (256u << 16u);
    aot_gpr[11] = (0u | 255u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[10] = (11008u << 16u);
    aot_gpr[3] = (65280u << 16u);
    aot_gpr[2] = (10752u << 16u);
    aot_gpr[9] = (4096u << 16u);
    aot_gpr[7] = (256u << 16u);
    aot_gpr[5] = (1027u << 16u);
    goto L_08941544;
L_08941544:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[12] = (0u | 0u);
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[20]);
    goto L_08941570;
L_08941570:
    aot_gpr[14] = (aot_gpr[13] + aot_gpr[12]);
    aot_gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0))))));
    aot_gpr[14] = (aot_gpr[14] & 255u);
    { const bool branch_taken = aot_gpr[14] == aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_0894174C;
      }
      goto L_08941584;
    }
L_08941584:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[14] = (aot_gpr[14] << 7u);
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[14]);
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(64));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(4)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(8)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(16)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(20)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(24)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(32)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(36)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(40)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(48)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(52)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(56)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[15] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[14] = (aot_gpr[14] >> 8u);
    aot_gpr[14] = (aot_gpr[14] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[20]);
    goto L_0894174C;
L_0894174C:
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr[14] = (aot_gpr[12] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[14] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941570;
      }
      goto L_0894175C;
    }
L_0894175C:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(16)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[12] >> 24u);
    aot_gpr[12] = (aot_gpr[12] & 15u);
    aot_gpr[12] = (aot_gpr[12] << 16u);
    aot_gpr[14] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[20]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(16)));
    aot_gpr[14] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[12] = (aot_gpr[12] & aot_gpr[8]);
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[20]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(8)));
    aot_gpr[14] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (aot_gpr[4] < aot_gpr[12] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[12] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08941544;
      }
      goto L_089417E8;
    }
L_089417E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941AD0;
      }
      goto L_089417F0;
    }
L_089417F0:
    aot_gpr[11] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[11] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (4608u << 16u);
      if (branch_taken) {
          goto L_08941AD0;
      }
      goto L_08941800;
    }
L_08941800:
    aot_gpr[20] = (aot_gpr[20] | aot_gpr[4]);
    aot_gpr[9] = (256u << 16u);
    aot_gpr[6] = (0u | 255u);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (11008u << 16u);
    aot_gpr[4] = (65280u << 16u);
    aot_gpr[5] = (10752u << 16u);
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[10] = (256u << 16u);
    aot_gpr[3] = (1028u << 16u);
    goto L_0894182C;
L_0894182C:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[12] = (0u | 0u);
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[2]);
    goto L_08941858;
L_08941858:
    aot_gpr[14] = (aot_gpr[13] + aot_gpr[12]);
    aot_gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0))))));
    aot_gpr[14] = (aot_gpr[14] & 255u);
    { const bool branch_taken = aot_gpr[14] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08941A34;
      }
      goto L_0894186C;
    }
L_0894186C:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[14] = (aot_gpr[14] << 7u);
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[14]);
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(64));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(4)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(8)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(16)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(20)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(24)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(32)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(36)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(40)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(48)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(52)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(56)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[15] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[14] = (aot_gpr[14] >> 8u);
    aot_gpr[14] = (aot_gpr[14] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[2]);
    goto L_08941A34;
L_08941A34:
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr[14] = (aot_gpr[12] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[14] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941858;
      }
      goto L_08941A44;
    }
L_08941A44:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(16)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[12] >> 24u);
    aot_gpr[12] = (aot_gpr[12] & 15u);
    aot_gpr[12] = (aot_gpr[12] << 16u);
    aot_gpr[14] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[2]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(16)));
    aot_gpr[14] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[12] = (aot_gpr[12] & aot_gpr[9]);
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[2]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(8)));
    aot_gpr[14] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (aot_gpr[11] < aot_gpr[12] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[12] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0894182C;
      }
      goto L_08941AD0;
    }
L_08941AD0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941AF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (18432u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[22] = (18688u << 16u);
      if (branch_taken) {
          goto L_08941B4C;
      }
      goto L_08941B38;
    }
L_08941B38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08941B68;
      }
      goto L_08941B4C;
    }
L_08941B4C:
    aot_gpr[31] = (0x08941B54u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08941B54u) goto L_08941B54;
    return;
L_08941B54:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08941B68;
L_08941B68:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 1u);
        goto L_08941B7C;
    }
    goto L_08941B7C;
L_08941B7C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08941B94u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 6u, 0x08940124u>(ctx, &aot_mem) && ctx.pc == 0x08941B94u) goto L_08941B94;
    return;
L_08941B94:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08941C38;
      }
      goto L_08941BF0;
    }
L_08941BF0:
    aot_gpr[30] = (0u | 0u);
    goto L_08941BF4;
L_08941BF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[30]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08941C20u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    goto L_089414BC;
L_08941C20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08941BF4;
      }
      goto L_08941C34;
    }
L_08941C34:
    aot_gpr[4] = (16256u << 16u);
    goto L_08941C38;
L_08941C38:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] >> 8u);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08941C8C;
      }
      goto L_08941C80;
    }
L_08941C80:
    aot_gpr[31] = (0x08941C88u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08941C88u) goto L_08941C88;
    return;
L_08941C88:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08941C8C;
L_08941C8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941CBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941CC4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941CCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941CE4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941CEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D14:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] & 1u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (0u | 1u);
        goto L_08941D38;
    }
    goto L_08941D38;
L_08941D38:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D40:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D48:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D50:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D58:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D78:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D80:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D88:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D90:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D98:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941DA0:
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941DA8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941DB0:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941DB8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941DC0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941DC8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941DD0:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941DD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08941DF4u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08941DF4u) goto L_08941DF4;
    return;
L_08941DF4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2184));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08941E1C;
      }
      goto L_08941E10;
    }
L_08941E10:
    aot_gpr[31] = (0x08941E18u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 94u, 0x08A58670u>(ctx, &aot_mem) && ctx.pc == 0x08941E18u) goto L_08941E18;
    return;
L_08941E18:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_08941E1C;
L_08941E1C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941E34;
      }
      goto L_08941E24;
    }
L_08941E24:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08941E30u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 139u, 0x08A58938u>(ctx, &aot_mem) && ctx.pc == 0x08941E30u) goto L_08941E30;
    return;
L_08941E30:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08941E34;
L_08941E34:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941E4C;
      }
      goto L_08941E3C;
    }
L_08941E3C:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08941E48u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 102u, 0x08A546E4u>(ctx, &aot_mem) && ctx.pc == 0x08941E48u) goto L_08941E48;
    return;
L_08941E48:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    goto L_08941E4C;
L_08941E4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08941EB4;
      }
      goto L_08941E60;
    }
L_08941E60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941E80;
      }
      goto L_08941E6C;
    }
L_08941E6C:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08941E7Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 96u, 0x08A58680u>(ctx, &aot_mem) && ctx.pc == 0x08941E7Cu) goto L_08941E7C;
    return;
L_08941E7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08941E80;
L_08941E80:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941EA0;
      }
      goto L_08941E8C;
    }
L_08941E8C:
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08941E9Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 140u, 0x08A58940u>(ctx, &aot_mem) && ctx.pc == 0x08941E9Cu) goto L_08941E9C;
    return;
L_08941E9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08941EA0;
L_08941EA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08941E60;
      }
      goto L_08941EB4;
    }
L_08941EB4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941ECC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08941F00u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08941F00u) goto L_08941F00;
    return;
L_08941F00:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2184));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08941F28u);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08941F28u) goto L_08941F28;
    return;
L_08941F28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08941FC4;
      }
      goto L_08941F80;
    }
L_08941F80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08941F80;
      }
      goto L_08941FC4;
    }
L_08941FC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08941FDC;
      }
      goto L_08941FD4;
    }
L_08941FD4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08941FDC;
L_08941FDC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08941FFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08942000u; return;
}

void recomp_unit_0317(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0317_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_317(Runtime &runtime) {
    runtime.register_generated_unit(317u, 0x08941000u, 4096u, &recomp_unit_0317, &recomp_unit_0317_entry);
    runtime.register_function(0x08941000u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941020u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894104Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894106Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941080u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894108Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089410B0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089410CCu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089410E4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089410F0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089410FCu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941114u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941128u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941130u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894113Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941148u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941150u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941154u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941168u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941180u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894119Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089411B4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089411C0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089411E0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089411F4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941238u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941250u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894126Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089412ACu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089412B0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089412C8u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089412D4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941310u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894133Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941350u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941360u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941370u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941378u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089413A4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089413D4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089413E8u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894141Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941428u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941430u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941438u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941454u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941464u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894147Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941488u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089414A8u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089414BCu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089414F4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089414FCu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941504u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941518u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941544u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941570u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941584u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894174Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894175Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089417E8u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x089417F0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941800u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894182Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941858u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x0894186Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941A34u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941A44u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941AD0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941AF0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941B38u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941B4Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941B54u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941B68u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941B7Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941B94u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941BF0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941BF4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941C20u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941C34u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941C38u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941C80u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941C88u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941C8Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941CBCu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941CC4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941CCCu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941CE4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941CECu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D00u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D14u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D1Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D24u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D38u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D40u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D48u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D50u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D58u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D60u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D78u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D80u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D88u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D90u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941D98u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941DA0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941DA8u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941DB0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941DB8u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941DC0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941DC8u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941DD0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941DD8u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941DF4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E10u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E18u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E1Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E24u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E30u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E34u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E3Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E48u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E4Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E60u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E6Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E7Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E80u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E8Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941E9Cu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941EA0u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941EB4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941ECCu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941F00u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941F28u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941F80u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941FC4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941FD4u, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941FDCu, &recomp_unit_0317, "recomp_unit_0317");
    runtime.register_function(0x08941FFCu, &recomp_unit_0317, "recomp_unit_0317");
}
} // namespace psprecomp
