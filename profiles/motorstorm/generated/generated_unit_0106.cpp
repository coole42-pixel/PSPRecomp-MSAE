#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0106[1022] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 17,
    0, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0,
    43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0,
    88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 94, 0,
    0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 104,
    105, 0, 106, 0, 107, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123,
    0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0,
    0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 160, 0,
    161, 0, 0, 162, 0, 0, 163, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0,
    0, 173, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 185, 0, 186, 0, 0, 0, 187,
    188, 0, 189, 0, 0, 0, 190, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 201,
};
void recomp_unit_0106_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0886E004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0106[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0886E004;
    case 2u: goto L_0886E01C;
    case 3u: goto L_0886E028;
    case 4u: goto L_0886E030;
    case 5u: goto L_0886E038;
    case 6u: goto L_0886E040;
    case 7u: goto L_0886E050;
    case 8u: goto L_0886E058;
    case 9u: goto L_0886E088;
    case 10u: goto L_0886E0BC;
    case 11u: goto L_0886E0C4;
    case 12u: goto L_0886E0D4;
    case 13u: goto L_0886E0DC;
    case 14u: goto L_0886E0E4;
    case 15u: goto L_0886E0F0;
    case 16u: goto L_0886E0F8;
    case 17u: goto L_0886E100;
    case 18u: goto L_0886E10C;
    case 19u: goto L_0886E114;
    case 20u: goto L_0886E120;
    case 21u: goto L_0886E128;
    case 22u: goto L_0886E130;
    case 23u: goto L_0886E13C;
    case 24u: goto L_0886E15C;
    case 25u: goto L_0886E178;
    case 26u: goto L_0886E194;
    case 27u: goto L_0886E1B0;
    case 28u: goto L_0886E1B8;
    case 29u: goto L_0886E1C4;
    case 30u: goto L_0886E1CC;
    case 31u: goto L_0886E1D4;
    case 32u: goto L_0886E1F0;
    case 33u: goto L_0886E20C;
    case 34u: goto L_0886E228;
    case 35u: goto L_0886E230;
    case 36u: goto L_0886E23C;
    case 37u: goto L_0886E244;
    case 38u: goto L_0886E250;
    case 39u: goto L_0886E25C;
    case 40u: goto L_0886E264;
    case 41u: goto L_0886E26C;
    case 42u: goto L_0886E274;
    case 43u: goto L_0886E284;
    case 44u: goto L_0886E28C;
    case 45u: goto L_0886E2AC;
    case 46u: goto L_0886E2B4;
    case 47u: goto L_0886E2BC;
    case 48u: goto L_0886E2C8;
    case 49u: goto L_0886E2D0;
    case 50u: goto L_0886E2D8;
    case 51u: goto L_0886E2E0;
    case 52u: goto L_0886E2E8;
    case 53u: goto L_0886E308;
    case 54u: goto L_0886E328;
    case 55u: goto L_0886E35C;
    case 56u: goto L_0886E36C;
    case 57u: goto L_0886E37C;
    case 58u: goto L_0886E388;
    case 59u: goto L_0886E3A4;
    case 60u: goto L_0886E3B0;
    case 61u: goto L_0886E3DC;
    case 62u: goto L_0886E404;
    case 63u: goto L_0886E430;
    case 64u: goto L_0886E454;
    case 65u: goto L_0886E484;
    case 66u: goto L_0886E498;
    case 67u: goto L_0886E4F4;
    case 68u: goto L_0886E54C;
    case 69u: goto L_0886E55C;
    case 70u: goto L_0886E578;
    case 71u: goto L_0886E588;
    case 72u: goto L_0886E5A0;
    case 73u: goto L_0886E5AC;
    case 74u: goto L_0886E5B4;
    case 75u: goto L_0886E5D4;
    case 76u: goto L_0886E620;
    case 77u: goto L_0886E63C;
    case 78u: goto L_0886E64C;
    case 79u: goto L_0886E660;
    case 80u: goto L_0886E668;
    case 81u: goto L_0886E67C;
    case 82u: goto L_0886E694;
    case 83u: goto L_0886E6AC;
    case 84u: goto L_0886E6B8;
    case 85u: goto L_0886E6C8;
    case 86u: goto L_0886E6E0;
    case 87u: goto L_0886E6E8;
    case 88u: goto L_0886E704;
    case 89u: goto L_0886E70C;
    case 90u: goto L_0886E728;
    case 91u: goto L_0886E734;
    case 92u: goto L_0886E750;
    case 93u: goto L_0886E778;
    case 94u: goto L_0886E77C;
    case 95u: goto L_0886E788;
    case 96u: goto L_0886E790;
    case 97u: goto L_0886E79C;
    case 98u: goto L_0886E7C0;
    case 99u: goto L_0886E7CC;
    case 100u: goto L_0886E7D4;
    case 101u: goto L_0886E7E0;
    case 102u: goto L_0886E7EC;
    case 103u: goto L_0886E7F4;
    case 104u: goto L_0886E800;
    case 105u: goto L_0886E804;
    case 106u: goto L_0886E80C;
    case 107u: goto L_0886E814;
    case 108u: goto L_0886E818;
    case 109u: goto L_0886E834;
    case 110u: goto L_0886E840;
    case 111u: goto L_0886E848;
    case 112u: goto L_0886E850;
    case 113u: goto L_0886E858;
    case 114u: goto L_0886E860;
    case 115u: goto L_0886E868;
    case 116u: goto L_0886E894;
    case 117u: goto L_0886E898;
    case 118u: goto L_0886E8B4;
    case 119u: goto L_0886E8C0;
    case 120u: goto L_0886E8C8;
    case 121u: goto L_0886E8E4;
    case 122u: goto L_0886E8F4;
    case 123u: goto L_0886E900;
    case 124u: goto L_0886E908;
    case 125u: goto L_0886E920;
    case 126u: goto L_0886E950;
    case 127u: goto L_0886E998;
    case 128u: goto L_0886E9B0;
    case 129u: goto L_0886E9DC;
    case 130u: goto L_0886EA14;
    case 131u: goto L_0886EA30;
    case 132u: goto L_0886EA48;
    case 133u: goto L_0886EA54;
    case 134u: goto L_0886EA6C;
    case 135u: goto L_0886EAB4;
    case 136u: goto L_0886EAE4;
    case 137u: goto L_0886EAF8;
    case 138u: goto L_0886EB0C;
    case 139u: goto L_0886EB20;
    case 140u: goto L_0886EB50;
    case 141u: goto L_0886EB6C;
    case 142u: goto L_0886EB7C;
    case 143u: goto L_0886EB90;
    case 144u: goto L_0886EB9C;
    case 145u: goto L_0886EBB0;
    case 146u: goto L_0886EBEC;
    case 147u: goto L_0886EBF8;
    case 148u: goto L_0886EC30;
    case 149u: goto L_0886EC44;
    case 150u: goto L_0886EC58;
    case 151u: goto L_0886EC64;
    case 152u: goto L_0886EC6C;
    case 153u: goto L_0886ECA4;
    case 154u: goto L_0886ECB4;
    case 155u: goto L_0886ECBC;
    case 156u: goto L_0886ECC8;
    case 157u: goto L_0886ECE0;
    case 158u: goto L_0886ECE8;
    case 159u: goto L_0886ECF4;
    case 160u: goto L_0886ECFC;
    case 161u: goto L_0886ED04;
    case 162u: goto L_0886ED10;
    case 163u: goto L_0886ED1C;
    case 164u: goto L_0886ED20;
    case 165u: goto L_0886ED28;
    case 166u: goto L_0886ED70;
    case 167u: goto L_0886ED98;
    case 168u: goto L_0886EDBC;
    case 169u: goto L_0886EDD8;
    case 170u: goto L_0886EDE8;
    case 171u: goto L_0886EDF4;
    case 172u: goto L_0886EDFC;
    case 173u: goto L_0886EE08;
    case 174u: goto L_0886EE14;
    case 175u: goto L_0886EE1C;
    case 176u: goto L_0886EE28;
    case 177u: goto L_0886EE34;
    case 178u: goto L_0886EE40;
    case 179u: goto L_0886EE5C;
    case 180u: goto L_0886EE8C;
    case 181u: goto L_0886EE9C;
    case 182u: goto L_0886EEA8;
    case 183u: goto L_0886EED4;
    case 184u: goto L_0886EEE4;
    case 185u: goto L_0886EEE8;
    case 186u: goto L_0886EEF0;
    case 187u: goto L_0886EF00;
    case 188u: goto L_0886EF04;
    case 189u: goto L_0886EF0C;
    case 190u: goto L_0886EF1C;
    case 191u: goto L_0886EF20;
    case 192u: goto L_0886EF3C;
    case 193u: goto L_0886EF58;
    case 194u: goto L_0886EF60;
    case 195u: goto L_0886EF7C;
    case 196u: goto L_0886EF94;
    case 197u: goto L_0886EFB4;
    case 198u: goto L_0886EFDC;
    case 199u: goto L_0886EFE4;
    case 200u: goto L_0886EFEC;
    case 201u: goto L_0886EFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0886E004:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[30] ^ aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E028;
      }
      goto L_0886E01C;
    }
