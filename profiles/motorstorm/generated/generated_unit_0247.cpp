#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0247[1014] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 11, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0,
    0, 0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 47, 48, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0,
    0, 59, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0,
    69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84,
    0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 94, 95, 0, 96, 0, 0, 0, 0,
    0, 0, 97, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 101, 0, 102, 0, 0, 0, 0, 0, 0, 103, 104, 0, 105, 0, 0, 0, 0, 0, 0,
    106, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112, 113, 0, 114, 0, 0, 0, 0, 0, 115, 116, 0,
    117, 0, 0, 0, 0, 0, 0, 118, 119, 0, 120, 0, 121, 0, 122, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 133, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 158, 0, 0, 159, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0,
    170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184,
    0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 195, 0,
    0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 201, 202, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207,
};
void recomp_unit_0247_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088FB000u;
        entry_id = (entry_delta < 4056u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0247[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088FB000;
    case 2u: goto L_088FB00C;
    case 3u: goto L_088FB054;
    case 4u: goto L_088FB06C;
    case 5u: goto L_088FB0D4;
    case 6u: goto L_088FB10C;
    case 7u: goto L_088FB114;
    case 8u: goto L_088FB148;
    case 9u: goto L_088FB174;
    case 10u: goto L_088FB17C;
    case 11u: goto L_088FB19C;
    case 12u: goto L_088FB1A0;
    case 13u: goto L_088FB1A8;
    case 14u: goto L_088FB1C0;
    case 15u: goto L_088FB1DC;
    case 16u: goto L_088FB1E4;
    case 17u: goto L_088FB1F8;
    case 18u: goto L_088FB21C;
    case 19u: goto L_088FB22C;
    case 20u: goto L_088FB238;
    case 21u: goto L_088FB240;
    case 22u: goto L_088FB24C;
    case 23u: goto L_088FB258;
    case 24u: goto L_088FB264;
    case 25u: goto L_088FB280;
    case 26u: goto L_088FB28C;
    case 27u: goto L_088FB2AC;
    case 28u: goto L_088FB2B8;
    case 29u: goto L_088FB2D8;
    case 30u: goto L_088FB2E0;
    case 31u: goto L_088FB300;
    case 32u: goto L_088FB308;
    case 33u: goto L_088FB318;
    case 34u: goto L_088FB354;
    case 35u: goto L_088FB368;
    case 36u: goto L_088FB3CC;
    case 37u: goto L_088FB3DC;
    case 38u: goto L_088FB3E8;
    case 39u: goto L_088FB3F0;
    case 40u: goto L_088FB3F8;
    case 41u: goto L_088FB408;
    case 42u: goto L_088FB414;
    case 43u: goto L_088FB41C;
    case 44u: goto L_088FB43C;
    case 45u: goto L_088FB44C;
    case 46u: goto L_088FB454;
    case 47u: goto L_088FB460;
    case 48u: goto L_088FB464;
    case 49u: goto L_088FB474;
    case 50u: goto L_088FB494;
    case 51u: goto L_088FB49C;
    case 52u: goto L_088FB4A8;
    case 53u: goto L_088FB4B4;
    case 54u: goto L_088FB4BC;
    case 55u: goto L_088FB4D4;
    case 56u: goto L_088FB518;
    case 57u: goto L_088FB564;
    case 58u: goto L_088FB574;
    case 59u: goto L_088FB584;
    case 60u: goto L_088FB588;
    case 61u: goto L_088FB598;
    case 62u: goto L_088FB5C0;
    case 63u: goto L_088FB5CC;
    case 64u: goto L_088FB5D8;
    case 65u: goto L_088FB5E0;
    case 66u: goto L_088FB5E8;
    case 67u: goto L_088FB5F0;
    case 68u: goto L_088FB5F8;
    case 69u: goto L_088FB600;
    case 70u: goto L_088FB608;
    case 71u: goto L_088FB610;
    case 72u: goto L_088FB618;
    case 73u: goto L_088FB620;
    case 74u: goto L_088FB628;
    case 75u: goto L_088FB630;
    case 76u: goto L_088FB638;
    case 77u: goto L_088FB640;
    case 78u: goto L_088FB648;
    case 79u: goto L_088FB654;
    case 80u: goto L_088FB65C;
    case 81u: goto L_088FB664;
    case 82u: goto L_088FB66C;
    case 83u: goto L_088FB674;
    case 84u: goto L_088FB67C;
    case 85u: goto L_088FB684;
    case 86u: goto L_088FB68C;
    case 87u: goto L_088FB694;
    case 88u: goto L_088FB69C;
    case 89u: goto L_088FB6A4;
    case 90u: goto L_088FB6AC;
    case 91u: goto L_088FB6B4;
    case 92u: goto L_088FB6BC;
    case 93u: goto L_088FB6C4;
    case 94u: goto L_088FB6E0;
    case 95u: goto L_088FB6E4;
    case 96u: goto L_088FB6EC;
    case 97u: goto L_088FB708;
    case 98u: goto L_088FB70C;
    case 99u: goto L_088FB714;
    case 100u: goto L_088FB730;
    case 101u: goto L_088FB734;
    case 102u: goto L_088FB73C;
    case 103u: goto L_088FB758;
    case 104u: goto L_088FB75C;
    case 105u: goto L_088FB764;
    case 106u: goto L_088FB780;
    case 107u: goto L_088FB784;
    case 108u: goto L_088FB78C;
    case 109u: goto L_088FB7A8;
    case 110u: goto L_088FB7AC;
    case 111u: goto L_088FB7B4;
    case 112u: goto L_088FB7D0;
    case 113u: goto L_088FB7D4;
    case 114u: goto L_088FB7DC;
    case 115u: goto L_088FB7F4;
    case 116u: goto L_088FB7F8;
    case 117u: goto L_088FB800;
    case 118u: goto L_088FB81C;
    case 119u: goto L_088FB820;
    case 120u: goto L_088FB828;
    case 121u: goto L_088FB830;
    case 122u: goto L_088FB838;
    case 123u: goto L_088FB844;
    case 124u: goto L_088FB84C;
    case 125u: goto L_088FB858;
    case 126u: goto L_088FB8D8;
    case 127u: goto L_088FB8E8;
    case 128u: goto L_088FB90C;
    case 129u: goto L_088FB924;
    case 130u: goto L_088FB944;
    case 131u: goto L_088FB950;
    case 132u: goto L_088FB97C;
    case 133u: goto L_088FB984;
    case 134u: goto L_088FB990;
    case 135u: goto L_088FB998;
    case 136u: goto L_088FB9A4;
    case 137u: goto L_088FBA04;
    case 138u: goto L_088FBA14;
    case 139u: goto L_088FBA30;
    case 140u: goto L_088FBA3C;
    case 141u: goto L_088FBA44;
    case 142u: goto L_088FBA64;
    case 143u: goto L_088FBA6C;
    case 144u: goto L_088FBA7C;
    case 145u: goto L_088FBA88;
    case 146u: goto L_088FBAAC;
    case 147u: goto L_088FBABC;
    case 148u: goto L_088FBAF0;
    case 149u: goto L_088FBAFC;
    case 150u: goto L_088FBB0C;
    case 151u: goto L_088FBB24;
    case 152u: goto L_088FBB3C;
    case 153u: goto L_088FBB60;
    case 154u: goto L_088FBB88;
    case 155u: goto L_088FBBA0;
    case 156u: goto L_088FBBB4;
    case 157u: goto L_088FBBD8;
    case 158u: goto L_088FBBDC;
    case 159u: goto L_088FBBE8;
    case 160u: goto L_088FBC08;
    case 161u: goto L_088FBC14;
    case 162u: goto L_088FBC2C;
    case 163u: goto L_088FBC34;
    case 164u: goto L_088FBC3C;
    case 165u: goto L_088FBC44;
    case 166u: goto L_088FBC50;
    case 167u: goto L_088FBC60;
    case 168u: goto L_088FBC6C;
    case 169u: goto L_088FBC74;
    case 170u: goto L_088FBC80;
    case 171u: goto L_088FBC88;
    case 172u: goto L_088FBC90;
    case 173u: goto L_088FBCA8;
    case 174u: goto L_088FBCD4;
    case 175u: goto L_088FBCDC;
    case 176u: goto L_088FBCF4;
    case 177u: goto L_088FBD1C;
    case 178u: goto L_088FBD28;
    case 179u: goto L_088FBD30;
    case 180u: goto L_088FBD38;
    case 181u: goto L_088FBD54;
    case 182u: goto L_088FBD5C;
    case 183u: goto L_088FBD6C;
    case 184u: goto L_088FBD7C;
    case 185u: goto L_088FBD84;
    case 186u: goto L_088FBD8C;
    case 187u: goto L_088FBD94;
    case 188u: goto L_088FBDA0;
    case 189u: goto L_088FBDAC;
    case 190u: goto L_088FBDBC;
    case 191u: goto L_088FBDCC;
    case 192u: goto L_088FBDD4;
    case 193u: goto L_088FBDE4;
    case 194u: goto L_088FBDEC;
    case 195u: goto L_088FBDF8;
    case 196u: goto L_088FBE04;
    case 197u: goto L_088FBE14;
    case 198u: goto L_088FBE24;
    case 199u: goto L_088FBE30;
    case 200u: goto L_088FBE38;
    case 201u: goto L_088FBE48;
    case 202u: goto L_088FBE4C;
    case 203u: goto L_088FBE50;
    case 204u: goto L_088FBE68;
    case 205u: goto L_088FBFB8;
    case 206u: goto L_088FBFC8;
    case 207u: goto L_088FBFD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088FB000:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_088FB10C;
      }
      goto L_088FB00C;
    }
