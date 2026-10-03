#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0262[1023] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 18, 0,
    0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0,
    31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 56, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0,
    0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 77, 0, 0, 78, 0, 0, 0, 0, 0, 79, 80, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 93, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100,
    0, 101, 102, 0, 103, 0, 104, 0, 0, 0, 105, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 133, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 157,
};
void recomp_unit_0262_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0890A000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0262[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0890A000;
    case 2u: goto L_0890A018;
    case 3u: goto L_0890A058;
    case 4u: goto L_0890A064;
    case 5u: goto L_0890A06C;
    case 6u: goto L_0890A0A0;
    case 7u: goto L_0890A0AC;
    case 8u: goto L_0890A0BC;
    case 9u: goto L_0890A0C4;
    case 10u: goto L_0890A0D4;
    case 11u: goto L_0890A0EC;
    case 12u: goto L_0890A100;
    case 13u: goto L_0890A11C;
    case 14u: goto L_0890A13C;
    case 15u: goto L_0890A14C;
    case 16u: goto L_0890A154;
    case 17u: goto L_0890A174;
    case 18u: goto L_0890A178;
    case 19u: goto L_0890A188;
    case 20u: goto L_0890A194;
    case 21u: goto L_0890A1A4;
    case 22u: goto L_0890A1AC;
    case 23u: goto L_0890A1BC;
    case 24u: goto L_0890A1D4;
    case 25u: goto L_0890A234;
    case 26u: goto L_0890A240;
    case 27u: goto L_0890A248;
    case 28u: goto L_0890A27C;
    case 29u: goto L_0890A2E4;
    case 30u: goto L_0890A2F0;
    case 31u: goto L_0890A300;
    case 32u: goto L_0890A308;
    case 33u: goto L_0890A318;
    case 34u: goto L_0890A328;
    case 35u: goto L_0890A33C;
    case 36u: goto L_0890A35C;
    case 37u: goto L_0890A374;
    case 38u: goto L_0890A37C;
    case 39u: goto L_0890A384;
    case 40u: goto L_0890A3A4;
    case 41u: goto L_0890A3A8;
    case 42u: goto L_0890A3B8;
    case 43u: goto L_0890A3C4;
    case 44u: goto L_0890A3D4;
    case 45u: goto L_0890A3DC;
    case 46u: goto L_0890A3EC;
    case 47u: goto L_0890A3F0;
    case 48u: goto L_0890A428;
    case 49u: goto L_0890A438;
    case 50u: goto L_0890A458;
    case 51u: goto L_0890A4B4;
    case 52u: goto L_0890A4BC;
    case 53u: goto L_0890A4CC;
    case 54u: goto L_0890A4D4;
    case 55u: goto L_0890A4F0;
    case 56u: goto L_0890A4F4;
    case 57u: goto L_0890A504;
    case 58u: goto L_0890A560;
    case 59u: goto L_0890A56C;
    case 60u: goto L_0890A578;
    case 61u: goto L_0890A584;
    case 62u: goto L_0890A598;
    case 63u: goto L_0890A5A8;
    case 64u: goto L_0890A5B4;
    case 65u: goto L_0890A5F4;
    case 66u: goto L_0890A600;
    case 67u: goto L_0890A624;
    case 68u: goto L_0890A634;
    case 69u: goto L_0890A63C;
    case 70u: goto L_0890A648;
    case 71u: goto L_0890A650;
    case 72u: goto L_0890A658;
    case 73u: goto L_0890A664;
    case 74u: goto L_0890A66C;
    case 75u: goto L_0890A688;
    case 76u: goto L_0890A6A4;
    case 77u: goto L_0890A6A8;
    case 78u: goto L_0890A6B4;
    case 79u: goto L_0890A6CC;
    case 80u: goto L_0890A6D0;
    case 81u: goto L_0890A6DC;
    case 82u: goto L_0890A6E4;
    case 83u: goto L_0890A6F4;
    case 84u: goto L_0890A73C;
    case 85u: goto L_0890A78C;
    case 86u: goto L_0890A798;
    case 87u: goto L_0890A7E4;
    case 88u: goto L_0890A7F0;
    case 89u: goto L_0890A80C;
    case 90u: goto L_0890A820;
    case 91u: goto L_0890A828;
    case 92u: goto L_0890A830;
    case 93u: goto L_0890A838;
    case 94u: goto L_0890A83C;
    case 95u: goto L_0890A898;
    case 96u: goto L_0890A8E8;
    case 97u: goto L_0890A948;
    case 98u: goto L_0890A950;
    case 99u: goto L_0890A964;
    case 100u: goto L_0890A97C;
    case 101u: goto L_0890A984;
    case 102u: goto L_0890A988;
    case 103u: goto L_0890A990;
    case 104u: goto L_0890A998;
    case 105u: goto L_0890A9A8;
    case 106u: goto L_0890A9AC;
    case 107u: goto L_0890A9C0;
    case 108u: goto L_0890A9D4;
    case 109u: goto L_0890A9EC;
    case 110u: goto L_0890AA00;
    case 111u: goto L_0890AAE0;
    case 112u: goto L_0890AAF4;
    case 113u: goto L_0890AAF8;
    case 114u: goto L_0890AB30;
    case 115u: goto L_0890AB40;
    case 116u: goto L_0890AB58;
    case 117u: goto L_0890AB8C;
    case 118u: goto L_0890AB98;
    case 119u: goto L_0890ABA8;
    case 120u: goto L_0890AC54;
    case 121u: goto L_0890AC6C;
    case 122u: goto L_0890AC70;
    case 123u: goto L_0890ACA8;
    case 124u: goto L_0890ACB0;
    case 125u: goto L_0890ACBC;
    case 126u: goto L_0890AD14;
    case 127u: goto L_0890AD24;
    case 128u: goto L_0890AD48;
    case 129u: goto L_0890AD60;
    case 130u: goto L_0890ADA0;
    case 131u: goto L_0890ADAC;
    case 132u: goto L_0890ADDC;
    case 133u: goto L_0890ADE0;
    case 134u: goto L_0890ADF8;
    case 135u: goto L_0890AE0C;
    case 136u: goto L_0890AE24;
    case 137u: goto L_0890AE38;
    case 138u: goto L_0890AE50;
    case 139u: goto L_0890AE84;
    case 140u: goto L_0890AE8C;
    case 141u: goto L_0890AEA0;
    case 142u: goto L_0890AEA8;
    case 143u: goto L_0890AEB0;
    case 144u: goto L_0890AEB8;
    case 145u: goto L_0890AECC;
    case 146u: goto L_0890AEDC;
    case 147u: goto L_0890AEE4;
    case 148u: goto L_0890AEF4;
    case 149u: goto L_0890AEFC;
    case 150u: goto L_0890AF0C;
    case 151u: goto L_0890AF40;
    case 152u: goto L_0890AF58;
    case 153u: goto L_0890AF6C;
    case 154u: goto L_0890AFB8;
    case 155u: goto L_0890AFC4;
    case 156u: goto L_0890AFF4;
    case 157u: goto L_0890AFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0890A000:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31768)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0890A1BC;
      }
      goto L_0890A018;
    }
