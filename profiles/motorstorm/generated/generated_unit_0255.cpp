#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0255[1015] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66,
    0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125,
};
void recomp_unit_0255_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08903000u;
        entry_id = (entry_delta < 4060u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0255[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08903000;
    case 2u: goto L_08903070;
    case 3u: goto L_089030B8;
    case 4u: goto L_089030C8;
    case 5u: goto L_089030D4;
    case 6u: goto L_089030E8;
    case 7u: goto L_089030FC;
    case 8u: goto L_08903134;
    case 9u: goto L_08903160;
    case 10u: goto L_089031B8;
    case 11u: goto L_089031C4;
    case 12u: goto L_08903248;
    case 13u: goto L_08903270;
    case 14u: goto L_0890329C;
    case 15u: goto L_089032D4;
    case 16u: goto L_0890330C;
    case 17u: goto L_08903344;
    case 18u: goto L_0890336C;
    case 19u: goto L_08903398;
    case 20u: goto L_089033C4;
    case 21u: goto L_089033F4;
    case 22u: goto L_08903424;
    case 23u: goto L_08903458;
    case 24u: goto L_08903488;
    case 25u: goto L_089034B8;
    case 26u: goto L_089034E8;
    case 27u: goto L_08903510;
    case 28u: goto L_08903544;
    case 29u: goto L_0890356C;
    case 30u: goto L_08903584;
    case 31u: goto L_0890359C;
    case 32u: goto L_089035B4;
    case 33u: goto L_089035CC;
    case 34u: goto L_089035E4;
    case 35u: goto L_089035FC;
    case 36u: goto L_08903614;
    case 37u: goto L_0890362C;
    case 38u: goto L_08903644;
    case 39u: goto L_0890365C;
    case 40u: goto L_08903674;
    case 41u: goto L_0890368C;
    case 42u: goto L_089036A4;
    case 43u: goto L_089036C4;
    case 44u: goto L_089036DC;
    case 45u: goto L_089036F4;
    case 46u: goto L_0890370C;
    case 47u: goto L_08903724;
    case 48u: goto L_0890373C;
    case 49u: goto L_08903754;
    case 50u: goto L_0890376C;
    case 51u: goto L_08903784;
    case 52u: goto L_0890379C;
    case 53u: goto L_089037B4;
    case 54u: goto L_089037D0;
    case 55u: goto L_089037E8;
    case 56u: goto L_08903800;
    case 57u: goto L_08903818;
    case 58u: goto L_08903830;
    case 59u: goto L_08903848;
    case 60u: goto L_08903860;
    case 61u: goto L_08903878;
    case 62u: goto L_08903890;
    case 63u: goto L_089038A8;
    case 64u: goto L_089038C0;
    case 65u: goto L_089038D8;
    case 66u: goto L_089038FC;
    case 67u: goto L_08903908;
    case 68u: goto L_08903920;
    case 69u: goto L_08903948;
    case 70u: goto L_08903964;
    case 71u: goto L_08903980;
    case 72u: goto L_0890399C;
    case 73u: goto L_089039B8;
    case 74u: goto L_089039E0;
    case 75u: goto L_08903A04;
    case 76u: goto L_08903A20;
    case 77u: goto L_08903A44;
    case 78u: goto L_08903A60;
    case 79u: goto L_08903A7C;
    case 80u: goto L_08903A98;
    case 81u: goto L_08903AC0;
    case 82u: goto L_08903ADC;
    case 83u: goto L_08903AF8;
    case 84u: goto L_08903B14;
    case 85u: goto L_08903B3C;
    case 86u: goto L_08903B58;
    case 87u: goto L_08903B80;
    case 88u: goto L_08903B9C;
    case 89u: goto L_08903BC4;
    case 90u: goto L_08903BE0;
    case 91u: goto L_08903BFC;
    case 92u: goto L_08903C18;
    case 93u: goto L_08903C40;
    case 94u: goto L_08903C5C;
    case 95u: goto L_08903C78;
    case 96u: goto L_08903C94;
    case 97u: goto L_08903CBC;
    case 98u: goto L_08903CD8;
    case 99u: goto L_08903CFC;
    case 100u: goto L_08903D14;
    case 101u: goto L_08903D34;
    case 102u: goto L_08903D4C;
    case 103u: goto L_08903D64;
    case 104u: goto L_08903D7C;
    case 105u: goto L_08903DA0;
    case 106u: goto L_08903DB8;
    case 107u: goto L_08903DD0;
    case 108u: goto L_08903DE8;
    case 109u: goto L_08903E00;
    case 110u: goto L_08903E18;
    case 111u: goto L_08903E30;
    case 112u: goto L_08903E48;
    case 113u: goto L_08903E60;
    case 114u: goto L_08903E78;
    case 115u: goto L_08903E90;
    case 116u: goto L_08903EA8;
    case 117u: goto L_08903ECC;
    case 118u: goto L_08903EE4;
    case 119u: goto L_08903EFC;
    case 120u: goto L_08903F14;
    case 121u: goto L_08903F2C;
    case 122u: goto L_08903F44;
    case 123u: goto L_08903F68;
    case 124u: goto L_08903F80;
    case 125u: goto L_08903FD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08903000:
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(4176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(4176);
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
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(3696);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    aot_gpr[6] = (16076u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(3696);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(3856);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(3856);
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
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(5936);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    jump_target = aot_gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(5936);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08903070:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(19363))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08903134;
      }
      goto L_089030B8;
    }
L_089030B8:
    aot_gpr[4] = (16128u << 16u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(3696));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[18] = (2218u << 16u);
    goto L_089030C8;
L_089030C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[31] = (0x089030D4u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x089030D4u) goto L_089030D4;
    return;
L_089030D4:
    aot_fpr[12] = aot_fpr[0] - aot_fpr[20];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089030E8u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x089030E8u) goto L_089030E8;
    return;
