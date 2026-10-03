#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0325[1019] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 16,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0,
    0, 24, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 100,
};
void recomp_unit_0325_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08949000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0325[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08949000;
    case 2u: goto L_08949034;
    case 3u: goto L_0894903C;
    case 4u: goto L_0894904C;
    case 5u: goto L_08949054;
    case 6u: goto L_08949060;
    case 7u: goto L_08949068;
    case 8u: goto L_08949098;
    case 9u: goto L_089490A0;
    case 10u: goto L_089490D0;
    case 11u: goto L_089490D8;
    case 12u: goto L_089491D0;
    case 13u: goto L_089491D8;
    case 14u: goto L_089491E8;
    case 15u: goto L_089491F0;
    case 16u: goto L_089491FC;
    case 17u: goto L_08949204;
    case 18u: goto L_08949234;
    case 19u: goto L_0894923C;
    case 20u: goto L_0894926C;
    case 21u: goto L_08949274;
    case 22u: goto L_0894936C;
    case 23u: goto L_08949374;
    case 24u: goto L_08949384;
    case 25u: goto L_0894938C;
    case 26u: goto L_08949398;
    case 27u: goto L_089493A0;
    case 28u: goto L_089493D0;
    case 29u: goto L_089493D8;
    case 30u: goto L_08949408;
    case 31u: goto L_08949410;
    case 32u: goto L_08949508;
    case 33u: goto L_08949510;
    case 34u: goto L_08949520;
    case 35u: goto L_0894952C;
    case 36u: goto L_0894955C;
    case 37u: goto L_0894958C;
    case 38u: goto L_08949684;
    case 39u: goto L_08949694;
    case 40u: goto L_089496A0;
    case 41u: goto L_089496B4;
    case 42u: goto L_089496C8;
    case 43u: goto L_089496D8;
    case 44u: goto L_089496E8;
    case 45u: goto L_0894979C;
    case 46u: goto L_089497A8;
    case 47u: goto L_089497CC;
    case 48u: goto L_089497D8;
    case 49u: goto L_08949834;
    case 50u: goto L_0894988C;
    case 51u: goto L_089498A4;
    case 52u: goto L_089498B4;
    case 53u: goto L_089498C4;
    case 54u: goto L_089498E4;
    case 55u: goto L_08949918;
    case 56u: goto L_08949924;
    case 57u: goto L_08949940;
    case 58u: goto L_0894994C;
    case 59u: goto L_08949980;
    case 60u: goto L_089499C8;
    case 61u: goto L_089499DC;
    case 62u: goto L_089499F8;
    case 63u: goto L_08949A38;
    case 64u: goto L_08949A44;
    case 65u: goto L_08949A78;
    case 66u: goto L_08949AC0;
    case 67u: goto L_08949AD4;
    case 68u: goto L_08949AEC;
    case 69u: goto L_08949B2C;
    case 70u: goto L_08949B60;
    case 71u: goto L_08949BA8;
    case 72u: goto L_08949BBC;
    case 73u: goto L_08949BD4;
    case 74u: goto L_08949BE4;
    case 75u: goto L_08949BEC;
    case 76u: goto L_08949C74;
    case 77u: goto L_08949CA8;
    case 78u: goto L_08949CF0;
    case 79u: goto L_08949D04;
    case 80u: goto L_08949D1C;
    case 81u: goto L_08949D30;
    case 82u: goto L_08949D34;
    case 83u: goto L_08949D5C;
    case 84u: goto L_08949D7C;
    case 85u: goto L_08949D90;
    case 86u: goto L_08949DA4;
    case 87u: goto L_08949E04;
    case 88u: goto L_08949E3C;
    case 89u: goto L_08949E58;
    case 90u: goto L_08949E70;
    case 91u: goto L_08949E84;
    case 92u: goto L_08949E8C;
    case 93u: goto L_08949EF4;
    case 94u: goto L_08949F0C;
    case 95u: goto L_08949F18;
    case 96u: goto L_08949F30;
    case 97u: goto L_08949F38;
    case 98u: goto L_08949F44;
    case 99u: goto L_08949FE4;
    case 100u: goto L_08949FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08949000:
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (0u | 1u);
    goto L_08949034;
L_08949034:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949684;
      }
      goto L_0894903C;
    }
L_0894903C:
    aot_gpr[5] = (aot_gpr[11] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(161)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08949054;
      }
      goto L_0894904C;
    }
L_0894904C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089491D0;
      }
      goto L_08949054;
    }
L_08949054:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08949068;
      }
      goto L_08949060;
    }