L_0890A018:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(27968));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (49480u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[4] = (16840u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[4] = (49312u << 16u);
    aot_gpr[19] = (0u | 1u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-31824));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-31808));
    aot_gpr[18] = (2219u << 16u);
    aot_gpr[22] = (2216u << 16u);
    goto L_0890A058;
L_0890A058:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_0890A06C;
      }
      goto L_0890A064;
    }
L_0890A064:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_0890A06C;
      }
      goto L_0890A06C;
    }
L_0890A06C:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
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
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0890A0AC;
      }
      goto L_0890A0A0;
    }
L_0890A0A0:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0890A0C4;
      }
      goto L_0890A0AC;
    }
L_0890A0AC:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A0C4;
      }
      goto L_0890A0BC;
    }
L_0890A0BC:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0890A0C4;
L_0890A0C4:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A11C;
      }
      goto L_0890A0D4;
    }
L_0890A0D4:
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-20776)));
    aot_gpr[31] = (0x0890A0ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 25u, 0x089272FCu>(ctx, &aot_mem) && ctx.pc == 0x0890A0ECu) goto L_0890A0EC;
    return;
L_0890A0EC:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-20776)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[28];
    aot_gpr[31] = (0x0890A100u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 25u, 0x089272FCu>(ctx, &aot_mem) && ctx.pc == 0x0890A100u) goto L_0890A100;
    return;