L_088FB00C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(96)));
    aot_gpr[9] = (aot_gpr[7] << 4u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[9]);
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[9] = (aot_gpr[7] << 4u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(100)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[9] = (aot_gpr[10] + aot_gpr[9]);
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(376)));
    aot_gpr[9] = (aot_gpr[9] & 512u);
    aot_gpr[9] = (0u < aot_gpr[9] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_088FB06C;
      }
      goto L_088FB054;
    }
L_088FB054:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088FB0D4;
      }
      goto L_088FB06C;
    }
L_088FB06C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 20u, 3u>();
    aot_gpr[9] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(380), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    aot_gpr[5] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(23u, 22u, 20u, 3u);
    ctx.execute_vfpu_vdot_ct<16u, 23u, 23u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 23u, 16u, 3u>();
    ctx.execute_vfpu_vdot_ct<16u, 21u, 20u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(364), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088FB0D4;
L_088FB0D4:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (16544u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(368), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(212)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(356)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[16];
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(372), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FB10C;
      }
      goto L_088FB10C;
    }
L_088FB10C:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FB114:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[9] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(212)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_088FB17C;
      }
      goto L_088FB148;
    }
L_088FB148:
    aot_gpr[11] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[9] = (aot_gpr[10] | 0u);
    aot_gpr[10] = (aot_gpr[11] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088FB174u);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 194u, 0x088BE908u>(ctx, &aot_mem) && ctx.pc == 0x088FB174u) goto L_088FB174;
    return;
