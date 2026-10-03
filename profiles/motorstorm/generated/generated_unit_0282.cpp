#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0282[1022] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0,
    21, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0,
    0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 39, 0, 40, 0,
    41, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62,
    63, 0, 64, 0, 0, 65, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 76, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 0, 81,
    0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 89, 0, 90, 0, 0, 91, 0, 92, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96,
    97, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 102, 103, 0, 0, 104, 0, 105, 106, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0,
    0, 0, 110, 111, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 118, 0, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 129, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0,
    0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0,
    0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 148, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 162,
    0, 163, 0, 0, 164, 165, 0, 166, 0, 0, 167, 168, 0, 169, 0, 0, 170, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0,
    0, 0, 176, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0,
    0, 195, 0, 196, 0, 0, 0, 197, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203,
    0, 0, 204, 0, 205, 0, 0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0,
    0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0,
    0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259,
};
void recomp_unit_0282_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0891E004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0282[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0891E004;
    case 2u: goto L_0891E01C;
    case 3u: goto L_0891E028;
    case 4u: goto L_0891E038;
    case 5u: goto L_0891E054;
    case 6u: goto L_0891E05C;
    case 7u: goto L_0891E064;
    case 8u: goto L_0891E078;
    case 9u: goto L_0891E090;
    case 10u: goto L_0891E0C0;
    case 11u: goto L_0891E0FC;
    case 12u: goto L_0891E11C;
    case 13u: goto L_0891E134;
    case 14u: goto L_0891E14C;
    case 15u: goto L_0891E170;
    case 16u: goto L_0891E17C;
    case 17u: goto L_0891E1B0;
    case 18u: goto L_0891E1BC;
    case 19u: goto L_0891E1E0;
    case 20u: goto L_0891E1EC;
    case 21u: goto L_0891E204;
    case 22u: goto L_0891E210;
    case 23u: goto L_0891E218;
    case 24u: goto L_0891E220;
    case 25u: goto L_0891E234;
    case 26u: goto L_0891E240;
    case 27u: goto L_0891E24C;
    case 28u: goto L_0891E26C;
    case 29u: goto L_0891E278;
    case 30u: goto L_0891E288;
    case 31u: goto L_0891E2A0;
    case 32u: goto L_0891E2AC;
    case 33u: goto L_0891E2B4;
    case 34u: goto L_0891E2BC;
    case 35u: goto L_0891E2C4;
    case 36u: goto L_0891E2E0;
    case 37u: goto L_0891E2E8;
    case 38u: goto L_0891E2F0;
    case 39u: goto L_0891E2F4;
    case 40u: goto L_0891E2FC;
    case 41u: goto L_0891E304;
    case 42u: goto L_0891E308;
    case 43u: goto L_0891E310;
    case 44u: goto L_0891E330;
    case 45u: goto L_0891E348;
    case 46u: goto L_0891E360;
    case 47u: goto L_0891E374;
    case 48u: goto L_0891E38C;
    case 49u: goto L_0891E398;
    case 50u: goto L_0891E3AC;
    case 51u: goto L_0891E3D0;
    case 52u: goto L_0891E3E4;
    case 53u: goto L_0891E3F8;
    case 54u: goto L_0891E410;
    case 55u: goto L_0891E41C;
    case 56u: goto L_0891E434;
    case 57u: goto L_0891E440;
    case 58u: goto L_0891E448;
    case 59u: goto L_0891E450;
    case 60u: goto L_0891E45C;
    case 61u: goto L_0891E478;
    case 62u: goto L_0891E480;
    case 63u: goto L_0891E484;
    case 64u: goto L_0891E48C;
    case 65u: goto L_0891E498;
    case 66u: goto L_0891E49C;
    case 67u: goto L_0891E4AC;
    case 68u: goto L_0891E4D0;
    case 69u: goto L_0891E4E8;
    case 70u: goto L_0891E508;
    case 71u: goto L_0891E514;
    case 72u: goto L_0891E524;
    case 73u: goto L_0891E53C;
    case 74u: goto L_0891E544;
    case 75u: goto L_0891E54C;
    case 76u: goto L_0891E550;
    case 77u: goto L_0891E558;
    case 78u: goto L_0891E560;
    case 79u: goto L_0891E56C;
    case 80u: goto L_0891E574;
    case 81u: goto L_0891E580;
    case 82u: goto L_0891E588;
    case 83u: goto L_0891E598;
    case 84u: goto L_0891E5A4;
    case 85u: goto L_0891E5B0;
    case 86u: goto L_0891E5D0;
    case 87u: goto L_0891E5E8;
    case 88u: goto L_0891E604;
    case 89u: goto L_0891E610;
    case 90u: goto L_0891E618;
    case 91u: goto L_0891E624;
    case 92u: goto L_0891E62C;
    case 93u: goto L_0891E630;
    case 94u: goto L_0891E644;
    case 95u: goto L_0891E678;
    case 96u: goto L_0891E680;
    case 97u: goto L_0891E684;
    case 98u: goto L_0891E68C;
    case 99u: goto L_0891E698;
    case 100u: goto L_0891E6A8;
    case 101u: goto L_0891E6B8;
    case 102u: goto L_0891E6BC;
    case 103u: goto L_0891E6C0;
    case 104u: goto L_0891E6CC;
    case 105u: goto L_0891E6D4;
    case 106u: goto L_0891E6D8;
    case 107u: goto L_0891E6E0;
    case 108u: goto L_0891E6EC;
    case 109u: goto L_0891E6FC;
    case 110u: goto L_0891E70C;
    case 111u: goto L_0891E710;
    case 112u: goto L_0891E714;
    case 113u: goto L_0891E720;
    case 114u: goto L_0891E72C;
    case 115u: goto L_0891E738;
    case 116u: goto L_0891E744;
    case 117u: goto L_0891E750;
    case 118u: goto L_0891E754;
    case 119u: goto L_0891E760;
    case 120u: goto L_0891E76C;
    case 121u: goto L_0891E774;
    case 122u: goto L_0891E77C;
    case 123u: goto L_0891E79C;
    case 124u: goto L_0891E7D8;
    case 125u: goto L_0891E7E0;
    case 126u: goto L_0891E7F4;
    case 127u: goto L_0891E810;
    case 128u: goto L_0891E828;
    case 129u: goto L_0891E830;
    case 130u: goto L_0891E834;
    case 131u: goto L_0891E83C;
    case 132u: goto L_0891E850;
    case 133u: goto L_0891E86C;
    case 134u: goto L_0891E874;
    case 135u: goto L_0891E87C;
    case 136u: goto L_0891E890;
    case 137u: goto L_0891E8B4;
    case 138u: goto L_0891E8D4;
    case 139u: goto L_0891E8E0;
    case 140u: goto L_0891E8F0;
    case 141u: goto L_0891E8FC;
    case 142u: goto L_0891E90C;
    case 143u: goto L_0891E918;
    case 144u: goto L_0891E928;
    case 145u: goto L_0891E934;
    case 146u: goto L_0891E944;
    case 147u: goto L_0891E960;
    case 148u: goto L_0891E964;
    case 149u: goto L_0891E974;
    case 150u: goto L_0891E990;
    case 151u: goto L_0891E998;
    case 152u: goto L_0891E9B4;
    case 153u: goto L_0891E9BC;
    case 154u: goto L_0891E9CC;
    case 155u: goto L_0891E9D8;
    case 156u: goto L_0891E9E4;
    case 157u: goto L_0891EA04;
    case 158u: goto L_0891EA20;
    case 159u: goto L_0891EA54;
    case 160u: goto L_0891EA74;
    case 161u: goto L_0891EA7C;
    case 162u: goto L_0891EA80;
    case 163u: goto L_0891EA88;
    case 164u: goto L_0891EA94;
    case 165u: goto L_0891EA98;
    case 166u: goto L_0891EAA0;
    case 167u: goto L_0891EAAC;
    case 168u: goto L_0891EAB0;
    case 169u: goto L_0891EAB8;
    case 170u: goto L_0891EAC4;
    case 171u: goto L_0891EAC8;
    case 172u: goto L_0891EAD4;
    case 173u: goto L_0891EAE8;
    case 174u: goto L_0891EAF4;
    case 175u: goto L_0891EAFC;
    case 176u: goto L_0891EB0C;
    case 177u: goto L_0891EB10;
    case 178u: goto L_0891EB38;
    case 179u: goto L_0891EB44;
    case 180u: goto L_0891EB4C;
    case 181u: goto L_0891EB54;
    case 182u: goto L_0891EB7C;
    case 183u: goto L_0891EB88;
    case 184u: goto L_0891EB9C;
    case 185u: goto L_0891EBC8;
    case 186u: goto L_0891EBE8;
    case 187u: goto L_0891EC10;
    case 188u: goto L_0891EC28;
    case 189u: goto L_0891EC2C;
    case 190u: goto L_0891EC34;
    case 191u: goto L_0891EC48;
    case 192u: goto L_0891EC54;
    case 193u: goto L_0891EC68;
    case 194u: goto L_0891EC78;
    case 195u: goto L_0891EC88;
    case 196u: goto L_0891EC90;
    case 197u: goto L_0891ECA0;
    case 198u: goto L_0891ECA4;
    case 199u: goto L_0891ECB0;
    case 200u: goto L_0891ECCC;
    case 201u: goto L_0891ECF0;
    case 202u: goto L_0891ECF8;
    case 203u: goto L_0891ED00;
    case 204u: goto L_0891ED0C;
    case 205u: goto L_0891ED14;
    case 206u: goto L_0891ED20;
    case 207u: goto L_0891ED28;
    case 208u: goto L_0891ED34;
    case 209u: goto L_0891ED3C;
    case 210u: goto L_0891ED48;
    case 211u: goto L_0891ED50;
    case 212u: goto L_0891ED5C;
    case 213u: goto L_0891ED64;
    case 214u: goto L_0891ED70;
    case 215u: goto L_0891ED78;
    case 216u: goto L_0891ED84;
    case 217u: goto L_0891EDA0;
    case 218u: goto L_0891EDAC;
    case 219u: goto L_0891EDB4;
    case 220u: goto L_0891EDC0;
    case 221u: goto L_0891EDC8;
    case 222u: goto L_0891EDD4;
    case 223u: goto L_0891EDDC;
    case 224u: goto L_0891EDE8;
    case 225u: goto L_0891EDF8;
    case 226u: goto L_0891EE08;
    case 227u: goto L_0891EE10;
    case 228u: goto L_0891EE18;
    case 229u: goto L_0891EE24;
    case 230u: goto L_0891EE30;
    case 231u: goto L_0891EE3C;
    case 232u: goto L_0891EE48;
    case 233u: goto L_0891EE54;
    case 234u: goto L_0891EE60;
    case 235u: goto L_0891EE6C;
    case 236u: goto L_0891EE88;
    case 237u: goto L_0891EE94;
    case 238u: goto L_0891EEA0;
    case 239u: goto L_0891EEAC;
    case 240u: goto L_0891EEB8;
    case 241u: goto L_0891EEC8;
    case 242u: goto L_0891EED8;
    case 243u: goto L_0891EEE4;
    case 244u: goto L_0891EEF0;
    case 245u: goto L_0891EF10;
    case 246u: goto L_0891EF24;
    case 247u: goto L_0891EF30;
    case 248u: goto L_0891EF34;
    case 249u: goto L_0891EF64;
    case 250u: goto L_0891EF6C;
    case 251u: goto L_0891EF88;
    case 252u: goto L_0891EF94;
    case 253u: goto L_0891EFA0;
    case 254u: goto L_0891EFAC;
    case 255u: goto L_0891EFB8;
    case 256u: goto L_0891EFC0;
    case 257u: goto L_0891EFCC;
    case 258u: goto L_0891EFE0;
    case 259u: goto L_0891EFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0891E004:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1528));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891E01Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 139u, 0x0891D9D4u>(ctx, &aot_mem) && ctx.pc == 0x0891E01Cu) goto L_0891E01C;
    return;
