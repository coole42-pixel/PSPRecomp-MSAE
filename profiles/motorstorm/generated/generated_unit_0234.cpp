#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0234[1015] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0,
    0, 6, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0,
    0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 28, 0,
    0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 37, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 43, 0, 0, 44, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0,
    0, 52, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0,
    65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86,
    0, 87, 0, 88, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 94, 0, 95, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0,
    0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 136,
    0, 137, 0, 138, 0, 139, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177,
};
void recomp_unit_0234_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088EE000u;
        entry_id = (entry_delta < 4060u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0234[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088EE000;
    case 2u: goto L_088EE024;
    case 3u: goto L_088EE054;
    case 4u: goto L_088EE068;
    case 5u: goto L_088EE070;
    case 6u: goto L_088EE084;
    case 7u: goto L_088EE088;
    case 8u: goto L_088EE094;
    case 9u: goto L_088EE0C0;
    case 10u: goto L_088EE0C4;
    case 11u: goto L_088EE0EC;
    case 12u: goto L_088EE0F4;
    case 13u: goto L_088EE108;
    case 14u: goto L_088EE110;
    case 15u: goto L_088EE118;
    case 16u: goto L_088EE140;
    case 17u: goto L_088EE170;
    case 18u: goto L_088EE1E4;
    case 19u: goto L_088EE2E4;
    case 20u: goto L_088EE2F4;
    case 21u: goto L_088EE314;
    case 22u: goto L_088EE324;
    case 23u: goto L_088EE328;
    case 24u: goto L_088EE334;
    case 25u: goto L_088EE344;
    case 26u: goto L_088EE364;
    case 27u: goto L_088EE374;
    case 28u: goto L_088EE378;
    case 29u: goto L_088EE384;
    case 30u: goto L_088EE394;
    case 31u: goto L_088EE3B4;
    case 32u: goto L_088EE3C4;
    case 33u: goto L_088EE3C8;
    case 34u: goto L_088EE3D4;
    case 35u: goto L_088EE3E4;
    case 36u: goto L_088EE404;
    case 37u: goto L_088EE414;
    case 38u: goto L_088EE418;
    case 39u: goto L_088EE424;
    case 40u: goto L_088EE434;
    case 41u: goto L_088EE454;
    case 42u: goto L_088EE464;
    case 43u: goto L_088EE468;
    case 44u: goto L_088EE474;
    case 45u: goto L_088EE484;
    case 46u: goto L_088EE4A4;
    case 47u: goto L_088EE4B4;
    case 48u: goto L_088EE4B8;
    case 49u: goto L_088EE4C4;
    case 50u: goto L_088EE4D4;
    case 51u: goto L_088EE4F4;
    case 52u: goto L_088EE504;
    case 53u: goto L_088EE508;
    case 54u: goto L_088EE514;
    case 55u: goto L_088EE528;
    case 56u: goto L_088EE558;
    case 57u: goto L_088EE56C;
    case 58u: goto L_088EE598;
    case 59u: goto L_088EE5A0;
    case 60u: goto L_088EE5B4;
    case 61u: goto L_088EE5C8;
    case 62u: goto L_088EE5E4;
    case 63u: goto L_088EE5EC;
    case 64u: goto L_088EE5F8;
    case 65u: goto L_088EE600;
    case 66u: goto L_088EE610;
    case 67u: goto L_088EE630;
    case 68u: goto L_088EE63C;
    case 69u: goto L_088EE650;
    case 70u: goto L_088EE65C;
    case 71u: goto L_088EE670;
    case 72u: goto L_088EE6AC;
    case 73u: goto L_088EE6B4;
    case 74u: goto L_088EE6D0;
    case 75u: goto L_088EE6DC;
    case 76u: goto L_088EE6F0;
    case 77u: goto L_088EE70C;
    case 78u: goto L_088EE750;
    case 79u: goto L_088EE784;
    case 80u: goto L_088EE7A4;
    case 81u: goto L_088EE7AC;
    case 82u: goto L_088EE7C0;
    case 83u: goto L_088EE7CC;
    case 84u: goto L_088EE7D8;
    case 85u: goto L_088EE7EC;
    case 86u: goto L_088EE7FC;
    case 87u: goto L_088EE804;
    case 88u: goto L_088EE80C;
    case 89u: goto L_088EE810;
    case 90u: goto L_088EE818;
    case 91u: goto L_088EE840;
    case 92u: goto L_088EE860;
    case 93u: goto L_088EE868;
    case 94u: goto L_088EE86C;
    case 95u: goto L_088EE874;
    case 96u: goto L_088EE8C8;
    case 97u: goto L_088EE8E8;
    case 98u: goto L_088EE8F4;
    case 99u: goto L_088EE908;
    case 100u: goto L_088EE918;
    case 101u: goto L_088EE920;
    case 102u: goto L_088EE930;
    case 103u: goto L_088EE938;
    case 104u: goto L_088EE950;
    case 105u: goto L_088EE968;
    case 106u: goto L_088EE970;
    case 107u: goto L_088EE984;
    case 108u: goto L_088EE9A0;
    case 109u: goto L_088EE9A8;
    case 110u: goto L_088EE9B0;
    case 111u: goto L_088EE9C4;
    case 112u: goto L_088EE9DC;
    case 113u: goto L_088EE9E8;
    case 114u: goto L_088EE9F0;
    case 115u: goto L_088EEA00;
    case 116u: goto L_088EEA1C;
    case 117u: goto L_088EEA30;
    case 118u: goto L_088EEA34;
    case 119u: goto L_088EEA4C;
    case 120u: goto L_088EEA60;
    case 121u: goto L_088EEA84;
    case 122u: goto L_088EEA8C;
    case 123u: goto L_088EEA98;
    case 124u: goto L_088EEAA8;
    case 125u: goto L_088EEAC8;
    case 126u: goto L_088EEAD0;
    case 127u: goto L_088EEB00;
    case 128u: goto L_088EEB44;
    case 129u: goto L_088EEB5C;
    case 130u: goto L_088EEBB4;
    case 131u: goto L_088EEBC4;
    case 132u: goto L_088EEBCC;
    case 133u: goto L_088EEBDC;
    case 134u: goto L_088EEBE4;
    case 135u: goto L_088EEBF4;
    case 136u: goto L_088EEBFC;
    case 137u: goto L_088EEC04;
    case 138u: goto L_088EEC0C;
    case 139u: goto L_088EEC14;
    case 140u: goto L_088EEC18;
    case 141u: goto L_088EEC28;
    case 142u: goto L_088EEC30;
    case 143u: goto L_088EEC48;
    case 144u: goto L_088EEC54;
    case 145u: goto L_088EEC5C;
    case 146u: goto L_088EEC88;
    case 147u: goto L_088EEC98;
    case 148u: goto L_088EECA4;
    case 149u: goto L_088EECAC;
    case 150u: goto L_088EECD0;
    case 151u: goto L_088EECDC;
    case 152u: goto L_088EECE4;
    case 153u: goto L_088EECEC;
    case 154u: goto L_088EED0C;
    case 155u: goto L_088EED1C;
    case 156u: goto L_088EED24;
    case 157u: goto L_088EED3C;
    case 158u: goto L_088EED54;
    case 159u: goto L_088EED88;
    case 160u: goto L_088EEDB0;
    case 161u: goto L_088EEDB8;
    case 162u: goto L_088EEDF8;
    case 163u: goto L_088EEE14;
    case 164u: goto L_088EEE1C;
    case 165u: goto L_088EEE50;
    case 166u: goto L_088EEE58;
    case 167u: goto L_088EEE68;
    case 168u: goto L_088EEEA8;
    case 169u: goto L_088EEEB0;
    case 170u: goto L_088EEEC0;
    case 171u: goto L_088EEF08;
    case 172u: goto L_088EEF20;
    case 173u: goto L_088EEF38;
    case 174u: goto L_088EEF48;
    case 175u: goto L_088EEF84;
    case 176u: goto L_088EEFC8;
    case 177u: goto L_088EEFD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088EE000:
    ctx.execute_vfpu_vscl_ct<23u, 23u, 16u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<23u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(416)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(424)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE140;
      }
      goto L_088EE024;
    }
