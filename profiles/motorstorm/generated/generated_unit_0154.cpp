#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0154[1023] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11,
    0, 12, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 21, 0,
    22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0,
    0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0,
    62, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0,
    0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 88,
    0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 99,
    0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 112, 0,
    113, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0,
    0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 147, 0, 0,
    0, 148, 0, 0, 0, 0, 149, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0,
    157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168,
    0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 179,
    0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 191, 0, 192, 0, 0,
    193, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204,
    0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0,
    0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0,
    231, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247,
};
void recomp_unit_0154_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0889E000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0154[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0889E000;
    case 2u: goto L_0889E014;
    case 3u: goto L_0889E01C;
    case 4u: goto L_0889E02C;
    case 5u: goto L_0889E038;
    case 6u: goto L_0889E048;
    case 7u: goto L_0889E050;
    case 8u: goto L_0889E05C;
    case 9u: goto L_0889E064;
    case 10u: goto L_0889E074;
    case 11u: goto L_0889E07C;
    case 12u: goto L_0889E084;
    case 13u: goto L_0889E094;
    case 14u: goto L_0889E09C;
    case 15u: goto L_0889E0A4;
    case 16u: goto L_0889E0B4;
    case 17u: goto L_0889E140;
    case 18u: goto L_0889E158;
    case 19u: goto L_0889E160;
    case 20u: goto L_0889E168;
    case 21u: goto L_0889E178;
    case 22u: goto L_0889E180;
    case 23u: goto L_0889E190;
    case 24u: goto L_0889E198;
    case 25u: goto L_0889E1A0;
    case 26u: goto L_0889E1C0;
    case 27u: goto L_0889E1E4;
    case 28u: goto L_0889E1F0;
    case 29u: goto L_0889E204;
    case 30u: goto L_0889E210;
    case 31u: goto L_0889E220;
    case 32u: goto L_0889E228;
    case 33u: goto L_0889E234;
    case 34u: goto L_0889E248;
    case 35u: goto L_0889E254;
    case 36u: goto L_0889E25C;
    case 37u: goto L_0889E264;
    case 38u: goto L_0889E274;
    case 39u: goto L_0889E300;
    case 40u: goto L_0889E318;
    case 41u: goto L_0889E320;
    case 42u: goto L_0889E328;
    case 43u: goto L_0889E338;
    case 44u: goto L_0889E340;
    case 45u: goto L_0889E350;
    case 46u: goto L_0889E358;
    case 47u: goto L_0889E360;
    case 48u: goto L_0889E380;
    case 49u: goto L_0889E3A4;
    case 50u: goto L_0889E3B0;
    case 51u: goto L_0889E3C4;
    case 52u: goto L_0889E3D0;
    case 53u: goto L_0889E3E0;
    case 54u: goto L_0889E3E8;
    case 55u: goto L_0889E3FC;
    case 56u: goto L_0889E410;
    case 57u: goto L_0889E42C;
    case 58u: goto L_0889E440;
    case 59u: goto L_0889E454;
    case 60u: goto L_0889E45C;
    case 61u: goto L_0889E46C;
    case 62u: goto L_0889E480;
    case 63u: goto L_0889E488;
    case 64u: goto L_0889E494;
    case 65u: goto L_0889E49C;
    case 66u: goto L_0889E4B8;
    case 67u: goto L_0889E4D4;
    case 68u: goto L_0889E4F0;
    case 69u: goto L_0889E50C;
    case 70u: goto L_0889E514;
    case 71u: goto L_0889E530;
    case 72u: goto L_0889E54C;
    case 73u: goto L_0889E55C;
    case 74u: goto L_0889E56C;
    case 75u: goto L_0889E574;
    case 76u: goto L_0889E590;
    case 77u: goto L_0889E598;
    case 78u: goto L_0889E5A0;
    case 79u: goto L_0889E5A8;
    case 80u: goto L_0889E5C0;
    case 81u: goto L_0889E5F0;
    case 82u: goto L_0889E630;
    case 83u: goto L_0889E64C;
    case 84u: goto L_0889E654;
    case 85u: goto L_0889E660;
    case 86u: goto L_0889E66C;
    case 87u: goto L_0889E674;
    case 88u: goto L_0889E67C;
    case 89u: goto L_0889E684;
    case 90u: goto L_0889E690;
    case 91u: goto L_0889E69C;
    case 92u: goto L_0889E6AC;
    case 93u: goto L_0889E6BC;
    case 94u: goto L_0889E6CC;
    case 95u: goto L_0889E6D8;
    case 96u: goto L_0889E6E0;
    case 97u: goto L_0889E6EC;
    case 98u: goto L_0889E6F4;
    case 99u: goto L_0889E6FC;
    case 100u: goto L_0889E704;
    case 101u: goto L_0889E70C;
    case 102u: goto L_0889E714;
    case 103u: goto L_0889E71C;
    case 104u: goto L_0889E724;
    case 105u: goto L_0889E72C;
    case 106u: goto L_0889E73C;
    case 107u: goto L_0889E748;
    case 108u: goto L_0889E750;
    case 109u: goto L_0889E75C;
    case 110u: goto L_0889E764;
    case 111u: goto L_0889E770;
    case 112u: goto L_0889E778;
    case 113u: goto L_0889E780;
    case 114u: goto L_0889E78C;
    case 115u: goto L_0889E794;
    case 116u: goto L_0889E7A4;
    case 117u: goto L_0889E7AC;
    case 118u: goto L_0889E7B8;
    case 119u: goto L_0889E7C0;
    case 120u: goto L_0889E7D4;
    case 121u: goto L_0889E7E0;
    case 122u: goto L_0889E7E8;
    case 123u: goto L_0889E7F0;
    case 124u: goto L_0889E80C;
    case 125u: goto L_0889E814;
    case 126u: goto L_0889E830;
    case 127u: goto L_0889E840;
    case 128u: goto L_0889E85C;
    case 129u: goto L_0889E870;
    case 130u: goto L_0889E88C;
    case 131u: goto L_0889E89C;
    case 132u: goto L_0889E8B0;
    case 133u: goto L_0889E8CC;
    case 134u: goto L_0889E8E4;
    case 135u: goto L_0889E914;
    case 136u: goto L_0889E930;
    case 137u: goto L_0889E944;
    case 138u: goto L_0889E960;
    case 139u: goto L_0889E984;
    case 140u: goto L_0889E98C;
    case 141u: goto L_0889E9A0;
    case 142u: goto L_0889E9B4;
    case 143u: goto L_0889E9C8;
    case 144u: goto L_0889E9CC;
    case 145u: goto L_0889E9DC;
    case 146u: goto L_0889E9F0;
    case 147u: goto L_0889E9F4;
    case 148u: goto L_0889EA04;
    case 149u: goto L_0889EA18;
    case 150u: goto L_0889EA1C;
    case 151u: goto L_0889EA2C;
    case 152u: goto L_0889EA38;
    case 153u: goto L_0889EA48;
    case 154u: goto L_0889EA50;
    case 155u: goto L_0889EA60;
    case 156u: goto L_0889EA70;
    case 157u: goto L_0889EA80;
    case 158u: goto L_0889EA88;
    case 159u: goto L_0889EA90;
    case 160u: goto L_0889EAAC;
    case 161u: goto L_0889EACC;
    case 162u: goto L_0889EAF4;
    case 163u: goto L_0889EB14;
    case 164u: goto L_0889EB30;
    case 165u: goto L_0889EB3C;
    case 166u: goto L_0889EB4C;
    case 167u: goto L_0889EB6C;
    case 168u: goto L_0889EB7C;
    case 169u: goto L_0889EB84;
    case 170u: goto L_0889EB8C;
    case 171u: goto L_0889EB94;
    case 172u: goto L_0889EBA0;
    case 173u: goto L_0889EBAC;
    case 174u: goto L_0889EBBC;
    case 175u: goto L_0889EBCC;
    case 176u: goto L_0889EBDC;
    case 177u: goto L_0889EBE8;
    case 178u: goto L_0889EBF0;
    case 179u: goto L_0889EBFC;
    case 180u: goto L_0889EC04;
    case 181u: goto L_0889EC0C;
    case 182u: goto L_0889EC14;
    case 183u: goto L_0889EC1C;
    case 184u: goto L_0889EC24;
    case 185u: goto L_0889EC2C;
    case 186u: goto L_0889EC34;
    case 187u: goto L_0889EC3C;
    case 188u: goto L_0889EC4C;
    case 189u: goto L_0889EC58;
    case 190u: goto L_0889EC60;
    case 191u: goto L_0889EC6C;
    case 192u: goto L_0889EC74;
    case 193u: goto L_0889EC80;
    case 194u: goto L_0889EC88;
    case 195u: goto L_0889EC94;
    case 196u: goto L_0889ECA8;
    case 197u: goto L_0889ECB0;
    case 198u: goto L_0889ECB8;
    case 199u: goto L_0889ECC0;
    case 200u: goto L_0889ECCC;
    case 201u: goto L_0889ECD4;
    case 202u: goto L_0889ECE8;
    case 203u: goto L_0889ECF4;
    case 204u: goto L_0889ECFC;
    case 205u: goto L_0889ED04;
    case 206u: goto L_0889ED20;
    case 207u: goto L_0889ED34;
    case 208u: goto L_0889ED50;
    case 209u: goto L_0889ED60;
    case 210u: goto L_0889ED74;
    case 211u: goto L_0889ED90;
    case 212u: goto L_0889EDA4;
    case 213u: goto L_0889EDC4;
    case 214u: goto L_0889EDE4;
    case 215u: goto L_0889EDF8;
    case 216u: goto L_0889EE04;
    case 217u: goto L_0889EE18;
    case 218u: goto L_0889EE2C;
    case 219u: goto L_0889EE34;
    case 220u: goto L_0889EE48;
    case 221u: goto L_0889EE54;
    case 222u: goto L_0889EE68;
    case 223u: goto L_0889EE70;
    case 224u: goto L_0889EE80;
    case 225u: goto L_0889EE9C;
    case 226u: goto L_0889EEA8;
    case 227u: goto L_0889EEC4;
    case 228u: goto L_0889EED0;
    case 229u: goto L_0889EEE4;
    case 230u: goto L_0889EEF8;
    case 231u: goto L_0889EF00;
    case 232u: goto L_0889EF08;
    case 233u: goto L_0889EF14;
    case 234u: goto L_0889EF20;
    case 235u: goto L_0889EF34;
    case 236u: goto L_0889EF50;
    case 237u: goto L_0889EF58;
    case 238u: goto L_0889EF64;
    case 239u: goto L_0889EF78;
    case 240u: goto L_0889EF94;
    case 241u: goto L_0889EF9C;
    case 242u: goto L_0889EFA4;
    case 243u: goto L_0889EFB8;
    case 244u: goto L_0889EFD4;
    case 245u: goto L_0889EFE0;
    case 246u: goto L_0889EFEC;
    case 247u: goto L_0889EFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0889E000:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 14u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E014;
    }
