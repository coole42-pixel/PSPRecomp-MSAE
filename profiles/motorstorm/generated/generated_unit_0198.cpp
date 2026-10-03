#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0198[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41,
    0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0,
    47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0,
    80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104,
    0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0,
    113, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 129, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 133, 134,
    0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 138, 139, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 143, 144, 0, 145, 0, 0, 146, 0, 147,
};
void recomp_unit_0198_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088CA000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0198[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088CA000;
    case 2u: goto L_088CA034;
    case 3u: goto L_088CA03C;
    case 4u: goto L_088CA098;
    case 5u: goto L_088CA0A4;
    case 6u: goto L_088CA0AC;
    case 7u: goto L_088CA0D0;
    case 8u: goto L_088CA1B4;
    case 9u: goto L_088CA1C4;
    case 10u: goto L_088CA298;
    case 11u: goto L_088CA29C;
    case 12u: goto L_088CA2A4;
    case 13u: goto L_088CA2BC;
    case 14u: goto L_088CA2DC;
    case 15u: goto L_088CA2F4;
    case 16u: goto L_088CA30C;
    case 17u: goto L_088CA314;
    case 18u: goto L_088CA320;
    case 19u: goto L_088CA354;
    case 20u: goto L_088CA37C;
    case 21u: goto L_088CA39C;
    case 22u: goto L_088CA3B0;
    case 23u: goto L_088CA3B8;
    case 24u: goto L_088CA3C0;
    case 25u: goto L_088CA3D0;
    case 26u: goto L_088CA3DC;
    case 27u: goto L_088CA468;
    case 28u: goto L_088CA470;
    case 29u: goto L_088CA4A0;
    case 30u: goto L_088CA4AC;
    case 31u: goto L_088CA4B4;
    case 32u: goto L_088CA4D8;
    case 33u: goto L_088CA52C;
    case 34u: goto L_088CA534;
    case 35u: goto L_088CA594;
    case 36u: goto L_088CA598;
    case 37u: goto L_088CA5A0;
    case 38u: goto L_088CA5B8;
    case 39u: goto L_088CA5D8;
    case 40u: goto L_088CA5E8;
    case 41u: goto L_088CA5FC;
    case 42u: goto L_088CA604;
    case 43u: goto L_088CA60C;
    case 44u: goto L_088CA61C;
    case 45u: goto L_088CA65C;
    case 46u: goto L_088CA670;
    case 47u: goto L_088CA680;
    case 48u: goto L_088CA694;
    case 49u: goto L_088CA6A4;
    case 50u: goto L_088CA6B8;
    case 51u: goto L_088CA6D8;
    case 52u: goto L_088CA6F0;
    case 53u: goto L_088CA708;
    case 54u: goto L_088CA720;
    case 55u: goto L_088CA738;
    case 56u: goto L_088CA750;
    case 57u: goto L_088CA7B0;
    case 58u: goto L_088CA7BC;
    case 59u: goto L_088CA7C4;
    case 60u: goto L_088CA7D8;
    case 61u: goto L_088CA7E4;
    case 62u: goto L_088CA7EC;
    case 63u: goto L_088CA7F8;
    case 64u: goto L_088CA850;
    case 65u: goto L_088CA85C;
    case 66u: goto L_088CA864;
    case 67u: goto L_088CA870;
    case 68u: goto L_088CA944;
    case 69u: goto L_088CA94C;
    case 70u: goto L_088CA954;
    case 71u: goto L_088CA95C;
    case 72u: goto L_088CA9A8;
    case 73u: goto L_088CA9B4;
    case 74u: goto L_088CA9C4;
    case 75u: goto L_088CA9D0;
    case 76u: goto L_088CA9E0;
    case 77u: goto L_088CA9E4;
    case 78u: goto L_088CAA64;
    case 79u: goto L_088CAA74;
    case 80u: goto L_088CAA80;
    case 81u: goto L_088CAA90;
    case 82u: goto L_088CAAA4;
    case 83u: goto L_088CAAB0;
    case 84u: goto L_088CAAC0;
    case 85u: goto L_088CAAD4;
    case 86u: goto L_088CAAE0;
    case 87u: goto L_088CAAF4;
    case 88u: goto L_088CAB00;
    case 89u: goto L_088CABC8;
    case 90u: goto L_088CAC78;
    case 91u: goto L_088CAC88;
    case 92u: goto L_088CAC98;
    case 93u: goto L_088CACA4;
    case 94u: goto L_088CACAC;
    case 95u: goto L_088CACBC;
    case 96u: goto L_088CACC8;
    case 97u: goto L_088CACD0;
    case 98u: goto L_088CACD4;
    case 99u: goto L_088CAD04;
    case 100u: goto L_088CAD24;
    case 101u: goto L_088CAD30;
    case 102u: goto L_088CAD48;
    case 103u: goto L_088CAD70;
    case 104u: goto L_088CAD7C;
    case 105u: goto L_088CAD84;
    case 106u: goto L_088CAD94;
    case 107u: goto L_088CADB8;
    case 108u: goto L_088CADC4;
    case 109u: goto L_088CADCC;
    case 110u: goto L_088CADE4;
    case 111u: goto L_088CADEC;
    case 112u: goto L_088CADF4;
    case 113u: goto L_088CAE00;
    case 114u: goto L_088CAE08;
    case 115u: goto L_088CAE10;
    case 116u: goto L_088CAE24;
    case 117u: goto L_088CAE3C;
    case 118u: goto L_088CAE4C;
    case 119u: goto L_088CAE54;
    case 120u: goto L_088CAE64;
    case 121u: goto L_088CAE70;
    case 122u: goto L_088CAE9C;
    case 123u: goto L_088CAED4;
    case 124u: goto L_088CAEDC;
    case 125u: goto L_088CAEFC;
    case 126u: goto L_088CAF30;
    case 127u: goto L_088CAF38;
    case 128u: goto L_088CAF48;
    case 129u: goto L_088CAF4C;
    case 130u: goto L_088CAF54;
    case 131u: goto L_088CAF60;
    case 132u: goto L_088CAF68;
    case 133u: goto L_088CAF78;
    case 134u: goto L_088CAF7C;
    case 135u: goto L_088CAF84;
    case 136u: goto L_088CAF90;
    case 137u: goto L_088CAF98;
    case 138u: goto L_088CAFA8;
    case 139u: goto L_088CAFAC;
    case 140u: goto L_088CAFB4;
    case 141u: goto L_088CAFC0;
    case 142u: goto L_088CAFC8;
    case 143u: goto L_088CAFD8;
    case 144u: goto L_088CAFDC;
    case 145u: goto L_088CAFE4;
    case 146u: goto L_088CAFF0;
    case 147u: goto L_088CAFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088CA000:
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<31u, 4u>(vfpu_value); }
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<127u>(aot_gpr[8]);
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<29u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<93u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<29u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<61u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<93u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<61u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<29u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<29u, 4u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<29u, 29u, 92u, 4u>();
    aot_gpr[17] = (0u | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(590)));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (14976u << 16u);
      if (branch_taken) {
          goto L_088CA29C;
      }
      goto L_088CA034;
    }
