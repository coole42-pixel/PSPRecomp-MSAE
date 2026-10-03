#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0261[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 20, 0, 0, 21, 0, 22, 23, 0, 24, 0, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29,
    0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 37, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 70, 0,
    0, 71, 0, 72, 73, 0, 0, 74, 0, 75, 76, 0, 0, 77, 0, 78, 79, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 82, 83, 0, 0,
    84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 87, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 91, 0, 0, 92, 0, 93, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 105,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 117, 0, 118, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 149, 0,
    150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154,
    0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163,
};
void recomp_unit_0261_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08909000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0261[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08909000;
    case 2u: goto L_08909024;
    case 3u: goto L_08909048;
    case 4u: goto L_08909080;
    case 5u: goto L_08909084;
    case 6u: goto L_0890908C;
    case 7u: goto L_089090C0;
    case 8u: goto L_089090C8;
    case 9u: goto L_089090EC;
    case 10u: goto L_089090F8;
    case 11u: goto L_08909100;
    case 12u: goto L_08909128;
    case 13u: goto L_08909150;
    case 14u: goto L_0890915C;
    case 15u: goto L_08909168;
    case 16u: goto L_08909214;
    case 17u: goto L_08909234;
    case 18u: goto L_0890923C;
    case 19u: goto L_08909244;
    case 20u: goto L_08909248;
    case 21u: goto L_08909254;
    case 22u: goto L_0890925C;
    case 23u: goto L_08909260;
    case 24u: goto L_08909268;
    case 25u: goto L_08909284;
    case 26u: goto L_089092A0;
    case 27u: goto L_089092C0;
    case 28u: goto L_089092F0;
    case 29u: goto L_089092FC;
    case 30u: goto L_08909304;
    case 31u: goto L_0890930C;
    case 32u: goto L_08909334;
    case 33u: goto L_08909340;
    case 34u: goto L_08909348;
    case 35u: goto L_08909350;
    case 36u: goto L_08909378;
    case 37u: goto L_08909384;
    case 38u: goto L_0890938C;
    case 39u: goto L_08909394;
    case 40u: goto L_089093B0;
    case 41u: goto L_089093C0;
    case 42u: goto L_089093DC;
    case 43u: goto L_089093EC;
    case 44u: goto L_08909408;
    case 45u: goto L_08909418;
    case 46u: goto L_089094C4;
    case 47u: goto L_089094D4;
    case 48u: goto L_089094E4;
    case 49u: goto L_089094F4;
    case 50u: goto L_08909528;
    case 51u: goto L_08909548;
    case 52u: goto L_08909550;
    case 53u: goto L_08909560;
    case 54u: goto L_08909570;
    case 55u: goto L_0890959C;
    case 56u: goto L_089095A4;
    case 57u: goto L_089095B8;
    case 58u: goto L_089095C8;
    case 59u: goto L_089095D4;
    case 60u: goto L_089095E8;
    case 61u: goto L_089095F4;
    case 62u: goto L_08909608;
    case 63u: goto L_0890964C;
    case 64u: goto L_08909658;
    case 65u: goto L_0890968C;
    case 66u: goto L_089096D0;
    case 67u: goto L_0890971C;
    case 68u: goto L_0890976C;
    case 69u: goto L_08909774;
    case 70u: goto L_08909778;
    case 71u: goto L_08909784;
    case 72u: goto L_0890978C;
    case 73u: goto L_08909790;
    case 74u: goto L_0890979C;
    case 75u: goto L_089097A4;
    case 76u: goto L_089097A8;
    case 77u: goto L_089097B4;
    case 78u: goto L_089097BC;
    case 79u: goto L_089097C0;
    case 80u: goto L_089097CC;
    case 81u: goto L_089097D4;
    case 82u: goto L_089097F0;
    case 83u: goto L_089097F4;
    case 84u: goto L_08909800;
    case 85u: goto L_08909808;
    case 86u: goto L_08909824;
    case 87u: goto L_08909828;
    case 88u: goto L_08909834;
    case 89u: goto L_0890983C;
    case 90u: goto L_08909858;
    case 91u: goto L_0890985C;
    case 92u: goto L_08909868;
    case 93u: goto L_08909870;
    case 94u: goto L_0890987C;
    case 95u: goto L_0890989C;
    case 96u: goto L_089098A0;
    case 97u: goto L_089098C0;
    case 98u: goto L_089098C4;
    case 99u: goto L_089098F0;
    case 100u: goto L_089098F8;
    case 101u: goto L_08909950;
    case 102u: goto L_08909964;
    case 103u: goto L_08909970;
    case 104u: goto L_08909978;
    case 105u: goto L_0890997C;
    case 106u: goto L_08909A0C;
    case 107u: goto L_08909A68;
    case 108u: goto L_08909A70;
    case 109u: goto L_08909A8C;
    case 110u: goto L_08909AE0;
    case 111u: goto L_08909B04;
    case 112u: goto L_08909B20;
    case 113u: goto L_08909B34;
    case 114u: goto L_08909B3C;
    case 115u: goto L_08909B4C;
    case 116u: goto L_08909B60;
    case 117u: goto L_08909B64;
    case 118u: goto L_08909B6C;
    case 119u: goto L_08909B74;
    case 120u: goto L_08909BDC;
    case 121u: goto L_08909BE0;
    case 122u: goto L_08909C50;
    case 123u: goto L_08909CA4;
    case 124u: goto L_08909CB4;
    case 125u: goto L_08909CDC;
    case 126u: goto L_08909D00;
    case 127u: goto L_08909D08;
    case 128u: goto L_08909D34;
    case 129u: goto L_08909D40;
    case 130u: goto L_08909D68;
    case 131u: goto L_08909D8C;
    case 132u: goto L_08909D94;
    case 133u: goto L_08909DC0;
    case 134u: goto L_08909DD0;
    case 135u: goto L_08909DF8;
    case 136u: goto L_08909E1C;
    case 137u: goto L_08909E24;
    case 138u: goto L_08909E4C;
    case 139u: goto L_08909E54;
    case 140u: goto L_08909E7C;
    case 141u: goto L_08909EA0;
    case 142u: goto L_08909EA8;
    case 143u: goto L_08909EB0;
    case 144u: goto L_08909EBC;
    case 145u: goto L_08909EC8;
    case 146u: goto L_08909ED8;
    case 147u: goto L_08909EE0;
    case 148u: goto L_08909EE8;
    case 149u: goto L_08909EF8;
    case 150u: goto L_08909F00;
    case 151u: goto L_08909F18;
    case 152u: goto L_08909F28;
    case 153u: goto L_08909F68;
    case 154u: goto L_08909F7C;
    case 155u: goto L_08909F88;
    case 156u: goto L_08909F98;
    case 157u: goto L_08909FAC;
    case 158u: goto L_08909FB0;
    case 159u: goto L_08909FC0;
    case 160u: goto L_08909FD4;
    case 161u: goto L_08909FD8;
    case 162u: goto L_08909FE8;
    case 163u: goto L_08909FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08909000:
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909024:
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-31852)));
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32448));
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) > 0;
    aot_gpr[9] = (2216u << 16u);
      if (branch_taken) {
          goto L_08909084;
      }
      goto L_08909048;
    }