L_088EE024:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<23u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<24u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 23u, 24u, 3u>();
    aot_gpr[7] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[7] = (16384u << 16u);
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_088EE088;
      }
      goto L_088EE054;
    }
L_088EE054:
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2120)));
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EE070;
      }
      goto L_088EE068;
    }
L_088EE068:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2124)));
      if (branch_taken) {
          goto L_088EE088;
      }
      goto L_088EE070;
    }
L_088EE070:
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2128)));
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EE088;
      }
      goto L_088EE084;
    }
L_088EE084:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2132)));
    goto L_088EE088;
L_088EE088:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2208)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE0C4;
      }
      goto L_088EE094;
    }
L_088EE094:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2236)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<24u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 23u, 24u, 3u>();
    aot_gpr[7] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2240)));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[17] <= aot_fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EE0C4;
      }
      goto L_088EE0C0;
    }
L_088EE0C0:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088EE0C4;
L_088EE0C4:
    ctx.execute_vfpu_vdot_ct<16u, 22u, 21u, 3u>();
    aot_gpr[7] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]) & 0x7FFFFFFFu);
    aot_gpr[7] = (16752u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[17] < aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[7] = (16624u << 16u);
      if (branch_taken) {
          goto L_088EE0F4;
      }
      goto L_088EE0EC;
    }