L_0891E01C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0891E064;
      }
      goto L_0891E028;
    }
L_0891E028:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E05C;
      }
      goto L_0891E038;
    }
L_0891E038:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0891E054u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E054u) goto L_0891E054;
    return;
L_0891E054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E064;
      }
      goto L_0891E05C;
    }
L_0891E05C:
    aot_gpr[31] = (0x0891E064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0891E064u) goto L_0891E064;
    return;
L_0891E064:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E078:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0891E090u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_0891E374;
L_0891E090:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6932)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] / aot_fpr[14];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E0C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[31]);
    aot_gpr[31] = (0x0891E0FCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0891E3AC;
L_0891E0FC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0891E11Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0891E3AC;
L_0891E11C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891E134u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26172));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0891E134u) goto L_0891E134;
    return;
L_0891E134:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E14C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0891E170u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0891E3AC;
L_0891E170:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E17C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-6832)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x0891E1B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0891E3AC;
L_0891E1B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E1BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0891E1E0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0891E3AC;
L_0891E1E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E1EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891E204u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_0891E3AC;
L_0891E204:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E210:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 10u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E218:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E220:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891E234u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7040));
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 83u, 0x08A54618u>(ctx, &aot_mem) && ctx.pc == 0x0891E234u) goto L_0891E234;
    return;
