#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0091[1022] = {
    1, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 20, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 33, 0, 34, 0, 0, 35, 0, 36, 0, 37, 0,
    0, 0, 0, 38, 0, 0, 39, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0,
    52, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 67, 0, 0, 68, 0, 69, 0, 70,
    0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 94, 0,
    95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0,
    102, 0, 0, 0, 0, 103, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 110, 0, 0,
    111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0,
    117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    127, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0,
    0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0,
    0, 161, 0, 162, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168,
    0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0,
    0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 190, 0, 191, 0, 0,
    0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215,
    0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225,
};
void recomp_unit_0091_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0885F000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0091[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0885F000;
    case 2u: goto L_0885F01C;
    case 3u: goto L_0885F020;
    case 4u: goto L_0885F050;
    case 5u: goto L_0885F07C;
    case 6u: goto L_0885F08C;
    case 7u: goto L_0885F098;
    case 8u: goto L_0885F0B8;
    case 9u: goto L_0885F0D4;
    case 10u: goto L_0885F0E8;
    case 11u: goto L_0885F0EC;
    case 12u: goto L_0885F104;
    case 13u: goto L_0885F11C;
    case 14u: goto L_0885F128;
    case 15u: goto L_0885F130;
    case 16u: goto L_0885F134;
    case 17u: goto L_0885F140;
    case 18u: goto L_0885F15C;
    case 19u: goto L_0885F170;
    case 20u: goto L_0885F174;
    case 21u: goto L_0885F18C;
    case 22u: goto L_0885F1A4;
    case 23u: goto L_0885F1B0;
    case 24u: goto L_0885F1B8;
    case 25u: goto L_0885F1BC;
    case 26u: goto L_0885F1D0;
    case 27u: goto L_0885F1F8;
    case 28u: goto L_0885F214;
    case 29u: goto L_0885F228;
    case 30u: goto L_0885F230;
    case 31u: goto L_0885F244;
    case 32u: goto L_0885F250;
    case 33u: goto L_0885F254;
    case 34u: goto L_0885F25C;
    case 35u: goto L_0885F268;
    case 36u: goto L_0885F270;
    case 37u: goto L_0885F278;
    case 38u: goto L_0885F28C;
    case 39u: goto L_0885F298;
    case 40u: goto L_0885F29C;
    case 41u: goto L_0885F2A4;
    case 42u: goto L_0885F2B0;
    case 43u: goto L_0885F2CC;
    case 44u: goto L_0885F2F8;
    case 45u: goto L_0885F304;
    case 46u: goto L_0885F30C;
    case 47u: goto L_0885F318;
    case 48u: goto L_0885F330;
    case 49u: goto L_0885F350;
    case 50u: goto L_0885F36C;
    case 51u: goto L_0885F378;
    case 52u: goto L_0885F380;
    case 53u: goto L_0885F384;
    case 54u: goto L_0885F38C;
    case 55u: goto L_0885F3B0;
    case 56u: goto L_0885F3C8;
    case 57u: goto L_0885F3CC;
    case 58u: goto L_0885F3E0;
    case 59u: goto L_0885F3EC;
    case 60u: goto L_0885F3F8;
    case 61u: goto L_0885F424;
    case 62u: goto L_0885F42C;
    case 63u: goto L_0885F438;
    case 64u: goto L_0885F444;
    case 65u: goto L_0885F450;
    case 66u: goto L_0885F45C;
    case 67u: goto L_0885F460;
    case 68u: goto L_0885F46C;
    case 69u: goto L_0885F474;
    case 70u: goto L_0885F47C;
    case 71u: goto L_0885F484;
    case 72u: goto L_0885F48C;
    case 73u: goto L_0885F494;
    case 74u: goto L_0885F49C;
    case 75u: goto L_0885F4AC;
    case 76u: goto L_0885F4C4;
    case 77u: goto L_0885F4D0;
    case 78u: goto L_0885F4DC;
    case 79u: goto L_0885F4E8;
    case 80u: goto L_0885F4F4;
    case 81u: goto L_0885F514;
    case 82u: goto L_0885F520;
    case 83u: goto L_0885F52C;
    case 84u: goto L_0885F534;
    case 85u: goto L_0885F540;
    case 86u: goto L_0885F548;
    case 87u: goto L_0885F554;
    case 88u: goto L_0885F560;
    case 89u: goto L_0885F584;
    case 90u: goto L_0885F598;
    case 91u: goto L_0885F5A8;
    case 92u: goto L_0885F5B4;
    case 93u: goto L_0885F5F4;
    case 94u: goto L_0885F5F8;
    case 95u: goto L_0885F600;
    case 96u: goto L_0885F60C;
    case 97u: goto L_0885F61C;
    case 98u: goto L_0885F644;
    case 99u: goto L_0885F660;
    case 100u: goto L_0885F668;
    case 101u: goto L_0885F674;
    case 102u: goto L_0885F680;
    case 103u: goto L_0885F694;
    case 104u: goto L_0885F698;
    case 105u: goto L_0885F6BC;
    case 106u: goto L_0885F6C4;
    case 107u: goto L_0885F6D8;
    case 108u: goto L_0885F6E0;
    case 109u: goto L_0885F6E8;
    case 110u: goto L_0885F6F4;
    case 111u: goto L_0885F700;
    case 112u: goto L_0885F710;
    case 113u: goto L_0885F734;
    case 114u: goto L_0885F758;
    case 115u: goto L_0885F768;
    case 116u: goto L_0885F770;
    case 117u: goto L_0885F780;
    case 118u: goto L_0885F788;
    case 119u: goto L_0885F7C8;
    case 120u: goto L_0885F7D8;
    case 121u: goto L_0885F7F8;
    case 122u: goto L_0885F828;
    case 123u: goto L_0885F840;
    case 124u: goto L_0885F848;
    case 125u: goto L_0885F858;
    case 126u: goto L_0885F86C;
    case 127u: goto L_0885F880;
    case 128u: goto L_0885F884;
    case 129u: goto L_0885F8A8;
    case 130u: goto L_0885F8B8;
    case 131u: goto L_0885F8E4;
    case 132u: goto L_0885F8F0;
    case 133u: goto L_0885F908;
    case 134u: goto L_0885F914;
    case 135u: goto L_0885F91C;
    case 136u: goto L_0885F92C;
    case 137u: goto L_0885F938;
    case 138u: goto L_0885F944;
    case 139u: goto L_0885F954;
    case 140u: goto L_0885F95C;
    case 141u: goto L_0885F970;
    case 142u: goto L_0885F98C;
    case 143u: goto L_0885F9A4;
    case 144u: goto L_0885F9BC;
    case 145u: goto L_0885F9CC;
    case 146u: goto L_0885F9DC;
    case 147u: goto L_0885F9F0;
    case 148u: goto L_0885F9FC;
    case 149u: goto L_0885FA2C;
    case 150u: goto L_0885FA40;
    case 151u: goto L_0885FA54;
    case 152u: goto L_0885FA6C;
    case 153u: goto L_0885FA80;
    case 154u: goto L_0885FA94;
    case 155u: goto L_0885FA9C;
    case 156u: goto L_0885FAC0;
    case 157u: goto L_0885FACC;
    case 158u: goto L_0885FAD0;
    case 159u: goto L_0885FAE0;
    case 160u: goto L_0885FAE8;
    case 161u: goto L_0885FB04;
    case 162u: goto L_0885FB0C;
    case 163u: goto L_0885FB10;
    case 164u: goto L_0885FB20;
    case 165u: goto L_0885FB28;
    case 166u: goto L_0885FB38;
    case 167u: goto L_0885FB64;
    case 168u: goto L_0885FB7C;
    case 169u: goto L_0885FB88;
    case 170u: goto L_0885FB9C;
    case 171u: goto L_0885FBB4;
    case 172u: goto L_0885FBC8;
    case 173u: goto L_0885FBD4;
    case 174u: goto L_0885FBE0;
    case 175u: goto L_0885FBEC;
    case 176u: goto L_0885FBF8;
    case 177u: goto L_0885FC08;
    case 178u: goto L_0885FC18;
    case 179u: goto L_0885FC24;
    case 180u: goto L_0885FC68;
    case 181u: goto L_0885FC80;
    case 182u: goto L_0885FC88;
    case 183u: goto L_0885FC90;
    case 184u: goto L_0885FC98;
    case 185u: goto L_0885FCA0;
    case 186u: goto L_0885FCC8;
    case 187u: goto L_0885FCD0;
    case 188u: goto L_0885FCD8;
    case 189u: goto L_0885FCE8;
    case 190u: goto L_0885FCEC;
    case 191u: goto L_0885FCF4;
    case 192u: goto L_0885FD04;
    case 193u: goto L_0885FD14;
    case 194u: goto L_0885FD24;
    case 195u: goto L_0885FD30;
    case 196u: goto L_0885FD5C;
    case 197u: goto L_0885FD68;
    case 198u: goto L_0885FD74;
    case 199u: goto L_0885FDA0;
    case 200u: goto L_0885FDC8;
    case 201u: goto L_0885FDD0;
    case 202u: goto L_0885FDF8;
    case 203u: goto L_0885FE28;
    case 204u: goto L_0885FE48;
    case 205u: goto L_0885FE74;
    case 206u: goto L_0885FE94;
    case 207u: goto L_0885FEB0;
    case 208u: goto L_0885FECC;
    case 209u: goto L_0885FEE4;
    case 210u: goto L_0885FEF0;
    case 211u: goto L_0885FF2C;
    case 212u: goto L_0885FF40;
    case 213u: goto L_0885FF4C;
    case 214u: goto L_0885FF64;
    case 215u: goto L_0885FF7C;
    case 216u: goto L_0885FF88;
    case 217u: goto L_0885FF94;
    case 218u: goto L_0885FFA0;
    case 219u: goto L_0885FFAC;
    case 220u: goto L_0885FFB8;
    case 221u: goto L_0885FFC4;
    case 222u: goto L_0885FFD0;
    case 223u: goto L_0885FFDC;
    case 224u: goto L_0885FFE8;
    case 225u: goto L_0885FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0885F000:
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(256);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0885F01Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 171u, 0x0894BC74u>(ctx, &aot_mem) && ctx.pc == 0x0885F01Cu) goto L_0885F01C;
    return;