L_088EE0EC:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
      if (branch_taken) {
          goto L_088EE118;
      }
      goto L_088EE0F4;
    }
L_088EE0F4:
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[17] <= aot_fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[17] = aot_fpr[17] - aot_fpr[16];
        goto L_088EE110;
    }
    goto L_088EE108;
L_088EE108:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
      if (branch_taken) {
          goto L_088EE118;
      }
      goto L_088EE110;
    }
L_088EE110:
    aot_fpr[16] = aot_fpr[17] / aot_fpr[16];
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    goto L_088EE118;
L_088EE118:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2096)));
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[7]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088EE140;
L_088EE140:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(356)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE170:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(22u, 20u, 21u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2112)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 22u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088EE1E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 23u, 0x088842C4u>(ctx, &aot_mem) && ctx.pc == 0x088EE1E4u) goto L_088EE1E4;
    return;
L_088EE1E4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2116)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
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
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
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
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE2E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088EE2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 71u, 0x088EB668u>(ctx, &aot_mem) && ctx.pc == 0x088EE2F4u) goto L_088EE2F4;
    return;
L_088EE2F4:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32716)));
    aot_gpr[4] = (2216u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32720)));
      if (branch_taken) {
          goto L_088EE328;
      }
      goto L_088EE314;
    }
L_088EE314:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088EE324;
    }
    goto L_088EE324;
L_088EE324:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088EE328;
L_088EE328:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE334:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088EE344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 71u, 0x088EB668u>(ctx, &aot_mem) && ctx.pc == 0x088EE344u) goto L_088EE344;
    return;
L_088EE344:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32700)));
    aot_gpr[4] = (2216u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32704)));
      if (branch_taken) {
          goto L_088EE378;
      }
      goto L_088EE364;
    }
L_088EE364:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088EE374;
    }
    goto L_088EE374;
L_088EE374:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088EE378;
L_088EE378:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088EE394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 71u, 0x088EB668u>(ctx, &aot_mem) && ctx.pc == 0x088EE394u) goto L_088EE394;
    return;
L_088EE394:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32692)));
    aot_gpr[4] = (2216u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32696)));
      if (branch_taken) {
          goto L_088EE3C8;
      }
      goto L_088EE3B4;
    }
L_088EE3B4:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088EE3C4;
    }
    goto L_088EE3C4;
L_088EE3C4:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088EE3C8;
L_088EE3C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE3D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088EE3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 71u, 0x088EB668u>(ctx, &aot_mem) && ctx.pc == 0x088EE3E4u) goto L_088EE3E4;
    return;