L_0890A100:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-31768)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[28];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0890A14C;
      }
      goto L_0890A11C;
    }
L_0890A11C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-31768)));
    aot_gpr[6] = (16544u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0890A14C;
      }
      goto L_0890A13C;
    }
L_0890A13C:
    aot_gpr[6] = (16672u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0890A14C;
L_0890A14C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A178;
      }
      goto L_0890A154;
    }
L_0890A154:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A178;
      }
      goto L_0890A174;
    }
L_0890A174:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_0890A178;
L_0890A178:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A194;
      }
      goto L_0890A188;
    }
L_0890A188:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0890A1AC;
      }
      goto L_0890A194;
    }
L_0890A194:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A1AC;
      }
      goto L_0890A1A4;
    }
L_0890A1A4:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0890A1AC;
L_0890A1AC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0890A058;
      }
      goto L_0890A1BC;
    }
L_0890A1BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31764)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (16230u << 16u);
      if (branch_taken) {
          goto L_0890A3F0;
      }
      goto L_0890A1D4;
    }
L_0890A1D4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31040));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[4] = (49344u << 16u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[4] = (16704u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[30] = (2216u << 16u);
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[4] = (16576u << 16u);
    aot_gpr[20] = (0u | 1u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-31824));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-31808));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-31792));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-31784));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[18] = (2219u << 16u);
    goto L_0890A234;
L_0890A234:
    aot_gpr[8] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_0890A248;
      }
      goto L_0890A240;
    }
L_0890A240:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_0890A248;
      }
      goto L_0890A248;
    }
L_0890A248:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
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
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[17]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-31776)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[31] = (0x0890A27Cu);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 165u, 0x08908CCCu>(ctx, &aot_mem) && ctx.pc == 0x0890A27Cu) goto L_0890A27C;
    return;
L_0890A27C:
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31772)));
    aot_gpr[4] = (aot_gpr[8] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[30]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
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
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0890A2F0;
      }
      goto L_0890A2E4;
    }
L_0890A2E4:
    aot_fpr[13] = aot_fpr[13] + aot_fpr[20];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0890A308;
      }
      goto L_0890A2F0;
    }
L_0890A2F0:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A308;
      }
      goto L_0890A300;
    }
L_0890A300:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0890A308;
L_0890A308:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A35C;
      }
      goto L_0890A318;
    }
L_0890A318:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-20776)));
    aot_gpr[31] = (0x0890A328u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 25u, 0x089272FCu>(ctx, &aot_mem) && ctx.pc == 0x0890A328u) goto L_0890A328;
    return;
L_0890A328:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-20776)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[22];
    aot_gpr[31] = (0x0890A33Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 25u, 0x089272FCu>(ctx, &aot_mem) && ctx.pc == 0x0890A33Cu) goto L_0890A33C;
    return;
L_0890A33C:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31764)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[22];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0890A37C;
      }
      goto L_0890A35C;
    }
L_0890A35C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (2216u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31764)));
      if (branch_taken) {
          goto L_0890A37C;
      }
      goto L_0890A374;
    }
L_0890A374:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0890A37C;
L_0890A37C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A3A8;
      }
      goto L_0890A384;
    }
L_0890A384:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A3A8;
      }
      goto L_0890A3A4;
    }
L_0890A3A4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_0890A3A8;
L_0890A3A8:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A3C4;
      }
      goto L_0890A3B8;
    }
L_0890A3B8:
    aot_fpr[12] = aot_fpr[13] + aot_fpr[20];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0890A3DC;
      }
      goto L_0890A3C4;
    }
L_0890A3C4:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A3DC;
      }
      goto L_0890A3D4;
    }
L_0890A3D4:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0890A3DC;
L_0890A3DC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0890A234;
      }
      goto L_0890A3EC;
    }
L_0890A3EC:
    aot_gpr[4] = (16230u << 16u);
    goto L_0890A3F0;
L_0890A3F0:
    aot_gpr[4] = (aot_gpr[4] | 26214u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31772), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31748)));
    aot_gpr[4] = (16179u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[22] = (0u | 1u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[22] = (0u | 2u);
        goto L_0890A428;
    }
    goto L_0890A428;
L_0890A428:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (2216u << 16u);
      if (branch_taken) {
          goto L_0890A504;
      }
      goto L_0890A438;
    }