L_0889E014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E01C;
    }
L_0889E01C:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x0889E02Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x0889E02Cu) goto L_0889E02C;
    return;
L_0889E02C:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1224));
    aot_gpr[31] = (0x0889E038u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 74u, 0x0889F568u>(ctx, &aot_mem) && ctx.pc == 0x0889E038u) goto L_0889E038;
    return;
L_0889E038:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E048;
    }
L_0889E048:
    aot_gpr[31] = (0x0889E050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x0889E050u) goto L_0889E050;
    return;
L_0889E050:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(600), aot_gpr[2]);
    aot_gpr[31] = (0x0889E05Cu);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1224));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 59u, 0x0889F48Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E05Cu) goto L_0889E05C;
    return;
L_0889E05C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_0889E074;
      }
      goto L_0889E064;
    }
L_0889E064:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889E094;
      }
      goto L_0889E074;
    }
L_0889E074:
    aot_gpr[31] = (0x0889E07Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1224));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 58u, 0x0889F47Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E07Cu) goto L_0889E07C;
    return;
L_0889E07C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E094;
      }
      goto L_0889E084;
    }
L_0889E084:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (0u | 32u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889E094;
L_0889E094:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E09C;
    }
L_0889E09C:
    aot_gpr[31] = (0x0889E0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x0889E0A4u) goto L_0889E0A4;
    return;