L_088EE3E4:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32684)));
    aot_gpr[4] = (2216u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32688)));
      if (branch_taken) {
          goto L_088EE418;
      }
      goto L_088EE404;
    }
L_088EE404:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088EE414;
    }
    goto L_088EE414;
L_088EE414:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088EE418;
L_088EE418:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE424:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088EE434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 71u, 0x088EB668u>(ctx, &aot_mem) && ctx.pc == 0x088EE434u) goto L_088EE434;
    return;
L_088EE434:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32660)));
    aot_gpr[4] = (2216u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32664)));
      if (branch_taken) {
          goto L_088EE468;
      }
      goto L_088EE454;
    }
L_088EE454:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088EE464;
    }
    goto L_088EE464;
L_088EE464:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088EE468;
L_088EE468:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE474:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088EE484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 71u, 0x088EB668u>(ctx, &aot_mem) && ctx.pc == 0x088EE484u) goto L_088EE484;
    return;
L_088EE484:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32652)));
    aot_gpr[4] = (2216u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32656)));
      if (branch_taken) {
          goto L_088EE4B8;
      }
      goto L_088EE4A4;
    }
L_088EE4A4:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088EE4B4;
    }
    goto L_088EE4B4;
L_088EE4B4:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088EE4B8;
L_088EE4B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE4C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088EE4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 71u, 0x088EB668u>(ctx, &aot_mem) && ctx.pc == 0x088EE4D4u) goto L_088EE4D4;
    return;
L_088EE4D4:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32644)));
    aot_gpr[4] = (2216u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32648)));
      if (branch_taken) {
          goto L_088EE508;
      }
      goto L_088EE4F4;
    }
L_088EE4F4:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088EE504;
    }
    goto L_088EE504;
L_088EE504:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088EE508;
L_088EE508:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE514:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088EE528u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 71u, 0x088EB668u>(ctx, &aot_mem) && ctx.pc == 0x088EE528u) goto L_088EE528;
    return;
L_088EE528:
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32632)));
    aot_gpr[4] = (2216u << 16u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32636)));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32640)));
    aot_gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088EE56C;
      }
      goto L_088EE558;
    }
L_088EE558:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088EE56C;
    }
    goto L_088EE56C;
L_088EE56C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_gpr[5] = (16352u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(408)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088EE5A0;
    }
    goto L_088EE598;
L_088EE598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE5B4;
      }
      goto L_088EE5A0;
    }
L_088EE5A0:
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088EE5B4;
    }
    goto L_088EE5B4;
L_088EE5B4:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE5C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088EE5EC;
      }
      goto L_088EE5E4;
    }
L_088EE5E4:
    aot_gpr[4] = (65280u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(255));
    goto L_088EE5EC;
L_088EE5EC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088EE5F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 156u, 0x08881D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE5F8u) goto L_088EE5F8;
    return;
L_088EE5F8:
    aot_gpr[31] = (0x088EE600u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 29u, 0x088ED3CCu>(ctx, &aot_mem) && ctx.pc == 0x088EE600u) goto L_088EE600;
    return;
L_088EE600:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE610:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088EE630u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 136u, 0x0894BA84u>(ctx, &aot_mem) && ctx.pc == 0x088EE630u) goto L_088EE630;
    return;
L_088EE630:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (0x088EE63Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 138u, 0x0894BAACu>(ctx, &aot_mem) && ctx.pc == 0x088EE63Cu) goto L_088EE63C;
    return;
L_088EE63C:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088EE650u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 104u, 0x0894B814u>(ctx, &aot_mem) && ctx.pc == 0x088EE650u) goto L_088EE650;
    return;
L_088EE650:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(160));
    aot_gpr[31] = (0x088EE65Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 2u, 0x08945028u>(ctx, &aot_mem) && ctx.pc == 0x088EE65Cu) goto L_088EE65C;
    return;