L_0890A438:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(27968));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[30] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-31848)));
    goto L_0890A458;
L_0890A458:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(68)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[24];
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(52)));
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    aot_gpr[31] = (0x0890A4B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0330_entry, 330u, 34u, 0x0894E4B4u>(ctx, &aot_mem) && ctx.pc == 0x0890A4B4u) goto L_0890A4B4;
    return;
L_0890A4B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A4D4;
      }
      goto L_0890A4BC;
    }
L_0890A4BC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0890A4D4;
      }
      goto L_0890A4CC;
    }
L_0890A4CC:
    aot_gpr[31] = (0x0890A4D4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0261_entry, 261u, 2u, 0x08909024u>(ctx, &aot_mem) && ctx.pc == 0x0890A4D4u) goto L_0890A4D4;
    return;
L_0890A4D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-31848)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-31768)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-31848), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A4F4;
      }
      goto L_0890A4F0;
    }
L_0890A4F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-31848), 0u);
    goto L_0890A4F4;
L_0890A4F4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-31848)));
        goto L_0890A458;
    }
    goto L_0890A504;
L_0890A504:
    aot_gpr[4] = (2217u << 16u);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(-32320);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
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
    aot_gpr[5] = (16076u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    aot_gpr[5] = (16204u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_gpr[9] = (2217u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(-32288);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[9] + static_cast<std::uint32_t>(-32288));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A56C;
      }
      goto L_0890A560;
    }
L_0890A560:
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(-32288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[5] = (2217u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(-32272);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0890A56C;
L_0890A56C:
    aot_fpr[2] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x0890A578u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32320));
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 185u, 0x08908EFCu>(ctx, &aot_mem) && ctx.pc == 0x0890A578u) goto L_0890A578;
    return;
L_0890A578:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[31] = (0x0890A584u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32304));
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 186u, 0x08908F90u>(ctx, &aot_mem) && ctx.pc == 0x0890A584u) goto L_0890A584;
    return;
L_0890A584:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x0890A598u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 170u, 0x08908D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A598u) goto L_0890A598;
    return;
L_0890A598:
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A664;
      }
      goto L_0890A5A8;
    }
L_0890A5A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0890A664;
      }
      goto L_0890A5B4;
    }
L_0890A5B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(-32288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(304);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A664;
      }
      goto L_0890A5F4;
    }
L_0890A5F4:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x0890A600u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20776)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 25u, 0x089272FCu>(ctx, &aot_mem) && ctx.pc == 0x0890A600u) goto L_0890A600;
    return;
L_0890A600:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[0] + aot_fpr[12];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A664;
      }
      goto L_0890A624;
    }
L_0890A624:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
        goto L_0890A650;
    }
    goto L_0890A634;
L_0890A634:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890A664;
      }
      goto L_0890A63C;
    }
L_0890A63C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0890A648u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0263_entry, 263u, 144u, 0x0890BC34u>(ctx, &aot_mem) && ctx.pc == 0x0890A648u) goto L_0890A648;
    return;
L_0890A648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A664;
      }
      goto L_0890A650;
    }
L_0890A650:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A664;
      }
      goto L_0890A658;
    }
L_0890A658:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0890A664u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0263_entry, 263u, 144u, 0x0890BC34u>(ctx, &aot_mem) && ctx.pc == 0x0890A664u) goto L_0890A664;
    return;
L_0890A664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A6A8;
      }
      goto L_0890A66C;
    }
L_0890A66C:
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31748)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (15692u << 16u);
      if (branch_taken) {
          goto L_0890A6A8;
      }
      goto L_0890A688;
    }
L_0890A688:
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31748), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0890A6A8;
      }
      goto L_0890A6A4;
    }
L_0890A6A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31748), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0890A6A8;
L_0890A6A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A6F4;
      }
      goto L_0890A6B4;
    }
L_0890A6B4:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-31760)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2217u << 16u);
      if (branch_taken) {
          goto L_0890A6F4;
      }
      goto L_0890A6CC;
    }
L_0890A6CC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32448));
    goto L_0890A6D0;
L_0890A6D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890A6E4;
      }
      goto L_0890A6DC;
    }
