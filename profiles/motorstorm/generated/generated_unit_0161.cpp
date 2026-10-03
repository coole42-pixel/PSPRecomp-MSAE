#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0161[1017] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0,
    17, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 26, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0,
    0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 52,
    53, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60,
    0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 65, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0,
    71, 0, 72, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    87, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 100, 101, 0, 0,
    0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    126, 0, 0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 139,
    0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0,
    0, 0, 148, 0, 149, 0, 150, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0,
    0, 155, 0, 0, 156, 157, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 168,
    0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 175,
    0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 179, 0, 180, 0, 181, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 190, 191, 0, 0, 192, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 199, 200, 0, 0, 201,
};
void recomp_unit_0161_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088A5000u;
        entry_id = (entry_delta < 4068u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0161[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A5000;
    case 2u: goto L_088A500C;
    case 3u: goto L_088A5018;
    case 4u: goto L_088A5028;
    case 5u: goto L_088A5034;
    case 6u: goto L_088A5048;
    case 7u: goto L_088A5050;
    case 8u: goto L_088A507C;
    case 9u: goto L_088A5088;
    case 10u: goto L_088A509C;
    case 11u: goto L_088A50A8;
    case 12u: goto L_088A50B8;
    case 13u: goto L_088A50C4;
    case 14u: goto L_088A50D8;
    case 15u: goto L_088A50E4;
    case 16u: goto L_088A50F4;
    case 17u: goto L_088A5100;
    case 18u: goto L_088A5114;
    case 19u: goto L_088A511C;
    case 20u: goto L_088A5128;
    case 21u: goto L_088A5140;
    case 22u: goto L_088A5198;
    case 23u: goto L_088A51A4;
    case 24u: goto L_088A51AC;
    case 25u: goto L_088A51E0;
    case 26u: goto L_088A51E4;
    case 27u: goto L_088A51F8;
    case 28u: goto L_088A5230;
    case 29u: goto L_088A5244;
    case 30u: goto L_088A5258;
    case 31u: goto L_088A5268;
    case 32u: goto L_088A5278;
    case 33u: goto L_088A528C;
    case 34u: goto L_088A529C;
    case 35u: goto L_088A52AC;
    case 36u: goto L_088A52BC;
    case 37u: goto L_088A52D0;
    case 38u: goto L_088A52E0;
    case 39u: goto L_088A52F0;
    case 40u: goto L_088A5344;
    case 41u: goto L_088A53F8;
    case 42u: goto L_088A5420;
    case 43u: goto L_088A5440;
    case 44u: goto L_088A5450;
    case 45u: goto L_088A545C;
    case 46u: goto L_088A546C;
    case 47u: goto L_088A5478;
    case 48u: goto L_088A5498;
    case 49u: goto L_088A574C;
    case 50u: goto L_088A5768;
    case 51u: goto L_088A5774;
    case 52u: goto L_088A577C;
    case 53u: goto L_088A5780;
    case 54u: goto L_088A5788;
    case 55u: goto L_088A5790;
    case 56u: goto L_088A57A4;
    case 57u: goto L_088A57C4;
    case 58u: goto L_088A57D0;
    case 59u: goto L_088A57E8;
    case 60u: goto L_088A57FC;
    case 61u: goto L_088A5808;
    case 62u: goto L_088A5814;
    case 63u: goto L_088A5824;
    case 64u: goto L_088A582C;
    case 65u: goto L_088A5834;
    case 66u: goto L_088A5838;
    case 67u: goto L_088A5844;
    case 68u: goto L_088A5858;
    case 69u: goto L_088A5868;
    case 70u: goto L_088A5878;
    case 71u: goto L_088A5880;
    case 72u: goto L_088A5888;
    case 73u: goto L_088A588C;
    case 74u: goto L_088A5894;
    case 75u: goto L_088A58A4;
    case 76u: goto L_088A58BC;
    case 77u: goto L_088A58D0;
    case 78u: goto L_088A58D8;
    case 79u: goto L_088A58E0;
    case 80u: goto L_088A5900;
    case 81u: goto L_088A5914;
    case 82u: goto L_088A591C;
    case 83u: goto L_088A5928;
    case 84u: goto L_088A5938;
    case 85u: goto L_088A5954;
    case 86u: goto L_088A5974;
    case 87u: goto L_088A5980;
    case 88u: goto L_088A5988;
    case 89u: goto L_088A599C;
    case 90u: goto L_088A59B0;
    case 91u: goto L_088A59B8;
    case 92u: goto L_088A59D4;
    case 93u: goto L_088A59E4;
    case 94u: goto L_088A59F8;
    case 95u: goto L_088A5A28;
    case 96u: goto L_088A5A4C;
    case 97u: goto L_088A5A58;
    case 98u: goto L_088A5A64;
    case 99u: goto L_088A5A6C;
    case 100u: goto L_088A5A70;
    case 101u: goto L_088A5A74;
    case 102u: goto L_088A5A90;
    case 103u: goto L_088A5A98;
    case 104u: goto L_088A5AAC;
    case 105u: goto L_088A5AB4;
    case 106u: goto L_088A5AC0;
    case 107u: goto L_088A5AD0;
    case 108u: goto L_088A5ADC;
    case 109u: goto L_088A5B10;
    case 110u: goto L_088A5B1C;
    case 111u: goto L_088A5B24;
    case 112u: goto L_088A5B30;
    case 113u: goto L_088A5B40;
    case 114u: goto L_088A5B48;
    case 115u: goto L_088A5B54;
    case 116u: goto L_088A5B5C;
    case 117u: goto L_088A5B6C;
    case 118u: goto L_088A5B80;
    case 119u: goto L_088A5B98;
    case 120u: goto L_088A5BAC;
    case 121u: goto L_088A5BB4;
    case 122u: goto L_088A5BC0;
    case 123u: goto L_088A5BCC;
    case 124u: goto L_088A5BD8;
    case 125u: goto L_088A5BF4;
    case 126u: goto L_088A5C00;
    case 127u: goto L_088A5C0C;
    case 128u: goto L_088A5C18;
    case 129u: goto L_088A5C20;
    case 130u: goto L_088A5C28;
    case 131u: goto L_088A5C30;
    case 132u: goto L_088A5C3C;
    case 133u: goto L_088A5C44;
    case 134u: goto L_088A5C50;
    case 135u: goto L_088A5C58;
    case 136u: goto L_088A5C60;
    case 137u: goto L_088A5C6C;
    case 138u: goto L_088A5C74;
    case 139u: goto L_088A5C7C;
    case 140u: goto L_088A5C88;
    case 141u: goto L_088A5C9C;
    case 142u: goto L_088A5CAC;
    case 143u: goto L_088A5CB4;
    case 144u: goto L_088A5CBC;
    case 145u: goto L_088A5CD0;
    case 146u: goto L_088A5CE4;
    case 147u: goto L_088A5CF0;
    case 148u: goto L_088A5D08;
    case 149u: goto L_088A5D10;
    case 150u: goto L_088A5D18;
    case 151u: goto L_088A5D1C;
    case 152u: goto L_088A5D48;
    case 153u: goto L_088A5D70;
    case 154u: goto L_088A5D78;
    case 155u: goto L_088A5D84;
    case 156u: goto L_088A5D90;
    case 157u: goto L_088A5D94;
    case 158u: goto L_088A5D9C;
    case 159u: goto L_088A5DA8;
    case 160u: goto L_088A5DB4;
    case 161u: goto L_088A5DBC;
    case 162u: goto L_088A5DC8;
    case 163u: goto L_088A5DD0;
    case 164u: goto L_088A5DD4;
    case 165u: goto L_088A5DDC;
    case 166u: goto L_088A5DE8;
    case 167u: goto L_088A5DF4;
    case 168u: goto L_088A5DFC;
    case 169u: goto L_088A5E14;
    case 170u: goto L_088A5E1C;
    case 171u: goto L_088A5E3C;
    case 172u: goto L_088A5E5C;
    case 173u: goto L_088A5E68;
    case 174u: goto L_088A5E70;
    case 175u: goto L_088A5E7C;
    case 176u: goto L_088A5E8C;
    case 177u: goto L_088A5E94;
    case 178u: goto L_088A5EA0;
    case 179u: goto L_088A5EAC;
    case 180u: goto L_088A5EB4;
    case 181u: goto L_088A5EBC;
    case 182u: goto L_088A5EC0;
    case 183u: goto L_088A5ED8;
    case 184u: goto L_088A5EF8;
    case 185u: goto L_088A5F1C;
    case 186u: goto L_088A5F30;
    case 187u: goto L_088A5F38;
    case 188u: goto L_088A5F4C;
    case 189u: goto L_088A5F54;
    case 190u: goto L_088A5F5C;
    case 191u: goto L_088A5F60;
    case 192u: goto L_088A5F6C;
    case 193u: goto L_088A5F74;
    case 194u: goto L_088A5F94;
    case 195u: goto L_088A5F9C;
    case 196u: goto L_088A5FA4;
    case 197u: goto L_088A5FB8;
    case 198u: goto L_088A5FC0;
    case 199u: goto L_088A5FD0;
    case 200u: goto L_088A5FD4;
    case 201u: goto L_088A5FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A5000:
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5018;
      }
      goto L_088A500C;
    }