L_088CA034:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(595)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    goto L_088CA03C;
L_088CA03C:
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vx2i(3u, 97u, 1u, 1u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<31u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<2u, 2u, 30u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<5u, 2u, 93u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<5u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<38u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<98u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<38u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<5u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<39u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<98u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 60u, 3u>();
    ctx.execute_vfpu_vscl_ct<4u, 4u, 60u, 3u>();
    ctx.execute_vfpu_vscl_ct<6u, 6u, 60u, 3u>();
    ctx.execute_vfpu_vscl_ct<7u, 7u, 60u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<96u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<92u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_d); }
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[25] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088CA1C4;
      }
      goto L_088CA098;
    }
L_088CA098:
    aot_gpr[9] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA1C4;
      }
      goto L_088CA0A4;
    }
L_088CA0A4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CA1B4;
      }
      goto L_088CA0AC;
    }
L_088CA0AC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 4u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<16u, 16u, 127u, 4u>();
    ctx.execute_vfpu_vdot_ct<18u, 16u, 16u, 3u>();
    aot_gpr[9] = (ctx.vfpu_scalar_bits_ct<18u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA1B4;
      }
      goto L_088CA0D0;
    }
L_088CA0D0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<17u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<6u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<18u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<19u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<17u, 17u, 127u, 3u>();
    ctx.execute_vfpu_vscl_ct<18u, 18u, 127u, 3u>();
    ctx.execute_vfpu_vscl_ct<19u, 19u, 127u, 3u>();
    ctx.vfpu_ctrl[0u] = 0x000000FFu;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<42u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<29u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x000000E0u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<57u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<121u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<72u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(8u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<16u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(20u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<73u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(9u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<17u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(21u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<74u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(10u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<18u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(22u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<75u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(11u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<19u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(23u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(24u, 8u, 2u, 3u);
    ctx.execute_vfpu_vi2x(88u, 20u, 4u, 3u);
    ctx.execute_vfpu_vi2x(25u, 9u, 2u, 3u);
    ctx.execute_vfpu_vi2x(89u, 21u, 4u, 3u);
    ctx.execute_vfpu_vi2x(26u, 10u, 2u, 3u);
    ctx.execute_vfpu_vi2x(90u, 22u, 4u, 3u);
    ctx.execute_vfpu_vi2x(27u, 11u, 2u, 3u);
    ctx.execute_vfpu_vi2x(91u, 23u, 4u, 3u);
    aot_gpr[9] = (ctx.vfpu_scalar_bits_ct<88u>());
    aot_gpr[10] = (ctx.vfpu_scalar_bits_ct<120u>());
    aot_gpr[11] = (ctx.vfpu_scalar_bits_ct<89u>());
    aot_gpr[2] = (ctx.vfpu_scalar_bits_ct<121u>());
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<24u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<26u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[9] >> 16u);
    aot_gpr[3] = (aot_gpr[11] >> 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<26u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<27u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[11]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[10]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<27u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<25u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[31] | 0u);
    aot_gpr[5] = (aot_gpr[25] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] & 255u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[25] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    goto L_088CA1B4;
L_088CA1B4:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<6u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<15u, 4u>(vfpu_d); }
    goto L_088CA1C4;
L_088CA1C4:
    ctx.vfpu_ctrl[0u] = 0x000000FFu;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<42u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<29u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x000000E0u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<57u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<121u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<72u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(8u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<0u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(20u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<73u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(9u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<4u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(21u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<74u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(10u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<6u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(22u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<75u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(11u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(23u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(24u, 8u, 2u, 3u);
    ctx.execute_vfpu_vi2x(88u, 20u, 4u, 3u);
    ctx.execute_vfpu_vi2x(25u, 9u, 2u, 3u);
    ctx.execute_vfpu_vi2x(89u, 21u, 4u, 3u);
    ctx.execute_vfpu_vi2x(26u, 10u, 2u, 3u);
    ctx.execute_vfpu_vi2x(90u, 22u, 4u, 3u);
    ctx.execute_vfpu_vi2x(27u, 11u, 2u, 3u);
    ctx.execute_vfpu_vi2x(91u, 23u, 4u, 3u);
    aot_gpr[9] = (ctx.vfpu_scalar_bits_ct<88u>());
    aot_gpr[10] = (ctx.vfpu_scalar_bits_ct<120u>());
    aot_gpr[11] = (ctx.vfpu_scalar_bits_ct<89u>());
    aot_gpr[2] = (ctx.vfpu_scalar_bits_ct<121u>());
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<24u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<26u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[9] >> 16u);
    aot_gpr[3] = (aot_gpr[11] >> 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<26u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<27u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[11]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[10]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<27u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<25u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[31] | 0u);
    aot_gpr[5] = (aot_gpr[25] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] & 255u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] & 255u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(590)));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA03C;
      }
      goto L_088CA298;
    }
L_088CA298:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(595), static_cast<std::uint8_t>(aot_gpr[18]));
    goto L_088CA29C;
L_088CA29C:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA2DC;
      }
      goto L_088CA2A4;
    }
L_088CA2A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_088CA2DC;
      }
      goto L_088CA2BC;
    }
L_088CA2BC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_088CA2DC;
L_088CA2DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(584), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088CA30C;
      }
      goto L_088CA2F4;
    }
L_088CA2F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(516), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(520), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(524), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088CA30C;
L_088CA30C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA320;
      }
      goto L_088CA314;
    }