L_08949060:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089491D0;
      }
      goto L_08949068;
    }
L_08949068:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1296);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089490A0;
      }
      goto L_08949098;
    }
L_08949098:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089491D0;
      }
      goto L_089490A0;
    }
L_089490A0:
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1296);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(aot_gpr[9]));
        goto L_089490D8;
    }
    goto L_089490D0;
L_089490D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089491D0;
      }
      goto L_089490D8;
    }
L_089490D8:
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1312);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1312);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(22u, 20u, 21u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1328);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1328);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (0u | 1u);
    goto L_089491D0;
L_089491D0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949684;
      }
      goto L_089491D8;
    }
L_089491D8:
    aot_gpr[5] = (aot_gpr[11] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_089491F0;
      }
      goto L_089491E8;
    }
L_089491E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0894936C;
      }
      goto L_089491F0;
    }
L_089491F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08949204;
      }
      goto L_089491FC;
    }
L_089491FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0894936C;
      }
      goto L_08949204;
    }
L_08949204:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1344);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0894923C;
      }
      goto L_08949234;
    }
L_08949234:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0894936C;
      }
      goto L_0894923C;
    }
L_0894923C:
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1344);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr[9]));
        goto L_08949274;
    }
    goto L_0894926C;
L_0894926C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0894936C;
      }
      goto L_08949274;
    }
L_08949274:
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1360);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1360);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(22u, 20u, 21u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1376);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1376);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (0u | 1u);
    goto L_0894936C;
L_0894936C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949684;
      }
      goto L_08949374;
    }
L_08949374:
    aot_gpr[5] = (aot_gpr[11] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_0894938C;
      }
      goto L_08949384;
    }
L_08949384:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08949508;
      }
      goto L_0894938C;
    }
L_0894938C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(161)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089493A0;
      }
      goto L_08949398;
    }
L_08949398:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08949508;
      }
      goto L_089493A0;
    }
L_089493A0:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1392);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089493D8;
      }
      goto L_089493D0;
    }
L_089493D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08949508;
      }
      goto L_089493D8;
    }
L_089493D8:
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1392);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr[9]));
        goto L_08949410;
    }
    goto L_08949408;
L_08949408:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08949508;
      }
      goto L_08949410;
    }
L_08949410:
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1408);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1408);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(22u, 20u, 21u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1424);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1424);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (0u | 1u);
    goto L_08949508;
L_08949508:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949684;
      }
      goto L_08949510;
    }
L_08949510:
    aot_gpr[5] = (aot_gpr[11] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08949684;
      }
      goto L_08949520;
    }
L_08949520:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08949684;
      }
      goto L_0894952C;
    }
L_0894952C:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1440);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08949684;
      }
      goto L_0894955C;
    }
L_0894955C:
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1440);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949684;
      }
      goto L_0894958C;
    }
L_0894958C:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1456);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1456);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(22u, 20u, 21u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1472);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1472);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_08949684;
L_08949684:
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[24] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0324_entry, 324u, 48u, 0x08948830u>(ctx, &aot_mem); return;
      }
      goto L_08949694;
    }
L_08949694:
    aot_gpr[4] = (aot_gpr[25] < aot_gpr[31] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0324_entry, 324u, 46u, 0x08948808u>(ctx, &aot_mem); return;
      }
      goto L_089496A0;
    }
L_089496A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1516)));
    aot_gpr[25] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[25] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08949E70;
      }
      goto L_089496B4;
    }
L_089496B4:
    aot_fpr[18] = __builtin_bit_cast(float, 0u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (14979u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_089496C8;
L_089496C8:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1500)));
    aot_gpr[8] = (0u | 3u);
    goto L_089496D8;
L_089496D8:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0894979C;
      }
      goto L_089496E8;
    }
L_089496E8:
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[10] = (ctx.hi);
    aot_gpr[10] = (aot_gpr[10] << 4u);
    aot_gpr[10] = (aot_gpr[18] + aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1024);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(48);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1024);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(22u, 20u, 21u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1040);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[9] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0894979C;
L_0894979C:
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089496D8;
      }
      goto L_089497A8;
    }
L_089497A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(208), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(212), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(216), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[11] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_089498A4;
      }
      goto L_089497CC;
    }
L_089497CC:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[30] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24948)));
    goto L_089497D8;
L_089497D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(864), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(868), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(872), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(864);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (aot_gpr[10] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(228), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_08949834;
L_08949834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(880), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(884), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(888), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(880);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(124)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[8] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08949834;
      }
      goto L_0894988C;
    }