L_088A500C:
    aot_fpr[13] = aot_fpr[15] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25184)));
    goto L_088A5018;
L_088A5018:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5034;
      }
      goto L_088A5028;
    }
L_088A5028:
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25184)));
    goto L_088A5034;
L_088A5034:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5050;
      }
      goto L_088A5048;
    }
L_088A5048:
    aot_fpr[13] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088A5050;
L_088A5050:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(112)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_088A5088;
      }
      goto L_088A507C;
    }
L_088A507C:
    aot_fpr[16] = aot_fpr[16] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25184)));
    goto L_088A5088;
L_088A5088:
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A50A8;
      }
      goto L_088A509C;
    }
L_088A509C:
    aot_fpr[13] = aot_fpr[16] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25184)));
    goto L_088A50A8;
L_088A50A8:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A50C4;
      }
      goto L_088A50B8;
    }
L_088A50B8:
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25184)));
    goto L_088A50C4;
L_088A50C4:
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A50E4;
      }
      goto L_088A50D8;
    }
L_088A50D8:
    aot_fpr[13] = aot_fpr[15] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25184)));
    goto L_088A50E4;
L_088A50E4:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5100;
      }
      goto L_088A50F4;
    }
L_088A50F4:
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25184)));
    goto L_088A5100;
L_088A5100:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A511C;
      }
      goto L_088A5114;
    }
