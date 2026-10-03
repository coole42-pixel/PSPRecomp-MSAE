#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0248[1021] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 24, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 33, 0, 34,
    0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 38, 39, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0,
    0, 0, 50, 51, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0,
    83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104,
    0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0,
    0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0,
    0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 139, 140, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0,
    0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 188,
};
void recomp_unit_0248_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088FC000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0248[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088FC000;
    case 2u: goto L_088FC060;
    case 3u: goto L_088FC06C;
    case 4u: goto L_088FC084;
    case 5u: goto L_088FC094;
    case 6u: goto L_088FC0A8;
    case 7u: goto L_088FC0B8;
    case 8u: goto L_088FC0C0;
    case 9u: goto L_088FC0CC;
    case 10u: goto L_088FC0D4;
    case 11u: goto L_088FC0F4;
    case 12u: goto L_088FC108;
    case 13u: goto L_088FC120;
    case 14u: goto L_088FC128;
    case 15u: goto L_088FC138;
    case 16u: goto L_088FC150;
    case 17u: goto L_088FC158;
    case 18u: goto L_088FC160;
    case 19u: goto L_088FC18C;
    case 20u: goto L_088FC1A4;
    case 21u: goto L_088FC1AC;
    case 22u: goto L_088FC1D8;
    case 23u: goto L_088FC1FC;
    case 24u: goto L_088FC204;
    case 25u: goto L_088FC208;
    case 26u: goto L_088FC210;
    case 27u: goto L_088FC218;
    case 28u: goto L_088FC240;
    case 29u: goto L_088FC248;
    case 30u: goto L_088FC258;
    case 31u: goto L_088FC268;
    case 32u: goto L_088FC270;
    case 33u: goto L_088FC274;
    case 34u: goto L_088FC27C;
    case 35u: goto L_088FC28C;
    case 36u: goto L_088FC29C;
    case 37u: goto L_088FC2A4;
    case 38u: goto L_088FC2A8;
    case 39u: goto L_088FC2AC;
    case 40u: goto L_088FC2B4;
    case 41u: goto L_088FC2C4;
    case 42u: goto L_088FC2CC;
    case 43u: goto L_088FC2D4;
    case 44u: goto L_088FC2DC;
    case 45u: goto L_088FC2E4;
    case 46u: goto L_088FC2EC;
    case 47u: goto L_088FC368;
    case 48u: goto L_088FC370;
    case 49u: goto L_088FC378;
    case 50u: goto L_088FC388;
    case 51u: goto L_088FC38C;
    case 52u: goto L_088FC390;
    case 53u: goto L_088FC3C0;
    case 54u: goto L_088FC3D4;
    case 55u: goto L_088FC3EC;
    case 56u: goto L_088FC3F8;
    case 57u: goto L_088FC400;
    case 58u: goto L_088FC42C;
    case 59u: goto L_088FC448;
    case 60u: goto L_088FC468;
    case 61u: goto L_088FC490;
    case 62u: goto L_088FC4A8;
    case 63u: goto L_088FC4B4;
    case 64u: goto L_088FC510;
    case 65u: goto L_088FC518;
    case 66u: goto L_088FC528;
    case 67u: goto L_088FC530;
    case 68u: goto L_088FC54C;
    case 69u: goto L_088FC560;
    case 70u: goto L_088FC5B0;
    case 71u: goto L_088FC5B8;
    case 72u: goto L_088FC5D0;
    case 73u: goto L_088FC5E0;
    case 74u: goto L_088FC5E8;
    case 75u: goto L_088FC5FC;
    case 76u: goto L_088FC608;
    case 77u: goto L_088FC624;
    case 78u: goto L_088FC62C;
    case 79u: goto L_088FC648;
    case 80u: goto L_088FC650;
    case 81u: goto L_088FC660;
    case 82u: goto L_088FC668;
    case 83u: goto L_088FC680;
    case 84u: goto L_088FC68C;
    case 85u: goto L_088FC698;
    case 86u: goto L_088FC6C0;
    case 87u: goto L_088FC6D8;
    case 88u: goto L_088FC6E4;
    case 89u: goto L_088FC73C;
    case 90u: goto L_088FC744;
    case 91u: goto L_088FC754;
    case 92u: goto L_088FC75C;
    case 93u: goto L_088FC77C;
    case 94u: goto L_088FC790;
    case 95u: goto L_088FC7E0;
    case 96u: goto L_088FC7E8;
    case 97u: goto L_088FC804;
    case 98u: goto L_088FC814;
    case 99u: goto L_088FC81C;
    case 100u: goto L_088FC830;
    case 101u: goto L_088FC83C;
    case 102u: goto L_088FC858;
    case 103u: goto L_088FC860;
    case 104u: goto L_088FC87C;
    case 105u: goto L_088FC884;
    case 106u: goto L_088FC894;
    case 107u: goto L_088FC89C;
    case 108u: goto L_088FC8B4;
    case 109u: goto L_088FC8C0;
    case 110u: goto L_088FC8CC;
    case 111u: goto L_088FC8E0;
    case 112u: goto L_088FC908;
    case 113u: goto L_088FC940;
    case 114u: goto L_088FC960;
    case 115u: goto L_088FC998;
    case 116u: goto L_088FC9AC;
    case 117u: goto L_088FC9B0;
    case 118u: goto L_088FC9B8;
    case 119u: goto L_088FC9DC;
    case 120u: goto L_088FC9E4;
    case 121u: goto L_088FC9F4;
    case 122u: goto L_088FCA04;
    case 123u: goto L_088FCA0C;
    case 124u: goto L_088FCA20;
    case 125u: goto L_088FCA30;
    case 126u: goto L_088FCA38;
    case 127u: goto L_088FCA48;
    case 128u: goto L_088FCA58;
    case 129u: goto L_088FCA60;
    case 130u: goto L_088FCA74;
    case 131u: goto L_088FCA84;
    case 132u: goto L_088FCA90;
    case 133u: goto L_088FCAA0;
    case 134u: goto L_088FCAB0;
    case 135u: goto L_088FCABC;
    case 136u: goto L_088FCACC;
    case 137u: goto L_088FCAE0;
    case 138u: goto L_088FCAE8;
    case 139u: goto L_088FCAF0;
    case 140u: goto L_088FCAF4;
    case 141u: goto L_088FCAFC;
    case 142u: goto L_088FCB1C;
    case 143u: goto L_088FCB28;
    case 144u: goto L_088FCB6C;
    case 145u: goto L_088FCB9C;
    case 146u: goto L_088FCBF4;
    case 147u: goto L_088FCC20;
    case 148u: goto L_088FCC2C;
    case 149u: goto L_088FCC30;
    case 150u: goto L_088FCC38;
    case 151u: goto L_088FCC40;
    case 152u: goto L_088FCC58;
    case 153u: goto L_088FCC6C;
    case 154u: goto L_088FCC78;
    case 155u: goto L_088FCC84;
    case 156u: goto L_088FCC8C;
    case 157u: goto L_088FCC94;
    case 158u: goto L_088FCCEC;
    case 159u: goto L_088FCCF4;
    case 160u: goto L_088FCD24;
    case 161u: goto L_088FCD48;
    case 162u: goto L_088FCD50;
    case 163u: goto L_088FCD60;
    case 164u: goto L_088FCD98;
    case 165u: goto L_088FCDB8;
    case 166u: goto L_088FCDC0;
    case 167u: goto L_088FCDDC;
    case 168u: goto L_088FCDF0;
    case 169u: goto L_088FCDF8;
    case 170u: goto L_088FCE14;
    case 171u: goto L_088FCE54;
    case 172u: goto L_088FCE74;
    case 173u: goto L_088FCE84;
    case 174u: goto L_088FCE90;
    case 175u: goto L_088FCEBC;
    case 176u: goto L_088FCEF0;
    case 177u: goto L_088FCF00;
    case 178u: goto L_088FCF24;
    case 179u: goto L_088FCF30;
    case 180u: goto L_088FCF38;
    case 181u: goto L_088FCF40;
    case 182u: goto L_088FCF48;
    case 183u: goto L_088FCF90;
    case 184u: goto L_088FCF98;
    case 185u: goto L_088FCFB4;
    case 186u: goto L_088FCFD8;
    case 187u: goto L_088FCFE0;
    case 188u: goto L_088FCFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088FC000:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(480), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(424)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_gpr[19] = (aot_gpr[6] ^ 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
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
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[19] = (aot_gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FC060u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 225u, 0x088BCFF0u>(ctx, &aot_mem) && ctx.pc == 0x088FC060u) goto L_088FC060;
    return;
L_088FC060:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[2]);
      if (branch_taken) {
          goto L_088FC06C;
      }
      goto L_088FC06C;
    }