L_0891E234:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0891E240u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29304));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E240u) goto L_0891E240;
    return;
L_0891E240:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E24C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891E330;
      }
      goto L_0891E26C;
    }
L_0891E26C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_0891E308;
      }
      goto L_0891E278;
    }
L_0891E278:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0891E2AC;
      }
      goto L_0891E288;
    }
L_0891E288:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891E2A0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E2A0u) goto L_0891E2A0;
    return;
L_0891E2A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0891E2BC;
      }
      goto L_0891E2AC;
    }
L_0891E2AC:
    aot_gpr[31] = (0x0891E2B4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0891E2B4u) goto L_0891E2B4;
    return;
L_0891E2B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_0891E2BC;
L_0891E2BC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E2E8;
      }
      goto L_0891E2C4;
    }
L_0891E2C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891E2E0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E2E0u) goto L_0891E2E0;
    return;
L_0891E2E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0891E2F4;
      }
      goto L_0891E2E8;
    }
L_0891E2E8:
    aot_gpr[31] = (0x0891E2F0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0891E2F0u) goto L_0891E2F0;
    return;
L_0891E2F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0891E2F4;
L_0891E2F4:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[16] & 1u);
        goto L_0891E308;
    }
    goto L_0891E2FC;
L_0891E2FC:
    aot_gpr[31] = (0x0891E304u);
    aot_gpr[5] = (0u | 3u);
    goto L_0891E24C;