L_089030E8:
    aot_fpr[13] = aot_fpr[0] - aot_fpr[20];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089030FCu);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x089030FCu) goto L_089030FC;
    return;
L_089030FC:
    aot_fpr[12] = aot_fpr[0] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(19363))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_089030C8;
      }
      goto L_08903134;
    }
L_08903134:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08903160:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[6]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0256_entry, 256u, 36u, 0x08904660u>(ctx, &aot_mem); return;
      }
      goto L_089031B8;
    }
L_089031B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x089031C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 152u, 0x088FFDECu>(ctx, &aot_mem) && ctx.pc == 0x089031C4u) goto L_089031C4;
    return;
L_089031C4:
    aot_gpr[17] = (0u | 14u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(19362), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[17]);
    aot_gpr[4] = (0u | 18u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(19363), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 37u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(19364), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 30u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(19365), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 26u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(19366), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[18] = (0u | 3u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (49024u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(19367), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(19396), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (15948u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_gpr[8] = (16480u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[31] = (0x08903248u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x08903248u) goto L_08903248;
    return;
L_08903248:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[5] = (0u | 3u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08903270u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x08903270u) goto L_08903270;
    return;
L_08903270:
    aot_gpr[19] = (0u | 4u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 4u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x0890329Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x0890329Cu) goto L_0890329C;
    return;
L_0890329C:
    aot_gpr[7] = (15969u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[7] = (aot_gpr[7] | 18350u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[20] = (0u | 9u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[20]);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 9u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x089032D4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x089032D4u) goto L_089032D4;
    return;
L_089032D4:
    aot_gpr[6] = (15918u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[6] = (aot_gpr[6] | 5243u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[21] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 1u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x0890330Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x0890330Cu) goto L_0890330C;
    return;
L_0890330C:
    aot_gpr[7] = (15897u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[7] = (aot_gpr[7] | 39322u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[22] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 2u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_gpr[31] = (0x08903344u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x08903344u) goto L_08903344;
    return;
L_08903344:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[5] = (0u | 14u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0890336Cu);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x0890336Cu) goto L_0890336C;
    return;
L_0890336C:
    aot_gpr[23] = (0u | 15u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_gpr[5] = (0u | 15u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08903398u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x08903398u) goto L_08903398;
    return;
L_08903398:
    aot_gpr[30] = (0u | 5u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_gpr[5] = (0u | 5u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x089033C4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x089033C4u) goto L_089033C4;
    return;
L_089033C4:
    aot_gpr[17] = (0u | 6u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[17]);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 6u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x089033F4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x089033F4u) goto L_089033F4;
    return;
L_089033F4:
    aot_gpr[20] = (0u | 7u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[20]);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 7u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08903424u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x08903424u) goto L_08903424;
    return;
L_08903424:
    aot_gpr[6] = (15877u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[6] = (aot_gpr[6] | 7864u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 8u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[31] = (0x08903458u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x08903458u) goto L_08903458;
    return;
L_08903458:
    aot_gpr[20] = (0u | 10u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[20]);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 10u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08903488u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x08903488u) goto L_08903488;
    return;
L_08903488:
    aot_gpr[20] = (0u | 11u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 11u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x089034B8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x089034B8u) goto L_089034B8;
    return;
L_089034B8:
    aot_gpr[20] = (0u | 12u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 12u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x089034E8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x089034E8u) goto L_089034E8;
    return;
L_089034E8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[5] = (0u | 13u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08903510u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x08903510u) goto L_08903510;
    return;
L_08903510:
    aot_gpr[6] = (16130u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[6] = (aot_gpr[6] | 36700u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 16u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08903544u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x08903544u) goto L_08903544;
    return;
L_08903544:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(60)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_gpr[5] = (0u | 17u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0890356Cu);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 111u, 0x08901E34u>(ctx, &aot_mem) && ctx.pc == 0x0890356Cu) goto L_0890356C;
    return;
L_0890356C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08903584u);
    aot_gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903584u) goto L_08903584;
    return;
L_08903584:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0890359Cu);
    aot_gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x0890359Cu) goto L_0890359C;
    return;
L_0890359C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 2u);
    aot_gpr[31] = (0x089035B4u);
    aot_gpr[8] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089035B4u) goto L_089035B4;
    return;
L_089035B4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 3u);
    aot_gpr[31] = (0x089035CCu);
    aot_gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089035CCu) goto L_089035CC;
    return;
L_089035CC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 4u);
    aot_gpr[31] = (0x089035E4u);
    aot_gpr[8] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089035E4u) goto L_089035E4;
    return;