L_088CA314:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088CA320;
L_088CA320:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA354:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(584)));
    aot_gpr[3] = (0u | 0u);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[11] = (aot_gpr[5] | 0u);
    aot_gpr[15] = (aot_gpr[6] | 0u);
    aot_gpr[10] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[12];
    aot_gpr[9] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_088CA604;
      }
      goto L_088CA37C;
    }
L_088CA37C:
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(590)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(594)));
    aot_gpr[24] = (aot_gpr[24] + aot_gpr[24]);
    aot_gpr[14] = (aot_gpr[4] & 4u);
    aot_gpr[14] = (0u < aot_gpr[14] ? 1u : 0u);
    aot_gpr[13] = (0u | 0u);
    { const bool branch_taken = aot_gpr[14] == 0u;
    aot_gpr[12] = (0u | 0u);
      if (branch_taken) {
          goto L_088CA3C0;
      }
      goto L_088CA39C;
    }
L_088CA39C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(590)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[13] = (0u | 4u);
      if (branch_taken) {
          goto L_088CA3B8;
      }
      goto L_088CA3B0;
    }
L_088CA3B0:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(590)));
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(-1));
    goto L_088CA3B8;
L_088CA3B8:
    aot_gpr[4] = (aot_gpr[13] + aot_gpr[13]);
    aot_gpr[24] = (aot_gpr[24] + aot_gpr[4]);
    goto L_088CA3C0;