L_0891E304:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_0891E308;
L_0891E308:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0891E330;
      }
      goto L_0891E310;
    }
L_0891E310:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891E330u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E330u) goto L_0891E330;
    return;
L_0891E330:
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
L_0891E348:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0891E360u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 101u, 0x08A39528u>(ctx, &aot_mem) && ctx.pc == 0x0891E360u) goto L_0891E360;
    return;
L_0891E360:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E374:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0891E38Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 97u, 0x08A394ECu>(ctx, &aot_mem) && ctx.pc == 0x0891E38Cu) goto L_0891E38C;
    return;
L_0891E38C:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x0891E398u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x0891E398u) goto L_0891E398;
    return;
L_0891E398:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E3AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0891E3D0u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-26116));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x0891E3D0u) goto L_0891E3D0;
    return;
L_0891E3D0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891E3E4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0891E3E4u) goto L_0891E3E4;
    return;
L_0891E3E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E3F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891E410u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26120));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0891E410u) goto L_0891E410;
    return;
L_0891E410:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E41C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_0891E448;
      }
      goto L_0891E434;
    }
L_0891E434:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x0891E440u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26136));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0891E440u) goto L_0891E440;
    return;
L_0891E440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E450;
      }
      goto L_0891E448;
    }
L_0891E448:
    aot_gpr[31] = (0x0891E450u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26128));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0891E450u) goto L_0891E450;
    return;
L_0891E450:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E45C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0891E484;
      }
      goto L_0891E478;
    }
L_0891E478:
    aot_gpr[31] = (0x0891E480u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E480u) goto L_0891E480;
    return;
L_0891E480:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_0891E484;
L_0891E484:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E49C;
      }
      goto L_0891E48C;
    }
L_0891E48C:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0891E498u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E498u) goto L_0891E498;
    return;
L_0891E498:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_0891E49C;
L_0891E49C:
    aot_gpr[2] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E4AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-26136));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0891E4D0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0891E4D0u) goto L_0891E4D0;
    return;
L_0891E4D0:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E4E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891E5D0;
      }
      goto L_0891E508;
    }
L_0891E508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E5A4;
      }
      goto L_0891E514;
    }
L_0891E514:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0891E544;
      }
      goto L_0891E524;
    }
L_0891E524:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891E53Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E53Cu) goto L_0891E53C;
    return;
L_0891E53C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0891E550;
      }
      goto L_0891E544;
    }
L_0891E544:
    aot_gpr[31] = (0x0891E54Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0891E54Cu) goto L_0891E54C;
    return;
L_0891E54C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_0891E550;
L_0891E550:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E560;
      }
      goto L_0891E558;
    }
L_0891E558:
    aot_gpr[31] = (0x0891E560u);
    aot_gpr[5] = (0u | 3u);
    goto L_0891E4E8;
L_0891E560:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E574;
      }
      goto L_0891E56C;
    }
L_0891E56C:
    aot_gpr[31] = (0x0891E574u);
    aot_gpr[5] = (0u | 3u);
    goto L_0891E4E8;
L_0891E574:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E5A4;
      }
      goto L_0891E580;
    }
L_0891E580:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_0891E5A4;
      }
      goto L_0891E588;
    }
L_0891E588:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x0891E598u);
    aot_gpr[5] = (0u | 3u);
    goto L_0891E24C;
L_0891E598:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E588;
      }
      goto L_0891E5A4;
    }
L_0891E5A4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0891E5D0;
      }
      goto L_0891E5B0;
    }
L_0891E5B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891E5D0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E5D0u) goto L_0891E5D0;
    return;
L_0891E5D0:
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
L_0891E5E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891E624;
      }
      goto L_0891E604;
    }
L_0891E604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0891E610u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0891E610u) goto L_0891E610;
    return;
L_0891E610:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E62C;
      }
      goto L_0891E618;
    }
L_0891E618:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E604;
      }
      goto L_0891E624;
    }
L_0891E624:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891E630;
      }
      goto L_0891E62C;
    }
L_0891E62C:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    goto L_0891E630;
L_0891E630:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E644:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0891E684;
      }
      goto L_0891E678;
    }
L_0891E678:
    aot_gpr[31] = (0x0891E680u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 82u, 0x08A54610u>(ctx, &aot_mem) && ctx.pc == 0x0891E680u) goto L_0891E680;
    return;
L_0891E680:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0891E684;
L_0891E684:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E6C0;
      }
      goto L_0891E68C;
    }
L_0891E68C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0891E698u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 82u, 0x08A54610u>(ctx, &aot_mem) && ctx.pc == 0x0891E698u) goto L_0891E698;
    return;
L_0891E698:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0891E6BC;
      }
      goto L_0891E6A8;
    }