L_088FB174:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088FB1A0;
      }
      goto L_088FB17C;
    }
L_088FB17C:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088FB19Cu);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 194u, 0x088BE908u>(ctx, &aot_mem) && ctx.pc == 0x088FB19Cu) goto L_088FB19C;
    return;
L_088FB19C:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_088FB1A0;
L_088FB1A0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB1E4;
      }
      goto L_088FB1A8;
    }
L_088FB1A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(348), aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(352), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(356), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FB1DC;
      }
      goto L_088FB1C0;
    }
L_088FB1C0:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FB1DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-32556), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 180u, 0x088FAFF0u>(ctx, &aot_mem) && ctx.pc == 0x088FB1DCu) goto L_088FB1DC;
    return;
L_088FB1DC:
    aot_gpr[31] = (0x088FB1E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(200)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 186u, 0x08804DA4u>(ctx, &aot_mem) && ctx.pc == 0x088FB1E4u) goto L_088FB1E4;
    return;
L_088FB1E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FB1F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28040)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_088FB238;
      }
      goto L_088FB21C;
    }
L_088FB21C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    if (aot_gpr[8] != 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
        goto L_088FB22C;
    }
    goto L_088FB22C;
L_088FB22C:
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[7] & 255u);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    goto L_088FB238;
L_088FB238:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB280;
      }
      goto L_088FB240;
    }
L_088FB240:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB280;
      }
      goto L_088FB24C;
    }