L_088FC06C:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(352));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(356));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088FC084u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 62u, 0x088BA5F0u>(ctx, &aot_mem) && ctx.pc == 0x088FC084u) goto L_088FC084;
    return;
L_088FC084:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(348), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x088FC094u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 180u, 0x088FAFF0u>(ctx, &aot_mem) && ctx.pc == 0x088FC094u) goto L_088FC094;
    return;
L_088FC094:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC0C0;
      }
      goto L_088FC0A8;
    }
L_088FC0A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088FC0C0;
      }
      goto L_088FC0B8;
    }
L_088FC0B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr[20]));
    goto L_088FC0C0;
L_088FC0C0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC0D4;
      }
      goto L_088FC0CC;
    }
L_088FC0CC:
    aot_gpr[31] = (0x088FC0D4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 181u, 0x08804D50u>(ctx, &aot_mem) && ctx.pc == 0x088FC0D4u) goto L_088FC0D4;
    return;
L_088FC0D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC0F4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(392)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (17658u << 16u);
      if (branch_taken) {
          goto L_088FC128;
      }
      goto L_088FC108;
    }
L_088FC108:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088FC120;
    }
    goto L_088FC120;
L_088FC120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC158;
      }
      goto L_088FC128;
    }
L_088FC128:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (17658u << 16u);
      if (branch_taken) {
          goto L_088FC158;
      }
      goto L_088FC138;
    }