L_0891E6A8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891E6B8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_0891E644;
L_0891E6B8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0891E6BC;
L_0891E6BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0891E6C0;
L_0891E6C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0891E6D8;
      }
      goto L_0891E6CC;
    }
L_0891E6CC:
    aot_gpr[31] = (0x0891E6D4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E6D4u) goto L_0891E6D4;
    return;
L_0891E6D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_0891E6D8;
L_0891E6D8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E714;
      }
      goto L_0891E6E0;
    }
L_0891E6E0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0891E6ECu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 82u, 0x08A54610u>(ctx, &aot_mem) && ctx.pc == 0x0891E6ECu) goto L_0891E6EC;
    return;
L_0891E6EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0891E710;
      }
      goto L_0891E6FC;
    }
L_0891E6FC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891E70Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_0891E644;
L_0891E70C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0891E710;
L_0891E710:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0891E714;
L_0891E714:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E77C;
      }
      goto L_0891E720;
    }
L_0891E720:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0891E72Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 91u, 0x08A5468Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E72Cu) goto L_0891E72C;
    return;
L_0891E72C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
      if (branch_taken) {
          goto L_0891E77C;
      }
      goto L_0891E738;
    }
L_0891E738:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0891E754;
      }
      goto L_0891E744;
    }
L_0891E744:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891E750u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_0891E45C;
L_0891E750:
    aot_gpr[6] = (aot_gpr[19] | 0u);
    goto L_0891E754;
L_0891E754:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E774;
      }
      goto L_0891E760;
    }
L_0891E760:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0891E76Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 91u, 0x08A5468Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E76Cu) goto L_0891E76C;
    return;
L_0891E76C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    goto L_0891E774;
L_0891E774:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E738;
      }
      goto L_0891E77C;
    }
L_0891E77C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_0891E79C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1608));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E7E0;
      }
      goto L_0891E7D8;
    }
L_0891E7D8:
    aot_gpr[31] = (0x0891E7E0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 80u, 0x089277BCu>(ctx, &aot_mem) && ctx.pc == 0x0891E7E0u) goto L_0891E7E0;
    return;
L_0891E7E0:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E7F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891E87C;
      }
      goto L_0891E810;
    }
L_0891E810:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1608));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[17] & 1u);
        goto L_0891E834;
    }
    goto L_0891E828;
L_0891E828:
    aot_gpr[31] = (0x0891E830u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 82u, 0x089277D8u>(ctx, &aot_mem) && ctx.pc == 0x0891E830u) goto L_0891E830;
    return;
L_0891E830:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    goto L_0891E834;
L_0891E834:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E87C;
      }
      goto L_0891E83C;
    }
L_0891E83C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E874;
      }
      goto L_0891E850;
    }
L_0891E850:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0891E86Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E86Cu) goto L_0891E86C;
    return;
L_0891E86C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E87C;
      }
      goto L_0891E874;
    }
L_0891E874:
    aot_gpr[31] = (0x0891E87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0891E87Cu) goto L_0891E87C;
    return;
L_0891E87C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E890:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891EA04;
      }
      goto L_0891E8B4;
    }
L_0891E8B4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1624));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E944;
      }
      goto L_0891E8D4;
    }
L_0891E8D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E8F0;
      }
      goto L_0891E8E0;
    }
L_0891E8E0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0891E8F0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0891E8F0u) goto L_0891E8F0;
    return;
L_0891E8F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E90C;
      }
      goto L_0891E8FC;
    }
L_0891E8FC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0891E90Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0891E90Cu) goto L_0891E90C;
    return;
L_0891E90C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E928;
      }
      goto L_0891E918;
    }
L_0891E918:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0891E928u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0891E928u) goto L_0891E928;
    return;
L_0891E928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E944;
      }
      goto L_0891E934;
    }
L_0891E934:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0891E944u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0891E944u) goto L_0891E944;
    return;
L_0891E944:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(96), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(104)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_0891E9B4;
      }
      goto L_0891E960;
    }
L_0891E960:
    aot_gpr[18] = (0u | 0u);
    goto L_0891E964;
L_0891E964:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E998;
      }
      goto L_0891E974;
    }
L_0891E974:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891E990u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E990u) goto L_0891E990;
    return;
L_0891E990:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    goto L_0891E998;
L_0891E998:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(104)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_0891E964;
      }
      goto L_0891E9B4;
    }
L_0891E9B4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E9CC;
      }
      goto L_0891E9BC;
    }
L_0891E9BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0891E9CCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0891E9CCu) goto L_0891E9CC;
    return;
L_0891E9CC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891E9D8u);
    aot_gpr[5] = (0u | 0u);
    goto L_0891E7F4;
L_0891E9D8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0891EA04;
      }
      goto L_0891E9E4;
    }
L_0891E9E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891EA04u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891EA04u) goto L_0891EA04;
    return;
L_0891EA04:
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
L_0891EA20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x0891EA54u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    goto L_0891E79C;
L_0891EA54:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1624));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0891EA80;
      }
      goto L_0891EA74;
    }