L_089035E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 5u);
    aot_gpr[31] = (0x089035FCu);
    aot_gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089035FCu) goto L_089035FC;
    return;
L_089035FC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 6u);
    aot_gpr[31] = (0x08903614u);
    aot_gpr[8] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903614u) goto L_08903614;
    return;
L_08903614:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 7u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 7u);
    aot_gpr[31] = (0x0890362Cu);
    aot_gpr[8] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x0890362Cu) goto L_0890362C;
    return;
L_0890362C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 8u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 10u);
    aot_gpr[31] = (0x08903644u);
    aot_gpr[8] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903644u) goto L_08903644;
    return;
L_08903644:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 9u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 11u);
    aot_gpr[31] = (0x0890365Cu);
    aot_gpr[8] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x0890365Cu) goto L_0890365C;
    return;
L_0890365C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 10u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 12u);
    aot_gpr[31] = (0x08903674u);
    aot_gpr[8] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903674u) goto L_08903674;
    return;
L_08903674:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 11u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 14u);
    aot_gpr[31] = (0x0890368Cu);
    aot_gpr[8] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x0890368Cu) goto L_0890368C;
    return;
L_0890368C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 15u);
    aot_gpr[31] = (0x089036A4u);
    aot_gpr[8] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089036A4u) goto L_089036A4;
    return;
L_089036A4:
    aot_gpr[20] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[20]);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089036C4u);
    aot_gpr[8] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089036C4u) goto L_089036C4;
    return;