L_088A5114:
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088A511C;
L_088A511C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    aot_gpr[31] = (0x088A5128u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 47u, 0x088CF364u>(ctx, &aot_mem) && ctx.pc == 0x088A5128u) goto L_088A5128;
    return;
L_088A5128:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5140:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(364)));
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] & 3u);
    aot_gpr[6] = (16192u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[20]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[20] = (aot_gpr[21] + static_cast<std::uint32_t>(96));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088A51A4;
      }
      goto L_088A5198;
    }
L_088A5198:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 1001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088A51AC;
      }
      goto L_088A51A4;
    }
L_088A51A4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(712), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088A51E4;
      }
      goto L_088A51AC;
    }
L_088A51AC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3132)));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(712)));
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(712), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_088A51E4;
      }
      goto L_088A51E0;
    }
L_088A51E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(712), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088A51E4;
L_088A51E4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088A51F8u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 65u, 0x088847E8u>(ctx, &aot_mem) && ctx.pc == 0x088A51F8u) goto L_088A51F8;
    return;
L_088A51F8:
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[12] = aot_fpr[2] - aot_fpr[0];
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]) ^ 0x80000000u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[19]));
    aot_fpr[15] = aot_fpr[17] - aot_fpr[16];
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = aot_fpr[14] - aot_fpr[13];
      if (branch_taken) {
          goto L_088A5244;
      }
      goto L_088A5230;
    }
L_088A5230:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = aot_fpr[2] - aot_fpr[1];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    goto L_088A5244;
L_088A5244:
    aot_fpr[1] = aot_fpr[2] - aot_fpr[0];
    ctx.set_fpu_condition((aot_fpr[1] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_088A5268;
      }
      goto L_088A5258;
    }
L_088A5258:
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = aot_fpr[2] + aot_fpr[1];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    goto L_088A5268;
L_088A5268:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_088A528C;
      }
      goto L_088A5278;
    }
L_088A5278:
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[17] = aot_fpr[17] - aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[15] = aot_fpr[17] - aot_fpr[16];
    goto L_088A528C;