L_0889E0A4:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(120));
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x0889E0B4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 35u, 0x0889F2BCu>(ctx, &aot_mem) && ctx.pc == 0x0889E0B4u) goto L_0889E0B4;
    return;
L_0889E0B4:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(121)));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(122)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(123)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[7] = (aot_gpr[7] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 24u));
    aot_gpr[5] = (aot_gpr[8] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0889E140u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E140u) goto L_0889E140;
    return;
L_0889E140:
    aot_gpr[4] = (0u | 33u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889E158u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 36u, 0x0889F2D8u>(ctx, &aot_mem) && ctx.pc == 0x0889E158u) goto L_0889E158;
    return;
L_0889E158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E160;
    }
L_0889E160:
    aot_gpr[31] = (0x0889E168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x0889E168u) goto L_0889E168;
    return;
L_0889E168:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x0889E178u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(596), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 59u, 0x0889F48Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E178u) goto L_0889E178;
    return;
L_0889E178:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_0889E190;
      }
      goto L_0889E180;
    }
L_0889E180:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889E254;
      }
      goto L_0889E190;
    }
L_0889E190:
    aot_gpr[31] = (0x0889E198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 58u, 0x0889F47Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E198u) goto L_0889E198;
    return;
L_0889E198:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E254;
      }
      goto L_0889E1A0;
    }
L_0889E1A0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17796));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (0u | 18u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E1E4;
      }
      goto L_0889E1C0;
    }
L_0889E1C0:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1))))));
    aot_gpr[9] = (aot_gpr[29] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(126), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889E1C0;
      }
      goto L_0889E1E4;
    }
L_0889E1E4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E248;
      }
      goto L_0889E1F0;
    }
L_0889E1F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E248;
      }
      goto L_0889E204;
    }
L_0889E204:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889E210u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 21u, 0x0889F150u>(ctx, &aot_mem) && ctx.pc == 0x0889E210u) goto L_0889E210;
    return;
L_0889E210:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x0889E220u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(125));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E220u) goto L_0889E220;
    return;
L_0889E220:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E234;
      }
      goto L_0889E228;
    }
L_0889E228:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889E248;
      }
      goto L_0889E234;
    }
L_0889E234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E204;
      }
      goto L_0889E248;
    }
L_0889E248:
    aot_gpr[4] = (0u | 34u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889E254;
L_0889E254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E25C;
    }
L_0889E25C:
    aot_gpr[31] = (0x0889E264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x0889E264u) goto L_0889E264;
    return;
L_0889E264:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(161));
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x0889E274u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 35u, 0x0889F2BCu>(ctx, &aot_mem) && ctx.pc == 0x0889E274u) goto L_0889E274;
    return;
L_0889E274:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(161)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(162)));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(163)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(165)));
    aot_gpr[7] = (aot_gpr[7] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 24u));
    aot_gpr[5] = (aot_gpr[8] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0889E300u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E300u) goto L_0889E300;
    return;
L_0889E300:
    aot_gpr[4] = (0u | 35u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889E318u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 36u, 0x0889F2D8u>(ctx, &aot_mem) && ctx.pc == 0x0889E318u) goto L_0889E318;
    return;
L_0889E318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E320;
    }
L_0889E320:
    aot_gpr[31] = (0x0889E328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x0889E328u) goto L_0889E328;
    return;
L_0889E328:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x0889E338u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(592), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 59u, 0x0889F48Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E338u) goto L_0889E338;
    return;