L_088CA3C0:
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088CA3D0u);
    aot_gpr[6] = (aot_gpr[24] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 152u, 0x08A51DB8u>(ctx, &aot_mem) && ctx.pc == 0x088CA3D0u) goto L_088CA3D0;
    return;
L_088CA3D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA5E8;
      }
      goto L_088CA3DC;
    }
L_088CA3DC:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(595), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(512), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(516), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(520), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(524), 0u);
    aot_gpr[3] = (aot_gpr[24] << 4u);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[24] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (16640u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (15232u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<60u>(aot_gpr[5]);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<92u>(aot_gpr[5]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<29u, 1u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<61u, 1u>(vfpu_value); }
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_vfpu_scalar_bits_ct<30u>(PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = aot_gpr[15] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<31u, 4u>(vfpu_value); }
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<127u>(aot_gpr[5]);
    ctx.execute_vfpu_vscl_ct<29u, 29u, 92u, 2u>();
    aot_gpr[15] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(590)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[15]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (14976u << 16u);
      if (branch_taken) {
          goto L_088CA598;
      }
      goto L_088CA468;
    }
L_088CA468:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(595)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_088CA470;
L_088CA470:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vx2i(3u, 97u, 1u, 1u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<31u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<2u, 2u, 30u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 60u, 3u>();
    ctx.execute_vfpu_vscl_ct<4u, 4u, 60u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<96u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<92u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_d); }
    { const bool branch_taken = aot_gpr[14] == 0u;
    aot_gpr[5] = (aot_gpr[24] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088CA534;
      }
      goto L_088CA4A0;
    }
L_088CA4A0:
    aot_gpr[7] = (aot_gpr[12] < aot_gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA534;
      }
      goto L_088CA4AC;
    }
L_088CA4AC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[15]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CA52C;
      }
      goto L_088CA4B4;
    }
L_088CA4B4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 4u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<16u, 16u, 127u, 4u>();
    ctx.execute_vfpu_vdot_ct<18u, 16u, 16u, 3u>();
    aot_gpr[7] = (ctx.vfpu_scalar_bits_ct<18u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA52C;
      }
      goto L_088CA4D8;
    }