L_088A528C:
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_088A52AC;
      }
      goto L_088A529C;
    }
L_088A529C:
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[17] = aot_fpr[17] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    goto L_088A52AC;
L_088A52AC:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_088A52D0;
      }
      goto L_088A52BC;
    }
L_088A52BC:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = aot_fpr[14] - aot_fpr[13];
    goto L_088A52D0;
L_088A52D0:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_088A52F0;
      }
      goto L_088A52E0;
    }
L_088A52E0:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088A52F0;
L_088A52F0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(712)));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = aot_fpr[20] - aot_fpr[12];
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_gpr[4] = (aot_gpr[29] | 0u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_fpr[18] = aot_fpr[18] + aot_fpr[19];
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_fpr[16] = aot_fpr[17] + aot_fpr[16];
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[31] = (0x088A5344u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 58u, 0x0888467Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5344u) goto L_088A5344;
    return;
L_088A5344:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(712)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(48)));
    aot_fpr[13] = aot_fpr[20] - aot_fpr[12];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(136)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    aot_gpr[4] = (17530u << 16u);
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(52)));
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[16];
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(3020)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[5]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A53F8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A53F8u) goto L_088A53F8;
    return;
L_088A53F8:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5420:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26744), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5440:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088A5450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x088A5450u) goto L_088A5450;
    return;
L_088A5450:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A545C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088A546Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x088A546Cu) goto L_088A546C;
    return;
L_088A546C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5478:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A5498u);
    aot_gpr[4] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x088A5498u) goto L_088A5498;
    return;
L_088A5498:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 100u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 200u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 300u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 400u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 4500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 5500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 6500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 7500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 9000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 10500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 12000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 13500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 15000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 17000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 19000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 21000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 23000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 25000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 28000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 31000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 34000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 37000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(112), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 41000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 45000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(120), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 49000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(124), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 53000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 57000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 61000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(464));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5464));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10464));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(15464));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20464));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(26464));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32464));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(164), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-27072));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(168), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-21072));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(172), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15072));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(176), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5072));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(180), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4928));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(184), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(14928));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(188), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24928));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(192), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (3u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-30608));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (3u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3392));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(200), aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A574C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A5790;
      }
      goto L_088A5768;
    }
L_088A5768:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[16] & 1u);
        goto L_088A5780;
    }
    goto L_088A5774;
L_088A5774:
    aot_gpr[31] = (0x088A577Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x088A577Cu) goto L_088A577C;
    return;
L_088A577C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_088A5780;
L_088A5780:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5790;
      }
      goto L_088A5788;
    }
L_088A5788:
    aot_gpr[31] = (0x088A5790u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088A545C;
L_088A5790:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A57A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088A57C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088A57C4u) goto L_088A57C4;
    return;
L_088A57C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A57D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] >> 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A57E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (0u | 1u);
    goto L_088A57FC;
L_088A57FC:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088A5808u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    goto L_088A57D0;
L_088A5808:
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A582C;
      }
      goto L_088A5814;
    }
L_088A5814:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A57FC;
      }
      goto L_088A5824;
    }
L_088A5824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5834;
      }
      goto L_088A582C;
    }
L_088A582C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088A5838;
      }
      goto L_088A5834;
    }
L_088A5834:
    aot_gpr[2] = (0u | 49u);
    goto L_088A5838;
L_088A5838:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5844:
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26776));
    aot_gpr[6] = (0u | 0u);
    goto L_088A5858;
L_088A5858:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5880;
      }
      goto L_088A5868;
    }
L_088A5868:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(101) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A5858;
      }
      goto L_088A5878;
    }
L_088A5878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5888;
      }
      goto L_088A5880;
    }
L_088A5880:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_088A588C;
      }
      goto L_088A5888;
    }
L_088A5888:
    aot_gpr[2] = (0u | 25u);
    goto L_088A588C;
L_088A588C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5894:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26756));
    goto L_088A58A4;
L_088A58A4:
    aot_gpr[6] = (aot_gpr[2] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A58D8;
      }
      goto L_088A58BC;
    }
L_088A58BC:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A58A4;
      }
      goto L_088A58D0;
    }
L_088A58D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_088A58D8;
      }
      goto L_088A58D8;
    }