L_0889E338:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(592)));
      if (branch_taken) {
          goto L_0889E350;
      }
      goto L_0889E340;
    }
L_0889E340:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889E494;
      }
      goto L_0889E350;
    }
L_0889E350:
    aot_gpr[31] = (0x0889E358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 58u, 0x0889F47Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E358u) goto L_0889E358;
    return;
L_0889E358:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E494;
      }
      goto L_0889E360;
    }
L_0889E360:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17796));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (0u | 18u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E3A4;
      }
      goto L_0889E380;
    }
L_0889E380:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1))))));
    aot_gpr[9] = (aot_gpr[29] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889E380;
      }
      goto L_0889E3A4;
    }
L_0889E3A4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E410;
      }
      goto L_0889E3B0;
    }
L_0889E3B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E410;
      }
      goto L_0889E3C4;
    }
L_0889E3C4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889E3D0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 21u, 0x0889F150u>(ctx, &aot_mem) && ctx.pc == 0x0889E3D0u) goto L_0889E3D0;
    return;
L_0889E3D0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x0889E3E0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(166));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E3E0u) goto L_0889E3E0;
    return;
L_0889E3E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E3FC;
      }
      goto L_0889E3E8;
    }
L_0889E3E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889E410;
      }
      goto L_0889E3FC;
    }
L_0889E3FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E3C4;
      }
      goto L_0889E410;
    }
L_0889E410:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(7972)));
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E488;
      }
      goto L_0889E42C;
    }
L_0889E42C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(7972), aot_gpr[5]);
    aot_gpr[31] = (0x0889E440u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26516)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 59u, 0x088A57E8u>(ctx, &aot_mem) && ctx.pc == 0x0889E440u) goto L_0889E440;
    return;
L_0889E440:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(7976)));
    aot_gpr[16] = (aot_gpr[2] & 65535u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E45C;
      }
      goto L_0889E454;
    }
L_0889E454:
    aot_gpr[4] = (aot_gpr[16] & 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(7976), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_0889E45C;
L_0889E45C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26516)));
    aot_gpr[31] = (0x0889E46Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x088A5894u>(ctx, &aot_mem) && ctx.pc == 0x0889E46Cu) goto L_0889E46C;
    return;
L_0889E46C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(7978)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E488;
      }
      goto L_0889E480;
    }
L_0889E480:
    aot_gpr[4] = (aot_gpr[16] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(7978), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0889E488;
L_0889E488:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889E494;
L_0889E494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E49C;
    }
L_0889E49C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 20u);
    aot_gpr[7] = (0u | 2u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0889E4B8u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 186u, 0x08969D48u>(ctx, &aot_mem) && ctx.pc == 0x0889E4B8u) goto L_0889E4B8;
    return;
L_0889E4B8:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 37u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E4D4;
    }
L_0889E4D4:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 7u);
    aot_gpr[7] = (0u | 2u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0889E4F0u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 186u, 0x08969D48u>(ctx, &aot_mem) && ctx.pc == 0x0889E4F0u) goto L_0889E4F0;
    return;
L_0889E4F0:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 39u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E50C;
    }
L_0889E50C:
    aot_gpr[31] = (0x0889E514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 11u, 0x0889B0ACu>(ctx, &aot_mem) && ctx.pc == 0x0889E514u) goto L_0889E514;
    return;
L_0889E514:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 17u);
    aot_gpr[7] = (0u | 2u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889E530u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 186u, 0x08969D48u>(ctx, &aot_mem) && ctx.pc == 0x0889E530u) goto L_0889E530;
    return;
L_0889E530:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 39u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E54C;
    }
L_0889E54C:
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0889E55Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20100));
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 113u, 0x08969754u>(ctx, &aot_mem) && ctx.pc == 0x0889E55Cu) goto L_0889E55C;
    return;
L_0889E55C:
    aot_gpr[4] = (0u | 40u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E56C;
    }
L_0889E56C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E574;
    }
L_0889E574:
    aot_gpr[4] = (0u | 43u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 45u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E590;
    }
L_0889E590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E598;
    }
L_0889E598:
    aot_gpr[31] = (0x0889E5A0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 36u, 0x089641E8u>(ctx, &aot_mem) && ctx.pc == 0x0889E5A0u) goto L_0889E5A0;
    return;
L_0889E5A0:
    aot_gpr[31] = (0x0889E5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x0889E5A8u) goto L_0889E5A8;
    return;
L_0889E5A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0889E5C0u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E5C0u) goto L_0889E5C0;
    return;
L_0889E5C0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(16120));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25340)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1904)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889E5F0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2168)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x0889E5F0u) goto L_0889E5F0;
    return;
L_0889E5F0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(492)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(7976)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(2172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 2u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[20] | 0u);
    aot_gpr[10] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889E630u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 174u, 0x08969C10u>(ctx, &aot_mem) && ctx.pc == 0x0889E630u) goto L_0889E630;
    return;
L_0889E630:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 45u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E64C;
    }
L_0889E64C:
    aot_gpr[31] = (0x0889E654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889E654u) goto L_0889E654;
    return;
L_0889E654:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E6EC;
      }
      goto L_0889E660;
    }
L_0889E660:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0889E67C;
      }
      goto L_0889E66C;
    }