L_0885F01C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(104), aot_gpr[19]);
    goto L_0885F020;
L_0885F020:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1028)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1032)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1036)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1040)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1044)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1048)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1052)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1056)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1060)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1064)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F050:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] & 2048u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F08C;
      }
      goto L_0885F07C;
    }
L_0885F07C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0885F08Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 53u, 0x0885E3B4u>(ctx, &aot_mem) && ctx.pc == 0x0885F08Cu) goto L_0885F08C;
    return;
L_0885F08C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F098:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0885F134;
      }
      goto L_0885F0B8;
    }
L_0885F0B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[5] & 32u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F0EC;
      }
      goto L_0885F0D4;
    }
L_0885F0D4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (0x0885F0E8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 21u, 0x0885C16Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F0E8u) goto L_0885F0E8;
    return;
L_0885F0E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0885F0EC;
L_0885F0EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (aot_gpr[5] & 25u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F11C;
      }
      goto L_0885F104;
    }
L_0885F104:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0885F11C;
L_0885F11C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0885F128u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 91u, 0x08861710u>(ctx, &aot_mem) && ctx.pc == 0x0885F128u) goto L_0885F128;
    return;
L_0885F128:
    aot_gpr[31] = (0x0885F130u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 16u, 0x088610F0u>(ctx, &aot_mem) && ctx.pc == 0x0885F130u) goto L_0885F130;
    return;