L_0894988C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[11] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089497D8;
      }
      goto L_089498A4;
    }
L_089498A4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(1508), aot_gpr[4]);
      if (branch_taken) {
          goto L_08949D5C;
      }
      goto L_089498B4;
    }
L_089498B4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[30] + static_cast<std::uint32_t>(224));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(1512), aot_gpr[4]);
    aot_gpr[17] = (0u | 0u);
    goto L_089498C4;
L_089498C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1512)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr[24] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[24] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[15] = (0u | 0u);
      if (branch_taken) {
          goto L_08949D34;
      }
      goto L_089498E4;
    }
L_089498E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[30] + static_cast<std::uint32_t>(896));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[15]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[30] + static_cast<std::uint32_t>(904));
    aot_gpr[4] = (aot_gpr[14] << 4u);
    aot_gpr[5] = (aot_gpr[14] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[30] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(224));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08949918u);
    aot_gpr[8] = (aot_gpr[30] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0322_entry, 322u, 25u, 0x08946234u>(ctx, &aot_mem) && ctx.pc == 0x08949918u) goto L_08949918;
    return;
L_08949918:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949BD4;
      }
      goto L_08949924;
    }
L_08949924:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1504)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089499F8;
      }
      goto L_08949940;
    }
L_08949940:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[25] | 0u);
      if (branch_taken) {
          goto L_08949980;
      }
      goto L_0894994C;
    }
L_0894994C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[8]);
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    goto L_08949980;
L_08949980:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(960), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(964), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(968), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(960);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[19];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949BD4;
      }
      goto L_089499C8;
    }
L_089499C8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949BD4;
      }
      goto L_089499DC;
    }
L_089499DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(64);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(192), aot_gpr[6]);
      if (branch_taken) {
          goto L_08949BD4;
      }
      goto L_089499F8;
    }
L_089499F8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(896)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(904)));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (aot_gpr[14] << 4u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    ctx.execute_vfpu_vocp(16u, 16u, 1u);
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(928);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08949AEC;
      }
      goto L_08949A38;
    }
L_08949A38:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[25] | 0u);
      if (branch_taken) {
          goto L_08949A78;
      }
      goto L_08949A44;
    }
L_08949A44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] << 4u);
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[7]);
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(928);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    goto L_08949A78;
L_08949A78:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(976), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(980), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(984), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(928);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(976);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[19];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949BD4;
      }
      goto L_08949AC0;
    }
L_08949AC0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949BD4;
      }
      goto L_08949AD4;
    }
L_08949AD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(64);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(192), aot_gpr[6]);
      if (branch_taken) {
          goto L_08949BD4;
      }
      goto L_08949AEC;
    }
L_08949AEC:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[11] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[8] = (aot_gpr[30] + aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[30] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(208));
    aot_gpr[10] = (aot_gpr[9] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(128));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(192));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[6] = (aot_gpr[25] | 0u);
      if (branch_taken) {
          goto L_08949B60;
      }
      goto L_08949B2C;
    }
L_08949B2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[11] + aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[11] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(928);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    goto L_08949B60;
L_08949B60:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(992), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(996), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(1000), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(928);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(992);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[19];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949BD4;
      }
      goto L_08949BA8;
    }
L_08949BA8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949BD4;
      }
      goto L_08949BBC;
    }
L_08949BBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(928);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08949BD4;
L_08949BD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(916)));
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08949D1C;
      }
      goto L_08949BE4;
    }
L_08949BE4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949D1C;
      }
      goto L_08949BEC;
    }
L_08949BEC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(900)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(908)));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[14] << 4u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[7]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    ctx.execute_vfpu_vocp(16u, 16u, 1u);
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(944);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[9] = (aot_gpr[30] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1504)));
    aot_gpr[8] = (aot_gpr[30] + aot_gpr[6]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(208));
    aot_gpr[10] = (aot_gpr[9] + static_cast<std::uint32_t>(64));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(128));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(192));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[11] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[25] | 0u);
      if (branch_taken) {
          goto L_08949CA8;
      }
      goto L_08949C74;
    }
L_08949C74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[4] << 4u);
    aot_gpr[2] = (aot_gpr[11] + aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[11]);
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(944);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    goto L_08949CA8;
L_08949CA8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(1008), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(1012), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(1016), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(944);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(1008);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[19];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949D1C;
      }
      goto L_08949CF0;
    }
L_08949CF0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949D1C;
      }
      goto L_08949D04;
    }