L_0886E01C:
    aot_gpr[4] = (16256u << 16u);
    aot_gpr[31] = (0x0886E028u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 11u, 0x0891B214u>(ctx, &aot_mem) && ctx.pc == 0x0886E028u) goto L_0886E028;
    return;
L_0886E028:
    aot_gpr[31] = (0x0886E030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 7u, 0x088B006Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E030u) goto L_0886E030;
    return;
L_0886E030:
    aot_gpr[31] = (0x0886E038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 222u, 0x0889BF60u>(ctx, &aot_mem) && ctx.pc == 0x0886E038u) goto L_0886E038;
    return;
L_0886E038:
    aot_gpr[31] = (0x0886E040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 94u, 0x088B763Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E040u) goto L_0886E040;
    return;
L_0886E040:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E058;
      }
      goto L_0886E050;
    }
L_0886E050:
    aot_gpr[31] = (0x0886E058u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 55u, 0x088933C0u>(ctx, &aot_mem) && ctx.pc == 0x0886E058u) goto L_0886E058;
    return;
L_0886E058:
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
L_0886E088:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886E0C4;
      }
      goto L_0886E0BC;
    }
L_0886E0BC:
    aot_gpr[31] = (0x0886E0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 228u, 0x08873DCCu>(ctx, &aot_mem) && ctx.pc == 0x0886E0C4u) goto L_0886E0C4;
    return;