L_088FB24C:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088FB264;
      }
      goto L_088FB258;
    }
L_088FB258:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088FB264;
L_088FB264:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088FB280u);
    aot_gpr[8] = (0u | 0u);
    goto L_088FB114;
L_088FB280:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FB28C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB354;
      }
      goto L_088FB2AC;
    }
L_088FB2AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB354;
      }
      goto L_088FB2B8;
    }
L_088FB2B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(180)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x088FB2D8u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 178u, 0x088BE784u>(ctx, &aot_mem) && ctx.pc == 0x088FB2D8u) goto L_088FB2D8;
    return;
L_088FB2D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FB308;
      }
      goto L_088FB2E0;
    }
L_088FB2E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088FB300u);
    aot_gpr[8] = (0u | 0u);
    goto L_088FB114;
L_088FB300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB354;
      }
      goto L_088FB308;
    }
L_088FB308:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[31] = (0x088FB318u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 93u, 0x088BD8D8u>(ctx, &aot_mem) && ctx.pc == 0x088FB318u) goto L_088FB318;
    return;
L_088FB318:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[5] = (aot_gpr[2] << 4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FB354;
L_088FB354:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FB368:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(420)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(420), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088FB3E8;
      }
      goto L_088FB3CC;
    }
L_088FB3CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_088FB3DC;
    }
    goto L_088FB3DC;
L_088FB3DC:
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    goto L_088FB3E8;
L_088FB3E8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB90C;
      }
      goto L_088FB3F0;
    }
L_088FB3F0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB414;
      }
      goto L_088FB3F8;
    }
L_088FB3F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_088FB408;
    }
    goto L_088FB408;
L_088FB408:
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    goto L_088FB414;
L_088FB414:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB90C;
      }
      goto L_088FB41C;
    }
L_088FB41C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] & 512u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB44C;
      }
      goto L_088FB43C;
    }
L_088FB43C:
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_088FB830;
      }
      goto L_088FB44C;
    }
L_088FB44C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB464;
      }
      goto L_088FB454;
    }
L_088FB454:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088FB460u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 16u, 0x088BD0DCu>(ctx, &aot_mem) && ctx.pc == 0x088FB460u) goto L_088FB460;
    return;
L_088FB460:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088FB464;
L_088FB464:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (0u | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_088FB494;
      }
      goto L_088FB474;
    }
L_088FB474:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(420)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(420), aot_gpr[5]);
      if (branch_taken) {
          goto L_088FB4B4;
      }
      goto L_088FB494;
    }
L_088FB494:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB4B4;
      }
      goto L_088FB49C;
    }
L_088FB49C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088FB4B4;
      }
      goto L_088FB4A8;
    }
L_088FB4A8:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (0u | 1u);
    goto L_088FB4B4;
L_088FB4B4:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB820;
      }
      goto L_088FB4BC;
    }
L_088FB4BC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088FB820;
      }
      goto L_088FB4D4;
    }
L_088FB4D4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[10] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[10] = (50298u << 16u);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (0u | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    goto L_088FB518;
L_088FB518:
    aot_gpr[10] = (aot_gpr[8] | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 3u);
      ctx.read_vfpu_vector_ct<21u, 3u>(vfpu_target_raw);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 23u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<23u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<23u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<23u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<23u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<16u, 23u, 20u, 3u>();
    aot_gpr[11] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[11]);
    ctx.execute_vfpu_vdot_ct<16u, 23u, 22u, 3u>();
    aot_gpr[11] = (ctx.vfpu_scalar_bits_ct<16u>());
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[11]);
      if (branch_taken) {
          goto L_088FB574;
      }
      goto L_088FB564;
    }
L_088FB564:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088FB574;
L_088FB574:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FB588;
      }
      goto L_088FB584;
    }
L_088FB584:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_088FB588;
L_088FB588:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[7]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088FB518;
      }
      goto L_088FB598;
    }
L_088FB598:
    aot_gpr[5] = (16275u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 13107u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[9]) < 13000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[9]) < 19001 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB640;
      }
      goto L_088FB5C0;
    }
L_088FB5C0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[9]) < 6001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 12000u);
      if (branch_taken) {
          goto L_088FB608;
      }
      goto L_088FB5CC;
    }