L_088A58D8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A58E0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26752), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5900:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A5914u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x088A5914u) goto L_088A5914;
    return;
L_088A5914:
    aot_gpr[31] = (0x088A591Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A591Cu) goto L_088A591C;
    return;
L_088A591C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A5928u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x088A5928u) goto L_088A5928;
    return;
L_088A5928:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5938:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A5988;
      }
      goto L_088A5954;
    }
L_088A5954:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5600));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27188), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A5974u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5974u) goto L_088A5974;
    return;
L_088A5974:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5988;
      }
      goto L_088A5980;
    }
L_088A5980:
    aot_gpr[31] = (0x088A5988u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088A5900;
L_088A5988:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A599C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A59B0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x088A59B0u) goto L_088A59B0;
    return;
L_088A59B0:
    aot_gpr[31] = (0x088A59B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A59B8u) goto L_088A59B8;
    return;
L_088A59B8:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 29u);
    aot_gpr[31] = (0x088A59D4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17472));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x088A59D4u) goto L_088A59D4;
    return;
L_088A59D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A59E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A59F8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x088A59F8u) goto L_088A59F8;
    return;
L_088A59F8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5600));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5A28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27188)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5A74;
      }
      goto L_088A5A4C;
    }
L_088A5A4C:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x088A5A58u);
    aot_gpr[4] = (0u | 24u);
    goto L_088A599C;
L_088A5A58:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5A70;
      }
      goto L_088A5A64;
    }
L_088A5A64:
    aot_gpr[31] = (0x088A5A6Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088A59E4;
L_088A5A6C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_088A5A70;
L_088A5A70:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(27188), aot_gpr[17]);
    goto L_088A5A74;
L_088A5A74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27188)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5A90:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5A98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5AB4;
      }
      goto L_088A5AAC;
    }
L_088A5AAC:
    aot_gpr[31] = (0x088A5AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5AB4u) goto L_088A5AB4;
    return;
L_088A5AB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5AC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088A5AD0u);
    // nop
    goto L_088A5A98;
L_088A5AD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5ADC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x088A5B10u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5B10u) goto L_088A5B10;
    return;
L_088A5B10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A5B1Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5B1Cu) goto L_088A5B1C;
    return;
L_088A5B1C:
    aot_gpr[31] = (0x088A5B24u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5B24u) goto L_088A5B24;
    return;
L_088A5B24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A5B30u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5B30u) goto L_088A5B30;
    return;
L_088A5B30:
    aot_gpr[20] = (0u | 1u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[20];
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088A5BB4;
      }
      goto L_088A5B40;
    }
L_088A5B40:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (2214u << 16u);
      if (branch_taken) {
          goto L_088A5BB4;
      }
      goto L_088A5B48;
    }
L_088A5B48:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088A5B54u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17532));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5B54u) goto L_088A5B54;
    return;
L_088A5B54:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5BB4;
      }
      goto L_088A5B5C;
    }
L_088A5B5C:
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[31] = (0x088A5B6Cu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(17540));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5B6Cu) goto L_088A5B6C;
    return;
L_088A5B6C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A5B80u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5B80u) goto L_088A5B80;
    return;
L_088A5B80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088A5B98u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(17552));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5B98u) goto L_088A5B98;
    return;
L_088A5B98:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A5BACu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5BACu) goto L_088A5BAC;
    return;
L_088A5BAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_088A5BB4;
L_088A5BB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088A5C20;
      }
      goto L_088A5BC0;
    }
L_088A5BC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088A5C20;
      }
      goto L_088A5BCC;
    }
L_088A5BCC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x088A5BD8u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x088A5BD8u) goto L_088A5BD8;
    return;
L_088A5BD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A5BF4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5BF4u) goto L_088A5BF4;
    return;
L_088A5BF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x088A5C00u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5C00u) goto L_088A5C00;
    return;
L_088A5C00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A5C0Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5C0Cu) goto L_088A5C0C;
    return;
L_088A5C0C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5C28;
      }
      goto L_088A5C18;
    }
L_088A5C18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_088A5D1C;
      }
      goto L_088A5C20;
    }
L_088A5C20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_088A5D1C;
      }
      goto L_088A5C28;
    }