L_0886E0C4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E0DC;
      }
      goto L_0886E0D4;
    }
L_0886E0D4:
    aot_gpr[31] = (0x0886E0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 15u, 0x088930B8u>(ctx, &aot_mem) && ctx.pc == 0x0886E0DCu) goto L_0886E0DC;
    return;
L_0886E0DC:
    aot_gpr[31] = (0x0886E0E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7492)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 45u, 0x088DC3B0u>(ctx, &aot_mem) && ctx.pc == 0x0886E0E4u) goto L_0886E0E4;
    return;
L_0886E0E4:
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[31] = (0x0886E0F0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7652)));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 91u, 0x089358F0u>(ctx, &aot_mem) && ctx.pc == 0x0886E0F0u) goto L_0886E0F0;
    return;
L_0886E0F0:
    aot_gpr[31] = (0x0886E0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 42u, 0x08828598u>(ctx, &aot_mem) && ctx.pc == 0x0886E0F8u) goto L_0886E0F8;
    return;
L_0886E0F8:
    aot_gpr[31] = (0x0886E100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 21u, 0x089081E8u>(ctx, &aot_mem) && ctx.pc == 0x0886E100u) goto L_0886E100;
    return;
L_0886E100:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886E10Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2096)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 93u, 0x0880FA4Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E10Cu) goto L_0886E10C;
    return;
L_0886E10C:
    aot_gpr[31] = (0x0886E114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 145u, 0x088B9D44u>(ctx, &aot_mem) && ctx.pc == 0x0886E114u) goto L_0886E114;
    return;
L_0886E114:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886E120u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7520)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 20u, 0x0880B184u>(ctx, &aot_mem) && ctx.pc == 0x0886E120u) goto L_0886E120;
    return;
L_0886E120:
    aot_gpr[31] = (0x0886E128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 99u, 0x088B76A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E128u) goto L_0886E128;
    return;
L_0886E128:
    aot_gpr[31] = (0x0886E130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 89u, 0x088B75D0u>(ctx, &aot_mem) && ctx.pc == 0x0886E130u) goto L_0886E130;
    return;
L_0886E130:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886E13Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7480)));
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 92u, 0x088C7810u>(ctx, &aot_mem) && ctx.pc == 0x0886E13Cu) goto L_0886E13C;
    return;
L_0886E13C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(104));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0886E15Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886E15Cu) goto L_0886E15C;
    return;
L_0886E15C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(120));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0886E178u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886E178u) goto L_0886E178;
    return;
L_0886E178:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(120));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0886E194u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886E194u) goto L_0886E194;
    return;
L_0886E194:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5260)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(120));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0886E1B0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886E1B0u) goto L_0886E1B0;
    return;
L_0886E1B0:
    aot_gpr[31] = (0x0886E1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 138u, 0x0887EA40u>(ctx, &aot_mem) && ctx.pc == 0x0886E1B8u) goto L_0886E1B8;
    return;
L_0886E1B8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886E1C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5264)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 60u, 0x0885F3F8u>(ctx, &aot_mem) && ctx.pc == 0x0886E1C4u) goto L_0886E1C4;
    return;