L_088FC138:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088FC150;
    }
    goto L_088FC150;
L_088FC150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC158;
      }
      goto L_088FC158;
    }
L_088FC158:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(392), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC160:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(732)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5968));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] == 0u) {
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
        goto L_088FC1A4;
    }
    goto L_088FC18C;
L_088FC18C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(412)));
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = aot_fpr[13] - aot_fpr[0];
      if (branch_taken) {
          goto L_088FC1A4;
      }
      goto L_088FC1A4;
    }
L_088FC1A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC1AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(732)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5968));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] == 0u) {
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
        goto L_088FC210;
    }
    goto L_088FC1D8;
L_088FC1D8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(412)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_gpr[4] = (14979u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_088FC204;
      }
      goto L_088FC1FC;
    }
L_088FC1FC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088FC208;
      }
      goto L_088FC204;
    }
L_088FC204:
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
    goto L_088FC208;
L_088FC208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC210;
      }
      goto L_088FC210;
    }
L_088FC210:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC218:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(412)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(416), aot_gpr[5]);
      if (branch_taken) {
          goto L_088FC248;
      }
      goto L_088FC240;
    }
L_088FC240:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(412), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_088FC2AC;
      }
      goto L_088FC248;
    }
L_088FC248:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FC27C;
      }
      goto L_088FC258;
    }
L_088FC258:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(412));
      if (branch_taken) {
          goto L_088FC270;
      }
      goto L_088FC268;
    }
L_088FC268:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088FC274;
      }
      goto L_088FC270;
    }
L_088FC270:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088FC274;
L_088FC274:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(412), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FC2AC;
      }
      goto L_088FC27C;
    }
L_088FC27C:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FC2AC;
      }
      goto L_088FC28C;
    }
L_088FC28C:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(412));
      if (branch_taken) {
          goto L_088FC2A4;
      }
      goto L_088FC29C;
    }