L_088EE65C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE670:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_gpr[4] = (14979u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_fpu_condition((aot_fpr[24] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_088EE6B4;
      }
      goto L_088EE6AC;
    }
L_088EE6AC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088EE6F0;
      }
      goto L_088EE6B4;
    }
L_088EE6B4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x088EE6D0u);
    aot_fpr[12] = aot_fpr[24] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088EE6D0u) goto L_088EE6D0;
    return;
L_088EE6D0:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[31] = (0x088EE6DCu);
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088EE6DCu) goto L_088EE6DC;
    return;
L_088EE6DC:
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = aot_fpr[12] / aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x088EE6F0u);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 125u, 0x08A2F89Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE6F0u) goto L_088EE6F0;
    return;
L_088EE6F0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE70C:
    aot_gpr[6] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(432));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(272)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(284)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = aot_fpr[14] - aot_fpr[13];
    aot_fpr[0] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[15] - aot_fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE750:
    aot_gpr[7] = (aot_gpr[6] << 7u);
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[6] = (aot_gpr[7] - aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(750)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE7A4;
      }
      goto L_088EE784;
    }
L_088EE784:
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(544));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088EE7A4;
L_088EE7A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE7AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(424)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (15395u << 16u);
      if (branch_taken) {
          goto L_088EE80C;
      }
      goto L_088EE7C0;
    }
L_088EE7C0:
    aot_gpr[7] = (aot_gpr[7] | 55050u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(432));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    goto L_088EE7CC;
L_088EE7CC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(318)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE7EC;
      }
      goto L_088EE7D8;
    }
L_088EE7D8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EE804;
      }
      goto L_088EE7EC;
    }
L_088EE7EC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_088EE7CC;
      }
      goto L_088EE7FC;
    }
L_088EE7FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE80C;
      }
      goto L_088EE804;
    }
L_088EE804:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088EE810;
      }
      goto L_088EE80C;
    }
L_088EE80C:
    aot_gpr[2] = (0u | 0u);
    goto L_088EE810;
L_088EE810:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE818:
    aot_gpr[6] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(432));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(318)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE868;
      }
      goto L_088EE840;
    }
L_088EE840:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (15395u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EE868;
      }
      goto L_088EE860;
    }
L_088EE860:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088EE86C;
      }
      goto L_088EE868;
    }
L_088EE868:
    aot_gpr[2] = (0u | 0u);
    goto L_088EE86C;
L_088EE86C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE874:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2136)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2137), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[4] & 128u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    aot_gpr[7] = (16256u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_088EE9F0;
      }
      goto L_088EE8C8;
    }
L_088EE8C8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2168)));
    aot_gpr[6] = (0u | 1u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2136), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2080)));
    aot_fpr[22] = aot_fpr[20] / aot_fpr[22];
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2168), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088EE8F4;
      }
      goto L_088EE8E8;
    }
L_088EE8E8:
    aot_gpr[5] = (16192u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    goto L_088EE8F4;
L_088EE8F4:
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE918;
      }
      goto L_088EE908;
    }
L_088EE908:
    aot_gpr[4] = (16576u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_088EE950;
      }
      goto L_088EE918;
    }
L_088EE918:
    aot_gpr[31] = (0x088EE920u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088EE3D4;
L_088EE920:
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EE950;
      }
      goto L_088EE930;
    }
L_088EE930:
    aot_gpr[31] = (0x088EE938u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088EE3D4;
L_088EE938:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    goto L_088EE950;
L_088EE950:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2140)));
    aot_fpr[22] = aot_fpr[12] + aot_fpr[22];
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2140), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_088EE970;
      }
      goto L_088EE968;
    }
L_088EE968:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088EE970;
      }
      goto L_088EE970;
    }
L_088EE970:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2140), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2148), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088EE9B0;
      }
      goto L_088EE984;
    }
L_088EE984:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (4u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2144)));
      if (branch_taken) {
          goto L_088EE9A8;
      }
      goto L_088EE9A0;
    }
L_088EE9A0:
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_088EE9A8;
L_088EE9A8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[24] = aot_fpr[12] + aot_fpr[20];
      if (branch_taken) {
          goto L_088EE9B0;
      }
      goto L_088EE9B0;
    }