L_08909048:
    aot_gpr[8] = (aot_gpr[6] << 4u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(32576));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-31760)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-31852), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909084;
      }
      goto L_08909080;
    }
L_08909080:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-31852), 0u);
    goto L_08909084;
L_08909084:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890908C:
    aot_gpr[7] = (2219u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-20760), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-20760));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(5404), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 2 ? 1u : 0u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089090EC;
      }
      goto L_089090C0;
    }
L_089090C0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    aot_gpr[7] = (0u | 48u);
      if (branch_taken) {
          goto L_08909150;
      }
      goto L_089090C8;
    }
L_089090C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-31768), aot_gpr[7]);
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-31764), 0u);
    aot_gpr[6] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-31760), aot_gpr[6]);
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31756), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0890915C;
      }
      goto L_089090EC;
    }
L_089090EC:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08909128;
      }
      goto L_089090F8;
    }
L_089090F8:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 96u);
      if (branch_taken) {
          goto L_08909150;
      }
      goto L_08909100;
    }
L_08909100:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-31768), aot_gpr[7]);
    aot_gpr[6] = (0u | 48u);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-31764), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-31760), 0u);
    aot_gpr[5] = (15820u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31756), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0890915C;
      }
      goto L_08909128;
    }
L_08909128:
    aot_gpr[7] = (0u | 96u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-31768), aot_gpr[7]);
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-31764), 0u);
    aot_gpr[6] = (0u | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-31760), aot_gpr[6]);
    aot_gpr[5] = (16320u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31756), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0890915C;
      }
      goto L_08909150;
    }