L_0891EA74:
    aot_gpr[31] = (0x0891EA7Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 92u, 0x08A54694u>(ctx, &aot_mem) && ctx.pc == 0x0891EA7Cu) goto L_0891EA7C;
    return;
L_0891EA7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    goto L_0891EA80;
L_0891EA80:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EA98;
      }
      goto L_0891EA88;
    }
L_0891EA88:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0891EA94u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 93u, 0x08A5469Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EA94u) goto L_0891EA94;
    return;
L_0891EA94:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    goto L_0891EA98;
L_0891EA98:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EAB0;
      }
      goto L_0891EAA0;
    }
L_0891EAA0:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0891EAACu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 94u, 0x08A546A4u>(ctx, &aot_mem) && ctx.pc == 0x0891EAACu) goto L_0891EAAC;
    return;
L_0891EAAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    goto L_0891EAB0;
L_0891EAB0:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EAC8;
      }
      goto L_0891EAB8;
    }
L_0891EAB8:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0891EAC4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 94u, 0x08A546A4u>(ctx, &aot_mem) && ctx.pc == 0x0891EAC4u) goto L_0891EAC4;
    return;
L_0891EAC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    goto L_0891EAC8;
L_0891EAC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[4]);
      if (branch_taken) {
          goto L_0891EAF4;
      }
      goto L_0891EAD4;
    }
L_0891EAD4:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x0891EAE8u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x0891EAE8u) goto L_0891EAE8;
    return;
L_0891EAE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_0891EAFC;
      }
      goto L_0891EAF4;
    }
L_0891EAF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), 0u);
    aot_gpr[4] = (0u | 0u);
    goto L_0891EAFC;
L_0891EAFC:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0891EB9C;
      }
      goto L_0891EB0C;
    }
L_0891EB0C:
    aot_gpr[20] = (2216u << 16u);
    goto L_0891EB10;
L_0891EB10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0891EB38u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891EB38u) goto L_0891EB38;
    return;
L_0891EB38:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    if (aot_gpr[21] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(108)));
        goto L_0891EB54;
    }
    goto L_0891EB44;
L_0891EB44:
    aot_gpr[31] = (0x0891EB4Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x0891EB4Cu) goto L_0891EB4C;
    return;
L_0891EB4C:
    aot_gpr[19] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_0891EB54;
L_0891EB54:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(72), aot_gpr[4]);
      if (branch_taken) {
          goto L_0891EB88;
      }
      goto L_0891EB7C;
    }
L_0891EB7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_0891EB88;
L_0891EB88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891EB10;
      }
      goto L_0891EB9C;
    }
L_0891EB9C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891EBC8:
    aot_gpr[6] = (aot_gpr[5] & 65280u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(116)));
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891EC28;
      }
      goto L_0891EBE8;
    }
L_0891EBE8:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891EC28;
      }
      goto L_0891EC10;
    }
L_0891EC10:
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0891EC2C;
      }
      goto L_0891EC28;
    }
L_0891EC28:
    aot_gpr[2] = (0u | 0u);
    goto L_0891EC2C;
L_0891EC2C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891EC34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891EC48u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    goto L_0891EBC8;
L_0891EC48:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ECA0;
      }
      goto L_0891EC54;
    }
L_0891EC54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ECA0;
      }
      goto L_0891EC68;
    }
L_0891EC68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(18)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[4]);
    goto L_0891EC78;
L_0891EC78:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_0891EC90;
      }
      goto L_0891EC88;
    }
L_0891EC88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_0891ECA4;
      }
      goto L_0891EC90;
    }
L_0891EC90:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891EC78;
      }
      goto L_0891ECA0;
    }
L_0891ECA0:
    aot_gpr[2] = (0u | 0u);
    goto L_0891ECA4;
L_0891ECA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891ECB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891EF10;
      }
      goto L_0891ECCC;
    }
L_0891ECCC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1640));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0891EE10;
      }
      goto L_0891ECF0;
    }
L_0891ECF0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED00;
      }
      goto L_0891ECF8;
    }
L_0891ECF8:
    aot_gpr[31] = (0x0891ED00u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 11u, 0x08A540A8u>(ctx, &aot_mem) && ctx.pc == 0x0891ED00u) goto L_0891ED00;
    return;
L_0891ED00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED14;
      }
      goto L_0891ED0C;
    }
L_0891ED0C:
    aot_gpr[31] = (0x0891ED14u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 33u, 0x08A5421Cu>(ctx, &aot_mem) && ctx.pc == 0x0891ED14u) goto L_0891ED14;
    return;
L_0891ED14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED28;
      }
      goto L_0891ED20;
    }
L_0891ED20:
    aot_gpr[31] = (0x0891ED28u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 114u, 0x08A54784u>(ctx, &aot_mem) && ctx.pc == 0x0891ED28u) goto L_0891ED28;
    return;