L_088A5C28:
    aot_gpr[31] = (0x088A5C30u);
    aot_gpr[21] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5C30u) goto L_088A5C30;
    return;
L_088A5C30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A5C3Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5C3Cu) goto L_088A5C3C;
    return;
L_088A5C3C:
    aot_gpr[31] = (0x088A5C44u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5C44u) goto L_088A5C44;
    return;
L_088A5C44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A5C50u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5C50u) goto L_088A5C50;
    return;
L_088A5C50:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_088A5D18;
      }
      goto L_088A5C58;
    }
L_088A5C58:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (2214u << 16u);
      if (branch_taken) {
          goto L_088A5D18;
      }
      goto L_088A5C60;
    }
L_088A5C60:
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088A5C6Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17564));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5C6Cu) goto L_088A5C6C;
    return;
L_088A5C6C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5D18;
      }
      goto L_088A5C74;
    }
L_088A5C74:
    aot_gpr[31] = (0x088A5C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5C7Cu) goto L_088A5C7C;
    return;
L_088A5C7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A5C88u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5C88u) goto L_088A5C88;
    return;
L_088A5C88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A5D18;
      }
      goto L_088A5C9C;
    }
L_088A5C9C:
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(17572));
    goto L_088A5CAC;
L_088A5CAC:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5D10;
      }
      goto L_088A5CB4;
    }
L_088A5CB4:
    aot_gpr[31] = (0x088A5CBCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5CBCu) goto L_088A5CBC;
    return;
L_088A5CBC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A5CD0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5CD0u) goto L_088A5CD0;
    return;
L_088A5CD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[31] = (0x088A5CE4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5CE4u) goto L_088A5CE4;
    return;
L_088A5CE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A5CF0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5CF0u) goto L_088A5CF0;
    return;
L_088A5CF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A5CAC;
      }
      goto L_088A5D08;
    }
L_088A5D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5D18;
      }
      goto L_088A5D10;
    }
L_088A5D10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_088A5D1C;
      }
      goto L_088A5D18;
    }
L_088A5D18:
    aot_gpr[2] = (0u | 0u);
    goto L_088A5D1C;
L_088A5D1C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5D48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088A5D70u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088A5AC0;
L_088A5D70:
    aot_gpr[31] = (0x088A5D78u);
    aot_gpr[18] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5D78u) goto L_088A5D78;
    return;
L_088A5D78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A5D84u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5D84u) goto L_088A5D84;
    return;
L_088A5D84:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (2214u << 16u);
      if (branch_taken) {
          goto L_088A5DF4;
      }
      goto L_088A5D90;
    }
L_088A5D90:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(17532));
    goto L_088A5D94;
L_088A5D94:
    aot_gpr[31] = (0x088A5D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5D9Cu) goto L_088A5D9C;
    return;
L_088A5D9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A5DA8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5DA8u) goto L_088A5DA8;
    return;
L_088A5DA8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A5DB4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5DB4u) goto L_088A5DB4;
    return;
L_088A5DB4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5DD4;
      }
      goto L_088A5DBC;
    }
L_088A5DBC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A5DC8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088A5ADC;
L_088A5DC8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5DD4;
      }
      goto L_088A5DD0;
    }
L_088A5DD0:
    aot_gpr[18] = (0u | 0u);
    goto L_088A5DD4;
L_088A5DD4:
    aot_gpr[31] = (0x088A5DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5DDCu) goto L_088A5DDC;
    return;
L_088A5DDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A5DE8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5DE8u) goto L_088A5DE8;
    return;
L_088A5DE8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5D94;
      }
      goto L_088A5DF4;
    }
L_088A5DF4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5E14;
      }
      goto L_088A5DFC;
    }
L_088A5DFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088A5E14u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26516)));
    goto L_088A57A4;
L_088A5E14:
    aot_gpr[31] = (0x088A5E1Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088A5AC0;
L_088A5E1C:
    aot_gpr[2] = (0u | 1u);
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
L_088A5E3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088A5E5Cu);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5E5Cu) goto L_088A5E5C;
    return;
L_088A5E5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A5E68u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5E68u) goto L_088A5E68;
    return;
L_088A5E68:
    aot_gpr[31] = (0x088A5E70u);
    aot_gpr[18] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5E70u) goto L_088A5E70;
    return;