L_088CA4D8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<17u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<17u, 17u, 127u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<112u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<72u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<112u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<73u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<29u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<57u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<72u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(8u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<16u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(10u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<73u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(9u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<17u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(11u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(24u, 8u, 2u, 3u);
    ctx.execute_vfpu_vi2x(88u, 10u, 4u, 3u);
    ctx.execute_vfpu_vi2x(25u, 9u, 2u, 3u);
    ctx.execute_vfpu_vi2x(89u, 11u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<24u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[24] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<25u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[24] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[24] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[24] + static_cast<std::uint32_t>(32));
    goto L_088CA52C;
L_088CA52C:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 4u>(vfpu_d); }
    goto L_088CA534;
L_088CA534:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<96u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<72u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<96u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<73u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<29u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<57u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<72u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(8u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<0u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(10u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<73u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(9u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<4u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(11u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(24u, 8u, 2u, 3u);
    ctx.execute_vfpu_vi2x(88u, 10u, 4u, 3u);
    ctx.execute_vfpu_vi2x(25u, 9u, 2u, 3u);
    ctx.execute_vfpu_vi2x(89u, 11u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<24u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[24] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<25u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[24] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[24] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(1));
    aot_gpr[15] = (aot_gpr[15] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(590)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[15]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA470;
      }
      goto L_088CA594;
    }
L_088CA594:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(595), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_088CA598;
L_088CA598:
    { const bool branch_taken = aot_gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA5D8;
      }
      goto L_088CA5A0;
    }
L_088CA5A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[24] = (aot_gpr[24] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[24] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[24] + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_088CA5D8;
      }
      goto L_088CA5B8;
    }
L_088CA5B8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_088CA5D8;
L_088CA5D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(584), aot_gpr[10]);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088CA5FC;
      }
      goto L_088CA5E8;
    }
L_088CA5E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(516), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(520), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(524), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088CA5FC;
L_088CA5FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA60C;
      }
      goto L_088CA604;
    }
L_088CA604:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088CA60C;
L_088CA60C:
    aot_gpr[2] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA61C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(568))))));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[9] = (16128u << 16u);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    if (aot_gpr[10] != 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(568), static_cast<std::uint16_t>(aot_gpr[8]));
        goto L_088CA65C;
    }
    goto L_088CA65C;
L_088CA65C:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(574))))));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    if (aot_gpr[9] != 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(574), static_cast<std::uint16_t>(aot_gpr[8]));
        goto L_088CA670;
    }
    goto L_088CA670;
L_088CA670:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(570))))));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    if (aot_gpr[8] != 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(570), static_cast<std::uint16_t>(aot_gpr[7]));
        goto L_088CA680;
    }
    goto L_088CA680;
L_088CA680:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(576))))));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    if (aot_gpr[8] != 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(576), static_cast<std::uint16_t>(aot_gpr[7]));
        goto L_088CA694;
    }
    goto L_088CA694;
L_088CA694:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(572))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    if (aot_gpr[7] != 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(572), static_cast<std::uint16_t>(aot_gpr[6]));
        goto L_088CA6A4;
    }
    goto L_088CA6A4;
L_088CA6A4:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(578))))));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[7] != 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(578), static_cast<std::uint16_t>(aot_gpr[6]));
        goto L_088CA6B8;
    }
    goto L_088CA6B8;
L_088CA6B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(564)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088CA6D8;
    }
    goto L_088CA6D8;
L_088CA6D8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088CA6F0;
    }
    goto L_088CA6F0;
L_088CA6F0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088CA708;
    }
    goto L_088CA708;
L_088CA708:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088CA720;
    }
    goto L_088CA720;
L_088CA720:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088CA738;
    }
    goto L_088CA738;
L_088CA738:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088CA750;
    }
    goto L_088CA750;
L_088CA750:
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(564)));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    ctx.execute_vfpu_vocp(16u, 16u, 1u);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[15] = aot_fpr[15] - aot_fpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[15]));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[17] = aot_fpr[17] - aot_fpr[18];
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_088CA7BC;
      }
      goto L_088CA7B0;
    }
L_088CA7B0:
    aot_gpr[5] = (aot_gpr[29] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CA7C4;
      }
      goto L_088CA7BC;
    }
L_088CA7BC:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088CA7C4;
L_088CA7C4:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
        goto L_088CA7E4;
    }
    goto L_088CA7D8;
L_088CA7D8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088CA7EC;
      }
      goto L_088CA7E4;
    }
L_088CA7E4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_088CA7EC;
L_088CA7EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA7F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[22] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-29052)));
    aot_gpr[30] = (15872u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(14));
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[23] = (16128u << 16u);
      if (branch_taken) {
          goto L_088CA85C;
      }
      goto L_088CA850;
    }