L_088FC29C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088FC2A8;
      }
      goto L_088FC2A4;
    }
L_088FC2A4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088FC2A8;
L_088FC2A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(412), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FC2AC;
L_088FC2AC:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC2B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(486)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(486)));
      if (branch_taken) {
          goto L_088FC2CC;
      }
      goto L_088FC2C4;
    }
L_088FC2C4:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC2DC;
      }
      goto L_088FC2CC;
    }
L_088FC2CC:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FC2E4;
      }
      goto L_088FC2D4;
    }
L_088FC2D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC2EC;
      }
      goto L_088FC2DC;
    }
L_088FC2DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088FC3F8;
      }
      goto L_088FC2E4;
    }
L_088FC2E4:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC370;
      }
      goto L_088FC2EC;
    }
L_088FC2EC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[2] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 20u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 20u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FC378;
      }
      goto L_088FC368;
    }
L_088FC368:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088FC38C;
      }
      goto L_088FC370;
    }
L_088FC370:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FC3F8;
      }
      goto L_088FC378;
    }
L_088FC378:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(196)));
        goto L_088FC390;
    }
    goto L_088FC388;
L_088FC388:
    aot_gpr[2] = (0u | 0u);
    goto L_088FC38C;
L_088FC38C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(196)));
    goto L_088FC390;
L_088FC390:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(356)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (16040u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FC3D4;
      }
      goto L_088FC3C0;
    }
L_088FC3C0:
    aot_gpr[4] = (aot_gpr[2] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FC3F8;
      }
      goto L_088FC3D4;
    }
L_088FC3D4:
    aot_gpr[4] = (16448u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FC3F8;
      }
      goto L_088FC3EC;
    }
L_088FC3EC:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[2] = (0u | 1u);
    goto L_088FC3F8;
L_088FC3F8:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC400:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (16880u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[11] = (aot_gpr[5] | 0u);
    aot_gpr[3] = (aot_gpr[6] | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[12] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088FC8C0;
      }
      goto L_088FC42C;
    }
L_088FC42C:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[5] = (aot_gpr[11] | 0u);
    aot_gpr[6] = (aot_gpr[3] | 0u);
    aot_gpr[7] = (aot_gpr[12] | 0u);
    aot_gpr[31] = (0x088FC448u);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    goto L_088FC2B4;
L_088FC448:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(196)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088FC68C;
      }
      goto L_088FC468;
    }
L_088FC468:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FC68C;
      }
      goto L_088FC490;
    }
L_088FC490:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(412)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FC4B4;
      }
      goto L_088FC4A8;
    }
L_088FC4A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_088FC68C;
      }
      goto L_088FC4B4;
    }
L_088FC4B4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(56)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(48)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[12] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(48)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-32548)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    aot_gpr[2] = (2216u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-32544)));
    aot_gpr[2] = (2216u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-32552)));
      if (branch_taken) {
          goto L_088FC518;
      }
      goto L_088FC510;
    }
L_088FC510:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_088FC530;
      }
      goto L_088FC518;
    }
L_088FC518:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[2] = (49024u << 16u);
      if (branch_taken) {
          goto L_088FC530;
      }
      goto L_088FC528;
    }
L_088FC528:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
      if (branch_taken) {
          goto L_088FC530;
      }
      goto L_088FC530;
    }
L_088FC530:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(356)));
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(360)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FC560;
      }
      goto L_088FC54C;
    }
L_088FC54C:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
        goto L_088FC560;
    }
    goto L_088FC560;
L_088FC560:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
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
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    aot_gpr[4] = (16416u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_088FC5B8;
      }
      goto L_088FC5B0;
    }
L_088FC5B0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_088FC5D0;
      }
      goto L_088FC5B8;
    }
L_088FC5B8:
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
        goto L_088FC5D0;
    }
    goto L_088FC5D0;
L_088FC5D0:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_088FC5E8;
      }
      goto L_088FC5E0;
    }
L_088FC5E0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_088FC5FC;
      }
      goto L_088FC5E8;
    }