L_0890A6DC:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0890A6E4;
L_0890A6E4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0890A6D0;
      }
      goto L_0890A6F4;
    }
L_0890A6F4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(372)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(376)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(380)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(388)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890A73C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-31752)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0890A828;
      }
      goto L_0890A78C;
    }
L_0890A78C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-30716)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0890A828;
      }
      goto L_0890A798;
    }
L_0890A798:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7872)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7872));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
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
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x0890A7E4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 6u, 0x08940124u>(ctx, &aot_mem) && ctx.pc == 0x0890A7E4u) goto L_0890A7E4;
    return;
L_0890A7E4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0890A7F0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x0890A7F0u) goto L_0890A7F0;
    return;
L_0890A7F0:
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0890A80Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x0890A80Cu) goto L_0890A80C;
    return;
L_0890A80C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5404)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_0890A83C;
      }
      goto L_0890A820;
    }
L_0890A820:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0890A830;
      }
      goto L_0890A828;
    }
L_0890A828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0263_entry, 263u, 23u, 0x0890B1C4u>(ctx, &aot_mem); return;
      }
      goto L_0890A830;
    }
L_0890A830:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890ACB0;
      }
      goto L_0890A838;
    }
L_0890A838:
    aot_gpr[5] = (2216u << 16u);
    goto L_0890A83C;
L_0890A83C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[6] = (aot_gpr[5] & 1u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[10] = (2216u << 16u);
    aot_gpr[9] = (~(aot_gpr[6] | 0u));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[6] = (aot_gpr[8] | aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[11] & aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] & 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[5]);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[8] & aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0890A898u);
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0890A898u) goto L_0890A898;
    return;
L_0890A898:
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31756)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (2216u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-31748)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    aot_gpr[4] = (2217u << 16u);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(-32272);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-31768)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0890AAF8;
      }
      goto L_0890A8E8;
    }
L_0890A8E8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-31824));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-31808));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(27968));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (16320u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (17088u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(224);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[23] = (225u << 16u);
    aot_gpr[4] = (20224u << 16u);
    aot_gpr[22] = (256u << 16u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-7968));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[30] = (2217u << 16u);
    goto L_0890A948;
L_0890A948:
    aot_gpr[31] = (0x0890A950u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 170u, 0x08908D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A950u) goto L_0890A950;
    return;
L_0890A950:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890AAE0;
      }
      goto L_0890A964;
    }
L_0890A964:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-31748)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[18] & 1u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30680)));
      if (branch_taken) {
          goto L_0890A984;
      }
      goto L_0890A97C;
    }
L_0890A97C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_0890A988;
      }
      goto L_0890A984;
    }
L_0890A984:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    goto L_0890A988;
L_0890A988:
    if (aot_gpr[4] == 0u) {
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
        goto L_0890A998;
    }
    goto L_0890A990;
L_0890A990:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0890A998;
      }
      goto L_0890A998;
    }
L_0890A998:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A9AC;
      }
      goto L_0890A9A8;
    }
L_0890A9A8:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_0890A9AC;
L_0890A9AC:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[28];
        goto L_0890A9D4;
    }
    goto L_0890A9C0;
L_0890A9C0:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
      if (branch_taken) {
          goto L_0890A9EC;
      }
      goto L_0890A9D4;
    }
L_0890A9D4:
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    goto L_0890A9EC;
L_0890A9EC:
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (0x0890AA00u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 96u, 0x08A5089Cu>(ctx, &aot_mem) && ctx.pc == 0x0890AA00u) goto L_0890AA00;
    return;
L_0890AA00:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(-32320);
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
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[23]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(224);
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
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
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
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
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
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[31] = (0x0890AAE0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 130u, 0x0892FD94u>(ctx, &aot_mem) && ctx.pc == 0x0890AAE0u) goto L_0890AAE0;
    return;
L_0890AAE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-31768)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0890A948;
      }
      goto L_0890AAF4;
    }
L_0890AAF4:
    aot_gpr[4] = (2216u << 16u);
    goto L_0890AAF8;
L_0890AAF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0890AB30u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0890AB30u) goto L_0890AB30;
    return;
L_0890AB30:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30696)));
    aot_gpr[31] = (0x0890AB40u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x0890AB40u) goto L_0890AB40;
    return;
L_0890AB40:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31760)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0890AC70;
      }
      goto L_0890AB58;
    }