L_0889E66C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889E6EC;
      }
      goto L_0889E674;
    }
L_0889E674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E6E0;
      }
      goto L_0889E67C;
    }
L_0889E67C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E6EC;
      }
      goto L_0889E684;
    }
L_0889E684:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889E690u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 99u, 0x088A26B8u>(ctx, &aot_mem) && ctx.pc == 0x0889E690u) goto L_0889E690;
    return;
L_0889E690:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E6CC;
      }
      goto L_0889E69C;
    }
L_0889E69C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(588), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(496));
    aot_gpr[31] = (0x0889E6ACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0889E6ACu) goto L_0889E6AC;
    return;
L_0889E6AC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0889E6BCu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(588)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 146u, 0x08962A68u>(ctx, &aot_mem) && ctx.pc == 0x0889E6BCu) goto L_0889E6BC;
    return;
L_0889E6BC:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889E6D8;
      }
      goto L_0889E6CC;
    }
L_0889E6CC:
    aot_gpr[4] = (0u | 46u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889E6D8;
L_0889E6D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E6EC;
      }
      goto L_0889E6E0;
    }
L_0889E6E0:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889E6EC;
L_0889E6EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E6F4;
    }
L_0889E6F4:
    aot_gpr[31] = (0x0889E6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889E6FCu) goto L_0889E6FC;
    return;
L_0889E6FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E7B8;
      }
      goto L_0889E704;
    }
L_0889E704:
    aot_gpr[31] = (0x0889E70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889E70Cu) goto L_0889E70C;
    return;
L_0889E70C:
    aot_gpr[31] = (0x0889E714u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 146u, 0x08964AB8u>(ctx, &aot_mem) && ctx.pc == 0x0889E714u) goto L_0889E714;
    return;
L_0889E714:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E7B8;
      }
      goto L_0889E71C;
    }
L_0889E71C:
    aot_gpr[31] = (0x0889E724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889E724u) goto L_0889E724;
    return;
L_0889E724:
    aot_gpr[31] = (0x0889E72Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0889E72Cu) goto L_0889E72C;
    return;
L_0889E72C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889E73Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 208u, 0x088A2E20u>(ctx, &aot_mem) && ctx.pc == 0x0889E73Cu) goto L_0889E73C;
    return;
L_0889E73C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0889E75C;
      }
      goto L_0889E748;
    }
L_0889E748:
    aot_gpr[31] = (0x0889E750u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 19u, 0x088A2134u>(ctx, &aot_mem) && ctx.pc == 0x0889E750u) goto L_0889E750;
    return;
L_0889E750:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(15001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E7B8;
      }
      goto L_0889E75C;
    }
L_0889E75C:
    aot_gpr[31] = (0x0889E764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889E764u) goto L_0889E764;
    return;
L_0889E764:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889E770u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 197u, 0x08964DF0u>(ctx, &aot_mem) && ctx.pc == 0x0889E770u) goto L_0889E770;
    return;
L_0889E770:
    aot_gpr[31] = (0x0889E778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x0889E778u) goto L_0889E778;
    return;
L_0889E778:
    aot_gpr[31] = (0x0889E780u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 158u, 0x0896A964u>(ctx, &aot_mem) && ctx.pc == 0x0889E780u) goto L_0889E780;
    return;
L_0889E780:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[31] = (0x0889E78Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 156u, 0x088A2A3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E78Cu) goto L_0889E78C;
    return;
L_0889E78C:
    aot_gpr[31] = (0x0889E794u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 190u, 0x088A0C88u>(ctx, &aot_mem) && ctx.pc == 0x0889E794u) goto L_0889E794;
    return;
L_0889E794:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0889E7A4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 39u, 0x08983204u>(ctx, &aot_mem) && ctx.pc == 0x0889E7A4u) goto L_0889E7A4;
    return;
L_0889E7A4:
    aot_gpr[31] = (0x0889E7ACu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 195u, 0x0895ECC8u>(ctx, &aot_mem) && ctx.pc == 0x0889E7ACu) goto L_0889E7AC;
    return;
L_0889E7AC:
    aot_gpr[4] = (0u | 47u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889E7B8;
L_0889E7B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E7C0;
    }
L_0889E7C0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E7E0;
      }
      goto L_0889E7D4;
    }
L_0889E7D4:
    aot_gpr[4] = (0u | 48u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889E7E0;
L_0889E7E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E7E8;
    }
L_0889E7E8:
    aot_gpr[31] = (0x0889E7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 201u, 0x08969E54u>(ctx, &aot_mem) && ctx.pc == 0x0889E7F0u) goto L_0889E7F0;
    return;
L_0889E7F0:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E80C;
    }
L_0889E80C:
    aot_gpr[31] = (0x0889E814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 284u, 0x0896BFC4u>(ctx, &aot_mem) && ctx.pc == 0x0889E814u) goto L_0889E814;
    return;
L_0889E814:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E830;
    }
L_0889E830:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x0889E840u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 284u, 0x0896BFC4u>(ctx, &aot_mem) && ctx.pc == 0x0889E840u) goto L_0889E840;
    return;
L_0889E840:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 54u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E85C;
    }
L_0889E85C:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0889E870u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 222u, 0x0895EE58u>(ctx, &aot_mem) && ctx.pc == 0x0889E870u) goto L_0889E870;
    return;