L_088FC5E8:
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
        goto L_088FC5FC;
    }
    goto L_088FC5FC;
L_088FC5FC:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = aot_gpr[5] == 0u;
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
      if (branch_taken) {
          goto L_088FC650;
      }
      goto L_088FC608;
    }
L_088FC608:
    aot_gpr[4] = (16168u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (48936u << 16u);
      if (branch_taken) {
          goto L_088FC62C;
      }
      goto L_088FC624;
    }
L_088FC624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC648;
      }
      goto L_088FC62C;
    }
L_088FC62C:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088FC648;
    }
    goto L_088FC648;
L_088FC648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC680;
      }
      goto L_088FC650;
    }
L_088FC650:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_088FC668;
      }
      goto L_088FC660;
    }
L_088FC660:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_088FC680;
      }
      goto L_088FC668;
    }
L_088FC668:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088FC680;
    }
    goto L_088FC680;
L_088FC680:
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x088FC68Cu);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    goto L_088FC218;
L_088FC68C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088FC8C0;
      }
      goto L_088FC698;
    }
L_088FC698:
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FC8C0;
      }
      goto L_088FC6C0;
    }
L_088FC6C0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(412)));
    aot_fpr[17] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[17])) && aot_fpr[12] == aot_fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FC6E4;
      }
      goto L_088FC6D8;
    }
L_088FC6D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_088FC8C0;
      }
      goto L_088FC6E4;
    }
L_088FC6E4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(56)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[12] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(48)));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2216u << 16u);
    ctx.set_fpu_condition((aot_fpr[18] <= aot_fpr[17]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32548)));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32544)));
    aot_gpr[4] = (2216u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32552)));
      if (branch_taken) {
          goto L_088FC744;
      }
      goto L_088FC73C;
    }
L_088FC73C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088FC75C;
      }
      goto L_088FC744;
    }
L_088FC744:
    ctx.set_fpu_condition((aot_fpr[18] < aot_fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_088FC75C;
      }
      goto L_088FC754;
    }
L_088FC754:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088FC75C;
      }
      goto L_088FC75C;
    }
L_088FC75C:
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(356)));
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(360)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FC790;
      }
      goto L_088FC77C;
    }
L_088FC77C:
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088FC790;
    }
    goto L_088FC790;
L_088FC790:
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_gpr[4] = (16416u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_088FC7E8;
      }
      goto L_088FC7E0;
    }
L_088FC7E0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088FC804;
      }
      goto L_088FC7E8;
    }
L_088FC7E8:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088FC804;
    }
    goto L_088FC804;
L_088FC804:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_088FC81C;
      }
      goto L_088FC814;
    }
L_088FC814:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088FC830;
      }
      goto L_088FC81C;
    }
L_088FC81C:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088FC830;
    }
    goto L_088FC830;
L_088FC830:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = aot_gpr[11] == 0u;
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
      if (branch_taken) {
          goto L_088FC884;
      }
      goto L_088FC83C;
    }
L_088FC83C:
    aot_gpr[4] = (16025u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[18] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (48793u << 16u);
      if (branch_taken) {
          goto L_088FC860;
      }
      goto L_088FC858;
    }
L_088FC858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC87C;
      }
      goto L_088FC860;
    }
L_088FC860:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088FC87C;
    }
    goto L_088FC87C;
L_088FC87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC8B4;
      }
      goto L_088FC884;
    }
L_088FC884:
    ctx.set_fpu_condition((aot_fpr[18] <= aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
        goto L_088FC89C;
    }
    goto L_088FC894;
L_088FC894:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088FC8B4;
      }
      goto L_088FC89C;
    }
L_088FC89C:
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[18]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
        goto L_088FC8B4;
    }
    goto L_088FC8B4;
L_088FC8B4:
    aot_gpr[4] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x088FC8C0u);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    goto L_088FC218;
L_088FC8C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC8CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC8E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(496), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(500), 0u);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(504), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088FC908u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    goto L_088FC8CC;
L_088FC908:
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_gpr[7] = (49216u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088FCAF0;
      }
      goto L_088FC940;
    }