L_0891ED28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED3C;
      }
      goto L_0891ED34;
    }
L_0891ED34:
    aot_gpr[31] = (0x0891ED3Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 136u, 0x08A548F8u>(ctx, &aot_mem) && ctx.pc == 0x0891ED3Cu) goto L_0891ED3C;
    return;
L_0891ED3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED50;
      }
      goto L_0891ED48;
    }
L_0891ED48:
    aot_gpr[31] = (0x0891ED50u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 158u, 0x08A54A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0891ED50u) goto L_0891ED50;
    return;
L_0891ED50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED64;
      }
      goto L_0891ED5C;
    }
L_0891ED5C:
    aot_gpr[31] = (0x0891ED64u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 180u, 0x08A54BE0u>(ctx, &aot_mem) && ctx.pc == 0x0891ED64u) goto L_0891ED64;
    return;
L_0891ED64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED78;
      }
      goto L_0891ED70;
    }
L_0891ED70:
    aot_gpr[31] = (0x0891ED78u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 202u, 0x08A54D54u>(ctx, &aot_mem) && ctx.pc == 0x0891ED78u) goto L_0891ED78;
    return;
L_0891ED78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EDA0;
      }
      goto L_0891ED84;
    }
L_0891ED84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891EDA0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891EDA0u) goto L_0891EDA0;
    return;
L_0891EDA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EDB4;
      }
      goto L_0891EDAC;
    }
L_0891EDAC:
    aot_gpr[31] = (0x0891EDB4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 224u, 0x08A54EC8u>(ctx, &aot_mem) && ctx.pc == 0x0891EDB4u) goto L_0891EDB4;
    return;
L_0891EDB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EDC8;
      }
      goto L_0891EDC0;
    }
L_0891EDC0:
    aot_gpr[31] = (0x0891EDC8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 3u, 0x08A5503Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EDC8u) goto L_0891EDC8;
    return;
L_0891EDC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EDDC;
      }
      goto L_0891EDD4;
    }
L_0891EDD4:
    aot_gpr[31] = (0x0891EDDCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 25u, 0x08A551B0u>(ctx, &aot_mem) && ctx.pc == 0x0891EDDCu) goto L_0891EDDC;
    return;
L_0891EDDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EED8;
      }
      goto L_0891EDE8;
    }
L_0891EDE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EED8;
      }
      goto L_0891EDF8;
    }
L_0891EDF8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0891EE08u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0891EE08u) goto L_0891EE08;
    return;
L_0891EE08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EED8;
      }
      goto L_0891EE10;
    }
L_0891EE10:
    aot_gpr[31] = (0x0891EE18u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 11u, 0x08A540A8u>(ctx, &aot_mem) && ctx.pc == 0x0891EE18u) goto L_0891EE18;
    return;
L_0891EE18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x0891EE24u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 33u, 0x08A5421Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EE24u) goto L_0891EE24;
    return;
L_0891EE24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x0891EE30u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 114u, 0x08A54784u>(ctx, &aot_mem) && ctx.pc == 0x0891EE30u) goto L_0891EE30;
    return;
L_0891EE30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x0891EE3Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 136u, 0x08A548F8u>(ctx, &aot_mem) && ctx.pc == 0x0891EE3Cu) goto L_0891EE3C;
    return;
L_0891EE3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x0891EE48u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 158u, 0x08A54A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EE48u) goto L_0891EE48;
    return;
L_0891EE48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x0891EE54u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 180u, 0x08A54BE0u>(ctx, &aot_mem) && ctx.pc == 0x0891EE54u) goto L_0891EE54;
    return;
L_0891EE54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (0x0891EE60u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 202u, 0x08A54D54u>(ctx, &aot_mem) && ctx.pc == 0x0891EE60u) goto L_0891EE60;
    return;
L_0891EE60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EE88;
      }
      goto L_0891EE6C;
    }
L_0891EE6C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891EE88u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891EE88u) goto L_0891EE88;
    return;
L_0891EE88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x0891EE94u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 224u, 0x08A54EC8u>(ctx, &aot_mem) && ctx.pc == 0x0891EE94u) goto L_0891EE94;
    return;
L_0891EE94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x0891EEA0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 3u, 0x08A5503Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EEA0u) goto L_0891EEA0;
    return;
L_0891EEA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0891EEACu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 25u, 0x08A551B0u>(ctx, &aot_mem) && ctx.pc == 0x0891EEACu) goto L_0891EEAC;
    return;
L_0891EEAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EED8;
      }
      goto L_0891EEB8;
    }
L_0891EEB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EED8;
      }
      goto L_0891EEC8;
    }
L_0891EEC8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0891EED8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0891EED8u) goto L_0891EED8;
    return;
L_0891EED8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891EEE4u);
    aot_gpr[5] = (0u | 0u);
    goto L_0891E7F4;
L_0891EEE4:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0891EF10;
      }
      goto L_0891EEF0;
    }