L_0885F130:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_0885F134;
L_0885F134:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F1BC;
      }
      goto L_0885F140;
    }
L_0885F140:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (aot_gpr[5] & 32u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F174;
      }
      goto L_0885F15C;
    }
L_0885F15C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (0x0885F170u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 21u, 0x0885C16Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F170u) goto L_0885F170;
    return;
L_0885F170:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0885F174;
L_0885F174:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (aot_gpr[5] & 25u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F1A4;
      }
      goto L_0885F18C;
    }
L_0885F18C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0885F1A4;
L_0885F1A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0885F1B0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 91u, 0x08861710u>(ctx, &aot_mem) && ctx.pc == 0x0885F1B0u) goto L_0885F1B0;
    return;
L_0885F1B0:
    aot_gpr[31] = (0x0885F1B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 16u, 0x088610F0u>(ctx, &aot_mem) && ctx.pc == 0x0885F1B8u) goto L_0885F1B8;
    return;
L_0885F1B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_0885F1BC;
L_0885F1BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F1D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885F2B0;
      }
      goto L_0885F1F8;
    }
L_0885F1F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (32u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F2B0;
      }
      goto L_0885F214;
    }
L_0885F214:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0885F268;
      }
      goto L_0885F228;
    }
L_0885F228:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F268;
      }
      goto L_0885F230;
    }
L_0885F230:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0885F244u);
    aot_gpr[7] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 217u, 0x088BCF88u>(ctx, &aot_mem) && ctx.pc == 0x0885F244u) goto L_0885F244;
    return;