L_0889E870:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 55u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E88C;
    }
L_0889E88C:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x0889E89Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 222u, 0x0896FD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E89Cu) goto L_0889E89C;
    return;
L_0889E89C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26504)));
    aot_gpr[31] = (0x0889E8B0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16132));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 149u, 0x088C5A40u>(ctx, &aot_mem) && ctx.pc == 0x0889E8B0u) goto L_0889E8B0;
    return;
L_0889E8B0:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 56u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E8CC;
    }
L_0889E8CC:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26640), aot_gpr[5]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E8E4;
    }
L_0889E8E4:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 30000u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16156));
    aot_gpr[31] = (0x0889E914u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16164));
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 208u, 0x0896FC34u>(ctx, &aot_mem) && ctx.pc == 0x0889E914u) goto L_0889E914;
    return;
L_0889E914:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 58u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E930;
    }
L_0889E930:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0889E944u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 222u, 0x0895EE58u>(ctx, &aot_mem) && ctx.pc == 0x0889E944u) goto L_0889E944;
    return;
L_0889E944:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 59u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889E960;
    }
L_0889E960:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(508));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889E984u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0889E984u) goto L_0889E984;
    return;
L_0889E984:
    aot_gpr[31] = (0x0889E98Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0889E98Cu) goto L_0889E98C;
    return;
L_0889E98C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EA48;
      }
      goto L_0889E9A0;
    }
L_0889E9A0:
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(508))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 65 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[5]);
      if (branch_taken) {
          goto L_0889E9CC;
      }
      goto L_0889E9B4;
    }
L_0889E9B4:
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(508))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 91 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EA38;
      }
      goto L_0889E9C8;
    }
L_0889E9C8:
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[5]);
    goto L_0889E9CC;
L_0889E9CC:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(508))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[5]);
      if (branch_taken) {
          goto L_0889E9F4;
      }
      goto L_0889E9DC;
    }
L_0889E9DC:
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(508))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 123 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EA38;
      }
      goto L_0889E9F0;
    }
L_0889E9F0:
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[5]);
    goto L_0889E9F4;
L_0889E9F4:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(508))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[5]);
      if (branch_taken) {
          goto L_0889EA1C;
      }
      goto L_0889EA04;
    }
L_0889EA04:
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(508))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EA38;
      }
      goto L_0889EA18;
    }
L_0889EA18:
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[5]);
    goto L_0889EA1C;
L_0889EA1C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(508))))));
    aot_gpr[7] = (0u | 32u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0889EA38;
      }
      goto L_0889EA2C;
    }
L_0889EA2C:
    aot_gpr[6] = (0u | 95u);
    aot_gpr[7] = (aot_gpr[29] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(508), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_0889EA38;
L_0889EA38:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E9A0;
      }
      goto L_0889EA48;
    }
L_0889EA48:
    aot_gpr[31] = (0x0889EA50u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(508));
    if (rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 175u, 0x08966A0Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EA50u) goto L_0889EA50;
    return;
L_0889EA50:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889EA60;
    }
L_0889EA60:
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0889EA70u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-19812));
    if (rt.invoke_chained_direct<&recomp_unit_0353_entry, 353u, 86u, 0x08965694u>(ctx, &aot_mem) && ctx.pc == 0x0889EA70u) goto L_0889EA70;
    return;
L_0889EA70:
    aot_gpr[4] = (0u | 61u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889EA80;
    }
L_0889EA80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889EA88;
    }
L_0889EA88:
    aot_gpr[31] = (0x0889EA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0353_entry, 353u, 92u, 0x08965748u>(ctx, &aot_mem) && ctx.pc == 0x0889EA90u) goto L_0889EA90;
    return;
L_0889EA90:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889EAAC;
    }
L_0889EAAC:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24272));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0889EACCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889EACCu) goto L_0889EACC;
    return;
L_0889EACC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25340)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1904)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889EAF4u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2168)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x0889EAF4u) goto L_0889EAF4;
    return;
L_0889EAF4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2172)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0889EB14u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0353_entry, 353u, 144u, 0x08965B48u>(ctx, &aot_mem) && ctx.pc == 0x0889EB14u) goto L_0889EB14;
    return;
L_0889EB14:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 65u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889EB30;
    }
L_0889EB30:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x0889EB3Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24272));
    if (rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 8u, 0x08966074u>(ctx, &aot_mem) && ctx.pc == 0x0889EB3Cu) goto L_0889EB3C;
    return;
L_0889EB3C:
    aot_gpr[4] = (0u | 65u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889EB4C;
    }
L_0889EB4C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24272));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0889EB6Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889EB6Cu) goto L_0889EB6C;
    return;
L_0889EB6C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0889EBF0;
      }
      goto L_0889EB7C;
    }
L_0889EB7C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889EB94;
      }
      goto L_0889EB84;
    }
L_0889EB84:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EBFC;
      }
      goto L_0889EB8C;
    }
L_0889EB8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EBFC;
      }
      goto L_0889EB94;
    }
L_0889EB94:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889EBA0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 99u, 0x088A26B8u>(ctx, &aot_mem) && ctx.pc == 0x0889EBA0u) goto L_0889EBA0;
    return;
L_0889EBA0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EBDC;
      }
      goto L_0889EBAC;
    }