L_0891EEF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891EF10u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891EF10u) goto L_0891EF10;
    return;
L_0891EF10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891EF24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0891EF64;
      }
      goto L_0891EF30;
    }
L_0891EF30:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_0891EF34;
L_0891EF34:
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
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[6]));
        goto L_0891EF34;
    }
    goto L_0891EF64;
L_0891EF64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891EF6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891EFAC;
      }
      goto L_0891EF88;
    }
L_0891EF88:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EFAC;
      }
      goto L_0891EF94;
    }
L_0891EF94:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891EFA0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 155u, 0x08922B84u>(ctx, &aot_mem) && ctx.pc == 0x0891EFA0u) goto L_0891EFA0;
    return;
L_0891EFA0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EF94;
      }
      goto L_0891EFAC;
    }
L_0891EFAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EFC0;
      }
      goto L_0891EFB8;
    }
L_0891EFB8:
    aot_gpr[31] = (0x0891EFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 113u, 0x08940D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EFC0u) goto L_0891EFC0;
    return;
L_0891EFC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 3u, 0x0891F030u>(ctx, &aot_mem); return;
      }
      goto L_0891EFCC;
    }
L_0891EFCC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 3u, 0x0891F030u>(ctx, &aot_mem); return;
      }
      goto L_0891EFE0;
    }
L_0891EFE0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 2u, 0x0891F01Cu>(ctx, &aot_mem); return;
      }
      goto L_0891EFF8;
    }
L_0891EFF8:
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.pc = 0x0891F000u; return;
}

void recomp_unit_0282(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0282_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_282(Runtime &runtime) {
    runtime.register_generated_unit(282u, 0x0891E000u, 4096u, &recomp_unit_0282, &recomp_unit_0282_entry);
    runtime.register_function(0x0891E004u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E01Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E028u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E038u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E054u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E05Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E064u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E078u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E090u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E0C0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E0FCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E11Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E134u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E14Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E170u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E17Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E1B0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E1BCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E1E0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E1ECu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E204u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E210u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E218u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E220u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E234u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E240u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E24Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E26Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E278u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E288u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E2A0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E2ACu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E2B4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E2BCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E2C4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E2E0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E2E8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E2F0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E2F4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E2FCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E304u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E308u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E310u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E330u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E348u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E360u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E374u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E38Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E398u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E3ACu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E3D0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E3E4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E3F8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E410u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E41Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E434u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E440u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E448u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E450u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E45Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E478u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E480u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E484u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E48Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E498u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E49Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E4ACu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E4D0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E4E8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E508u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E514u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E524u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E53Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E544u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E54Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E550u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E558u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E560u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E56Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E574u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E580u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E588u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E598u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E5A4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E5B0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E5D0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E5E8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E604u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E610u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E618u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E624u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E62Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E630u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E644u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E678u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E680u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E684u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E68Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E698u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E6A8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E6B8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E6BCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E6C0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E6CCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E6D4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E6D8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E6E0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E6ECu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E6FCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E70Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E710u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E714u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E720u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E72Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E738u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E744u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E750u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E754u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E760u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E76Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E774u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E77Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E79Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E7D8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E7E0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E7F4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E810u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E828u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E830u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E834u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E83Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E850u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E86Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E874u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E87Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E890u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E8B4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E8D4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E8E0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E8F0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E8FCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E90Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E918u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E928u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E934u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E944u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E960u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E964u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E974u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E990u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E998u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E9B4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E9BCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E9CCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E9D8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891E9E4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EA04u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EA20u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EA54u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EA74u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EA7Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EA80u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EA88u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EA94u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EA98u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EAA0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EAACu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EAB0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EAB8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EAC4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EAC8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EAD4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EAE8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EAF4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EAFCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EB0Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EB10u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EB38u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EB44u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EB4Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EB54u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EB7Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EB88u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EB9Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EBC8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EBE8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EC10u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EC28u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EC2Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EC34u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EC48u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EC54u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EC68u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EC78u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EC88u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EC90u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ECA0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ECA4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ECB0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ECCCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ECF0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ECF8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED00u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED0Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED14u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED20u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED28u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED34u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED3Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED48u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED50u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED5Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED64u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED70u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED78u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891ED84u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EDA0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EDACu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EDB4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EDC0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EDC8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EDD4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EDDCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EDE8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EDF8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EE08u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EE10u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EE18u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EE24u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EE30u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EE3Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EE48u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EE54u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EE60u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EE6Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EE88u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EE94u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EEA0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EEACu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EEB8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EEC8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EED8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EEE4u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EEF0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EF10u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EF24u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EF30u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EF34u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EF64u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EF6Cu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EF88u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EF94u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EFA0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EFACu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EFB8u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EFC0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EFCCu, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EFE0u, &recomp_unit_0282, "recomp_unit_0282");
    runtime.register_function(0x0891EFF8u, &recomp_unit_0282, "recomp_unit_0282");
}
} // namespace psprecomp