L_088EE9B0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2092)));
    ctx.set_fpu_condition((aot_fpr[24] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2144), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088EE9E8;
      }
      goto L_088EE9C4;
    }
L_088EE9C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] & 16u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE9E8;
      }
      goto L_088EE9DC;
    }
L_088EE9DC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088EE9E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 46u, 0x088ED59Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE9E8u) goto L_088EE9E8;
    return;
L_088EE9E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EEAA8;
      }
      goto L_088EE9F0;
    }
L_088EE9F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2168), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2136), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088EEA30;
      }
      goto L_088EEA00;
    }
L_088EEA00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (16u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (32u << 16u);
      if (branch_taken) {
          goto L_088EEA30;
      }
      goto L_088EEA1C;
    }
L_088EEA1C:
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EEA34;
      }
      goto L_088EEA30;
    }
L_088EEA30:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2088)));
    goto L_088EEA34;
L_088EEA34:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[20];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2148), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088EEA60;
      }
      goto L_088EEA4C;
    }
L_088EEA4C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2144)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[24])) && aot_fpr[13] == aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EEA98;
      }
      goto L_088EEA60;
    }
L_088EEA60:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2084)));
    aot_fpr[20] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2140)));
    aot_fpr[20] = aot_fpr[14] - aot_fpr[20];
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2140), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_088EEA8C;
      }
      goto L_088EEA84;
    }
L_088EEA84:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088EEA8C;
      }
      goto L_088EEA8C;
    }
L_088EEA8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2140), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2144), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088EEAA8;
      }
      goto L_088EEA98;
    }
L_088EEA98:
    aot_gpr[4] = (16253u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 28836u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088EEAA8;
L_088EEAA8:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEAC8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEAD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2996)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(496)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 5 ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
      if (branch_taken) {
          goto L_088EED24;
      }
      goto L_088EEB00;
    }
L_088EEB00:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
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
    aot_gpr[10] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_gpr[10] = (16544u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[6] = (0u | 1u);
        goto L_088EEB44;
    }
    goto L_088EEB44;
L_088EEB44:
    aot_gpr[2] = (16256u << 16u);
    aot_gpr[11] = (0u | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_088EEC48;
      }
      goto L_088EEB5C;
    }
L_088EEB5C:
    aot_gpr[16] = (16332u << 16u);
    aot_gpr[16] = (aot_gpr[16] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[16]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (16117u << 16u);
    aot_gpr[16] = (aot_gpr[16] | 49807u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[16]);
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(432));
    aot_gpr[16] = (16640u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[16]);
    aot_gpr[25] = (0u | 4u);
    aot_gpr[16] = (16128u << 16u);
    aot_gpr[24] = (0u | 13u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[16]);
    aot_gpr[15] = (0u | 2u);
    aot_gpr[14] = (0u | 5u);
    aot_gpr[13] = (0u | 1u);
    aot_gpr[12] = (0u | 7u);
    aot_gpr[3] = (0u | 8u);
    aot_gpr[2] = (0u | 9u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(224));
    aot_gpr[17] = (aot_gpr[29] | 0u);
    goto L_088EEBB4;
L_088EEBB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (aot_gpr[16] & 15u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[25];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_088EEBCC;
      }
      goto L_088EEBC4;
    }
L_088EEBC4:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[24];
    // nop
      if (branch_taken) {
          goto L_088EEBDC;
      }
      goto L_088EEBCC;
    }
L_088EEBCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(644), aot_gpr[15]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(648), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_088EEC30;
      }
      goto L_088EEBDC;
    }
L_088EEBDC:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[14];
    // nop
      if (branch_taken) {
          goto L_088EEBF4;
      }
      goto L_088EEBE4;
    }
L_088EEBE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(644), aot_gpr[13]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(648), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_088EEC30;
      }
      goto L_088EEBF4;
    }
L_088EEBF4:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[12];
    // nop
      if (branch_taken) {
          goto L_088EEC0C;
      }
      goto L_088EEBFC;
    }