L_0885F244:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) <= 0;
    aot_gpr[19] = (aot_gpr[18] << 2u);
      if (branch_taken) {
          goto L_0885F268;
      }
      goto L_0885F250;
    }
L_0885F250:
    aot_gpr[19] = (aot_gpr[29] + aot_gpr[19]);
    goto L_0885F254;
L_0885F254:
    aot_gpr[31] = (0x0885F25Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 41u, 0x088BD2ECu>(ctx, &aot_mem) && ctx.pc == 0x0885F25Cu) goto L_0885F25C;
    return;
L_0885F25C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) > 0;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0885F254;
      }
      goto L_0885F268;
    }
L_0885F268:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0885F2B0;
      }
      goto L_0885F270;
    }
L_0885F270:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F2B0;
      }
      goto L_0885F278;
    }
L_0885F278:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885F28Cu);
    aot_gpr[7] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 217u, 0x088BCF88u>(ctx, &aot_mem) && ctx.pc == 0x0885F28Cu) goto L_0885F28C;
    return;
L_0885F28C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    aot_gpr[16] = (aot_gpr[17] << 2u);
      if (branch_taken) {
          goto L_0885F2B0;
      }
      goto L_0885F298;
    }
L_0885F298:
    aot_gpr[16] = (aot_gpr[29] + aot_gpr[16]);
    goto L_0885F29C;
L_0885F29C:
    aot_gpr[31] = (0x0885F2A4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 42u, 0x088BD300u>(ctx, &aot_mem) && ctx.pc == 0x0885F2A4u) goto L_0885F2A4;
    return;
L_0885F2A4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) > 0;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0885F29C;
      }
      goto L_0885F2B0;
    }
L_0885F2B0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F2CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0885F38C;
      }
      goto L_0885F2F8;
    }
L_0885F2F8:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(156));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(132));
    goto L_0885F304;
L_0885F304:
    aot_gpr[31] = (0x0885F30Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 94u, 0x08861760u>(ctx, &aot_mem) && ctx.pc == 0x0885F30Cu) goto L_0885F30C;
    return;
L_0885F30C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885F318u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_0885F050;
L_0885F318:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885F380;
      }
      goto L_0885F330;
    }
L_0885F330:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885F350u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 40u, 0x0885C2B0u>(ctx, &aot_mem) && ctx.pc == 0x0885F350u) goto L_0885F350;
    return;
L_0885F350:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x0885F36Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(80), aot_gpr[7]);
    goto L_0885F098;
L_0885F36C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885F378u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_0885F1D0;
L_0885F378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F384;
      }
      goto L_0885F380;
    }
L_0885F380:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_0885F384;
L_0885F384:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885F304;
      }
      goto L_0885F38C;
    }
L_0885F38C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F3B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[10] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_0885F3EC;
      }
      goto L_0885F3C8;
    }
L_0885F3C8:
    aot_gpr[11] = (aot_gpr[10] + static_cast<std::uint32_t>(96));
    goto L_0885F3CC;
L_0885F3CC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0885F3E0u);
    aot_gpr[7] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 21u, 0x0885C16Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F3E0u) goto L_0885F3E0;
    return;
L_0885F3E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885F3CC;
      }
      goto L_0885F3EC;
    }
L_0885F3EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F3F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0885F424u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 2u, 0x0885C010u>(ctx, &aot_mem) && ctx.pc == 0x0885F424u) goto L_0885F424;
    return;
L_0885F424:
    aot_gpr[31] = (0x0885F42Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 9u, 0x0885C0C4u>(ctx, &aot_mem) && ctx.pc == 0x0885F42Cu) goto L_0885F42C;
    return;
L_0885F42C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0885F444;
      }
      goto L_0885F438;
    }
L_0885F438:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    if (static_cast<std::int32_t>(aot_gpr[5]) > 0) {
    aot_gpr[4] = (0u | 1u);
        goto L_0885F460;
    }
    goto L_0885F444;
L_0885F444:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F460;
      }
      goto L_0885F450;
    }
L_0885F450:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0885F460;
      }
      goto L_0885F45C;
    }
L_0885F45C:
    aot_gpr[4] = (0u | 1u);
    goto L_0885F460;
L_0885F460:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0885F49C;
      }
      goto L_0885F46C;
    }
L_0885F46C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F49C;
      }
      goto L_0885F474;
    }
L_0885F474:
    aot_gpr[31] = (0x0885F47Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 24u, 0x0885C19Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F47Cu) goto L_0885F47C;
    return;
