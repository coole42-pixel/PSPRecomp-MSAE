#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0615[985] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 38, 39, 0, 0, 40, 0, 41, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    47, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92,
};
void recomp_unit_0615_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A6B000u;
        entry_id = (entry_delta < 3940u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0615[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A6B000;
    case 2u: goto L_08A6B010;
    case 3u: goto L_08A6B01C;
    case 4u: goto L_08A6B02C;
    case 5u: goto L_08A6B038;
    case 6u: goto L_08A6B060;
    case 7u: goto L_08A6B070;
    case 8u: goto L_08A6B0A8;
    case 9u: goto L_08A6B0C4;
    case 10u: goto L_08A6B0D4;
    case 11u: goto L_08A6B0EC;
    case 12u: goto L_08A6B100;
    case 13u: goto L_08A6B11C;
    case 14u: goto L_08A6B12C;
    case 15u: goto L_08A6B140;
    case 16u: goto L_08A6B15C;
    case 17u: goto L_08A6B174;
    case 18u: goto L_08A6B18C;
    case 19u: goto L_08A6B1B0;
    case 20u: goto L_08A6B1C4;
    case 21u: goto L_08A6B1E0;
    case 22u: goto L_08A6B208;
    case 23u: goto L_08A6B218;
    case 24u: goto L_08A6B22C;
    case 25u: goto L_08A6B23C;
    case 26u: goto L_08A6B248;
    case 27u: goto L_08A6B260;
    case 28u: goto L_08A6B274;
    case 29u: goto L_08A6B290;
    case 30u: goto L_08A6B2B4;
    case 31u: goto L_08A6B2C8;
    case 32u: goto L_08A6B2E0;
    case 33u: goto L_08A6B304;
    case 34u: goto L_08A6B318;
    case 35u: goto L_08A6B338;
    case 36u: goto L_08A6B348;
    case 37u: goto L_08A6B354;
    case 38u: goto L_08A6B35C;
    case 39u: goto L_08A6B360;
    case 40u: goto L_08A6B36C;
    case 41u: goto L_08A6B374;
    case 42u: goto L_08A6B380;
    case 43u: goto L_08A6B390;
    case 44u: goto L_08A6B3F8;
    case 45u: goto L_08A6B428;
    case 46u: goto L_08A6B478;
    case 47u: goto L_08A6B480;
    case 48u: goto L_08A6B490;
    case 49u: goto L_08A6B498;
    case 50u: goto L_08A6B4A0;
    case 51u: goto L_08A6B528;
    case 52u: goto L_08A6B538;
    case 53u: goto L_08A6B540;
    case 54u: goto L_08A6B554;
    case 55u: goto L_08A6B55C;
    case 56u: goto L_08A6B56C;
    case 57u: goto L_08A6B5A0;
    case 58u: goto L_08A6B5C0;
    case 59u: goto L_08A6B5CC;
    case 60u: goto L_08A6B5EC;
    case 61u: goto L_08A6B680;
    case 62u: goto L_08A6B6A0;
    case 63u: goto L_08A6B6F0;
    case 64u: goto L_08A6B710;
    case 65u: goto L_08A6B724;
    case 66u: goto L_08A6B754;
    case 67u: goto L_08A6B75C;
    case 68u: goto L_08A6B92C;
    case 69u: goto L_08A6B984;
    case 70u: goto L_08A6B9B0;
    case 71u: goto L_08A6B9E4;
    case 72u: goto L_08A6B9F0;
    case 73u: goto L_08A6BC9C;
    case 74u: goto L_08A6BCB4;
    case 75u: goto L_08A6BCBC;
    case 76u: goto L_08A6BCD8;
    case 77u: goto L_08A6BCF4;
    case 78u: goto L_08A6BCFC;
    case 79u: goto L_08A6BD38;
    case 80u: goto L_08A6BD70;
    case 81u: goto L_08A6BD94;
    case 82u: goto L_08A6BD98;
    case 83u: goto L_08A6BDAC;
    case 84u: goto L_08A6BDC4;
    case 85u: goto L_08A6BDCC;
    case 86u: goto L_08A6BE14;
    case 87u: goto L_08A6BE20;
    case 88u: goto L_08A6BE3C;
    case 89u: goto L_08A6BE98;
    case 90u: goto L_08A6BEB0;
    case 91u: goto L_08A6BF44;
    case 92u: goto L_08A6BF60;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A6B000:
    ctx.execute_vfpu_vscl_ct<116u, 104u, 114u, 1u>();
    ctx.execute_vfpu_vminmax(97u, 100u, 32u, 1u, false);
    rt.unsupported(0x08A6B008u, 0x78657475u, "unknown not lowered yet"); return;
L_08A6B010:
    ctx.execute_vfpu_vhdp(112u, 115u, 109u, 1u);
    rt.unsupported(0x08A6B014u, 0x7872702Eu, "unknown not lowered yet"); return;
L_08A6B01C:
    rt.unsupported(0x08A6B01Cu, 0x69766F4Du, "unknown not lowered yet"); return;
L_08A6B02C:
    rt.unsupported(0x08A6B02Cu, 0x61477469u, "vfpu0 not lowered yet"); return;
L_08A6B038:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08A6B03Cu, 0x74206465u, "unknown not lowered yet"); return;
L_08A6B060:
    ctx.execute_vfpu_vscl_ct<86u, 105u, 100u, 1u>();
    rt.unsupported(0x08A6B064u, 0x7369446Fu, "unknown not lowered yet"); return;
L_08A6B070:
    rt.unsupported(0x08A6B070u, 0x69647541u, "unknown not lowered yet"); return;
L_08A6B0A8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6B0ACu, 0x20727470u, "unknown not lowered yet"); return;
L_08A6B0C4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6B0C8u, 0x20727470u, "unknown not lowered yet"); return;
L_08A6B0D4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6B0D8u, 0x20727470u, "unknown not lowered yet"); return;
L_08A6B0EC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6B0F0u, 0x20727470u, "unknown not lowered yet"); return;
L_08A6B100:
    rt.unsupported(0x08A6B100u, 0x6B72616Du, "unknown not lowered yet"); return;