L_088CA850:
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088CA870;
      }
      goto L_088CA85C;
    }
L_088CA85C:
    aot_gpr[31] = (0x088CA864u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x088CA864u) goto L_088CA864;
    return;
L_088CA864:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088CA870;
L_088CA870:
    aot_gpr[16] = (aot_gpr[22] + static_cast<std::uint32_t>(-29052));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (39680u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (59136u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (7680u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (5888u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (56576u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(512));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (56575u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (59648u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (59648u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(595)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(548)));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[21]);
    aot_gpr[20] = (0u | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(544)));
      if (branch_taken) {
          goto L_088CA94C;
      }
      goto L_088CA944;
    }
L_088CA944:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(595)));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[20]);
    goto L_088CA94C;
L_088CA94C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088CA95C;
      }
      goto L_088CA954;
    }
L_088CA954:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(595)));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[19]);
    goto L_088CA95C;
L_088CA95C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (48947u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[5] | 15115u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] >> 8u);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(524)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CA9A8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 16u, 0x089301F8u>(ctx, &aot_mem) && ctx.pc == 0x088CA9A8u) goto L_088CA9A8;
    return;
L_088CA9A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(548)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA9C4;
      }
      goto L_088CA9B4;
    }
L_088CA9B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(524)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CA9C4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 16u, 0x089301F8u>(ctx, &aot_mem) && ctx.pc == 0x088CA9C4u) goto L_088CA9C4;
    return;
L_088CA9C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(544)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088CA9E4;
    }
    goto L_088CA9D0;
L_088CA9D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(524)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CA9E0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 16u, 0x089301F8u>(ctx, &aot_mem) && ctx.pc == 0x088CA9E0u) goto L_088CA9E0;
    return;
L_088CA9E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088CA9E4;
L_088CA9E4:
    aot_gpr[5] = (48896u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[5] | 1024u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (56575u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (56577u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(513));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(512)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CAA64u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 8u, 0x08930114u>(ctx, &aot_mem) && ctx.pc == 0x088CAA64u) goto L_088CAA64;
    return;
L_088CAA64:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(520)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CAA74u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 8u, 0x08930114u>(ctx, &aot_mem) && ctx.pc == 0x088CAA74u) goto L_088CAA74;
    return;
L_088CAA74:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(548)));
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAAA4;
      }
      goto L_088CAA80;
    }
L_088CAA80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(512)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CAA90u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 8u, 0x08930114u>(ctx, &aot_mem) && ctx.pc == 0x088CAA90u) goto L_088CAA90;
    return;
L_088CAA90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(548)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(520)));
    aot_gpr[31] = (0x088CAAA4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 8u, 0x08930114u>(ctx, &aot_mem) && ctx.pc == 0x088CAAA4u) goto L_088CAAA4;
    return;
L_088CAAA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAAD4;
      }
      goto L_088CAAB0;
    }
L_088CAAB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(512)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CAAC0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 8u, 0x08930114u>(ctx, &aot_mem) && ctx.pc == 0x088CAAC0u) goto L_088CAAC0;
    return;
L_088CAAC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(544)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(520)));
    aot_gpr[31] = (0x088CAAD4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 8u, 0x08930114u>(ctx, &aot_mem) && ctx.pc == 0x088CAAD4u) goto L_088CAAD4;
    return;
L_088CAAD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(548)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088CABC8;
      }
      goto L_088CAAE0;
    }
L_088CAAE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088CAAF4u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 152u, 0x08A51DB8u>(ctx, &aot_mem) && ctx.pc == 0x088CAAF4u) goto L_088CAAF4;
    return;
L_088CAAF4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_088CABC8;
      }
      goto L_088CAB00;
    }
L_088CAB00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(512)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(512)));
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(520)));
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(520)));
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CABC8u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 8u, 0x08930114u>(ctx, &aot_mem) && ctx.pc == 0x088CABC8u) goto L_088CABC8;
    return;