L_089036C4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 14u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089036DCu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089036DCu) goto L_089036DC;
    return;
L_089036DC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 15u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x089036F4u);
    aot_gpr[8] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089036F4u) goto L_089036F4;
    return;
L_089036F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0890370Cu);
    aot_gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x0890370Cu) goto L_0890370C;
    return;
L_0890370C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 14u);
    aot_gpr[31] = (0x08903724u);
    aot_gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903724u) goto L_08903724;
    return;
L_08903724:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 18u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0890373Cu);
    aot_gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x0890373Cu) goto L_0890373C;
    return;
L_0890373C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 19u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 14u);
    aot_gpr[31] = (0x08903754u);
    aot_gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903754u) goto L_08903754;
    return;
L_08903754:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 20u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0890376Cu);
    aot_gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x0890376Cu) goto L_0890376C;
    return;
L_0890376C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 21u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08903784u);
    aot_gpr[8] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903784u) goto L_08903784;
    return;
L_08903784:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 22u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 14u);
    aot_gpr[31] = (0x0890379Cu);
    aot_gpr[8] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x0890379Cu) goto L_0890379C;
    return;
L_0890379C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 23u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 14u);
    aot_gpr[31] = (0x089037B4u);
    aot_gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089037B4u) goto L_089037B4;
    return;
L_089037B4:
    aot_gpr[17] = (0u | 24u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 5u);
    aot_gpr[31] = (0x089037D0u);
    aot_gpr[8] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089037D0u) goto L_089037D0;
    return;
L_089037D0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 25u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 4u);
    aot_gpr[31] = (0x089037E8u);
    aot_gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089037E8u) goto L_089037E8;
    return;
L_089037E8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 26u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 4u);
    aot_gpr[31] = (0x08903800u);
    aot_gpr[8] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903800u) goto L_08903800;
    return;
L_08903800:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 27u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 9u);
    aot_gpr[31] = (0x08903818u);
    aot_gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903818u) goto L_08903818;
    return;
L_08903818:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 28u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 9u);
    aot_gpr[31] = (0x08903830u);
    aot_gpr[8] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903830u) goto L_08903830;
    return;
L_08903830:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 29u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08903848u);
    aot_gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903848u) goto L_08903848;
    return;
L_08903848:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 30u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08903860u);
    aot_gpr[8] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903860u) goto L_08903860;
    return;
L_08903860:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 31u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 14u);
    aot_gpr[31] = (0x08903878u);
    aot_gpr[8] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903878u) goto L_08903878;
    return;
L_08903878:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 32u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 14u);
    aot_gpr[31] = (0x08903890u);
    aot_gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903890u) goto L_08903890;
    return;
L_08903890:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 33u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 6u);
    aot_gpr[31] = (0x089038A8u);
    aot_gpr[8] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089038A8u) goto L_089038A8;
    return;
L_089038A8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 34u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 2u);
    aot_gpr[31] = (0x089038C0u);
    aot_gpr[8] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089038C0u) goto L_089038C0;
    return;
L_089038C0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 35u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 15u);
    aot_gpr[31] = (0x089038D8u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x089038D8u) goto L_089038D8;
    return;
L_089038D8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12876)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(11532)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[26] = std::sqrt(aot_fpr[12]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(14640));
    aot_gpr[31] = (0x089038FCu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0258_entry, 258u, 125u, 0x08906ED0u>(ctx, &aot_mem) && ctx.pc == 0x089038FCu) goto L_089038FC;
    return;
L_089038FC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(14736));
    aot_gpr[31] = (0x08903908u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0258_entry, 258u, 125u, 0x08906ED0u>(ctx, &aot_mem) && ctx.pc == 0x08903908u) goto L_08903908;
    return;
L_08903908:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 36u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08903920u);
    aot_gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 122u, 0x08901F78u>(ctx, &aot_mem) && ctx.pc == 0x08903920u) goto L_08903920;
    return;