L_08A6B11C:
    rt.unsupported(0x08A6B11Cu, 0x6E676973u, "vfpu3 not lowered yet"); return;
L_08A6B12C:
    rt.unsupported(0x08A6B12Cu, 0x74697277u, "unknown not lowered yet"); return;
L_08A6B140:
    rt.unsupported(0x08A6B140u, 0x74697277u, "unknown not lowered yet"); return;
L_08A6B15C:
    rt.unsupported(0x08A6B15Cu, 0x74697277u, "unknown not lowered yet"); return;
L_08A6B174:
    rt.unsupported(0x08A6B174u, 0x74697277u, "unknown not lowered yet"); return;
L_08A6B18C:
    rt.unsupported(0x08A6B18Cu, 0x6E676973u, "vfpu3 not lowered yet"); return;
L_08A6B1B0:
    rt.unsupported(0x08A6B1B0u, 0x42746547u, "unknown not lowered yet"); return;
L_08A6B1C4:
    rt.unsupported(0x08A6B1C4u, 0x42746547u, "unknown not lowered yet"); return;
L_08A6B1E0:
    rt.unsupported(0x08A6B1E0u, 0x42746547u, "unknown not lowered yet"); return;
L_08A6B208:
    rt.unsupported(0x08A6B208u, 0x74697277u, "unknown not lowered yet"); return;
L_08A6B218:
    rt.unsupported(0x08A6B218u, 0x74697277u, "unknown not lowered yet"); return;
L_08A6B22C:
    rt.unsupported(0x08A6B22Cu, 0x20746F67u, "unknown not lowered yet"); return;
L_08A6B23C:
    rt.unsupported(0x08A6B23Cu, 0x206C6572u, "unknown not lowered yet"); return;
L_08A6B248:
    rt.unsupported(0x08A6B248u, 0x6E676973u, "vfpu3 not lowered yet"); return;
L_08A6B260:
    rt.unsupported(0x08A6B260u, 0x42746547u, "unknown not lowered yet"); return;
L_08A6B274:
    rt.unsupported(0x08A6B274u, 0x42746547u, "unknown not lowered yet"); return;
L_08A6B290:
    rt.unsupported(0x08A6B290u, 0x42746547u, "unknown not lowered yet"); return;
L_08A6B2B4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6B2B8u, 0x6E797320u, "vfpu3 not lowered yet"); return;
L_08A6B2C8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6B2CCu, 0x6E797320u, "vfpu3 not lowered yet"); return;
L_08A6B2E0:
    rt.unsupported(0x08A6B2E0u, 0x42746547u, "unknown not lowered yet"); return;
L_08A6B304:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<114u, 101u, 1u, 0u>();
    // nop
    rt.unsupported(0x08A6B310u, 0x74656C70u, "unknown not lowered yet"); return;