L_0889EBAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(584), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(572));
    aot_gpr[31] = (0x0889EBBCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0889EBBCu) goto L_0889EBBC;
    return;
L_0889EBBC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0889EBCCu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(584)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 146u, 0x08962A68u>(ctx, &aot_mem) && ctx.pc == 0x0889EBCCu) goto L_0889EBCC;
    return;
L_0889EBCC:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EBE8;
      }
      goto L_0889EBDC;
    }
L_0889EBDC:
    aot_gpr[4] = (0u | 66u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889EBE8;
L_0889EBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EBFC;
      }
      goto L_0889EBF0;
    }
L_0889EBF0:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889EBFC;
L_0889EBFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889EC04;
    }
L_0889EC04:
    aot_gpr[31] = (0x0889EC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889EC0Cu) goto L_0889EC0C;
    return;
L_0889EC0C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889ECCC;
      }
      goto L_0889EC14;
    }
L_0889EC14:
    aot_gpr[31] = (0x0889EC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889EC1Cu) goto L_0889EC1C;
    return;
L_0889EC1C:
    aot_gpr[31] = (0x0889EC24u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 146u, 0x08964AB8u>(ctx, &aot_mem) && ctx.pc == 0x0889EC24u) goto L_0889EC24;
    return;
L_0889EC24:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889ECCC;
      }
      goto L_0889EC2C;
    }
L_0889EC2C:
    aot_gpr[31] = (0x0889EC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889EC34u) goto L_0889EC34;
    return;
L_0889EC34:
    aot_gpr[31] = (0x0889EC3Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0889EC3Cu) goto L_0889EC3C;
    return;
L_0889EC3C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889EC4Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 208u, 0x088A2E20u>(ctx, &aot_mem) && ctx.pc == 0x0889EC4Cu) goto L_0889EC4C;
    return;
L_0889EC4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0889EC6C;
      }
      goto L_0889EC58;
    }
L_0889EC58:
    aot_gpr[31] = (0x0889EC60u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 19u, 0x088A2134u>(ctx, &aot_mem) && ctx.pc == 0x0889EC60u) goto L_0889EC60;
    return;
L_0889EC60:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(15001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889ECCC;
      }
      goto L_0889EC6C;
    }
L_0889EC6C:
    aot_gpr[31] = (0x0889EC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889EC74u) goto L_0889EC74;
    return;
L_0889EC74:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889EC80u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 197u, 0x08964DF0u>(ctx, &aot_mem) && ctx.pc == 0x0889EC80u) goto L_0889EC80;
    return;
L_0889EC80:
    aot_gpr[31] = (0x0889EC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889EC88u) goto L_0889EC88;
    return;
L_0889EC88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x0889EC94u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 177u, 0x08983960u>(ctx, &aot_mem) && ctx.pc == 0x0889EC94u) goto L_0889EC94;
    return;
L_0889EC94:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0889ECA8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 39u, 0x08983204u>(ctx, &aot_mem) && ctx.pc == 0x0889ECA8u) goto L_0889ECA8;
    return;
L_0889ECA8:
    aot_gpr[31] = (0x0889ECB0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 156u, 0x088A2A3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889ECB0u) goto L_0889ECB0;
    return;
L_0889ECB0:
    aot_gpr[31] = (0x0889ECB8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 190u, 0x088A0C88u>(ctx, &aot_mem) && ctx.pc == 0x0889ECB8u) goto L_0889ECB8;
    return;
L_0889ECB8:
    aot_gpr[31] = (0x0889ECC0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 195u, 0x0895ECC8u>(ctx, &aot_mem) && ctx.pc == 0x0889ECC0u) goto L_0889ECC0;
    return;
L_0889ECC0:
    aot_gpr[4] = (0u | 67u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889ECCC;
L_0889ECCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889ECD4;
    }
L_0889ECD4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889ECF4;
      }
      goto L_0889ECE8;
    }
L_0889ECE8:
    aot_gpr[4] = (0u | 68u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889ECF4;
L_0889ECF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889ECFC;
    }
L_0889ECFC:
    aot_gpr[31] = (0x0889ED04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0353_entry, 353u, 148u, 0x08965BECu>(ctx, &aot_mem) && ctx.pc == 0x0889ED04u) goto L_0889ED04;
    return;
L_0889ED04:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889ED20;
    }
L_0889ED20:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0889ED34u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 222u, 0x0895EE58u>(ctx, &aot_mem) && ctx.pc == 0x0889ED34u) goto L_0889ED34;
    return;
L_0889ED34:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 70u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889ED50;
    }
L_0889ED50:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x0889ED60u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 222u, 0x0896FD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0889ED60u) goto L_0889ED60;
    return;
L_0889ED60:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26504)));
    aot_gpr[31] = (0x0889ED74u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16176));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 149u, 0x088C5A40u>(ctx, &aot_mem) && ctx.pc == 0x0889ED74u) goto L_0889ED74;
    return;
L_0889ED74:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 71u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889EDA4;
      }
      goto L_0889ED90;
    }
L_0889ED90:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889EDA4;
L_0889EDA4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(604)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(608)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(612)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(616)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(620)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EDC4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26632), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EDE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889EDF8u);
    aot_gpr[6] = (0u | 1140u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EDF8u) goto L_0889EDF8;
    return;