L_0890AB58:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32576));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (16025u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_gpr[16] = (2217u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-32448));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[22] = (2216u << 16u);
    goto L_0890AB8C;
L_0890AB8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890AC54;
      }
      goto L_0890AB98;
    }
L_0890AB98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0890ABA8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 26u, 0x08A4C1E4u>(ctx, &aot_mem) && ctx.pc == 0x0890ABA8u) goto L_0890ABA8;
    return;
L_0890ABA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30676)));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[31] = (0x0890AC54u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 142u, 0x0892FEBCu>(ctx, &aot_mem) && ctx.pc == 0x0890AC54u) goto L_0890AC54;
    return;
L_0890AC54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-31760)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0890AB8C;
      }
      goto L_0890AC6C;
    }
L_0890AC6C:
    aot_gpr[4] = (2216u << 16u);
    goto L_0890AC70;
L_0890AC70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0890ACA8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0890ACA8u) goto L_0890ACA8;
    return;
L_0890ACA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0263_entry, 263u, 21u, 0x0890B1A0u>(ctx, &aot_mem); return;
      }
      goto L_0890ACB0;
    }
L_0890ACB0:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[16] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0263_entry, 263u, 21u, 0x0890B1A0u>(ctx, &aot_mem); return;
      }
      goto L_0890ACBC;
    }
L_0890ACBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[5] = (aot_gpr[4] & 1u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0890AD14u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0890AD14u) goto L_0890AD14;
    return;
L_0890AD14:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30688)));
    aot_gpr[31] = (0x0890AD24u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x0890AD24u) goto L_0890AD24;
    return;
L_0890AD24:
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-31768)));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0890AD48u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 26u, 0x08A4C1E4u>(ctx, &aot_mem) && ctx.pc == 0x0890AD48u) goto L_0890AD48;
    return;
L_0890AD48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[10] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[11] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890AEFC;
      }
      goto L_0890AD60;
    }
L_0890AD60:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[6] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[5] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(27968));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31748)));
    aot_gpr[4] = (17232u << 16u);
    aot_fpr[4] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[12] = (2217u << 16u);
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[7] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[13] = (32768u << 16u);
    goto L_0890ADA0;
L_0890ADA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AEE4;
      }
      goto L_0890ADAC;
    }
L_0890ADAC:
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[12] + static_cast<std::uint32_t>(-32320);
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
    aot_gpr[4] = (aot_gpr[10] & 1u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_fpr[3] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const bool branch_taken = aot_gpr[4] == 0u;
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
      if (branch_taken) {
          goto L_0890ADE0;
      }
      goto L_0890ADDC;
    }
L_0890ADDC:
    aot_fpr[1] = aot_fpr[20] - aot_fpr[1];
    goto L_0890ADE0;
L_0890ADE0:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x0890ADF8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 170u, 0x08908D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890ADF8u) goto L_0890ADF8;
    return;
L_0890ADF8:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890AEE4;
      }
      goto L_0890AE0C;
    }
L_0890AE0C:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[7]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-30684)));
      if (branch_taken) {
          goto L_0890AE38;
      }
      goto L_0890AE24;
    }
L_0890AE24:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
      if (branch_taken) {
          goto L_0890AE50;
      }
      goto L_0890AE38;
    }
L_0890AE38:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[7];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[13]);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    goto L_0890AE50;
L_0890AE50:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[10] & 3u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0890AEA0;
      }
      goto L_0890AE84;
    }
L_0890AE84:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890AEDC;
      }
      goto L_0890AE8C;
    }
L_0890AE8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
      if (branch_taken) {
          goto L_0890AEDC;
      }
      goto L_0890AEA0;
    }
L_0890AEA0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0890AEB8;
      }
      goto L_0890AEA8;
    }
L_0890AEA8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890AECC;
      }
      goto L_0890AEB0;
    }
L_0890AEB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AEDC;
      }
      goto L_0890AEB8;
    }
L_0890AEB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
      if (branch_taken) {
          goto L_0890AEDC;
      }
      goto L_0890AECC;
    }
L_0890AECC:
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_0890AEDC;
L_0890AEDC:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(48));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_0890AEE4;
L_0890AEE4:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0890ADA0;
      }
      goto L_0890AEF4;
    }