L_08909150:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-31768), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-31760), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31756), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0890915C;
L_0890915C:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31748), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909168:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(27968));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31040));
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32448));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[30] = (2216u << 16u);
    aot_gpr[5] = (65407u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20768));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[5] | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    aot_fpr[30] = __builtin_bit_cast(float, 0u);
    aot_gpr[17] = (0u | 0u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[18] = (2219u << 16u);
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[21] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[20] = (2216u << 16u);
      if (branch_taken) {
          goto L_0890923C;
      }
      goto L_08909214;
    }
L_08909214:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08909234u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909234u) goto L_08909234;
    return;
L_08909234:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08909248;
      }
      goto L_0890923C;
    }
L_0890923C:
    aot_gpr[31] = (0x08909244u);
    aot_gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08909244u) goto L_08909244;
    return;
L_08909244:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_08909248;
L_08909248:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (4660u << 16u);
      if (branch_taken) {
          goto L_08909260;
      }
      goto L_08909254;
    }
L_08909254:
    aot_gpr[31] = (0x0890925Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(22136));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 14u, 0x08927220u>(ctx, &aot_mem) && ctx.pc == 0x0890925Cu) goto L_0890925C;
    return;
L_0890925C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08909260;
L_08909260:
    aot_gpr[31] = (0x08909268u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-20776), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 162u, 0x08908C90u>(ctx, &aot_mem) && ctx.pc == 0x08909268u) goto L_08909268;
    return;
L_08909268:
    aot_gpr[16] = (0u | 32768u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08909284u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27144));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x08909284u) goto L_08909284;
    return;
L_08909284:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-30708), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089092A0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27096));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x089092A0u) goto L_089092A0;
    return;
L_089092A0:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-30704), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089092C0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27044));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x089092C0u) goto L_089092C0;
    return;
L_089092C0:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-30700), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089092F0u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089092F0u) goto L_089092F0;
    return;
L_089092F0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-30696), aot_gpr[17]);
        goto L_0890930C;
    }
    goto L_089092FC;
L_089092FC:
    aot_gpr[31] = (0x08909304u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x08909304u) goto L_08909304;
    return;
L_08909304:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-30696), aot_gpr[17]);
    goto L_0890930C;
L_0890930C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08909334u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909334u) goto L_08909334;
    return;
L_08909334:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-30692), aot_gpr[17]);
        goto L_08909350;
    }
    goto L_08909340;
L_08909340:
    aot_gpr[31] = (0x08909348u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x08909348u) goto L_08909348;
    return;
L_08909348:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-30692), aot_gpr[17]);
    goto L_08909350;
L_08909350:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08909378u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909378u) goto L_08909378;
    return;
L_08909378:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-30688), aot_gpr[17]);
        goto L_08909394;
    }
    goto L_08909384;
L_08909384:
    aot_gpr[31] = (0x0890938Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x0890938Cu) goto L_0890938C;
    return;
L_0890938C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-30688), aot_gpr[17]);
    goto L_08909394;
L_08909394:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-30708)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30696)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30696)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(72)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30692)));
        goto L_089093C0;
    }
    goto L_089093B0;
L_089093B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30692)));
    goto L_089093C0;
L_089093C0:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30704)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30692)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30688)));
        goto L_089093EC;
    }
    goto L_089093DC;
L_089093DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30688)));
    goto L_089093EC;
L_089093EC:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30700)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30688)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30696)));
        goto L_08909418;
    }
    goto L_08909408;
L_08909408:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30696)));
    goto L_08909418;
L_08909418:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] | 2056u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30692)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] | 2056u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30688)));
    aot_gpr[6] = (0u | 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] | 2056u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30696)));
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30692)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30688)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[7] = (16840u << 16u);
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[7] = (16712u << 16u);
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[17] = (0u | 0u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_089094C4;
L_089094C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[31] = (0x089094D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-20776)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 25u, 0x089272FCu>(ctx, &aot_mem) && ctx.pc == 0x089094D4u) goto L_089094D4;
    return;