L_0889EDF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EE04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889EE18u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0889EDE4;
L_0889EE18:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EE2C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EE34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889EE48u);
    aot_gpr[6] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EE48u) goto L_0889EE48;
    return;
L_0889EE48:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EE54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889EE68u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0889EDE4;
L_0889EE68:
    aot_gpr[31] = (0x0889EE70u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1140));
    goto L_0889EE34;
L_0889EE70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EE80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889EE9Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EE9Cu) goto L_0889EE9C;
    return;
L_0889EE9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EEA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889EEC4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x0889EEC4u) goto L_0889EEC4;
    return;
L_0889EEC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x0889EED0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0889EE80;
L_0889EED0:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EEE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889EEF8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0889EE04;
L_0889EEF8:
    aot_gpr[31] = (0x0889EF00u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1140));
    goto L_0889EE2C;
L_0889EF00:
    aot_gpr[31] = (0x0889EF08u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0889EE54;
L_0889EF08:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1196));
    aot_gpr[31] = (0x0889EF14u);
    aot_gpr[5] = (0u | 4096u);
    goto L_0889EEA8;
L_0889EF14:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1208));
    aot_gpr[31] = (0x0889EF20u);
    aot_gpr[5] = (0u | 30000u);
    goto L_0889EEA8;
L_0889EF20:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EF34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889EFA4;
      }
      goto L_0889EF50;
    }
L_0889EF50:
    aot_gpr[31] = (0x0889EF58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EF58u) goto L_0889EF58;
    return;
L_0889EF58:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EFA4;
      }
      goto L_0889EF64;
    }
L_0889EF64:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EF9C;
      }
      goto L_0889EF78;
    }
L_0889EF78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0889EF94u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889EF94u) goto L_0889EF94;
    return;
L_0889EF94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EFA4;
      }
      goto L_0889EF9C;
    }
L_0889EF9C:
    aot_gpr[31] = (0x0889EFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0889EFA4u) goto L_0889EFA4;
    return;
L_0889EFA4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EFB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 5u, 0x0889F034u>(ctx, &aot_mem); return;
      }
      goto L_0889EFD4;
    }
L_0889EFD4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1208));
    aot_gpr[31] = (0x0889EFE0u);
    aot_gpr[5] = (0u | 2u);
    goto L_0889EF34;
L_0889EFE0:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1196));
    aot_gpr[31] = (0x0889EFECu);
    aot_gpr[5] = (0u | 2u);
    goto L_0889EF34;
L_0889EFEC:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 5u, 0x0889F034u>(ctx, &aot_mem); return;
      }
      goto L_0889EFF8;
    }
L_0889EFF8:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    ctx.pc = 0x0889F000u; return;
}

void recomp_unit_0154(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0154_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_154(Runtime &runtime) {
    runtime.register_generated_unit(154u, 0x0889E000u, 4096u, &recomp_unit_0154, &recomp_unit_0154_entry);
    runtime.register_function(0x0889E000u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E014u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E01Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E02Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E038u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E048u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E050u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E05Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E064u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E074u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E07Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E084u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E094u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E09Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E0A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E0B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E140u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E158u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E160u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E168u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E178u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E180u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E190u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E198u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E1A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E1C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E1E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E1F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E204u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E210u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E220u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E228u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E234u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E248u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E254u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E25Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E264u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E274u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E300u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E318u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E320u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E328u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E338u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E340u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E350u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E358u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E360u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E380u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E3A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E3B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E3C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E3D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E3E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E3E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E3FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E410u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E42Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E440u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E454u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E45Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E46Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E480u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E488u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E494u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E49Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E4B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E4D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E4F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E50Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E514u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E530u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E54Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E55Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E56Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E574u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E590u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E598u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E5A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E5A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E5C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E5F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E630u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E64Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E654u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E660u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E66Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E674u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E67Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E684u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E690u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E69Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E6ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E6BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E6CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E6D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E6E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E6ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E6F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E6FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E704u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E70Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E714u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E71Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E724u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E72Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E73Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E748u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E750u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E75Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E764u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E770u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E778u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E780u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E78Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E794u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E7A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E7ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E7B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E7C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E7D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E7E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E7E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E7F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E80Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E814u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E830u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E840u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E85Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E870u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E88Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E89Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E8B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E8CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E8E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E914u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E930u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E944u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E960u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E984u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E98Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E9A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E9B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E9C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E9CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E9DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E9F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889E9F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EA04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EA18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EA1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EA2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EA38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EA48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EA50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EA60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EA70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EA80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EA88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EA90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EAACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EACCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EAF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EB14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EB30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EB3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EB4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EB6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EB7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EB84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EB8Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EB94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EBA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EBACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EBBCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EBCCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EBDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EBE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EBF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EBFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC24u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EC94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ECA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ECB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ECB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ECC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ECCCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ECD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ECE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ECF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ECFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ED04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ED20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ED34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ED50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ED60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ED74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889ED90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EDA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EDC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EDE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EDF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EE04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EE18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EE2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EE34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EE48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EE54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EE68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EE70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EE80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EE9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EEA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EEC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EED0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EEE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EEF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EF00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EF08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EF14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EF20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EF34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EF50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EF58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EF64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EF78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EF94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EF9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EFA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EFB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EFD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EFE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EFECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x0889EFF8u, &recomp_unit_0154, "recomp_unit_0154");
}
} // namespace psprecomp