L_08949D04:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(944);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08949D1C;
L_08949D1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[24] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089498E4;
      }
      goto L_08949D30;
    }
L_08949D30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(16)));
    goto L_08949D34;
L_08949D34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1508)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1512)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(1508), aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(1512), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089498C4;
      }
      goto L_08949D5C;
    }
L_08949D5C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1488)));
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1496)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (aot_gpr[8] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[8] + static_cast<std::uint32_t>(128));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1492)));
    goto L_08949D7C;
L_08949D7C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949E3C;
      }
      goto L_08949D90;
    }
L_08949D90:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949E3C;
      }
      goto L_08949DA4;
    }
L_08949DA4:
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(208)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1504)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E3C;
      }
      goto L_08949E04;
    }
L_08949E04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] << 4u);
    aot_gpr[3] = (aot_gpr[2] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[12] + aot_gpr[2]);
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(192)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    goto L_08949E3C;
L_08949E3C:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[9] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08949D7C;
      }
      goto L_08949E58;
    }
L_08949E58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1516)));
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(176));
    aot_gpr[4] = (aot_gpr[25] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_089496C8;
      }
      goto L_08949E70;
    }
L_08949E70:
    aot_gpr[29] = (aot_gpr[30] | 0u);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1520)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1524)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949E84:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949E8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-4192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4180), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4204)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4208)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4212)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4120), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4140), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4124), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4104), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4112), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4096), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4136), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4128), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4116), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4148), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4152), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4156), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4160), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4164), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4168), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4172), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4176), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4184), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[11] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4132), aot_gpr[9]);
      if (branch_taken) {
          goto L_08949FE8;
      }
      goto L_08949EF4;
    }
L_08949EF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-6160));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    aot_gpr[6] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08949F18;
      }
      goto L_08949F0C;
    }
L_08949F0C:
    aot_gpr[6] = (aot_gpr[5] & 15u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08949F18;
L_08949F18:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] & 15u);
      if (branch_taken) {
          goto L_08949F38;
      }
      goto L_08949F30;
    }
L_08949F30:
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08949F38;
L_08949F38:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08949FE4;
      }
      goto L_08949F44;
    }
L_08949F44:
    aot_gpr[5] = (0u | 96u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4064), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4068), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4072), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(4064);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4064), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4068), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4072), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(4064);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4064), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4068), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4072), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(4064);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4064), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4068), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4072), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(4064);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4064), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4068), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4072), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(4064);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4064), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4068), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4072), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(4064);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(116), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(112), 0u);
    goto L_08949FE4;
L_08949FE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4096), aot_gpr[5]);
    goto L_08949FE8;
L_08949FE8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4096)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4104)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4128)));
    aot_gpr[17] = (aot_gpr[30] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (aot_gpr[30] + static_cast<std::uint32_t>(64));
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    ctx.pc = 0x0894A000u; return;
}

void recomp_unit_0325(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0325_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_325(Runtime &runtime) {
    runtime.register_generated_unit(325u, 0x08949000u, 4096u, &recomp_unit_0325, &recomp_unit_0325_entry);
    runtime.register_function(0x08949000u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949034u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x0894903Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x0894904Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949054u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949060u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949068u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949098u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089490A0u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089490D0u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089490D8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089491D0u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089491D8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089491E8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089491F0u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089491FCu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949204u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949234u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x0894923Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x0894926Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949274u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x0894936Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949374u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949384u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x0894938Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949398u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089493A0u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089493D0u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089493D8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949408u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949410u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949508u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949510u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949520u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x0894952Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x0894955Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x0894958Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949684u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949694u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089496A0u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089496B4u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089496C8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089496D8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089496E8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x0894979Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089497A8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089497CCu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089497D8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949834u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x0894988Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089498A4u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089498B4u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089498C4u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089498E4u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949918u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949924u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949940u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x0894994Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949980u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089499C8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089499DCu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x089499F8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949A38u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949A44u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949A78u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949AC0u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949AD4u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949AECu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949B2Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949B60u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949BA8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949BBCu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949BD4u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949BE4u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949BECu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949C74u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949CA8u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949CF0u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949D04u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949D1Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949D30u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949D34u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949D5Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949D7Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949D90u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949DA4u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949E04u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949E3Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949E58u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949E70u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949E84u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949E8Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949EF4u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949F0Cu, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949F18u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949F30u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949F38u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949F44u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949FE4u, &recomp_unit_0325, "recomp_unit_0325");
    runtime.register_function(0x08949FE8u, &recomp_unit_0325, "recomp_unit_0325");
}
} // namespace psprecomp