L_08903920:
    aot_gpr[4] = (16212u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 31457u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (0u | 5u);
    aot_gpr[31] = (0x08903948u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903948u) goto L_08903948;
    return;
L_08903948:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 15u);
    aot_gpr[7] = (0u | 10u);
    aot_gpr[31] = (0x08903964u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903964u) goto L_08903964;
    return;
L_08903964:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (0u | 11u);
    aot_gpr[31] = (0x08903980u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903980u) goto L_08903980;
    return;
L_08903980:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (0u | 15u);
    aot_gpr[7] = (0u | 6u);
    aot_gpr[31] = (0x0890399Cu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x0890399Cu) goto L_0890399C;
    return;
L_0890399C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (0u | 15u);
    aot_gpr[31] = (0x089039B8u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x089039B8u) goto L_089039B8;
    return;
L_089039B8:
    aot_gpr[4] = (15989u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 49807u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[6] = (0u | 16u);
    aot_gpr[7] = (0u | 17u);
    aot_gpr[31] = (0x089039E0u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x089039E0u) goto L_089039E0;
    return;
L_089039E0:
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[6] = (0u | 16u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08903A04u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903A04u) goto L_08903A04;
    return;
L_08903A04:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (0u | 7u);
    aot_gpr[6] = (0u | 17u);
    aot_gpr[7] = (0u | 14u);
    aot_gpr[31] = (0x08903A20u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903A20u) goto L_08903A20;
    return;
L_08903A20:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 16u);
    aot_gpr[7] = (0u | 3u);
    aot_gpr[31] = (0x08903A44u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903A44u) goto L_08903A44;
    return;
L_08903A44:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 9u);
    aot_gpr[6] = (0u | 17u);
    aot_gpr[7] = (0u | 3u);
    aot_gpr[31] = (0x08903A60u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903A60u) goto L_08903A60;
    return;
L_08903A60:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (0u | 10u);
    aot_gpr[6] = (0u | 7u);
    aot_gpr[7] = (0u | 4u);
    aot_gpr[31] = (0x08903A7Cu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903A7Cu) goto L_08903A7C;
    return;
L_08903A7C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (0u | 11u);
    aot_gpr[6] = (0u | 12u);
    aot_gpr[7] = (0u | 4u);
    aot_gpr[31] = (0x08903A98u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903A98u) goto L_08903A98;
    return;