L_088EEBFC:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_088EEC0C;
      }
      goto L_088EEC04;
    }
L_088EEC04:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088EEC28;
      }
      goto L_088EEC0C;
    }
L_088EEC0C:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[12];
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088EEC18;
      }
      goto L_088EEC14;
    }
L_088EEC14:
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088EEC18;
L_088EEC18:
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(644), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(648), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_088EEC30;
      }
      goto L_088EEC28;
    }
L_088EEC28:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(644), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(648), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088EEC30;
L_088EEC30:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(336));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(336));
    aot_gpr[16] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088EEBB4;
      }
      goto L_088EEC48;
    }
L_088EEC48:
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088EEC88;
      }
      goto L_088EEC54;
    }
L_088EEC54:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EEC88;
      }
      goto L_088EEC5C;
    }
L_088EEC5C:
    aot_gpr[5] = (aot_gpr[5] | 2u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(400), aot_gpr[5]);
    aot_gpr[5] = (15523u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(392), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(396), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088EED1C;
      }
      goto L_088EEC88;
    }
L_088EEC88:
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[10]);
      if (branch_taken) {
          goto L_088EECD0;
      }
      goto L_088EEC98;
    }
L_088EEC98:
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EECD0;
      }
      goto L_088EECA4;
    }
L_088EECA4:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EECD0;
      }
      goto L_088EECAC;
    }
L_088EECAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(400), aot_gpr[5]);
    aot_gpr[5] = (15395u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(392), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(396), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088EED1C;
      }
      goto L_088EECD0;
    }
L_088EECD0:
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088EED0C;
      }
      goto L_088EECDC;
    }
L_088EECDC:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EED0C;
      }
      goto L_088EECE4;
    }
L_088EECE4:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EED0C;
      }
      goto L_088EECEC;
    }
L_088EECEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    aot_gpr[5] = (15395u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(400), 0u);
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(392), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(396), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088EED1C;
      }
      goto L_088EED0C;
    }
L_088EED0C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(392), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(396), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088EED1C;
L_088EED1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EED3C;
      }
      goto L_088EED24;
    }
L_088EED24:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(392), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(396), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    goto L_088EED3C;
L_088EED3C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EED54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[6] = (aot_gpr[6] & 2u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(392)));
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(400)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(424)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088EEDB0;
      }
      goto L_088EED88;
    }
L_088EED88:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(648)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(644)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(336));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(424)));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088EED88;
      }
      goto L_088EEDB0;
    }
L_088EEDB0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEDB8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(424)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    aot_gpr[5] = (16668u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(356)));
    aot_gpr[7] = (aot_gpr[5] | 62915u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = aot_gpr[8] == 0u;
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088EEE14;
      }
      goto L_088EEDF8;
    }
L_088EEDF8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(600)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(336));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_fpr[0] = aot_fpr[0] + aot_fpr[14];
      if (branch_taken) {
          goto L_088EEDF8;
      }
      goto L_088EEE14;
    }
L_088EEE14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEE1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-6352));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6332), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6336), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6320), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6324), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6328), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6340), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6344), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6348), aot_gpr[31]);
    aot_gpr[31] = (0x088EEE50u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 102u, 0x0882F8C0u>(ctx, &aot_mem) && ctx.pc == 0x088EEE50u) goto L_088EEE50;
    return;
L_088EEE50:
    aot_gpr[31] = (0x088EEE58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 165u, 0x0894BC10u>(ctx, &aot_mem) && ctx.pc == 0x088EEE58u) goto L_088EEE58;
    return;
L_088EEE58:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (32639u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0235_entry, 235u, 24u, 0x088EF234u>(ctx, &aot_mem); return;
      }
      goto L_088EEE68;
    }
L_088EEE68:
    aot_gpr[4] = (aot_gpr[4] | 65535u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (65407u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6144), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6148), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6152), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6160), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6164), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6168), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_088EEF20;
      }
      goto L_088EEEA8;
    }