L_0886E1C4:
    aot_gpr[31] = (0x0886E1CCu);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7652)));
    if (rt.invoke_chained_direct<&recomp_unit_0326_entry, 326u, 111u, 0x0894AD60u>(ctx, &aot_mem) && ctx.pc == 0x0886E1CCu) goto L_0886E1CC;
    return;
L_0886E1CC:
    aot_gpr[31] = (0x0886E1D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7492)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 24u, 0x088DC240u>(ctx, &aot_mem) && ctx.pc == 0x0886E1D4u) goto L_0886E1D4;
    return;
L_0886E1D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(128));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0886E1F0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886E1F0u) goto L_0886E1F0;
    return;
L_0886E1F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(128));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0886E20Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886E20Cu) goto L_0886E20C;
    return;
L_0886E20C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5260)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(128));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0886E228u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886E228u) goto L_0886E228;
    return;
L_0886E228:
    aot_gpr[31] = (0x0886E230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 64u, 0x088175B8u>(ctx, &aot_mem) && ctx.pc == 0x0886E230u) goto L_0886E230;
    return;
L_0886E230:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E244;
      }
      goto L_0886E23C;
    }
L_0886E23C:
    aot_gpr[31] = (0x0886E244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 87u, 0x0889A4A4u>(ctx, &aot_mem) && ctx.pc == 0x0886E244u) goto L_0886E244;
    return;
L_0886E244:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[31] = (0x0886E250u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 102u, 0x088DC798u>(ctx, &aot_mem) && ctx.pc == 0x0886E250u) goto L_0886E250;
    return;
L_0886E250:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[31] = (0x0886E25Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 11u, 0x088240E0u>(ctx, &aot_mem) && ctx.pc == 0x0886E25Cu) goto L_0886E25C;
    return;
L_0886E25C:
    aot_gpr[31] = (0x0886E264u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5260)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 45u, 0x088A9434u>(ctx, &aot_mem) && ctx.pc == 0x0886E264u) goto L_0886E264;
    return;
L_0886E264:
    aot_gpr[31] = (0x0886E26Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 86u, 0x0882E5C4u>(ctx, &aot_mem) && ctx.pc == 0x0886E26Cu) goto L_0886E26C;
    return;
L_0886E26C:
    aot_gpr[31] = (0x0886E274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 110u, 0x088BA940u>(ctx, &aot_mem) && ctx.pc == 0x0886E274u) goto L_0886E274;
    return;
L_0886E274:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7340)));
    aot_gpr[31] = (0x0886E284u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0266_entry, 266u, 53u, 0x0890E890u>(ctx, &aot_mem) && ctx.pc == 0x0886E284u) goto L_0886E284;
    return;
L_0886E284:
    aot_gpr[31] = (0x0886E28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 87u, 0x0882BD04u>(ctx, &aot_mem) && ctx.pc == 0x0886E28Cu) goto L_0886E28C;
    return;
L_0886E28C:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5272)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(128));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0886E2ACu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886E2ACu) goto L_0886E2AC;
    return;
L_0886E2AC:
    aot_gpr[31] = (0x0886E2B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5272)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 174u, 0x088B5F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E2B4u) goto L_0886E2B4;
    return;
L_0886E2B4:
    aot_gpr[31] = (0x0886E2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 4u, 0x08881024u>(ctx, &aot_mem) && ctx.pc == 0x0886E2BCu) goto L_0886E2BC;
    return;
L_0886E2BC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886E2C8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2092)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 26u, 0x08812268u>(ctx, &aot_mem) && ctx.pc == 0x0886E2C8u) goto L_0886E2C8;
    return;
L_0886E2C8:
    aot_gpr[31] = (0x0886E2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 169u, 0x088AFFD4u>(ctx, &aot_mem) && ctx.pc == 0x0886E2D0u) goto L_0886E2D0;
    return;
L_0886E2D0:
    aot_gpr[31] = (0x0886E2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 68u, 0x08911670u>(ctx, &aot_mem) && ctx.pc == 0x0886E2D8u) goto L_0886E2D8;
    return;
L_0886E2D8:
    aot_gpr[31] = (0x0886E2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 28u, 0x088631FCu>(ctx, &aot_mem) && ctx.pc == 0x0886E2E0u) goto L_0886E2E0;
    return;
L_0886E2E0:
    aot_gpr[31] = (0x0886E2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 137u, 0x08865B18u>(ctx, &aot_mem) && ctx.pc == 0x0886E2E8u) goto L_0886E2E8;
    return;
L_0886E2E8:
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
L_0886E308:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25384), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886E328:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[31]);
    aot_gpr[31] = (0x0886E35Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E35Cu) goto L_0886E35C;
    return;
L_0886E35C:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0886E36Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E36Cu) goto L_0886E36C;
    return;