L_0885F47C:
    aot_gpr[31] = (0x0885F484u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 120u, 0x0885C78Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F484u) goto L_0885F484;
    return;
L_0885F484:
    aot_gpr[31] = (0x0885F48Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 37u, 0x0885E27Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F48Cu) goto L_0885F48C;
    return;
L_0885F48C:
    aot_gpr[31] = (0x0885F494u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885F2CC;
L_0885F494:
    aot_gpr[31] = (0x0885F49Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885F3B0;
L_0885F49C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F4AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0885F4C4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 181u, 0x0885BC60u>(ctx, &aot_mem) && ctx.pc == 0x0885F4C4u) goto L_0885F4C4;
    return;
L_0885F4C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F4DC;
      }
      goto L_0885F4D0;
    }
L_0885F4D0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0885F4DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F4DCu) goto L_0885F4DC;
    return;
L_0885F4DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F4F4;
      }
      goto L_0885F4E8;
    }
L_0885F4E8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0885F4F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F4F4u) goto L_0885F4F4;
    return;
L_0885F4F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0885F514u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0885F514u) goto L_0885F514;
    return;
L_0885F514:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0885F520u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0885F520u) goto L_0885F520;
    return;
L_0885F520:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0885F52Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0885F52Cu) goto L_0885F52C;
    return;
L_0885F52C:
    aot_gpr[31] = (0x0885F534u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 33u, 0x088601F8u>(ctx, &aot_mem) && ctx.pc == 0x0885F534u) goto L_0885F534;
    return;
L_0885F534:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0885F584;
      }
      goto L_0885F540;
    }
L_0885F540:
    aot_gpr[31] = (0x0885F548u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 131u, 0x08A4C880u>(ctx, &aot_mem) && ctx.pc == 0x0885F548u) goto L_0885F548;
    return;
L_0885F548:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x0885F554u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 131u, 0x08A4C880u>(ctx, &aot_mem) && ctx.pc == 0x0885F554u) goto L_0885F554;
    return;
L_0885F554:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0885F560u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 131u, 0x08A4C880u>(ctx, &aot_mem) && ctx.pc == 0x0885F560u) goto L_0885F560;
    return;
L_0885F560:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0885F584u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F584u) goto L_0885F584;
    return;
L_0885F584:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F598:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0885F5A8u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 116u, 0x08A4C790u>(ctx, &aot_mem) && ctx.pc == 0x0885F5A8u) goto L_0885F5A8;
    return;
L_0885F5A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F5B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
    aot_gpr[6] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0885F644;
      }
      goto L_0885F5F4;
    }
L_0885F5F4:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    goto L_0885F5F8;
L_0885F5F8:
    aot_gpr[31] = (0x0885F600u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 21u, 0x08861148u>(ctx, &aot_mem) && ctx.pc == 0x0885F600u) goto L_0885F600;
    return;
L_0885F600:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0885F60Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 38u, 0x08861264u>(ctx, &aot_mem) && ctx.pc == 0x0885F60Cu) goto L_0885F60C;
    return;
L_0885F60C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0885F61Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_0885F598;
L_0885F61C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(184)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(112));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885F5F8;
      }
      goto L_0885F644;
    }
L_0885F644:
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
L_0885F660:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F6BC;
      }
      goto L_0885F668;
    }
L_0885F668:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0885F6BC;
      }
      goto L_0885F674;
    }
L_0885F674:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F6BC;
      }
      goto L_0885F680;
    }
L_0885F680:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F6BC;
      }
      goto L_0885F694;
    }
L_0885F694:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    goto L_0885F698;
L_0885F698:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_0885F698;
      }
      goto L_0885F6BC;
    }
L_0885F6BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F6C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0885F6D8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 181u, 0x0885BC60u>(ctx, &aot_mem) && ctx.pc == 0x0885F6D8u) goto L_0885F6D8;
    return;
L_0885F6D8:
    aot_gpr[31] = (0x0885F6E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885F5B4;
L_0885F6E0:
    aot_gpr[31] = (0x0885F6E8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 188u, 0x0885BCBCu>(ctx, &aot_mem) && ctx.pc == 0x0885F6E8u) goto L_0885F6E8;
    return;
L_0885F6E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x0885F6F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885F660;
L_0885F6F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0885F700u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885F660;
L_0885F700:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_0885F710;
    }
    goto L_0885F710;
L_0885F710:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(180), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(188), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(192), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F734:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
    aot_gpr[7] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_0885F780;
      }
      goto L_0885F758;
    }