L_089094D4:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-20776)));
    aot_gpr[31] = (0x089094E4u);
    aot_fpr[30] = aot_fpr[12] - aot_fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 25u, 0x089272FCu>(ctx, &aot_mem) && ctx.pc == 0x089094E4u) goto L_089094E4;
    return;
L_089094E4:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-20776)));
    aot_gpr[31] = (0x089094F4u);
    aot_fpr[26] = aot_fpr[13] - aot_fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 25u, 0x089272FCu>(ctx, &aot_mem) && ctx.pc == 0x089094F4u) goto L_089094F4;
    return;
L_089094F4:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[12] = aot_fpr[14] - aot_fpr[22];
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 96 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089094C4;
      }
      goto L_08909528;
    }
L_08909528:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (16704u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (16576u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_08909548;
L_08909548:
    aot_gpr[31] = (0x08909550u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-20776)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 25u, 0x089272FCu>(ctx, &aot_mem) && ctx.pc == 0x08909550u) goto L_08909550;
    return;
L_08909550:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-20776)));
    aot_gpr[31] = (0x08909560u);
    aot_fpr[24] = aot_fpr[12] - aot_fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 25u, 0x089272FCu>(ctx, &aot_mem) && ctx.pc == 0x08909560u) goto L_08909560;
    return;
L_08909560:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-20776)));
    aot_gpr[31] = (0x08909570u);
    aot_fpr[26] = aot_fpr[13] - aot_fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 25u, 0x089272FCu>(ctx, &aot_mem) && ctx.pc == 0x08909570u) goto L_08909570;
    return;
L_08909570:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[12] = aot_fpr[14] - aot_fpr[22];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 48 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08909548;
      }
      goto L_0890959C;
    }
L_0890959C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (0u | 0u);
    goto L_089095A4;
L_089095A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089095A4;
      }
      goto L_089095B8;
    }
L_089095B8:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x089095C8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32320));
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 185u, 0x08908EFCu>(ctx, &aot_mem) && ctx.pc == 0x089095C8u) goto L_089095C8;
    return;
L_089095C8:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[31] = (0x089095D4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32304));
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 186u, 0x08908F90u>(ctx, &aot_mem) && ctx.pc == 0x089095D4u) goto L_089095D4;
    return;
L_089095D4:
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x089095E8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0890908C;
L_089095E8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[10] | 0u);
    goto L_089095F4;
L_089095F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089095F4;
      }
      goto L_08909608;
    }
L_08909608:
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-30716), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-30712), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31748), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[30] + aot_gpr[5]);
    aot_gpr[5] = (0u | 16u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0890964Cu);
    aot_gpr[6] = (0u | 128u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890964Cu) goto L_0890964C;
    return;
L_0890964C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089096D0;
      }
      goto L_08909658;
    }
L_08909658:
    aot_gpr[4] = (0u | 128u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[6] = (2193u << 16u);
    aot_gpr[8] = (2193u << 16u);
    aot_gpr[4] = (0u | 128u);
    aot_gpr[5] = (0u | 64u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28940));
    aot_gpr[31] = (0x0890968Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-29056));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 75u, 0x08A2D4CCu>(ctx, &aot_mem) && ctx.pc == 0x0890968Cu) goto L_0890968C;
    return;
L_0890968C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(116), 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[16] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(112), 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (2216u << 16u);
    goto L_089096D0;
L_089096D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-30672), aot_gpr[16]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890971C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-20776)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[22] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (2216u << 16u);
      if (branch_taken) {
          goto L_08909778;
      }
      goto L_0890976C;
    }
L_0890976C:
    aot_gpr[31] = (0x08909774u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 17u, 0x08927270u>(ctx, &aot_mem) && ctx.pc == 0x08909774u) goto L_08909774;
    return;
L_08909774:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-20776), 0u);
    goto L_08909778;
L_08909778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30708)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909790;
      }
      goto L_08909784;
    }
L_08909784:
    aot_gpr[31] = (0x0890978Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x0890978Cu) goto L_0890978C;
    return;
L_0890978C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-30708), 0u);
    goto L_08909790;
L_08909790:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30704)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089097A8;
      }
      goto L_0890979C;
    }
L_0890979C:
    aot_gpr[31] = (0x089097A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x089097A4u) goto L_089097A4;
    return;
L_089097A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-30704), 0u);
    goto L_089097A8;