L_0886E36C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0886E37Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5952));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0886E37Cu) goto L_0886E37C;
    return;
L_0886E37C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x0886E388u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0886E388u) goto L_0886E388;
    return;
L_0886E388:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0886E3A4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5956));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E3A4u) goto L_0886E3A4;
    return;
L_0886E3A4:
    aot_gpr[4] = (0u | 12u);
    aot_gpr[31] = (0x0886E3B0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 166u, 0x08872C60u>(ctx, &aot_mem) && ctx.pc == 0x0886E3B0u) goto L_0886E3B0;
    return;
L_0886E3B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[5]);
    aot_gpr[4] = (0u | 32768u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0886E3DCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5984));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E3DCu) goto L_0886E3DC;
    return;
L_0886E3DC:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5104)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0886E404u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886E404u) goto L_0886E404;
    return;
L_0886E404:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5104)));
    aot_gpr[31] = (0x0886E430u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0886E430u) goto L_0886E430;
    return;
L_0886E430:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886E454:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0886E484u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 29u, 0x088CD228u>(ctx, &aot_mem) && ctx.pc == 0x0886E484u) goto L_0886E484;
    return;
L_0886E484:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886E498u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 160u, 0x088CDCACu>(ctx, &aot_mem) && ctx.pc == 0x0886E498u) goto L_0886E498;
    return;
L_0886E498:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(204), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (aot_gpr[5] | 128u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886E4F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-576));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 7u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(536), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(540), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(544), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(548), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(552), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(556), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(560), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[23] = (2215u << 16u);
      if (branch_taken) {
          goto L_0886E55C;
      }
      goto L_0886E54C;
    }
L_0886E54C:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(25548)));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(25548), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(aot_gpr[7]));
    goto L_0886E55C;
L_0886E55C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0886E578u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 167u, 0x088DCD3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E578u) goto L_0886E578;
    return;
L_0886E578:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0886E588u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5496));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E588u) goto L_0886E588;
    return;
L_0886E588:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0886E5A0u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0886E5A0u) goto L_0886E5A0;
    return;
L_0886E5A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(488), aot_gpr[2]);
      if (branch_taken) {
          goto L_0886E5B4;
      }
      goto L_0886E5AC;
    }
L_0886E5AC:
    aot_gpr[31] = (0x0886E5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E5B4u) goto L_0886E5B4;
    return;
L_0886E5B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[16]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7268), aot_gpr[4]);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886E898;
      }
      goto L_0886E5D4;
    }
L_0886E5D4:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5536));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(508), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5572));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5600));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(504), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(500), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5632));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5660));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(496), aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(336));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(352));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[30] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(492), aot_gpr[4]);
    goto L_0886E620;
L_0886E620:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0886E63Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E63Cu) goto L_0886E63C;
    return;
L_0886E63C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886E668;
      }
      goto L_0886E64C;
    }
L_0886E64C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(508)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(484), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0886E660u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E660u) goto L_0886E660;
    return;
L_0886E660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E67C;
      }
      goto L_0886E668;
    }
L_0886E668:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(484), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0886E67Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E67Cu) goto L_0886E67C;
    return;
L_0886E67C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0886E694u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0886E694u) goto L_0886E694;
    return;
L_0886E694:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0886E6B8;
      }
      goto L_0886E6AC;
    }
L_0886E6AC:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886E6E8;
      }
      goto L_0886E6B8;
    }
L_0886E6B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(500)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0886E6C8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E6C8u) goto L_0886E6C8;
    return;
L_0886E6C8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0886E6E0u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0886E6E0u) goto L_0886E6E0;
    return;
L_0886E6E0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    goto L_0886E6E8;
L_0886E6E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7268), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E70C;
      }
      goto L_0886E704;
    }
L_0886E704:
    aot_gpr[31] = (0x0886E70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E70Cu) goto L_0886E70C;
    return;
L_0886E70C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[30]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(496)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0886E728u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E728u) goto L_0886E728;
    return;
L_0886E728:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0886E734u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 166u, 0x08872C60u>(ctx, &aot_mem) && ctx.pc == 0x0886E734u) goto L_0886E734;
    return;
L_0886E734:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(492)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0886E750u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E750u) goto L_0886E750;
    return;
L_0886E750:
    aot_gpr[4] = (0u | 32768u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(328), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 0u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
      if (branch_taken) {
          goto L_0886E77C;
      }
      goto L_0886E778;
    }
L_0886E778:
    aot_gpr[7] = (0u | 2u);
    goto L_0886E77C;
L_0886E77C:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_0886E790;
      }
      goto L_0886E788;
    }
L_0886E788:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886E79C;
      }
      goto L_0886E790;
    }