L_0890AEF4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    goto L_0890AEFC;
L_0890AEFC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0890AF0Cu);
    aot_gpr[6] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 142u, 0x0892FEBCu>(ctx, &aot_mem) && ctx.pc == 0x0890AF0Cu) goto L_0890AF0C;
    return;
L_0890AF0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0890AF40u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0890AF40u) goto L_0890AF40;
    return;
L_0890AF40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-31764)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0890AF58u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 26u, 0x08A4C1E4u>(ctx, &aot_mem) && ctx.pc == 0x0890AF58u) goto L_0890AF58;
    return;
L_0890AF58:
    aot_gpr[10] = (0u | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0263_entry, 263u, 18u, 0x0890B134u>(ctx, &aot_mem); return;
      }
      goto L_0890AF6C;
    }
L_0890AF6C:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (15692u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[5] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[12] = (2216u << 16u);
    aot_gpr[4] = (17279u << 16u);
    aot_fpr[7] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[14] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(31040));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[3] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[13] = (2217u << 16u);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[11] = (32768u << 16u);
    goto L_0890AFB8;
L_0890AFB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0263_entry, 263u, 17u, 0x0890B124u>(ctx, &aot_mem); return;
      }
      goto L_0890AFC4;
    }
L_0890AFC4:
    { const std::uint32_t vfpu_address = aot_gpr[12] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[13] + static_cast<std::uint32_t>(-32304);
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
    aot_gpr[4] = (aot_gpr[10] & 1u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[4] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_fpr[6] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    { const bool branch_taken = aot_gpr[4] == 0u;
    { const float fs = aot_fpr[6]; const float ft = aot_fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[6] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[6] = fs * ft; }
      if (branch_taken) {
          goto L_0890AFF8;
      }
      goto L_0890AFF4;
    }
L_0890AFF4:
    aot_fpr[4] = aot_fpr[20] - aot_fpr[4];
    goto L_0890AFF8;
L_0890AFF8:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(-32320);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.pc = 0x0890B000u; return;
}

void recomp_unit_0262(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0262_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_262(Runtime &runtime) {
    runtime.register_generated_unit(262u, 0x0890A000u, 4096u, &recomp_unit_0262, &recomp_unit_0262_entry);
    runtime.register_function(0x0890A000u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A018u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A058u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A064u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A06Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A0A0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A0ACu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A0BCu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A0C4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A0D4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A0ECu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A100u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A11Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A13Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A14Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A154u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A174u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A178u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A188u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A194u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A1A4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A1ACu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A1BCu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A1D4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A234u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A240u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A248u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A27Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A2E4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A2F0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A300u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A308u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A318u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A328u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A33Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A35Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A374u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A37Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A384u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A3A4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A3A8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A3B8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A3C4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A3D4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A3DCu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A3ECu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A3F0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A428u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A438u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A458u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A4B4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A4BCu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A4CCu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A4D4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A4F0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A4F4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A504u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A560u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A56Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A578u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A584u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A598u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A5A8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A5B4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A5F4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A600u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A624u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A634u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A63Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A648u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A650u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A658u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A664u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A66Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A688u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A6A4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A6A8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A6B4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A6CCu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A6D0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A6DCu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A6E4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A6F4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A73Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A78Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A798u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A7E4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A7F0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A80Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A820u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A828u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A830u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A838u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A83Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A898u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A8E8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A948u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A950u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A964u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A97Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A984u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A988u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A990u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A998u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A9A8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A9ACu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A9C0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A9D4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890A9ECu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AA00u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AAE0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AAF4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AAF8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AB30u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AB40u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AB58u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AB8Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AB98u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890ABA8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AC54u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AC6Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AC70u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890ACA8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890ACB0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890ACBCu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AD14u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AD24u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AD48u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AD60u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890ADA0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890ADACu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890ADDCu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890ADE0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890ADF8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AE0Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AE24u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AE38u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AE50u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AE84u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AE8Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AEA0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AEA8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AEB0u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AEB8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AECCu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AEDCu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AEE4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AEF4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AEFCu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AF0Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AF40u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AF58u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AF6Cu, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AFB8u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AFC4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AFF4u, &recomp_unit_0262, "recomp_unit_0262");
    runtime.register_function(0x0890AFF8u, &recomp_unit_0262, "recomp_unit_0262");
}
} // namespace psprecomp