L_088FB5CC:
    aot_gpr[5] = (0u | 6000u);
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 5000u);
      if (branch_taken) {
          goto L_088FB6C4;
      }
      goto L_088FB5D8;
    }
L_088FB5D8:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 4000u);
      if (branch_taken) {
          goto L_088FB6C4;
      }
      goto L_088FB5E0;
    }
L_088FB5E0:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 3000u);
      if (branch_taken) {
          goto L_088FB6C4;
      }
      goto L_088FB5E8;
    }
L_088FB5E8:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 2000u);
      if (branch_taken) {
          goto L_088FB73C;
      }
      goto L_088FB5F0;
    }
L_088FB5F0:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 1000u);
      if (branch_taken) {
          goto L_088FB73C;
      }
      goto L_088FB5F8;
    }
L_088FB5F8:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088FB73C;
      }
      goto L_088FB600;
    }
L_088FB600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB800;
      }
      goto L_088FB608;
    }
L_088FB608:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 11000u);
      if (branch_taken) {
          goto L_088FB6EC;
      }
      goto L_088FB610;
    }
L_088FB610:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 10000u);
      if (branch_taken) {
          goto L_088FB6EC;
      }
      goto L_088FB618;
    }
L_088FB618:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 9000u);
      if (branch_taken) {
          goto L_088FB6EC;
      }
      goto L_088FB620;
    }
L_088FB620:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 8000u);
      if (branch_taken) {
          goto L_088FB714;
      }
      goto L_088FB628;
    }
L_088FB628:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 7000u);
      if (branch_taken) {
          goto L_088FB714;
      }
      goto L_088FB630;
    }
L_088FB630:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088FB714;
      }
      goto L_088FB638;
    }
L_088FB638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB800;
      }
      goto L_088FB640;
    }
L_088FB640:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 25000u);
      if (branch_taken) {
          goto L_088FB68C;
      }
      goto L_088FB648;
    }
L_088FB648:
    aot_gpr[5] = (0u | 19000u);
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 18000u);
      if (branch_taken) {
          goto L_088FB7B4;
      }
      goto L_088FB654;
    }
L_088FB654:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 17000u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB65C;
    }
L_088FB65C:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 16000u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB664;
    }
L_088FB664:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 15000u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB66C;
    }
L_088FB66C:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 14000u);
      if (branch_taken) {
          goto L_088FB764;
      }
      goto L_088FB674;
    }
L_088FB674:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 13000u);
      if (branch_taken) {
          goto L_088FB764;
      }
      goto L_088FB67C;
    }
L_088FB67C:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088FB764;
      }
      goto L_088FB684;
    }
L_088FB684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB800;
      }
      goto L_088FB68C;
    }
L_088FB68C:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 24000u);
      if (branch_taken) {
          goto L_088FB764;
      }
      goto L_088FB694;
    }
L_088FB694:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 23000u);
      if (branch_taken) {
          goto L_088FB7DC;
      }
      goto L_088FB69C;
    }
L_088FB69C:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 22000u);
      if (branch_taken) {
          goto L_088FB7DC;
      }
      goto L_088FB6A4;
    }
L_088FB6A4:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 21000u);
      if (branch_taken) {
          goto L_088FB7DC;
      }
      goto L_088FB6AC;
    }
L_088FB6AC:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    aot_gpr[5] = (0u | 20000u);
      if (branch_taken) {
          goto L_088FB7B4;
      }
      goto L_088FB6B4;
    }
L_088FB6B4:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088FB7B4;
      }
      goto L_088FB6BC;
    }
L_088FB6BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB800;
      }
      goto L_088FB6C4;
    }
L_088FB6C4:
    aot_gpr[5] = (16268u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FB6E4;
      }
      goto L_088FB6E0;
    }
L_088FB6E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FB6E4;
L_088FB6E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB820;
      }
      goto L_088FB6EC;
    }
L_088FB6EC:
    aot_gpr[5] = (16230u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 26214u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FB70C;
      }
      goto L_088FB708;
    }
L_088FB708:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FB70C;
L_088FB70C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB820;
      }
      goto L_088FB714;
    }
L_088FB714:
    aot_gpr[5] = (16377u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FB734;
      }
      goto L_088FB730;
    }
L_088FB730:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FB734;
L_088FB734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB820;
      }
      goto L_088FB73C;
    }