L_088CABC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (39680u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (59136u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (7680u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (56576u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (56575u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (59392u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (59648u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(512)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CAC78u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 8u, 0x08930114u>(ctx, &aot_mem) && ctx.pc == 0x088CAC78u) goto L_088CAC78;
    return;
L_088CAC78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(516)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CAC88u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 8u, 0x08930114u>(ctx, &aot_mem) && ctx.pc == 0x088CAC88u) goto L_088CAC88;
    return;
L_088CAC88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(520)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CAC98u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 8u, 0x08930114u>(ctx, &aot_mem) && ctx.pc == 0x088CAC98u) goto L_088CAC98;
    return;
L_088CAC98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(548)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CACBC;
      }
      goto L_088CACA4;
    }
L_088CACA4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CACBC;
      }
      goto L_088CACAC;
    }
L_088CACAC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CACBCu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 8u, 0x08930114u>(ctx, &aot_mem) && ctx.pc == 0x088CACBCu) goto L_088CACBC;
    return;
L_088CACBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CACD4;
      }
      goto L_088CACC8;
    }
L_088CACC8:
    aot_gpr[31] = (0x088CACD0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x088CACD0u) goto L_088CACD0;
    return;
L_088CACD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_088CACD4;
L_088CACD4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAD04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(595)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(512)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088CAD24u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 8u, 0x08930114u>(ctx, &aot_mem) && ctx.pc == 0x088CAD24u) goto L_088CAD24;
    return;
L_088CAD24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAD30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(590)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(591)));
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[6] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
      if (branch_taken) {
          goto L_088CAD70;
      }
      goto L_088CAD48;
    }
L_088CAD48:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-33))))));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-33), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088CAD7C;
      }
      goto L_088CAD70;
    }
L_088CAD70:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-12), aot_gpr[5]);
    goto L_088CAD7C;
L_088CAD7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAD84:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(591)));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088CADB8;
      }
      goto L_088CAD94;
    }
L_088CAD94:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(31))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[6] = (aot_gpr[6] >> 30u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088CADC4;
      }
      goto L_088CADB8;
    }
L_088CADB8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_088CADC4;
L_088CADC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CADCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(544)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CADF4;
      }
      goto L_088CADE4;
    }
L_088CADE4:
    aot_gpr[31] = (0x088CADECu);
    // nop
    goto L_088CAD30;
L_088CADEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(544)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(548), 0u);
    goto L_088CADF4;
L_088CADF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(548)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAE10;
      }
      goto L_088CAE00;
    }
L_088CAE00:
    aot_gpr[31] = (0x088CAE08u);
    // nop
    goto L_088CAD84;
L_088CAE08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(548)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(544), 0u);
    goto L_088CAE10;
L_088CAE10:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(544), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(548), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAE24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(591)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(564)));
      if (branch_taken) {
          goto L_088CAE54;
      }
      goto L_088CAE3C;
    }
L_088CAE3C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088CAE4Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 126u, 0x088C6BF8u>(ctx, &aot_mem) && ctx.pc == 0x088CAE4Cu) goto L_088CAE4C;
    return;
L_088CAE4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAE64;
      }
      goto L_088CAE54;
    }
L_088CAE54:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088CAE64u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 136u, 0x088C6C5Cu>(ctx, &aot_mem) && ctx.pc == 0x088CAE64u) goto L_088CAE64;
    return;
L_088CAE64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAE70:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(528)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(532)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    aot_fpr[12] = aot_fpr[16] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAE9C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(528)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(532)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(590)));
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-24)));
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    aot_fpr[12] = aot_fpr[16] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAED4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 2160u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAEDC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32424), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAEFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_gpr[11] = (aot_gpr[5] < static_cast<std::uint32_t>(4000) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[9] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_088CAF54;
      }
      goto L_088CAF30;
    }
L_088CAF30:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088CAF4C;
      }
      goto L_088CAF38;
    }
L_088CAF38:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088CAF48u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 87u, 0x088E2494u>(ctx, &aot_mem) && ctx.pc == 0x088CAF48u) goto L_088CAF48;
    return;
L_088CAF48:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CAF4C;
L_088CAF4C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 23u, 0x088CB0C4u>(ctx, &aot_mem); return;
      }
      goto L_088CAF54;
    }
L_088CAF54:
    aot_gpr[10] = (aot_gpr[5] < static_cast<std::uint32_t>(7000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAF84;
      }
      goto L_088CAF60;
    }