L_088EEEA8:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    goto L_088EEEB0;
L_088EEEB0:
    aot_gpr[9] = (aot_gpr[8] << 4u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[29] + aot_gpr[9]);
    goto L_088EEEC0;
L_088EEEC0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(16));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[7]);
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(6144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(20u, 21u, 20u, 3u, false);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(6144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(6160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(20u, 20u, 21u, 3u, true);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(6160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[10] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088EEEC0;
      }
      goto L_088EEF08;
    }
L_088EEF08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088EEEB0;
      }
      goto L_088EEF20;
    }
L_088EEF20:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(6144));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(6160));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088EEF38u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 54u, 0x089404C8u>(ctx, &aot_mem) && ctx.pc == 0x088EEF38u) goto L_088EEF38;
    return;
L_088EEF38:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0235_entry, 235u, 24u, 0x088EF234u>(ctx, &aot_mem); return;
      }
      goto L_088EEF48;
    }
L_088EEF48:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (16204u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6176), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6180), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[8] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6184), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(424)));
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0235_entry, 235u, 2u, 0x088EF014u>(ctx, &aot_mem); return;
      }
      goto L_088EEF84;
    }
L_088EEF84:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(544));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6272), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6276), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6276), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6280), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(6272);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[7] = (ctx.vfpu_scalar_bits_ct<16u>());
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(6176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EEFD8;
      }
      goto L_088EEFC8;
    }
L_088EEFC8:
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(6272);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088EEFD8;
L_088EEFD8:
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 22u, 20u, 3u>();
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 22u, 20u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    ctx.pc = 0x088EF000u; return;
}

void recomp_unit_0234(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0234_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_234(Runtime &runtime) {
    runtime.register_generated_unit(234u, 0x088EE000u, 4096u, &recomp_unit_0234, &recomp_unit_0234_entry);
    runtime.register_function(0x088EE000u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE024u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE054u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE068u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE070u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE084u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE088u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE094u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE0C0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE0C4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE0ECu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE0F4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE108u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE110u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE118u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE140u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE170u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE1E4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE2E4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE2F4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE314u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE324u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE328u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE334u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE344u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE364u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE374u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE378u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE384u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE394u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE3B4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE3C4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE3C8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE3D4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE3E4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE404u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE414u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE418u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE424u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE434u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE454u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE464u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE468u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE474u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE484u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE4A4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE4B4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE4B8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE4C4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE4D4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE4F4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE504u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE508u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE514u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE528u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE558u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE56Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE598u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE5A0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE5B4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE5C8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE5E4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE5ECu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE5F8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE600u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE610u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE630u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE63Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE650u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE65Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE670u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE6ACu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE6B4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE6D0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE6DCu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE6F0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE70Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE750u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE784u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE7A4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE7ACu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE7C0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE7CCu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE7D8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE7ECu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE7FCu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE804u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE80Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE810u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE818u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE840u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE860u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE868u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE86Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE874u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE8C8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE8E8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE8F4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE908u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE918u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE920u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE930u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE938u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE950u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE968u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE970u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE984u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE9A0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE9A8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE9B0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE9C4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE9DCu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE9E8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EE9F0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEA00u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEA1Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEA30u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEA34u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEA4Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEA60u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEA84u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEA8Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEA98u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEAA8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEAC8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEAD0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEB00u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEB44u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEB5Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEBB4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEBC4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEBCCu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEBDCu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEBE4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEBF4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEBFCu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEC04u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEC0Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEC14u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEC18u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEC28u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEC30u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEC48u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEC54u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEC5Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEC88u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEC98u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EECA4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EECACu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EECD0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EECDCu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EECE4u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EECECu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EED0Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EED1Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EED24u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EED3Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EED54u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EED88u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEDB0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEDB8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEDF8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEE14u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEE1Cu, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEE50u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEE58u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEE68u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEEA8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEEB0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEEC0u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEF08u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEF20u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEF38u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEF48u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEF84u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEFC8u, &recomp_unit_0234, "recomp_unit_0234");
    runtime.register_function(0x088EEFD8u, &recomp_unit_0234, "recomp_unit_0234");
}
} // namespace psprecomp