L_089097A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30700)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089097C0;
      }
      goto L_089097B4;
    }
L_089097B4:
    aot_gpr[31] = (0x089097BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x089097BCu) goto L_089097BC;
    return;
L_089097BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-30700), 0u);
    goto L_089097C0;
L_089097C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30696)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089097F4;
      }
      goto L_089097CC;
    }
L_089097CC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089097F0;
      }
      goto L_089097D4;
    }
L_089097D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089097F0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089097F0u) goto L_089097F0;
    return;
L_089097F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-30696), 0u);
    goto L_089097F4;
L_089097F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30692)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909828;
      }
      goto L_08909800;
    }
L_08909800:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909824;
      }
      goto L_08909808;
    }
L_08909808:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08909824u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909824u) goto L_08909824;
    return;
L_08909824:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-30692), 0u);
    goto L_08909828;
L_08909828:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30688)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890985C;
      }
      goto L_08909834;
    }
L_08909834:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909858;
      }
      goto L_0890983C;
    }
L_0890983C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08909858u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909858u) goto L_08909858;
    return;
L_08909858:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-30688), 0u);
    goto L_0890985C;
L_0890985C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-30672)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089098C4;
      }
      goto L_08909868;
    }
L_08909868:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089098C0;
      }
      goto L_08909870;
    }
L_08909870:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089098A0;
      }
      goto L_0890987C;
    }
L_0890987C:
    aot_gpr[8] = (2193u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 64u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x0890989Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-28996));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 107u, 0x08A2D844u>(ctx, &aot_mem) && ctx.pc == 0x0890989Cu) goto L_0890989C;
    return;
L_0890989C:
    aot_gpr[4] = (2216u << 16u);
    goto L_089098A0;
L_089098A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089098C0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089098C0u) goto L_089098C0;
    return;
L_089098C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-30672), 0u);
    goto L_089098C4;
L_089098C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089098F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089098F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-400));
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-30716)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(376), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(380), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(384), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(388), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0262_entry, 262u, 74u, 0x0890A66Cu>(ctx, &aot_mem); return;
      }
      goto L_08909950;
    }
L_08909950:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5404)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_08909978;
      }
      goto L_08909964;
    }
L_08909964:
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0890997C;
      }
      goto L_08909970;
    }
L_08909970:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0262_entry, 262u, 73u, 0x0890A664u>(ctx, &aot_mem); return;
      }
      goto L_08909978;
    }
L_08909978:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    goto L_0890997C;
L_0890997C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2128)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2128));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (15692u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30492)));
    aot_gpr[5] = (16712u << 16u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[5] = (16544u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, 0u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[22] = (2217u << 16u);
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (16672u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-32256));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-32220));
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[11] = (2216u << 16u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[18] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[21] = (2216u << 16u);
      if (branch_taken) {
          goto L_08909AE0;
      }
      goto L_08909A0C;
    }
L_08909A0C:
    aot_gpr[9] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-31792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[4]);
    aot_gpr[8] = (2216u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-31844)));
    aot_gpr[5] = (2216u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-31840)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-31844), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(-31824);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[10] = (aot_gpr[9] + static_cast<std::uint32_t>(-31792));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(-31808);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08909B04;
      }
      goto L_08909A68;
    }
L_08909A68:
    aot_gpr[31] = (0x08909A70u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-31844)));
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 165u, 0x08908CCCu>(ctx, &aot_mem) && ctx.pc == 0x08909A70u) goto L_08909A70;
    return;
L_08909A70:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-31792)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-31844)));
    aot_gpr[8] = (2216u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-31784)));
    aot_gpr[31] = (0x08909A8Cu);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 165u, 0x08908CCCu>(ctx, &aot_mem) && ctx.pc == 0x08909A8Cu) goto L_08909A8C;
    return;
L_08909A8C:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(-31784));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(-31824);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(-31824);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(-31808);
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
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(-31808);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08909B04;
      }
      goto L_08909AE0;
    }
L_08909AE0:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-31824));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-31824), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[11] + static_cast<std::uint32_t>(-31808));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(-31808), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-31772), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    goto L_08909B04;
L_08909B04:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-31748)));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30712)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08909B3C;
      }
      goto L_08909B20;
    }
L_08909B20:
    aot_fpr[13] = aot_fpr[13] + aot_fpr[20];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-31748), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08909B64;
      }
      goto L_08909B34;
    }