L_0885F758:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (aot_gpr[7] & 1u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F770;
      }
      goto L_0885F768;
    }
L_0885F768:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), aot_gpr[6]);
      if (branch_taken) {
          goto L_0885F780;
      }
      goto L_0885F770;
    }
L_0885F770:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(112));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885F758;
      }
      goto L_0885F780;
    }
L_0885F780:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F788:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(184)));
    aot_gpr[7] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[7] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0885F7C8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 38u, 0x08861264u>(ctx, &aot_mem) && ctx.pc == 0x0885F7C8u) goto L_0885F7C8;
    return;
L_0885F7C8:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885F7D8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0885F598;
L_0885F7D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(184)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(184), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F7F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0885F8B8;
      }
      goto L_0885F828;
    }
L_0885F828:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_0885F8B8;
      }
      goto L_0885F840;
    }
L_0885F840:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    goto L_0885F848;
L_0885F848:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885F858u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 169u, 0x0885BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F858u) goto L_0885F858;
    return;
L_0885F858:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885F884;
      }
      goto L_0885F86C;
    }
L_0885F86C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885F880u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 96u, 0x0885D60Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F880u) goto L_0885F880;
    return;
L_0885F880:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_0885F884;
L_0885F884:
    aot_gpr[4] = (aot_gpr[18] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(80), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x0885F8A8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 167u, 0x0885BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F8A8u) goto L_0885F8A8;
    return;
L_0885F8A8:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_0885F848;
      }
      goto L_0885F8B8;
    }
L_0885F8B8:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F8E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0885F954;
      }
      goto L_0885F8F0;
    }
L_0885F8F0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F954;
      }
      goto L_0885F908;
    }
L_0885F908:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885F91C;
      }
      goto L_0885F914;
    }
L_0885F914:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885F91C;
      }
      goto L_0885F91C;
    }
L_0885F91C:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F944;
      }
      goto L_0885F92C;
    }
L_0885F92C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(189)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F944;
      }
      goto L_0885F938;
    }
L_0885F938:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    goto L_0885F944;
L_0885F944:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_0885F908;
      }
      goto L_0885F954;
    }
L_0885F954:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F95C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F970:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
      if (branch_taken) {
          goto L_0885F9DC;
      }
      goto L_0885F98C;
    }
L_0885F98C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F9DC;
      }
      goto L_0885F9A4;
    }
L_0885F9A4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(80)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(72)));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885F9CC;
      }
      goto L_0885F9BC;
    }
L_0885F9BC:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[10]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[11]);
    goto L_0885F9CC;
L_0885F9CC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_0885F9A4;
      }
      goto L_0885F9DC;
    }
L_0885F9DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[31] = (0x0885F9F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 37u, 0x0886023Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F9F0u) goto L_0885F9F0;
    return;
L_0885F9F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F9FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0885FB38;
      }
      goto L_0885FA2C;
    }
L_0885FA2C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885FB38;
      }
      goto L_0885FA40;
    }
L_0885FA40:
    aot_gpr[4] = (32639u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[4] | 65535u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_0885FA54;
L_0885FA54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885FB28;
      }
      goto L_0885FA6C;
    }
L_0885FA6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885FA94;
      }
      goto L_0885FA80;
    }
L_0885FA80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(144)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_0885FA9C;
    }
    goto L_0885FA94;
L_0885FA94:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_0885FB28;
      }
      goto L_0885FA9C;
    }
L_0885FA9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x0885FAC0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 37u, 0x0886023Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FAC0u) goto L_0885FAC0;
    return;
L_0885FAC0:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885FB20;
      }
      goto L_0885FACC;
    }
L_0885FACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0885FAD0;
L_0885FAD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[31] = (0x0885FAE0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 86u, 0x08860A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FAE0u) goto L_0885FAE0;
    return;
L_0885FAE0:
    aot_gpr[31] = (0x0885FAE8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 42u, 0x088602B0u>(ctx, &aot_mem) && ctx.pc == 0x0885FAE8u) goto L_0885FAE8;
    return;
L_0885FAE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0885FB0C;
      }
      goto L_0885FB04;
    }
L_0885FB04:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885FB10;
      }
      goto L_0885FB0C;
    }
L_0885FB0C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0885FB10;
L_0885FB10:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885FAD0;
      }
      goto L_0885FB20;
    }
L_0885FB20:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0885FB28;
L_0885FB28:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_0885FA54;
      }
      goto L_0885FB38;
    }