L_088FC940:
    aot_gpr[7] = (15395u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[7] = (aot_gpr[7] | 55050u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088FC9B0;
      }
      goto L_088FC960;
    }
L_088FC960:
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16880u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (16000u << 16u);
      if (branch_taken) {
          goto L_088FC9B0;
      }
      goto L_088FC998;
    }
L_088FC998:
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FC9B0;
      }
      goto L_088FC9AC;
    }
L_088FC9AC:
    aot_gpr[4] = (0u | 1u);
    goto L_088FC9B0;
L_088FC9B0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FCAE8;
      }
      goto L_088FC9B8;
    }
L_088FC9B8:
    aot_gpr[6] = (17174u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[16] = aot_fpr[17] - aot_fpr[14];
    aot_gpr[6] = (17224u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[14] = aot_fpr[15] - aot_fpr[14];
      if (branch_taken) {
          goto L_088FC9E4;
      }
      goto L_088FC9DC;
    }
L_088FC9DC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_088FC9F4;
      }
      goto L_088FC9E4;
    }
L_088FC9E4:
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088FC9F4;
    }
    goto L_088FC9F4;
L_088FC9F4:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(508), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
      if (branch_taken) {
          goto L_088FCA0C;
      }
      goto L_088FCA04;
    }
L_088FCA04:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_088FCA20;
      }
      goto L_088FCA0C;
    }
L_088FCA0C:
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    ctx.set_fpu_condition((aot_fpr[17] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088FCA20;
    }
    goto L_088FCA20;
L_088FCA20:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(512), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_088FCA38;
      }
      goto L_088FCA30;
    }
L_088FCA30:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_088FCA48;
      }
      goto L_088FCA38;
    }
L_088FCA38:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088FCA48;
    }
    goto L_088FCA48;
L_088FCA48:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(516), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_088FCA60;
      }
      goto L_088FCA58;
    }
L_088FCA58:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088FCA74;
      }
      goto L_088FCA60;
    }
L_088FCA60:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    goto L_088FCA74;
L_088FCA74:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[16]) || std::isnan(aot_fpr[13])) && aot_fpr[16] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[6] = (16800u << 16u);
      if (branch_taken) {
          goto L_088FCA90;
      }
      goto L_088FCA84;
    }
L_088FCA84:
    aot_gpr[6] = (0u | 999u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(496), aot_gpr[6]);
      if (branch_taken) {
          goto L_088FCAA0;
      }
      goto L_088FCA90;
    }
L_088FCA90:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[16] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(508), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088FCAA0;
L_088FCAA0:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[17]) || std::isnan(aot_fpr[13])) && aot_fpr[17] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[6] = (16800u << 16u);
      if (branch_taken) {
          goto L_088FCABC;
      }
      goto L_088FCAB0;
    }
L_088FCAB0:
    aot_gpr[6] = (0u | 999u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(500), aot_gpr[6]);
      if (branch_taken) {
          goto L_088FCACC;
      }
      goto L_088FCABC;
    }
L_088FCABC:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[17] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(512), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FCACC;
L_088FCACC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(516)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FCAE8;
      }
      goto L_088FCAE0;
    }
L_088FCAE0:
    aot_gpr[6] = (0u | 999u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(504), aot_gpr[6]);
    goto L_088FCAE8;
L_088FCAE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCAF4;
      }
      goto L_088FCAF0;
    }
L_088FCAF0:
    aot_gpr[4] = (0u | 1u);
    goto L_088FCAF4;
L_088FCAF4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCB1C;
      }
      goto L_088FCAFC;
    }
L_088FCAFC:
    aot_gpr[4] = (0u | 999u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(496), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(500), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(504), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(508), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(512), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(516), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FCB1C;
L_088FCB1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCB28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
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
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCB6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] ^ 10000u);
    aot_gpr[6] = (aot_gpr[4] ^ 11000u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] ^ 12000u);
    aot_gpr[2] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCB9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-32520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 3u, 0x088FD03Cu>(ctx, &aot_mem); return;
      }
      goto L_088FCBF4;
    }