L_08909B34:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-31748), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08909B64;
      }
      goto L_08909B3C;
    }
L_08909B3C:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08909B64;
      }
      goto L_08909B4C;
    }
L_08909B4C:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[20];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-31748), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08909B64;
      }
      goto L_08909B60;
    }
L_08909B60:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-31748), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    goto L_08909B64;
L_08909B64:
    aot_gpr[31] = (0x08909B6Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 185u, 0x08908EFCu>(ctx, &aot_mem) && ctx.pc == 0x08909B6Cu) goto L_08909B6C;
    return;
L_08909B6C:
    aot_gpr[31] = (0x08909B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 102u, 0x0882F8C0u>(ctx, &aot_mem) && ctx.pc == 0x08909B74u) goto L_08909B74;
    return;
L_08909B74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-31744)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-31744), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 9 ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30672)));
    aot_gpr[19] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[19]);
    aot_gpr[16] = (ctx.hi);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[16]);
      if (branch_taken) {
          goto L_08909BE0;
      }
      goto L_08909BDC;
    }
L_08909BDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-31744), 0u);
    goto L_08909BE0;
L_08909BE0:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[22]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[19]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[28];
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] - aot_fpr[28];
    aot_gpr[5] = (aot_gpr[4] | 0u);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[30];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[16] = aot_fpr[14] + aot_fpr[30];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[31] = (0x08909C50u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0330_entry, 330u, 46u, 0x0894E6CCu>(ctx, &aot_mem) && ctx.pc == 0x08909C50u) goto L_08909C50;
    return;
L_08909C50:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30672)));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08909CA4u);
    aot_gpr[8] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0330_entry, 330u, 10u, 0x0894E224u>(ctx, &aot_mem) && ctx.pc == 0x08909CA4u) goto L_08909CA4;
    return;
L_08909CA4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30672)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
      if (branch_taken) {
          goto L_08909D08;
      }
      goto L_08909CB4;
    }
L_08909CB4:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[19]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08909D00;
      }
      goto L_08909CDC;
    }
L_08909CDC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(6)));
    aot_gpr[7] = (aot_gpr[7] & 128u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    if (aot_gpr[7] == 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
        goto L_08909D08;
    }
    goto L_08909D00;
L_08909D00:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_08909D08;
L_08909D08:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08909D34u);
    aot_gpr[8] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0330_entry, 330u, 10u, 0x0894E224u>(ctx, &aot_mem) && ctx.pc == 0x08909D34u) goto L_08909D34;
    return;
L_08909D34:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30672)));
      if (branch_taken) {
          goto L_08909D94;
      }
      goto L_08909D40;
    }
L_08909D40:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[19]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08909D8C;
      }
      goto L_08909D68;
    }
L_08909D68:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(6)));
    aot_gpr[7] = (aot_gpr[7] & 128u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    if (aot_gpr[7] == 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[5]));
        goto L_08909D94;
    }
    goto L_08909D8C;
L_08909D8C:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_08909D94;
L_08909D94:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08909DC0u);
    aot_gpr[8] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0330_entry, 330u, 10u, 0x0894E224u>(ctx, &aot_mem) && ctx.pc == 0x08909DC0u) goto L_08909DC0;
    return;
L_08909DC0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30672)));
      if (branch_taken) {
          goto L_08909E24;
      }
      goto L_08909DD0;
    }
L_08909DD0:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[16]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[5]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[19]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[15]));
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08909E1C;
      }
      goto L_08909DF8;
    }
L_08909DF8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(6)));
    aot_gpr[7] = (aot_gpr[7] & 128u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    if (aot_gpr[7] == 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
        goto L_08909E24;
    }
    goto L_08909E1C;
L_08909E1C:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_08909E24;
L_08909E24:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08909E4Cu);
    aot_gpr[8] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0330_entry, 330u, 10u, 0x0894E224u>(ctx, &aot_mem) && ctx.pc == 0x08909E4Cu) goto L_08909E4C;
    return;
L_08909E4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909EA8;
      }
      goto L_08909E54;
    }
L_08909E54:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[19]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08909EA0;
      }
      goto L_08909E7C;
    }
L_08909E7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(6)));
    aot_gpr[5] = (aot_gpr[5] & 128u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[4]));
        goto L_08909EA8;
    }
    goto L_08909EA0;