L_088A5E70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A5E7Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A5E7Cu) goto L_088A5E7C;
    return;
L_088A5E7C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A5E8Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17516));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5E8Cu) goto L_088A5E8C;
    return;
L_088A5E8C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5EBC;
      }
      goto L_088A5E94;
    }
L_088A5E94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5EB4;
      }
      goto L_088A5EA0;
    }
L_088A5EA0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A5EACu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088A5D48;
L_088A5EAC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088A5EB4;
L_088A5EB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_088A5EC0;
      }
      goto L_088A5EBC;
    }
L_088A5EBC:
    aot_gpr[2] = (0u | 0u);
    goto L_088A5EC0;
L_088A5EC0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5ED8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27184), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5EF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088A5F5C;
      }
      goto L_088A5F1C;
    }
L_088A5F1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x088A5F30u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5F30u) goto L_088A5F30;
    return;
L_088A5F30:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5F54;
      }
      goto L_088A5F38;
    }
L_088A5F38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A5F1C;
      }
      goto L_088A5F4C;
    }
L_088A5F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5F5C;
      }
      goto L_088A5F54;
    }
L_088A5F54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_088A5F60;
      }
      goto L_088A5F5C;
    }
L_088A5F5C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A5F60;
L_088A5F60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5F6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5F74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28248));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088A5FB8;
      }
      goto L_088A5F94;
    }
L_088A5F94:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    goto L_088A5F9C;
L_088A5F9C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088A5FC0;
      }
      goto L_088A5FA4;
    }
L_088A5FA4:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5F9C;
      }
      goto L_088A5FB8;
    }
L_088A5FB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A5FD4;
      }
      goto L_088A5FC0;
    }
L_088A5FC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088A5FD0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x088A5FD0u) goto L_088A5FD0;
    return;
L_088A5FD0:
    aot_gpr[2] = (0u | 1u);
    goto L_088A5FD4;
L_088A5FD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5FE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    aot_gpr[21] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(27552));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    ctx.pc = 0x088A6000u; return;
}

void recomp_unit_0161(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0161_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_161(Runtime &runtime) {
    runtime.register_generated_unit(161u, 0x088A5000u, 4096u, &recomp_unit_0161, &recomp_unit_0161_entry);
    runtime.register_function(0x088A5000u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A500Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5018u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5028u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5034u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5048u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5050u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A507Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5088u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A509Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A50A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A50B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A50C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A50D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A50E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A50F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5100u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5114u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A511Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5128u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5140u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5198u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A51A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A51ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A51E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A51E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A51F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5230u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5244u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5258u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5268u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5278u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A528Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A529Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A52ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A52BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A52D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A52E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A52F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5344u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A53F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5420u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5440u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5450u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A545Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A546Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5478u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5498u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A574Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5768u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5774u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A577Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5780u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5788u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5790u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A57A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A57C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A57D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A57E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A57FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5808u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5814u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5824u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A582Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5834u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5838u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5844u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5858u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5868u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5878u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5880u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5888u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A588Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5894u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A58A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A58BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A58D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A58D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A58E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5900u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5914u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A591Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5928u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5938u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5954u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5974u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5980u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5988u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A599Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A59B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A59B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A59D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A59E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A59F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5A28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5A4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5A58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5A64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5A6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5A70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5A74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5A90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5A98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5AACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5AB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5AC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5AD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5ADCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5B10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5B1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5B24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5B30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5B40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5B48u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5B54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5B5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5B6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5B80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5B98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5BACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5BB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5BC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5BCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5BD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5BF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C44u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C50u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5C9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5CACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5CB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5CBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5CD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5CE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5CF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5D08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5D10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5D18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5D1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5D48u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5D70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5D78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5D84u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5D90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5D94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5D9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5DA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5DB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5DBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5DC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5DD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5DD4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5DDCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5DE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5DF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5DFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5E14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5E1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5E3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5E5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5E68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5E70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5E7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5E8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5E94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5EA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5EACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5EB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5EBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5EC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5ED8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5EF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5F1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5F30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5F38u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5F4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5F54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5F5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5F60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5F6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5F74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5F94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5F9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5FA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5FB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5FC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5FD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5FD4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x088A5FE0u, &recomp_unit_0161, "recomp_unit_0161");
}
} // namespace psprecomp