L_0886E790:
    aot_gpr[7] = (aot_gpr[7] | 32u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0886E79C;
L_0886E79C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x0886E7C0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886E7C0u) goto L_0886E7C0;
    return;
L_0886E7C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E7D4;
      }
      goto L_0886E7CC;
    }
L_0886E7CC:
    aot_gpr[31] = (0x0886E7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E7D4u) goto L_0886E7D4;
    return;
L_0886E7D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E7F4;
      }
      goto L_0886E7E0;
    }
L_0886E7E0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0886E7ECu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0886E328;
L_0886E7EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(26492)));
      if (branch_taken) {
          goto L_0886E804;
      }
      goto L_0886E7F4;
    }
L_0886E7F4:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0886E800u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0886E454;
L_0886E800:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(26492)));
    goto L_0886E804;
L_0886E804:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886E818;
      }
      goto L_0886E80C;
    }
L_0886E80C:
    aot_gpr[31] = (0x0886E814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E814u) goto L_0886E814;
    return;
L_0886E814:
    aot_gpr[4] = (2218u << 16u);
    goto L_0886E818;
L_0886E818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0886E834u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 102u, 0x088CB6C4u>(ctx, &aot_mem) && ctx.pc == 0x0886E834u) goto L_0886E834;
    return;
L_0886E834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E848;
      }
      goto L_0886E840;
    }
L_0886E840:
    aot_gpr[31] = (0x0886E848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E848u) goto L_0886E848;
    return;
L_0886E848:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E858;
      }
      goto L_0886E850;
    }
L_0886E850:
    aot_gpr[31] = (0x0886E858u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E858u) goto L_0886E858;
    return;
L_0886E858:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(484)));
      if (branch_taken) {
          goto L_0886E868;
      }
      goto L_0886E860;
    }
L_0886E860:
    aot_gpr[31] = (0x0886E868u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E868u) goto L_0886E868;
    return;
L_0886E868:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7268), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(732), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(296));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886E620;
      }
      goto L_0886E894;
    }
L_0886E894:
    aot_gpr[16] = (2218u << 16u);
    goto L_0886E898;
L_0886E898:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0886E8B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886E8B4u) goto L_0886E8B4;
    return;
L_0886E8B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E8C8;
      }
      goto L_0886E8C0;
    }
L_0886E8C0:
    aot_gpr[31] = (0x0886E8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E8C8u) goto L_0886E8C8;
    return;
L_0886E8C8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 7u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E8F4;
      }
      goto L_0886E8E4;
    }
L_0886E8E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25548), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0886E8F4;
L_0886E8F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E908;
      }
      goto L_0886E900;
    }
L_0886E900:
    aot_gpr[31] = (0x0886E908u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E908u) goto L_0886E908;
    return;
L_0886E908:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0886E920u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 182u, 0x088DCE4Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E920u) goto L_0886E920;
    return;
L_0886E920:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886E950:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-880));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(836), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(840), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(860), aot_gpr[22]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[22] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(844), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(848), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(852), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(856), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(864), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(868), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(872), aot_gpr[31]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0886E998u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5700));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886E998u) goto L_0886E998;
    return;
L_0886E998:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0886E9B0u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0886E9B0u) goto L_0886E9B0;
    return;
L_0886E9B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-7268), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7508)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(828), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(820), aot_gpr[4]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(824), aot_gpr[5]);
      if (branch_taken) {
          goto L_0886EB0C;
      }
      goto L_0886E9DC;
    }
L_0886E9DC:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5736));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(808), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5772));
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(336));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(804), aot_gpr[4]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(5768));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(5812));
    goto L_0886EA14;
L_0886EA14:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EAF8;
      }
      goto L_0886EA30;
    }
L_0886EA30:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(832), aot_gpr[23]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(808)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0886EA48u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886EA48u) goto L_0886EA48;
    return;
L_0886EA48:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[31] = (0x0886EA54u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 166u, 0x08872C60u>(ctx, &aot_mem) && ctx.pc == 0x0886EA54u) goto L_0886EA54;
    return;
L_0886EA54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(804)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0886EA6Cu);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886EA6Cu) goto L_0886EA6C;
    return;
L_0886EA6C:
    aot_gpr[4] = (0u | 32768u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(328), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] ^ 1u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0886EAB4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886EAB4u) goto L_0886EAB4;
    return;
L_0886EAB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(824)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(832)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[31] = (0x0886EAE4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1116), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 155u, 0x0881DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0886EAE4u) goto L_0886EAE4;
    return;
L_0886EAE4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0886EAF8u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886EAF8u) goto L_0886EAF8;
    return;
L_0886EAF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(820)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_0886EA14;
      }
      goto L_0886EB0C;
    }