L_088FB73C:
    aot_gpr[5] = (16345u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FB75C;
      }
      goto L_088FB758;
    }
L_088FB758:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FB75C;
L_088FB75C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB820;
      }
      goto L_088FB764;
    }
L_088FB764:
    aot_gpr[5] = (16345u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FB784;
      }
      goto L_088FB780;
    }
L_088FB780:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FB784;
L_088FB784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB820;
      }
      goto L_088FB78C;
    }
L_088FB78C:
    aot_gpr[5] = (16364u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FB7AC;
      }
      goto L_088FB7A8;
    }
L_088FB7A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FB7AC;
L_088FB7AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB820;
      }
      goto L_088FB7B4;
    }
L_088FB7B4:
    aot_gpr[5] = (16281u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FB7D4;
      }
      goto L_088FB7D0;
    }
L_088FB7D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FB7D4;
L_088FB7D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB820;
      }
      goto L_088FB7DC;
    }
L_088FB7DC:
    aot_gpr[5] = (16352u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FB7F8;
      }
      goto L_088FB7F4;
    }
L_088FB7F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FB7F8;
L_088FB7F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB820;
      }
      goto L_088FB800;
    }
L_088FB800:
    aot_gpr[5] = (16345u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FB820;
      }
      goto L_088FB81C;
    }
L_088FB81C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FB820;
L_088FB820:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB830;
      }
      goto L_088FB828;
    }
L_088FB828:
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088FB830;
L_088FB830:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB90C;
      }
      goto L_088FB838;
    }
L_088FB838:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088FB90C;
      }
      goto L_088FB844;
    }
L_088FB844:
    aot_gpr[31] = (0x088FB84Cu);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 93u, 0x088BD8D8u>(ctx, &aot_mem) && ctx.pc == 0x088FB84Cu) goto L_088FB84C;
    return;
L_088FB84C:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), aot_gpr[2]);
      if (branch_taken) {
          goto L_088FB90C;
      }
      goto L_088FB858;
    }
L_088FB858:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
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
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_gpr[7] = (aot_gpr[5] << 4u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] & 512u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB8E8;
      }
      goto L_088FB8D8;
    }
L_088FB8D8:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FB90C;
      }
      goto L_088FB8E8;
    }
L_088FB8E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FB90C;
L_088FB90C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FB924:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_088FB950;
      }
      goto L_088FB944;
    }
L_088FB944:
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088FB97C;
      }
      goto L_088FB950;
    }
L_088FB950:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(96);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088FB97C;
L_088FB97C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBA04;
      }
      goto L_088FB984;
    }
L_088FB984:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088FBA04;
      }
      goto L_088FB990;
    }
L_088FB990:
    aot_gpr[31] = (0x088FB998u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 93u, 0x088BD8D8u>(ctx, &aot_mem) && ctx.pc == 0x088FB998u) goto L_088FB998;
    return;
L_088FB998:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), aot_gpr[2]);
      if (branch_taken) {
          goto L_088FBA04;
      }
      goto L_088FB9A4;
    }
L_088FB9A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
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
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_gpr[7] = (aot_gpr[5] << 4u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088FBA04;
L_088FBA04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FBA14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBAAC;
      }
      goto L_088FBA30;
    }
L_088FBA30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088FBAAC;
      }
      goto L_088FBA3C;
    }
L_088FBA3C:
    aot_gpr[31] = (0x088FBA44u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 115u, 0x088BDAC8u>(ctx, &aot_mem) && ctx.pc == 0x088FBA44u) goto L_088FBA44;
    return;
L_088FBA44:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32516)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_088FBA6C;
      }
      goto L_088FBA64;
    }
L_088FBA64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088FBA6C;
L_088FBA6C:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
        goto L_088FBA88;
    }
    goto L_088FBA7C;
L_088FBA7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    goto L_088FBA88;
L_088FBA88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32516)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = aot_fpr[12] - aot_fpr[14];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(388), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FBAAC;
L_088FBAAC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FBABC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088FBAF0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 225u, 0x088BCFF0u>(ctx, &aot_mem) && ctx.pc == 0x088FBAF0u) goto L_088FBAF0;
    return;
L_088FBAF0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBC88;
      }
      goto L_088FBAFC;
    }