L_08A6B318:
    rt.unsupported(0x08A6B318u, 0x74206F4Eu, "unknown not lowered yet"); return;
L_08A6B338:
    rt.unsupported(0x08A6B338u, 0x756D6544u, "unknown not lowered yet"); return;
L_08A6B348:
    rt.unsupported(0x08A6B348u, 0x70736944u, "unknown not lowered yet"); return;
L_08A6B354:
    if (aot_gpr[3] == aot_gpr[18]) {
    rt.unsupported(0x08A6B358u, 0x6279616Cu, "vfpu0 not lowered yet"); return;
        ctx.pc = 0x08A87070u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6B35C;
L_08A6B35C:
    aot_gpr[12] = (aot_gpr[3] + aot_gpr[11]);
    goto L_08A6B360;
L_08A6B360:
    rt.unsupported(0x08A6B360u, 0x70736944u, "unknown not lowered yet"); return;
L_08A6B36C:
    ctx.execute_vfpu_vscl_ct<101u, 110u, 100u, 1u>();
    rt.unsupported(0x08A6B370u, 0x00000072u, "special? not lowered yet"); return;
L_08A6B374:
    rt.unsupported(0x08A6B374u, 0x70736944u, "unknown not lowered yet"); return;
L_08A6B380:
    rt.unsupported(0x08A6B380u, 0x6E65696Cu, "vfpu3 not lowered yet"); return;
L_08A6B390:
    ctx.execute_vfpu_vscl_ct<65u, 116u, 116u, 1u>();
    rt.unsupported(0x08A6B394u, 0x2074706Du, "unknown not lowered yet"); return;
L_08A6B3F8:
    rt.unsupported(0x08A6B3F8u, 0x69766F4Du, "unknown not lowered yet"); return;
L_08A6B428:
    rt.unsupported(0x08A6B428u, 0x69766F4Du, "unknown not lowered yet"); return;
L_08A6B478:
    rt.unsupported(0x08A6B478u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08A6B480:
    rt.unsupported(0x08A6B480u, 0x69766F4Du, "unknown not lowered yet"); return;
L_08A6B490:
    ctx.execute_vfpu_vminmax(100u, 83u, 101u, 1u, false);
    (void)(0u + 0u);
    goto L_08A6B498;
L_08A6B498:
    rt.unsupported(0x08A6B498u, 0x74736F68u, "unknown not lowered yet"); return;
L_08A6B4A0:
    aot_gpr[16] = (aot_gpr[17] ^ 29549u);
    // nop
    rt.unsupported(0x08A6B4A8u, 0x73257325u, "unknown not lowered yet"); return;
L_08A6B528:
    rt.unsupported(0x08A6B528u, 0x69766F4Du, "unknown not lowered yet"); return;
L_08A6B538:
    ctx.execute_vfpu_vscl_ct<117u, 102u, 102u, 1u>();
    rt.unsupported(0x08A6B53Cu, 0x00000072u, "special? not lowered yet"); return;
L_08A6B540:
    rt.unsupported(0x08A6B540u, 0x69766F4Du, "unknown not lowered yet"); return;
L_08A6B554:
    ctx.execute_vfpu_vscl_ct<117u, 102u, 102u, 1u>();
    rt.unsupported(0x08A6B558u, 0x00000072u, "special? not lowered yet"); return;
L_08A6B55C:
    rt.unsupported(0x08A6B55Cu, 0x69766F4Du, "unknown not lowered yet"); return;
L_08A6B56C:
    ctx.execute_vfpu_vscl_ct<117u, 102u, 102u, 1u>();
    ctx.execute_vfpu_vcmp_ct<70u, 117u, 1u, 2u>();
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    aot_gpr[16] = (aot_gpr[1] << 0u);
    // nop
    aot_gpr[16] = (0u << 0u);
    // nop
    aot_gpr[18] = (31068u << 16u);
    (void)(aot_gpr[3] & 25440u);
    rt.unsupported(0x08A6B590u, 0x79747B7Eu, "unknown not lowered yet"); return;
L_08A6B5A0:
    rt.unsupported(0x08A6B5A0u, 0x47656353u, "cop1? not lowered yet"); return;
L_08A6B5C0:
    rt.unsupported(0x08A6B5C0u, 0x0032FFF9u, "special? not lowered yet"); return;
L_08A6B5CC:
    rt.unsupported(0x08A6B5CCu, 0x050A0609u, "regimm? not lowered yet"); return;
L_08A6B5EC:
    // nop
    // nop
    // nop
    // nop
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<51u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(-936);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<51u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[14] + static_cast<std::uint32_t>(-1328);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    rt.unsupported(0x08A6B62Cu, 0xF7DDF8D3u, "vfpu not lowered yet"); return;
L_08A6B680:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A6B684u, 0x20666F20u, "unknown not lowered yet"); return;
L_08A6B6A0:
    rt.unsupported(0x08A6B6A0u, 0x00003930u, "special? not lowered yet"); return;
L_08A6B6F0:
    rt.unsupported(0x08A6B6F4u, 0x08988AACu, "control flow in delay slot"); return;
L_08A6B710:
    rt.unsupported(0x08A6B714u, 0x08989C40u, "control flow in delay slot"); return;
L_08A6B724:
    rt.unsupported(0x08A6B728u, 0x0898D12Cu, "control flow in delay slot"); return;
L_08A6B754:
    // nop
    // nop
    goto L_08A6B75C;
L_08A6B75C:
    rt.unsupported(0x08A6B760u, 0x08994AB8u, "control flow in delay slot"); return;
L_08A6B92C:
    rt.unsupported(0x08A6B92Cu, 0x71717171u, "unknown not lowered yet"); return;
L_08A6B984:
    rt.unsupported(0x08A6B984u, 0x635F7472u, "vfpu0 not lowered yet"); return;
L_08A6B9B0:
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(-32208), aot_gpr[3]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-32208), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool signed_ok = ctx.execute_signed_add(0u, 8u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6B9B8u, 0x010203A0u); return; } }
    (void)(aot_gpr[20] >> 8u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u & 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[16]) < 1549 ? 1u : 0u);
    rt.unsupported(0x08A6B9D8u, 0xF7864886u, "vfpu not lowered yet"); return;