L_088FCBF4:
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2060)));
    aot_gpr[6] = (15948u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088FCC30;
      }
      goto L_088FCC20;
    }
L_088FCC20:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2208)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FCC30;
      }
      goto L_088FCC2C;
    }
L_088FCC2C:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_088FCC30;
L_088FCC30:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 3u, 0x088FD03Cu>(ctx, &aot_mem); return;
      }
      goto L_088FCC38;
    }
L_088FCC38:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 3u, 0x088FD03Cu>(ctx, &aot_mem); return;
      }
      goto L_088FCC40;
    }
L_088FCC40:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 3u, 0x088FD03Cu>(ctx, &aot_mem); return;
      }
      goto L_088FCC58;
    }
L_088FCC58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 3u, 0x088FD03Cu>(ctx, &aot_mem); return;
      }
      goto L_088FCC6C;
    }
L_088FCC6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088FCC84;
      }
      goto L_088FCC78;
    }
L_088FCC78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(189)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088FCC8C;
      }
      goto L_088FCC84;
    }
L_088FCC84:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088FCC8C;
L_088FCC8C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 3u, 0x088FD03Cu>(ctx, &aot_mem); return;
      }
      goto L_088FCC94;
    }
L_088FCC94:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
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
    ctx.execute_vfpu_cross_quat(22u, 20u, 21u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 22u, 22u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 22u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(288)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    aot_gpr[31] = (0x088FCCECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 23u, 0x088842C4u>(ctx, &aot_mem) && ctx.pc == 0x088FCCECu) goto L_088FCCEC;
    return;
L_088FCCEC:
    aot_gpr[31] = (0x088FCCF4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088FCB6C;
L_088FCCF4:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[30] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32540)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 3u, 0x088FD03Cu>(ctx, &aot_mem); return;
      }
      goto L_088FCD24;
    }
L_088FCD24:
    aot_fpr[24] = aot_fpr[24] - aot_fpr[12];
    aot_gpr[4] = (14673u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 46871u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088FCD50;
    }
    goto L_088FCD48;
L_088FCD48:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_088FCD60;
      }
      goto L_088FCD50;
    }
L_088FCD50:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088FCD60;
    }
    goto L_088FCD60;
L_088FCD60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[14] = aot_fpr[12] - aot_fpr[14];
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32524)));
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 3u, 0x088FD03Cu>(ctx, &aot_mem); return;
      }
      goto L_088FCD98;
    }
L_088FCD98:
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(356)));
    aot_gpr[4] = (16204u << 16u);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088FCDC0;
      }
      goto L_088FCDB8;
    }
L_088FCDB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCDDC;
      }
      goto L_088FCDC0;
    }
L_088FCDC0:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (49312u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088FCDDC;
    }
    goto L_088FCDDC;
L_088FCDDC:
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (48972u << 16u);
      if (branch_taken) {
          goto L_088FCDF8;
      }
      goto L_088FCDF0;
    }
L_088FCDF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCE14;
      }
      goto L_088FCDF8;
    }
L_088FCDF8:
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088FCE14;
    }
    goto L_088FCE14;
L_088FCE14:
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32536)));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32532)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[26] = aot_fpr[14] - aot_fpr[13];
    aot_gpr[31] = (0x088FCE54u);
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 54u, 0x088EE514u>(ctx, &aot_mem) && ctx.pc == 0x088FCE54u) goto L_088FCE54;
    return;
L_088FCE54:
    aot_gpr[4] = (16153u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2072)));
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_088FCE84;
      }
      goto L_088FCE74;
    }
L_088FCE74:
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32528)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088FCEF0;
      }
      goto L_088FCE84;
    }
L_088FCE84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088FCEF0;
      }
      goto L_088FCE90;
    }
L_088FCE90:
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (48896u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FCEF0;
      }
      goto L_088FCEBC;
    }
L_088FCEBC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(356)));
    aot_gpr[4] = (16512u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088FCEF0;
L_088FCEF0:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 3u, 0x088FD03Cu>(ctx, &aot_mem); return;
      }
      goto L_088FCF00;
    }