L_088FBAFC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_088FBB24;
      }
      goto L_088FBB0C;
    }
L_088FBB0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088FBBA0;
      }
      goto L_088FBB24;
    }
L_088FBB24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(212)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBBA0;
      }
      goto L_088FBB3C;
    }
L_088FBB3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5968));
    aot_gpr[5] = (aot_gpr[6] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088FBBA0;
      }
      goto L_088FBB60;
    }
L_088FBB60:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(712), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(716), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBBA0;
      }
      goto L_088FBB88;
    }
L_088FBB88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(500), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(504), aot_gpr[6]);
    goto L_088FBBA0;
L_088FBBA0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088FBBDC;
      }
      goto L_088FBBB4;
    }
L_088FBBB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(704)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6880));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBBDC;
      }
      goto L_088FBBD8;
    }
L_088FBBD8:
    aot_gpr[4] = (0u | 1u);
    goto L_088FBBDC;
L_088FBBDC:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBC74;
      }
      goto L_088FBBE8;
    }
L_088FBBE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] & 512u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBC14;
      }
      goto L_088FBC08;
    }
L_088FBC08:
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088FBC44;
      }
      goto L_088FBC14;
    }
L_088FBC14:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FBC44;
      }
      goto L_088FBC2C;
    }
L_088FBC2C:
    aot_gpr[31] = (0x088FBC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 81u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBC34u) goto L_088FBC34;
    return;
L_088FBC34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBC44;
      }
      goto L_088FBC3C;
    }
L_088FBC3C:
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088FBC44;
L_088FBC44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBC60;
      }
      goto L_088FBC50;
    }
L_088FBC50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088FBC6C;
      }
      goto L_088FBC60;
    }
L_088FBC60:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_088FBC6C;
L_088FBC6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBC80;
      }
      goto L_088FBC74;
    }
L_088FBC74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(208)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_088FBC80;
L_088FBC80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBC90;
      }
      goto L_088FBC88;
    }
L_088FBC88:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), 0u);
    aot_gpr[2] = (0u < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_088FBC90;
L_088FBC90:
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
L_088FBCA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), aot_gpr[5]);
      if (branch_taken) {
          goto L_088FBCDC;
      }
      goto L_088FBCD4;
    }
L_088FBCD4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), aot_gpr[5]);
    goto L_088FBCDC;
L_088FBCDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] & 32u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBD30;
      }
      goto L_088FBCF4;
    }
L_088FBCF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4000));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(492)));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088FBD38;
      }
      goto L_088FBD1C;
    }
L_088FBD1C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FBD28u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 79u, 0x08822620u>(ctx, &aot_mem) && ctx.pc == 0x088FBD28u) goto L_088FBD28;
    return;
L_088FBD28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(424)));
      if (branch_taken) {
          goto L_088FBD54;
      }
      goto L_088FBD30;
    }
L_088FBD30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FBE50;
      }
      goto L_088FBD38;
    }
L_088FBD38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(424)));
    goto L_088FBD54;
L_088FBD54:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088FBD8C;
      }
      goto L_088FBD5C;
    }
L_088FBD5C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FBD6Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_088FB1F8;
L_088FBD6C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-32519)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBD94;
      }
      goto L_088FBD7C;
    }
L_088FBD7C:
    aot_gpr[31] = (0x088FBD84u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 69u, 0x088FA564u>(ctx, &aot_mem) && ctx.pc == 0x088FBD84u) goto L_088FBD84;
    return;
L_088FBD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBD94;
      }
      goto L_088FBD8C;
    }
L_088FBD8C:
    aot_gpr[31] = (0x088FBD94u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088FB28C;
L_088FBD94:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FBDA0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 180u, 0x088FAFF0u>(ctx, &aot_mem) && ctx.pc == 0x088FBDA0u) goto L_088FBDA0;
    return;
L_088FBDA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(487)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBDBC;
      }
      goto L_088FBDAC;
    }
L_088FBDAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088FBDD4;
      }
      goto L_088FBDBC;
    }
L_088FBDBC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FBDCCu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_088FB368;
L_088FBDCC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(487), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FBDE4;
      }
      goto L_088FBDD4;
    }
L_088FBDD4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FBDE4u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_088FB924;
L_088FBDE4:
    aot_gpr[31] = (0x088FBDECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088FBA14;
L_088FBDEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBE04;
      }
      goto L_088FBDF8;
    }