L_08A6B9E4:
    aot_gpr[11] = (0u & 12694u);
    if (aot_gpr[8] != aot_gpr[3]) {
    (void)(aot_gpr[19] << (aot_gpr[16] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0617_entry, 617u, 15u, 0x08A6D210u>(ctx, &aot_mem); return;
    }
    goto L_08A6B9F0;
L_08A6B9F0:
    rt.unsupported(0x08A6B9F4u, 0x03060930u, "special? not lowered yet"); return;
    ctx.pc = 0x0CC54D54u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A6BC9C:
    rt.unsupported(0x08A6BC9Cu, 0xF4655E9Bu, "vfpu not lowered yet"); return;
L_08A6BCB4:
    if (aot_gpr[14] == aot_gpr[3]) {
    rt.unsupported(0x08A6BCB8u, 0x21871714u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0616_entry, 616u, 51u, 0x08A6C6D8u>(ctx, &aot_mem); return;
    }
    goto L_08A6BCBC;
L_08A6BCBC:
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 43u, 3u);
      ctx.read_vfpu_matrix(vfpu_t, 80u, 3u);
      for (std::uint32_t a = 0; a < 3u; ++a) {
        for (std::uint32_t b = 0; b < 3u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 3u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 52u, 3u);
      ctx.eat_vfpu_prefixes(); }
    rt.memory().aot_store_word_right(aot_gpr[11] + static_cast<std::uint32_t>(-14856), aot_gpr[15]);
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(5326))))));
    rt.unsupported(0x08A6BCC8u, 0x79406E77u, "unknown not lowered yet"); return;
L_08A6BCD8:
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08A6BCDCu, 0x4CD6A137u, "unknown not lowered yet"); return;
L_08A6BCF4:
    aot_gpr[31] = (0x08A6BCFCu);
    rt.unsupported(0x08A6BCF8u, 0xD3EFBE79u, "vfpu4 not lowered yet"); return;
    ctx.pc = 0x0260C898u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6BCFCu) goto L_08A6BCFC;
    return;
L_08A6BCFC:
    rt.memory().aot_store_word_left(aot_gpr[4] + static_cast<std::uint32_t>(-4802), aot_gpr[2]);
    rt.unsupported(0x08A6BD00u, 0x679A6EB3u, "vfpu1 not lowered yet"); return;
L_08A6BD38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(17740)));
    rt.unsupported(0x08A6BD3Cu, 0xED4F1AEAu, "unknown not lowered yet"); return;
L_08A6BD70:
    rt.unsupported(0x08A6BD70u, 0x635F7472u, "vfpu0 not lowered yet"); return;
L_08A6BD94:
    // nop
    goto L_08A6BD98;