L_088FCF00:
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = aot_gpr[22] == aot_gpr[21];
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088FCF30;
      }
      goto L_088FCF24;
    }
L_088FCF24:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[22] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088FCF38;
      }
      goto L_088FCF30;
    }
L_088FCF30:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088FCF38;
L_088FCF38:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 2u, 0x088FD02Cu>(ctx, &aot_mem); return;
      }
      goto L_088FCF40;
    }
L_088FCF40:
    { const bool branch_taken = aot_gpr[23] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 2u, 0x088FD02Cu>(ctx, &aot_mem); return;
      }
      goto L_088FCF48;
    }
L_088FCF48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_088FCF98;
      }
      goto L_088FCF90;
    }
L_088FCF90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCFB4;
      }
      goto L_088FCF98;
    }
L_088FCF98:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (48896u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088FCFB4;
    }
    goto L_088FCFB4;
L_088FCFB4:
    aot_fpr[24] = std::sqrt(aot_fpr[24]);
    aot_gpr[4] = (15428u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39846u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[24] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_088FCFE0;
    }
    goto L_088FCFD8;
L_088FCFD8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_088FCFF0;
      }
      goto L_088FCFE0;
    }
L_088FCFE0:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088FCFF0;
    }
    goto L_088FCFF0;
L_088FCFF0:
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[5] = (17224u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x088FD000u; return;
}

void recomp_unit_0248(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0248_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_248(Runtime &runtime) {
    runtime.register_generated_unit(248u, 0x088FC000u, 4096u, &recomp_unit_0248, &recomp_unit_0248_entry);
    runtime.register_function(0x088FC000u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC060u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC06Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC084u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC094u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC0A8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC0B8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC0C0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC0CCu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC0D4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC0F4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC108u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC120u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC128u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC138u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC150u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC158u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC160u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC18Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC1A4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC1ACu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC1D8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC1FCu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC204u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC208u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC210u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC218u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC240u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC248u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC258u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC268u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC270u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC274u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC27Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC28Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC29Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC2A4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC2A8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC2ACu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC2B4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC2C4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC2CCu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC2D4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC2DCu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC2E4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC2ECu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC368u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC370u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC378u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC388u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC38Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC390u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC3C0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC3D4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC3ECu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC3F8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC400u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC42Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC448u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC468u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC490u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC4A8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC4B4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC510u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC518u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC528u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC530u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC54Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC560u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC5B0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC5B8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC5D0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC5E0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC5E8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC5FCu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC608u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC624u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC62Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC648u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC650u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC660u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC668u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC680u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC68Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC698u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC6C0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC6D8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC6E4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC73Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC744u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC754u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC75Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC77Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC790u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC7E0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC7E8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC804u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC814u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC81Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC830u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC83Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC858u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC860u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC87Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC884u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC894u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC89Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC8B4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC8C0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC8CCu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC8E0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC908u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC940u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC960u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC998u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC9ACu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC9B0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC9B8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC9DCu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC9E4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FC9F4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCA04u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCA0Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCA20u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCA30u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCA38u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCA48u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCA58u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCA60u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCA74u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCA84u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCA90u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCAA0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCAB0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCABCu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCACCu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCAE0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCAE8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCAF0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCAF4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCAFCu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCB1Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCB28u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCB6Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCB9Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCBF4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCC20u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCC2Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCC30u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCC38u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCC40u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCC58u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCC6Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCC78u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCC84u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCC8Cu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCC94u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCCECu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCCF4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCD24u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCD48u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCD50u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCD60u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCD98u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCDB8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCDC0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCDDCu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCDF0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCDF8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCE14u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCE54u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCE74u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCE84u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCE90u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCEBCu, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCEF0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCF00u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCF24u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCF30u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCF38u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCF40u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCF48u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCF90u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCF98u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCFB4u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCFD8u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCFE0u, &recomp_unit_0248, "recomp_unit_0248");
    runtime.register_function(0x088FCFF0u, &recomp_unit_0248, "recomp_unit_0248");
}
} // namespace psprecomp