L_0886EB0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(820)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2214u << 16u);
      if (branch_taken) {
          goto L_0886EC58;
      }
      goto L_0886EB20;
    }
L_0886EB20:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5832));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5868));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(816), aot_gpr[4]);
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(464));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(528));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(812), aot_gpr[5]);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(672));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(5924));
    aot_gpr[19] = (2218u << 16u);
    goto L_0886EB50;
L_0886EB50:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EC44;
      }
      goto L_0886EB6C;
    }
L_0886EB6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 4u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0886EC44;
      }
      goto L_0886EB7C;
    }
L_0886EB7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(832), aot_gpr[23]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(816)));
    aot_gpr[31] = (0x0886EB90u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886EB90u) goto L_0886EB90;
    return;
L_0886EB90:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0886EB9Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 166u, 0x08872C60u>(ctx, &aot_mem) && ctx.pc == 0x0886EB9Cu) goto L_0886EB9C;
    return;
L_0886EB9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(812)));
    aot_gpr[31] = (0x0886EBB0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886EBB0u) goto L_0886EBB0;
    return;
L_0886EBB0:
    aot_gpr[4] = (0u | 32768u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(664), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(660), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(656), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5244)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0886EBECu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886EBECu) goto L_0886EBEC;
    return;
L_0886EBEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(660)));
    aot_gpr[31] = (0x0886EBF8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5244)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0886EBF8u) goto L_0886EBF8;
    return;
L_0886EBF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(824)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(832)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0886EC30u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 73u, 0x088225A4u>(ctx, &aot_mem) && ctx.pc == 0x0886EC30u) goto L_0886EC30;
    return;
L_0886EC30:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0886EC44u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886EC44u) goto L_0886EC44;
    return;
L_0886EC44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(820)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_0886EB50;
      }
      goto L_0886EC58;
    }
L_0886EC58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(828)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EC6C;
      }
      goto L_0886EC64;
    }
L_0886EC64:
    aot_gpr[31] = (0x0886EC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886EC6Cu) goto L_0886EC6C;
    return;
L_0886EC6C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(836)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(840)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(844)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(848)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(852)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(856)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(860)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(864)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(868)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(872)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(880));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886ECA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886ECB4u);
    // nop
    goto L_0886E4F4;
L_0886ECB4:
    aot_gpr[31] = (0x0886ECBCu);
    // nop
    goto L_0886E950;
L_0886ECBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886ECC8:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886ECF4;
      }
      goto L_0886ECE0;
    }
L_0886ECE0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0886ED1C;
      }
      goto L_0886ECE8;
    }
L_0886ECE8:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(424), aot_gpr[5]);
      if (branch_taken) {
          goto L_0886ED20;
      }
      goto L_0886ECF4;
    }
L_0886ECF4:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886ED10;
      }
      goto L_0886ECFC;
    }
L_0886ECFC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886ED1C;
      }
      goto L_0886ED04;
    }
L_0886ED04:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(424), aot_gpr[5]);
      if (branch_taken) {
          goto L_0886ED20;
      }
      goto L_0886ED10;
    }
L_0886ED10:
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(424), aot_gpr[5]);
      if (branch_taken) {
          goto L_0886ED20;
      }
      goto L_0886ED1C;
    }
L_0886ED1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(424), 0u);
    goto L_0886ED20;
L_0886ED20:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886ED28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886EE5C;
      }
      goto L_0886ED70;
    }
L_0886ED70:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3936));
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[30] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-3888));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-3648));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(5968));
    goto L_0886ED98;
L_0886ED98:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0886EDBCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 25u, 0x08821130u>(ctx, &aot_mem) && ctx.pc == 0x0886EDBCu) goto L_0886EDBC;
    return;
L_0886EDBC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EE1C;
      }
      goto L_0886EDD8;
    }
L_0886EDD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(728)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886EDFC;
      }
      goto L_0886EDE8;
    }
L_0886EDE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0886EDF4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 19u, 0x0881E118u>(ctx, &aot_mem) && ctx.pc == 0x0886EDF4u) goto L_0886EDF4;
    return;
L_0886EDF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EE28;
      }
      goto L_0886EDFC;
    }
L_0886EDFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_0886EE28;
      }
      goto L_0886EE08;
    }
L_0886EE08:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886EE14u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 19u, 0x0881E118u>(ctx, &aot_mem) && ctx.pc == 0x0886EE14u) goto L_0886EE14;
    return;
L_0886EE14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EE28;
      }
      goto L_0886EE1C;
    }
L_0886EE1C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886EE28u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 19u, 0x0881E118u>(ctx, &aot_mem) && ctx.pc == 0x0886EE28u) goto L_0886EE28;
    return;