L_08A6BD98:
    ctx.set_vfpu_scalar_bits_ct<35u>(PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(11816)));
    { const bool signed_ok = ctx.execute_signed_sub(27u, 11u, 28u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6BD9Cu, 0x017CD8A2u); return; } }
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(13885), static_cast<std::uint8_t>(aot_gpr[20]));
    { const bool branch_taken = aot_gpr[24] == aot_gpr[6];
    rt.unsupported(0x08A6BDA8u, 0xF305A762u, "vfpu6 not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0612_entry, 612u, 20u, 0x08A68158u>(ctx, &aot_mem); return;
      }
      goto L_08A6BDAC;
    }
L_08A6BDAC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14400)));
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(-27752);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    ctx.set_vfpu_scalar_bits_ct<2u>(PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(19644)));
    aot_gpr[23] = (39710u << 16u);
    rt.unsupported(0x08A6BDC0u, 0x186F4267u, "control flow in delay slot"); return;
L_08A6BDC4:
    { const bool branch_taken = aot_gpr[23] == aot_gpr[5];
    rt.unsupported(0x08A6BDC8u, 0xD6C44EBEu, "vfpu not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0621_entry, 621u, 106u, 0x08A71BF0u>(ctx, &aot_mem); return;
      }
      goto L_08A6BDCC;
    }
L_08A6BDCC:
    rt.unsupported(0x08A6BDCCu, 0x49DE9EDAu, "cop2/vfpu not lowered yet"); return;
L_08A6BE14:
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 116u, 3u);
      ctx.read_vfpu_vector_ct<4u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 2u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 28u, vfpu_side); }
    if (static_cast<std::int32_t>(aot_gpr[11]) <= 0) {
    rt.unsupported(0x08A6BE1Cu, 0x20877164u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 46u, 0x08A53330u>(ctx, &aot_mem); return;
    }
    goto L_08A6BE20;
L_08A6BE20:
    rt.unsupported(0x08A6BE20u, 0x65CF5B86u, "vfpu1 not lowered yet"); return;
L_08A6BE3C:
    aot_gpr[15] = (aot_gpr[21] ^ 20957u);
    rt.unsupported(0x08A6BE40u, 0xCEF95CC3u, "unknown not lowered yet"); return;
L_08A6BE98:
    aot_gpr[26] = (aot_gpr[9] | 14129u);
    aot_gpr[18] = (aot_gpr[1] ^ 14904u);
    rt.unsupported(0x08A6BEA0u, 0x79614D20u, "unknown not lowered yet"); return;
L_08A6BEB0:
    rt.unsupported(0x08A6BEB4u, 0x089A0CA0u, "control flow in delay slot"); return;
L_08A6BF44:
    rt.unsupported(0x08A6BF48u, 0x089A2C24u, "control flow in delay slot"); return;
L_08A6BF60:
    (void)(0u << 24u);
    (void)(0u << 16u);
    rt.unsupported(0x08A6BF68u, 0x00000001u, "special? not lowered yet"); return;
}

void recomp_unit_0615(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0615_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_615(Runtime &runtime) {
    runtime.register_generated_unit(615u, 0x08A6B000u, 4096u, &recomp_unit_0615, &recomp_unit_0615_entry);
    runtime.register_function(0x08A6B000u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B010u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B01Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B02Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B038u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B060u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B070u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B0A8u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B0C4u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B0D4u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B0ECu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B100u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B11Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B12Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B140u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B15Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B174u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B18Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B1B0u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B1C4u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B1E0u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B208u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B218u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B22Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B23Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B248u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B260u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B274u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B290u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B2B4u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B2C8u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B2E0u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B304u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B318u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B338u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B348u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B354u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B35Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B360u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B36Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B374u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B380u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B390u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B3F8u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B428u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B478u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B480u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B490u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B498u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B4A0u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B528u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B538u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B540u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B554u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B55Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B56Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B5A0u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B5C0u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B5CCu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B5ECu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B680u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B6A0u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B6F0u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B710u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B724u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B754u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B75Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B92Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B984u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B9B0u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B9E4u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6B9F0u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BC9Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BCB4u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BCBCu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BCD8u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BCF4u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BCFCu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BD38u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BD70u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BD94u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BD98u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BDACu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BDC4u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BDCCu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BE14u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BE20u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BE3Cu, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BE98u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BEB0u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BF44u, &recomp_unit_0615, "recomp_unit_0615");
    runtime.register_function(0x08A6BF60u, &recomp_unit_0615, "recomp_unit_0615");
}
} // namespace psprecomp