L_08903A98:
    aot_gpr[4] = (16015u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 23593u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 12u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[6] = (0u | 8u);
    aot_gpr[7] = (0u | 4u);
    aot_gpr[31] = (0x08903AC0u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903AC0u) goto L_08903AC0;
    return;
L_08903AC0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[5] = (0u | 13u);
    aot_gpr[6] = (0u | 13u);
    aot_gpr[7] = (0u | 4u);
    aot_gpr[31] = (0x08903ADCu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903ADCu) goto L_08903ADC;
    return;
L_08903ADC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[5] = (0u | 14u);
    aot_gpr[6] = (0u | 8u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08903AF8u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903AF8u) goto L_08903AF8;
    return;
L_08903AF8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[5] = (0u | 15u);
    aot_gpr[6] = (0u | 13u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08903B14u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903B14u) goto L_08903B14;
    return;
L_08903B14:
    aot_gpr[4] = (16025u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[6] = (0u | 8u);
    aot_gpr[7] = (0u | 6u);
    aot_gpr[31] = (0x08903B3Cu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903B3Cu) goto L_08903B3C;
    return;
L_08903B3C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (0u | 17u);
    aot_gpr[6] = (0u | 13u);
    aot_gpr[7] = (0u | 11u);
    aot_gpr[31] = (0x08903B58u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903B58u) goto L_08903B58;
    return;
L_08903B58:
    aot_gpr[4] = (16051u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[6] = (0u | 7u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08903B80u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903B80u) goto L_08903B80;
    return;
L_08903B80:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[5] = (0u | 19u);
    aot_gpr[6] = (0u | 12u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08903B9Cu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903B9Cu) goto L_08903B9C;
    return;
L_08903B9C:
    aot_gpr[4] = (16020u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 31457u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 20u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[6] = (0u | 8u);
    aot_gpr[7] = (0u | 3u);
    aot_gpr[31] = (0x08903BC4u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903BC4u) goto L_08903BC4;
    return;
L_08903BC4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[5] = (0u | 21u);
    aot_gpr[6] = (0u | 13u);
    aot_gpr[7] = (0u | 3u);
    aot_gpr[31] = (0x08903BE0u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903BE0u) goto L_08903BE0;
    return;
L_08903BE0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (0u | 22u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (0u | 17u);
    aot_gpr[31] = (0x08903BFCu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903BFCu) goto L_08903BFC;
    return;
L_08903BFC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (0u | 23u);
    aot_gpr[6] = (0u | 15u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08903C18u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903C18u) goto L_08903C18;
    return;
L_08903C18:
    aot_gpr[4] = (16076u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[6] = (0u | 8u);
    aot_gpr[7] = (0u | 9u);
    aot_gpr[31] = (0x08903C40u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903C40u) goto L_08903C40;
    return;
L_08903C40:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[5] = (0u | 25u);
    aot_gpr[6] = (0u | 13u);
    aot_gpr[7] = (0u | 9u);
    aot_gpr[31] = (0x08903C5Cu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903C5Cu) goto L_08903C5C;
    return;
L_08903C5C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 26u);
    aot_gpr[6] = (0u | 7u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08903C78u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903C78u) goto L_08903C78;
    return;
L_08903C78:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 27u);
    aot_gpr[6] = (0u | 14u);
    aot_gpr[7] = (0u | 10u);
    aot_gpr[31] = (0x08903C94u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903C94u) goto L_08903C94;
    return;
L_08903C94:
    aot_gpr[4] = (16102u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 26214u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 28u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[6] = (0u | 7u);
    aot_gpr[7] = (0u | 11u);
    aot_gpr[31] = (0x08903CBCu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903CBCu) goto L_08903CBC;
    return;
L_08903CBC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (0u | 29u);
    aot_gpr[6] = (0u | 12u);
    aot_gpr[7] = (0u | 6u);
    aot_gpr[31] = (0x08903CD8u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 124u, 0x08901FFCu>(ctx, &aot_mem) && ctx.pc == 0x08903CD8u) goto L_08903CD8;
    return;
L_08903CD8:
    aot_gpr[4] = (15887u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[4] | 23593u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[31] = (0x08903CFCu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903CFCu) goto L_08903CFC;
    return;
L_08903CFC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 1u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08903D14u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903D14u) goto L_08903D14;
    return;
L_08903D14:
    aot_gpr[4] = (16192u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[31] = (0x08903D34u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903D34u) goto L_08903D34;
    return;
L_08903D34:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 3u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x08903D4Cu);
    aot_gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903D4Cu) goto L_08903D4C;
    return;
L_08903D4C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 4u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08903D64u);
    aot_gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903D64u) goto L_08903D64;
    return;
L_08903D64:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 5u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[31] = (0x08903D7Cu);
    aot_gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903D7Cu) goto L_08903D7C;
    return;
L_08903D7C:
    aot_gpr[4] = (15861u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[4] | 49807u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[31] = (0x08903DA0u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903DA0u) goto L_08903DA0;
    return;
L_08903DA0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 7u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08903DB8u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903DB8u) goto L_08903DB8;
    return;
L_08903DB8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 8u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[31] = (0x08903DD0u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903DD0u) goto L_08903DD0;
    return;
L_08903DD0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 9u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x08903DE8u);
    aot_gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903DE8u) goto L_08903DE8;
    return;
L_08903DE8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 10u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08903E00u);
    aot_gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903E00u) goto L_08903E00;
    return;
L_08903E00:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 11u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[31] = (0x08903E18u);
    aot_gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903E18u) goto L_08903E18;
    return;
L_08903E18:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (0u | 12u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x08903E30u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903E30u) goto L_08903E30;
    return;