L_0885FB38:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FB64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0885FB7Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0885F7F8;
L_0885FB7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0885FB88u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885F7F8;
L_0885FB88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885FB9Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_0885F8E4;
L_0885FB9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x0885FBB4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885F8E4;
L_0885FBB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[11] + aot_gpr[5]);
    aot_gpr[31] = (0x0885FBC8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    goto L_0885F95C;
L_0885FBC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x0885FBD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885F970;
L_0885FBD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x0885FBE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885F9FC;
L_0885FBE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0885FBECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885F970;
L_0885FBEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0885FBF8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885F9FC;
L_0885FBF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FC08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0885FC18u);
    aot_gpr[5] = (0u | 208u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x0885FC18u) goto L_0885FC18;
    return;
L_0885FC18:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FC24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0885FC88;
      }
      goto L_0885FC68;
    }
L_0885FC68:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0885FC90;
      }
      goto L_0885FC80;
    }
L_0885FC80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885FCA0;
      }
      goto L_0885FC88;
    }
L_0885FC88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885FDF8;
      }
      goto L_0885FC90;
    }
L_0885FC90:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0885FCA0;
      }
      goto L_0885FC98;
    }
L_0885FC98:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885FCD0;
      }
      goto L_0885FCA0;
    }
L_0885FCA0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26752)));
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(26768));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(26880));
    aot_gpr[30] = (0u | 1u);
    aot_gpr[21] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[23] = (2218u << 16u);
      if (branch_taken) {
          goto L_0885FCD8;
      }
      goto L_0885FCC8;
    }
L_0885FCC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(26756)));
      if (branch_taken) {
          goto L_0885FCEC;
      }
      goto L_0885FCD0;
    }
L_0885FCD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885FDF8;
      }
      goto L_0885FCD8;
    }
L_0885FCD8:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26752), aot_gpr[5]);
    aot_gpr[31] = (0x0885FCE8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 124u, 0x08860EB0u>(ctx, &aot_mem) && ctx.pc == 0x0885FCE8u) goto L_0885FCE8;
    return;
L_0885FCE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(26756)));
    goto L_0885FCEC;
L_0885FCEC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885FD04;
      }
      goto L_0885FCF4;
    }
L_0885FCF4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(26756), aot_gpr[4]);
    aot_gpr[31] = (0x0885FD04u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 124u, 0x08860EB0u>(ctx, &aot_mem) && ctx.pc == 0x0885FD04u) goto L_0885FD04;
    return;
L_0885FD04:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0885FD14u);
    aot_gpr[6] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FD14u) goto L_0885FD14;
    return;
L_0885FD14:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0885FD24u);
    aot_gpr[6] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FD24u) goto L_0885FD24;
    return;
L_0885FD24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(26508)));
    aot_gpr[31] = (0x0885FD30u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 189u, 0x088A0C6Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FD30u) goto L_0885FD30;
    return;
L_0885FD30:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(716))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0885FD5Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 38u, 0x08861264u>(ctx, &aot_mem) && ctx.pc == 0x0885FD5Cu) goto L_0885FD5C;
    return;
L_0885FD5C:
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0885FDD0;
      }
      goto L_0885FD68;
    }
L_0885FD68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(26508)));
    aot_gpr[31] = (0x0885FD74u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 189u, 0x088A0C6Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FD74u) goto L_0885FD74;
    return;
L_0885FD74:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(716))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0885FDA0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 38u, 0x08861264u>(ctx, &aot_mem) && ctx.pc == 0x0885FDA0u) goto L_0885FDA0;
    return;
L_0885FDA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x0885FDC8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 201u, 0x0885DC4Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FDC8u) goto L_0885FDC8;
    return;
L_0885FDC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885FDF8;
      }
      goto L_0885FDD0;
    }
L_0885FDD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x0885FDF8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 201u, 0x0885DC4Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FDF8u) goto L_0885FDF8;
    return;
L_0885FDF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FE28:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24376), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FE48:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = std::fabs(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = std::fabs(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vminmax(20u, 20u, 21u, 3u, true);
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FE74:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24392), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FE94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(26992)));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_0885FECC;
      }
      goto L_0885FEB0;
    }
L_0885FEB0:
    aot_gpr[8] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(26992), aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(27008));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(27008), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0885FECC;
L_0885FECC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(27008);
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
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0885FEE4u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0885FE48;
L_0885FEE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FEF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0885FF2Cu);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FF2Cu) goto L_0885FF2C;
    return;