L_0886EE28:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0886EE34u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 104u, 0x088CC9A0u>(ctx, &aot_mem) && ctx.pc == 0x0886EE34u) goto L_0886EE34;
    return;
L_0886EE34:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0886EE40u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0886ECC8;
L_0886EE40:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_0886ED98;
      }
      goto L_0886EE5C;
    }
L_0886EE5C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886EE8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886EE9Cu);
    // nop
    goto L_0886ED28;
L_0886EE9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886EEA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0886EEE8;
      }
      goto L_0886EED4;
    }
L_0886EED4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_0886EEE4;
    }
    goto L_0886EEE4;
L_0886EEE4:
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    goto L_0886EEE8;
L_0886EEE8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0886EF04;
      }
      goto L_0886EEF0;
    }
L_0886EEF0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_0886EF00;
    }
    goto L_0886EF00;
L_0886EF00:
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    goto L_0886EF04;
L_0886EF04:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0886EF20;
      }
      goto L_0886EF0C;
    }
L_0886EF0C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_0886EF1C;
    }
    goto L_0886EF1C;
L_0886EF1C:
    aot_gpr[7] = (0u < aot_gpr[4] ? 1u : 0u);
    goto L_0886EF20;
L_0886EF20:
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EF94;
      }
      goto L_0886EF3C;
    }
L_0886EF3C:
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0886EF94;
      }
      goto L_0886EF58;
    }
L_0886EF58:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[16] = (2218u << 16u);
    goto L_0886EF60;
L_0886EF60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0886EF7Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7520)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 103u, 0x0880B828u>(ctx, &aot_mem) && ctx.pc == 0x0886EF7Cu) goto L_0886EF7C;
    return;
L_0886EF7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_0886EF60;
      }
      goto L_0886EF94;
    }
L_0886EF94:
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
L_0886EFB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0886EFDCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886EFDCu) goto L_0886EFDC;
    return;
L_0886EFDC:
    aot_gpr[31] = (0x0886EFE4u);
    // nop
    goto L_0886EEA8;
L_0886EFE4:
    aot_gpr[31] = (0x0886EFECu);
    // nop
    goto L_0886ED28;
L_0886EFEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886EFF8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    ctx.pc = 0x0886F000u; return;
}

void recomp_unit_0106(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0106_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_106(Runtime &runtime) {
    runtime.register_generated_unit(106u, 0x0886E000u, 4096u, &recomp_unit_0106, &recomp_unit_0106_entry);
    runtime.register_function(0x0886E004u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E01Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E028u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E030u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E038u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E040u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E050u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E058u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E088u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E0BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E0C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E0D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E0DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E0E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E0F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E0F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E100u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E10Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E114u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E120u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E128u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E130u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E13Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E15Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E178u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E194u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E1B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E1B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E1C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E1CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E1D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E1F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E20Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E228u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E230u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E23Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E244u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E250u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E25Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E264u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E26Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E274u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E284u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E28Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E2ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E2B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E2BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E2C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E2D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E2D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E2E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E2E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E308u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E328u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E35Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E36Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E37Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E388u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E3A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E3B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E3DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E404u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E430u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E454u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E484u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E498u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E4F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E54Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E55Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E578u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E588u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E5A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E5ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E5B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E5D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E620u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E63Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E64Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E660u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E668u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E67Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E694u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E6ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E6B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E6C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E6E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E6E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E704u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E70Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E728u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E734u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E750u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E778u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E77Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E788u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E790u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E79Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E7C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E7CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E7D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E7E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E7ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E7F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E800u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E804u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E80Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E814u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E818u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E834u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E840u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E848u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E850u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E858u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E860u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E868u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E894u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E898u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E8B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E8C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E8C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E8E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E8F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E900u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E908u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E920u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E950u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E998u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E9B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886E9DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EA14u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EA30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EA48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EA54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EA6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EAB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EAE4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EAF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EB0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EB20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EB50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EB6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EB7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EB90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EB9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EBB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EBECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EBF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EC30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EC44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EC58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EC64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EC6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ECA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ECB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ECBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ECC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ECE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ECE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ECF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ECFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ED04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ED10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ED1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ED20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ED28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ED70u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886ED98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EDBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EDD8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EDE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EDF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EDFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EE08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EE14u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EE1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EE28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EE34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EE40u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EE5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EE8Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EE9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EEA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EED4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EEE4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EEE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EEF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EF00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EF04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EF0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EF1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EF20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EF3Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EF58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EF60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EF7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EF94u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EFB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EFDCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EFE4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EFECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x0886EFF8u, &recomp_unit_0106, "recomp_unit_0106");
}
} // namespace psprecomp