L_08903E30:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (0u | 13u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08903E48u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903E48u) goto L_08903E48;
    return;
L_08903E48:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (0u | 14u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[31] = (0x08903E60u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903E60u) goto L_08903E60;
    return;
L_08903E60:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (0u | 15u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x08903E78u);
    aot_gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903E78u) goto L_08903E78;
    return;
L_08903E78:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (0u | 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08903E90u);
    aot_gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903E90u) goto L_08903E90;
    return;
L_08903E90:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (0u | 17u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[31] = (0x08903EA8u);
    aot_gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903EA8u) goto L_08903EA8;
    return;
L_08903EA8:
    aot_gpr[4] = (15841u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[4] | 18350u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[31] = (0x08903ECCu);
    aot_gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903ECCu) goto L_08903ECC;
    return;
L_08903ECC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 19u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08903EE4u);
    aot_gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903EE4u) goto L_08903EE4;
    return;
L_08903EE4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 20u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[31] = (0x08903EFCu);
    aot_gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903EFCu) goto L_08903EFC;
    return;
L_08903EFC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 21u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x08903F14u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903F14u) goto L_08903F14;
    return;
L_08903F14:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 22u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08903F2Cu);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903F2Cu) goto L_08903F2C;
    return;
L_08903F2C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (0u | 23u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[31] = (0x08903F44u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903F44u) goto L_08903F44;
    return;
L_08903F44:
    aot_gpr[4] = (15928u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[4] | 20972u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[31] = (0x08903F68u);
    aot_gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903F68u) goto L_08903F68;
    return;
L_08903F68:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (0u | 25u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08903F80u);
    aot_gpr[6] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 4u, 0x0890207Cu>(ctx, &aot_mem) && ctx.pc == 0x08903F80u) goto L_08903F80;
    return;
L_08903F80:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[23]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 2u);
    aot_gpr[31] = (0x08903FD8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 10u, 0x08902148u>(ctx, &aot_mem) && ctx.pc == 0x08903FD8u) goto L_08903FD8;
    return;
L_08903FD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[23]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.pc = 0x08904000u; return;
}

void recomp_unit_0255(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0255_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_255(Runtime &runtime) {
    runtime.register_generated_unit(255u, 0x08903000u, 4096u, &recomp_unit_0255, &recomp_unit_0255_entry);
    runtime.register_function(0x08903000u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903070u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089030B8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089030C8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089030D4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089030E8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089030FCu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903134u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903160u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089031B8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089031C4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903248u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903270u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890329Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089032D4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890330Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903344u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890336Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903398u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089033C4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089033F4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903424u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903458u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903488u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089034B8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089034E8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903510u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903544u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890356Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903584u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890359Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089035B4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089035CCu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089035E4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089035FCu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903614u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890362Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903644u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890365Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903674u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890368Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089036A4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089036C4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089036DCu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089036F4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890370Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903724u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890373Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903754u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890376Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903784u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890379Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089037B4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089037D0u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089037E8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903800u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903818u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903830u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903848u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903860u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903878u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903890u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089038A8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089038C0u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089038D8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089038FCu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903908u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903920u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903948u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903964u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903980u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x0890399Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089039B8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x089039E0u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903A04u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903A20u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903A44u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903A60u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903A7Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903A98u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903AC0u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903ADCu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903AF8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903B14u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903B3Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903B58u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903B80u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903B9Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903BC4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903BE0u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903BFCu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903C18u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903C40u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903C5Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903C78u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903C94u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903CBCu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903CD8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903CFCu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903D14u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903D34u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903D4Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903D64u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903D7Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903DA0u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903DB8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903DD0u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903DE8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903E00u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903E18u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903E30u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903E48u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903E60u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903E78u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903E90u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903EA8u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903ECCu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903EE4u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903EFCu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903F14u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903F2Cu, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903F44u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903F68u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903F80u, &recomp_unit_0255, "recomp_unit_0255");
    runtime.register_function(0x08903FD8u, &recomp_unit_0255, "recomp_unit_0255");
}
} // namespace psprecomp