L_08909EA0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08909EA8;
L_08909EA8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08909EB0;
L_08909EB0:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[22]);
    goto L_08909EBC;
L_08909EBC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08909EE8;
      }
      goto L_08909EC8;
    }
L_08909EC8:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
        goto L_08909EE0;
    }
    goto L_08909ED8;
L_08909ED8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
      if (branch_taken) {
          goto L_08909EE0;
      }
      goto L_08909EE0;
    }
L_08909EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909F00;
      }
      goto L_08909EE8;
    }
L_08909EE8:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_08909F00;
    }
    goto L_08909EF8;
L_08909EF8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
      if (branch_taken) {
          goto L_08909F00;
      }
      goto L_08909F00;
    }
L_08909F00:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08909EBC;
      }
      goto L_08909F18;
    }
L_08909F18:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08909EB0;
      }
      goto L_08909F28;
    }
L_08909F28:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 0u);
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_08909F68;
    }
    goto L_08909F68;
L_08909F68:
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-31752), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08909F88;
      }
      goto L_08909F7C;
    }
L_08909F7C:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31756)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08909F88;
L_08909F88:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (49480u << 16u);
      if (branch_taken) {
          goto L_08909FAC;
      }
      goto L_08909F98;
    }
L_08909F98:
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909FAC;
    }
L_08909FAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    goto L_08909FB0;
L_08909FB0:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (49312u << 16u);
      if (branch_taken) {
          goto L_08909FD4;
      }
      goto L_08909FC0;
    }
L_08909FC0:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08909FD8;
      }
      goto L_08909FD4;
    }
L_08909FD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    goto L_08909FD8;
L_08909FD8:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (49480u << 16u);
      if (branch_taken) {
          goto L_08909FFC;
      }
      goto L_08909FE8;
    }
L_08909FE8:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0262_entry, 262u, 1u, 0x0890A000u>(ctx, &aot_mem); return;
      }
      goto L_08909FFC;
    }
L_08909FFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    ctx.pc = 0x0890A000u; return;
}

void recomp_unit_0261(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0261_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_261(Runtime &runtime) {
    runtime.register_generated_unit(261u, 0x08909000u, 4096u, &recomp_unit_0261, &recomp_unit_0261_entry);
    runtime.register_function(0x08909000u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909024u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909048u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909080u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909084u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890908Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089090C0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089090C8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089090ECu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089090F8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909100u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909128u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909150u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890915Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909168u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909214u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909234u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890923Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909244u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909248u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909254u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890925Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909260u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909268u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909284u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089092A0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089092C0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089092F0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089092FCu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909304u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890930Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909334u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909340u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909348u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909350u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909378u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909384u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890938Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909394u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089093B0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089093C0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089093DCu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089093ECu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909408u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909418u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089094C4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089094D4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089094E4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089094F4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909528u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909548u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909550u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909560u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909570u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890959Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089095A4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089095B8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089095C8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089095D4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089095E8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089095F4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909608u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890964Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909658u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890968Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089096D0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890971Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890976Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909774u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909778u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909784u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890978Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909790u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890979Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089097A4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089097A8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089097B4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089097BCu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089097C0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089097CCu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089097D4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089097F0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089097F4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909800u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909808u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909824u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909828u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909834u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890983Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909858u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890985Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909868u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909870u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890987Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890989Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089098A0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089098C0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089098C4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089098F0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x089098F8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909950u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909964u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909970u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909978u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x0890997Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909A0Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909A68u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909A70u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909A8Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909AE0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909B04u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909B20u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909B34u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909B3Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909B4Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909B60u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909B64u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909B6Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909B74u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909BDCu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909BE0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909C50u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909CA4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909CB4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909CDCu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909D00u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909D08u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909D34u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909D40u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909D68u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909D8Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909D94u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909DC0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909DD0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909DF8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909E1Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909E24u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909E4Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909E54u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909E7Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909EA0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909EA8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909EB0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909EBCu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909EC8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909ED8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909EE0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909EE8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909EF8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909F00u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909F18u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909F28u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909F68u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909F7Cu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909F88u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909F98u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909FACu, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909FB0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909FC0u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909FD4u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909FD8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909FE8u, &recomp_unit_0261, "recomp_unit_0261");
    runtime.register_function(0x08909FFCu, &recomp_unit_0261, "recomp_unit_0261");
}
} // namespace psprecomp