L_088FBDF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088FBE4C;
      }
      goto L_088FBE04;
    }
L_088FBE04:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088FBE30;
      }
      goto L_088FBE14;
    }
L_088FBE14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088FBE24;
    }
    goto L_088FBE24;
L_088FBE24:
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    goto L_088FBE30;
L_088FBE30:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBE48;
      }
      goto L_088FBE38;
    }
L_088FBE38:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FBE48u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_088FBABC;
L_088FBE48:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(0u));
    goto L_088FBE4C;
L_088FBE4C:
    aot_gpr[2] = (0u | 0u);
    goto L_088FBE50;
L_088FBE50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FBE68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(348), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(420), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(464), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(228), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(232), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(256);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(272);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(304);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (16672u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(416), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(404), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(408), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(486), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(489), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(490), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(491), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(188), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[31] = (0x088FBFB8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 96u, 0x088FA754u>(ctx, &aot_mem) && ctx.pc == 0x088FBFB8u) goto L_088FBFB8;
    return;
L_088FBFB8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(0u));
    aot_gpr[20] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088FBFD4;
      }
      goto L_088FBFC8;
    }
L_088FBFC8:
    aot_gpr[4] = (17096u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(452), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FBFD4;
L_088FBFD4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(468), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(469), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(470), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(471), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(484), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(485), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (18804u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(487), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (aot_gpr[4] | 9216u);
    ctx.pc = 0x088FC000u; return;
}

void recomp_unit_0247(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0247_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_247(Runtime &runtime) {
    runtime.register_generated_unit(247u, 0x088FB000u, 4096u, &recomp_unit_0247, &recomp_unit_0247_entry);
    runtime.register_function(0x088FB000u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB00Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB054u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB06Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB0D4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB10Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB114u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB148u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB174u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB17Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB19Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB1A0u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB1A8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB1C0u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB1DCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB1E4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB1F8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB21Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB22Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB238u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB240u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB24Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB258u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB264u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB280u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB28Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB2ACu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB2B8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB2D8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB2E0u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB300u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB308u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB318u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB354u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB368u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB3CCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB3DCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB3E8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB3F0u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB3F8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB408u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB414u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB41Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB43Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB44Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB454u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB460u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB464u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB474u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB494u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB49Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB4A8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB4B4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB4BCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB4D4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB518u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB564u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB574u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB584u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB588u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB598u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB5C0u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB5CCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB5D8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB5E0u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB5E8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB5F0u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB5F8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB600u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB608u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB610u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB618u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB620u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB628u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB630u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB638u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB640u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB648u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB654u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB65Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB664u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB66Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB674u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB67Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB684u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB68Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB694u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB69Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB6A4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB6ACu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB6B4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB6BCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB6C4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB6E0u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB6E4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB6ECu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB708u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB70Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB714u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB730u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB734u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB73Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB758u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB75Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB764u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB780u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB784u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB78Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB7A8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB7ACu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB7B4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB7D0u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB7D4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB7DCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB7F4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB7F8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB800u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB81Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB820u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB828u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB830u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB838u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB844u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB84Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB858u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB8D8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB8E8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB90Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB924u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB944u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB950u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB97Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB984u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB990u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB998u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FB9A4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBA04u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBA14u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBA30u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBA3Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBA44u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBA64u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBA6Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBA7Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBA88u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBAACu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBABCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBAF0u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBAFCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBB0Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBB24u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBB3Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBB60u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBB88u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBBA0u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBBB4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBBD8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBBDCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBBE8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC08u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC14u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC2Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC34u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC3Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC44u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC50u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC60u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC6Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC74u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC80u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC88u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBC90u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBCA8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBCD4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBCDCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBCF4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBD1Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBD28u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBD30u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBD38u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBD54u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBD5Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBD6Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBD7Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBD84u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBD8Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBD94u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBDA0u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBDACu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBDBCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBDCCu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBDD4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBDE4u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBDECu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBDF8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBE04u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBE14u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBE24u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBE30u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBE38u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBE48u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBE4Cu, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBE50u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBE68u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBFB8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBFC8u, &recomp_unit_0247, "recomp_unit_0247");
    runtime.register_function(0x088FBFD4u, &recomp_unit_0247, "recomp_unit_0247");
}
} // namespace psprecomp