L_0885FF2C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0885FF40u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_0885FE94;
L_0885FF40:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0885FF4Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 140u, 0x08A4C908u>(ctx, &aot_mem) && ctx.pc == 0x0885FF4Cu) goto L_0885FF4C;
    return;
L_0885FF4C:
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
L_0885FF64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0885FF7Cu);
    aot_gpr[5] = (0u | 1u);
    goto L_0885FEF0;
L_0885FF7C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885FF88u);
    aot_gpr[5] = (0u | 2u);
    goto L_0885FEF0;
L_0885FF88:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885FF94u);
    aot_gpr[5] = (0u | 4u);
    goto L_0885FEF0;
L_0885FF94:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885FFA0u);
    aot_gpr[5] = (0u | 8u);
    goto L_0885FEF0;
L_0885FFA0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885FFACu);
    aot_gpr[5] = (0u | 16u);
    goto L_0885FEF0;
L_0885FFAC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885FFB8u);
    aot_gpr[5] = (0u | 32u);
    goto L_0885FEF0;
L_0885FFB8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885FFC4u);
    aot_gpr[5] = (0u | 256u);
    goto L_0885FEF0;
L_0885FFC4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885FFD0u);
    aot_gpr[5] = (0u | 512u);
    goto L_0885FEF0;
L_0885FFD0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885FFDCu);
    aot_gpr[5] = (0u | 1024u);
    goto L_0885FEF0;
L_0885FFDC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885FFE8u);
    aot_gpr[5] = (0u | 2048u);
    goto L_0885FEF0;
L_0885FFE8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885FFF4u);
    aot_gpr[5] = (0u | 4096u);
    goto L_0885FEF0;
L_0885FFF4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08860000u);
    aot_gpr[5] = (0u | 8192u);
    goto L_0885FEF0;
}

void recomp_unit_0091(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0091_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_91(Runtime &runtime) {
    runtime.register_generated_unit(91u, 0x0885F000u, 4096u, &recomp_unit_0091, &recomp_unit_0091_entry);
    runtime.register_function(0x0885F000u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F01Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F020u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F050u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F07Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F08Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F098u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F0B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F0D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F0E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F0ECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F104u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F11Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F128u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F130u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F134u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F140u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F15Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F170u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F174u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F18Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F1A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F1B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F1B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F1BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F1D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F1F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F214u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F228u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F230u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F244u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F250u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F254u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F25Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F268u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F270u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F278u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F28Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F298u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F29Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F2A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F2B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F2CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F2F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F304u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F30Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F318u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F330u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F350u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F36Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F378u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F380u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F384u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F38Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F3B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F3C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F3CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F3E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F3ECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F3F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F424u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F42Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F438u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F444u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F450u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F45Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F460u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F46Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F474u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F47Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F484u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F48Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F494u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F49Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F4ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F4C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F4D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F4DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F4E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F4F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F514u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F520u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F52Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F534u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F540u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F548u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F554u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F560u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F584u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F598u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F5A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F5B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F5F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F5F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F600u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F60Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F61Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F644u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F660u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F668u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F674u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F680u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F694u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F698u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F6BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F6C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F6D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F6E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F6E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F6F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F700u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F710u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F734u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F758u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F768u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F770u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F780u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F788u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F7C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F7D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F7F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F828u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F840u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F848u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F858u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F86Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F880u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F884u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F8A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F8B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F8E4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F8F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F908u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F914u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F91Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F92Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F938u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F944u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F954u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F95Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F970u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F98Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F9A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F9BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F9CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F9DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F9F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885F9FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FA2Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FA40u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FA54u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FA6Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FA80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FA94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FA9Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FAC0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FACCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FAD0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FAE0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FAE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FB04u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FB0Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FB10u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FB20u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FB28u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FB38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FB64u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FB7Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FB88u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FB9Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FBB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FBC8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FBD4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FBE0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FBECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FBF8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FC08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FC18u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FC24u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FC68u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FC80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FC88u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FC90u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FC98u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FCA0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FCC8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FCD0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FCD8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FCE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FCECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FCF4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FD04u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FD14u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FD24u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FD30u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FD5Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FD68u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FD74u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FDA0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FDC8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FDD0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FDF8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FE28u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FE48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FE74u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FE94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FEB0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FECCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FEE4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FEF0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FF2Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FF40u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FF4Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FF64u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FF7Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FF88u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FF94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FFA0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FFACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FFB8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FFC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FFD0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FFDCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FFE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0885FFF4u, &recomp_unit_0091, "recomp_unit_0091");
}
} // namespace psprecomp