L_088CAF60:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088CAF7C;
      }
      goto L_088CAF68;
    }
L_088CAF68:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088CAF78u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 139u, 0x088E78D4u>(ctx, &aot_mem) && ctx.pc == 0x088CAF78u) goto L_088CAF78;
    return;
L_088CAF78:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CAF7C;
L_088CAF7C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 23u, 0x088CB0C4u>(ctx, &aot_mem); return;
      }
      goto L_088CAF84;
    }
L_088CAF84:
    aot_gpr[10] = (aot_gpr[5] < static_cast<std::uint32_t>(10000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAFB4;
      }
      goto L_088CAF90;
    }
L_088CAF90:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088CAFAC;
      }
      goto L_088CAF98;
    }
L_088CAF98:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088CAFA8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 87u, 0x088E2494u>(ctx, &aot_mem) && ctx.pc == 0x088CAFA8u) goto L_088CAFA8;
    return;
L_088CAFA8:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CAFAC;
L_088CAFAC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 23u, 0x088CB0C4u>(ctx, &aot_mem); return;
      }
      goto L_088CAFB4;
    }
L_088CAFB4:
    aot_gpr[10] = (aot_gpr[5] < static_cast<std::uint32_t>(13000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAFE4;
      }
      goto L_088CAFC0;
    }
L_088CAFC0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088CAFDC;
      }
      goto L_088CAFC8;
    }
L_088CAFC8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088CAFD8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 87u, 0x088E2494u>(ctx, &aot_mem) && ctx.pc == 0x088CAFD8u) goto L_088CAFD8;
    return;
L_088CAFD8:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CAFDC;
L_088CAFDC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 23u, 0x088CB0C4u>(ctx, &aot_mem); return;
      }
      goto L_088CAFE4;
    }
L_088CAFE4:
    aot_gpr[10] = (aot_gpr[5] < static_cast<std::uint32_t>(16000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 4u, 0x088CB014u>(ctx, &aot_mem); return;
      }
      goto L_088CAFF0;
    }
L_088CAFF0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 3u, 0x088CB00Cu>(ctx, &aot_mem); return;
      }
      goto L_088CAFF8;
    }
L_088CAFF8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.pc = 0x088CB000u; return;
}

void recomp_unit_0198(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0198_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_198(Runtime &runtime) {
    runtime.register_generated_unit(198u, 0x088CA000u, 4096u, &recomp_unit_0198, &recomp_unit_0198_entry);
    runtime.register_function(0x088CA000u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA034u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA03Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA098u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA0A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA0ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA0D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA1B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA1C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA298u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA29Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA2A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA2BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA2DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA2F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA30Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA314u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA320u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA354u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA37Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA39Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA3B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA3B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA3C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA3D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA3DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA468u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA470u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA4A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA4ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA4B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA4D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA52Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA534u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA594u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA598u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA5A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA5B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA5D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA5E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA5FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA604u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA60Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA61Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA65Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA670u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA680u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA694u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA6A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA6B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA6D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA6F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA708u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA720u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA738u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA750u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA7B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA7BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA7C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA7D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA7E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA7ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA7F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA850u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA85Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA864u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA870u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA944u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA94Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA954u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA95Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA9A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA9B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA9C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA9D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA9E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CA9E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAA64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAA74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAA80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAA90u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAAA4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAAB0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAAC0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAAD4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAAE0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAAF4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAB00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CABC8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAC78u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAC88u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAC98u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CACA4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CACACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CACBCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CACC8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CACD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CACD4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAD04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAD24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAD30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAD48u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAD70u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAD7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAD84u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAD94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CADB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CADC4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CADCCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CADE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CADECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CADF4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAE00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAE08u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAE10u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAE24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAE3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAE4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAE54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAE64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAE70u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAE9Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAED4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAEDCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAEFCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAF30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAF38u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAF48u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAF4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAF54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAF60u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAF68u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAF78u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAF7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAF84u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAF90u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAF98u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAFA8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAFACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAFB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAFC0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAFC8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAFD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAFDCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAFE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAFF0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x088CAFF8u, &recomp_unit_0198, "recomp_unit_0198");
}
} // namespace psprecomp
