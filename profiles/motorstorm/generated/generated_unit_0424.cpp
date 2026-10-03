#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0424[1023] = {
    1, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 16, 0, 17,
    0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 36, 37, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 0,
    47, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 63, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 75, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 80, 0,
    0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 87, 0, 88, 0, 0, 89, 90, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0,
    103, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0,
    0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 138,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0,
    154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0,
    180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0,
    0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 217, 0,
    0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225,
};
void recomp_unit_0424_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089AC000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0424[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089AC000;
    case 2u: goto L_089AC008;
    case 3u: goto L_089AC014;
    case 4u: goto L_089AC01C;
    case 5u: goto L_089AC038;
    case 6u: goto L_089AC054;
    case 7u: goto L_089AC058;
    case 8u: goto L_089AC060;
    case 9u: goto L_089AC068;
    case 10u: goto L_089AC090;
    case 11u: goto L_089AC098;
    case 12u: goto L_089AC0B8;
    case 13u: goto L_089AC0D4;
    case 14u: goto L_089AC0E0;
    case 15u: goto L_089AC0E8;
    case 16u: goto L_089AC0F4;
    case 17u: goto L_089AC0FC;
    case 18u: goto L_089AC108;
    case 19u: goto L_089AC114;
    case 20u: goto L_089AC128;
    case 21u: goto L_089AC130;
    case 22u: goto L_089AC138;
    case 23u: goto L_089AC184;
    case 24u: goto L_089AC18C;
    case 25u: goto L_089AC1B0;
    case 26u: goto L_089AC1C8;
    case 27u: goto L_089AC1D8;
    case 28u: goto L_089AC1E0;
    case 29u: goto L_089AC218;
    case 30u: goto L_089AC21C;
    case 31u: goto L_089AC240;
    case 32u: goto L_089AC248;
    case 33u: goto L_089AC250;
    case 34u: goto L_089AC258;
    case 35u: goto L_089AC26C;
    case 36u: goto L_089AC284;
    case 37u: goto L_089AC288;
    case 38u: goto L_089AC290;
    case 39u: goto L_089AC2A0;
    case 40u: goto L_089AC2AC;
    case 41u: goto L_089AC2B8;
    case 42u: goto L_089AC2C4;
    case 43u: goto L_089AC2D8;
    case 44u: goto L_089AC2E4;
    case 45u: goto L_089AC2F0;
    case 46u: goto L_089AC2F8;
    case 47u: goto L_089AC300;
    case 48u: goto L_089AC308;
    case 49u: goto L_089AC31C;
    case 50u: goto L_089AC328;
    case 51u: goto L_089AC334;
    case 52u: goto L_089AC348;
    case 53u: goto L_089AC350;
    case 54u: goto L_089AC39C;
    case 55u: goto L_089AC3A8;
    case 56u: goto L_089AC3C8;
    case 57u: goto L_089AC3E8;
    case 58u: goto L_089AC3F0;
    case 59u: goto L_089AC3FC;
    case 60u: goto L_089AC41C;
    case 61u: goto L_089AC424;
    case 62u: goto L_089AC430;
    case 63u: goto L_089AC434;
    case 64u: goto L_089AC440;
    case 65u: goto L_089AC44C;
    case 66u: goto L_089AC454;
    case 67u: goto L_089AC484;
    case 68u: goto L_089AC48C;
    case 69u: goto L_089AC4A0;
    case 70u: goto L_089AC4AC;
    case 71u: goto L_089AC4BC;
    case 72u: goto L_089AC4D0;
    case 73u: goto L_089AC524;
    case 74u: goto L_089AC53C;
    case 75u: goto L_089AC540;
    case 76u: goto L_089AC548;
    case 77u: goto L_089AC558;
    case 78u: goto L_089AC564;
    case 79u: goto L_089AC56C;
    case 80u: goto L_089AC578;
    case 81u: goto L_089AC588;
    case 82u: goto L_089AC594;
    case 83u: goto L_089AC5A8;
    case 84u: goto L_089AC5D4;
    case 85u: goto L_089AC624;
    case 86u: goto L_089AC630;
    case 87u: goto L_089AC634;
    case 88u: goto L_089AC63C;
    case 89u: goto L_089AC648;
    case 90u: goto L_089AC64C;
    case 91u: goto L_089AC650;
    case 92u: goto L_089AC670;
    case 93u: goto L_089AC678;
    case 94u: goto L_089AC684;
    case 95u: goto L_089AC6AC;
    case 96u: goto L_089AC6B8;
    case 97u: goto L_089AC6C0;
    case 98u: goto L_089AC6D4;
    case 99u: goto L_089AC6DC;
    case 100u: goto L_089AC6E4;
    case 101u: goto L_089AC6F0;
    case 102u: goto L_089AC6F8;
    case 103u: goto L_089AC700;
    case 104u: goto L_089AC714;
    case 105u: goto L_089AC71C;
    case 106u: goto L_089AC724;
    case 107u: goto L_089AC72C;
    case 108u: goto L_089AC734;
    case 109u: goto L_089AC73C;
    case 110u: goto L_089AC754;
    case 111u: goto L_089AC76C;
    case 112u: goto L_089AC778;
    case 113u: goto L_089AC788;
    case 114u: goto L_089AC79C;
    case 115u: goto L_089AC7B8;
    case 116u: goto L_089AC7C0;
    case 117u: goto L_089AC7CC;
    case 118u: goto L_089AC7DC;
    case 119u: goto L_089AC7F8;
    case 120u: goto L_089AC810;
    case 121u: goto L_089AC820;
    case 122u: goto L_089AC830;
    case 123u: goto L_089AC844;
    case 124u: goto L_089AC850;
    case 125u: goto L_089AC85C;
    case 126u: goto L_089AC864;
    case 127u: goto L_089AC87C;
    case 128u: goto L_089AC88C;
    case 129u: goto L_089AC894;
    case 130u: goto L_089AC89C;
    case 131u: goto L_089AC8EC;
    case 132u: goto L_089AC914;
    case 133u: goto L_089AC91C;
    case 134u: goto L_089AC928;
    case 135u: goto L_089AC948;
    case 136u: goto L_089AC958;
    case 137u: goto L_089AC968;
    case 138u: goto L_089AC97C;
    case 139u: goto L_089AC990;
    case 140u: goto L_089AC9B8;
    case 141u: goto L_089AC9C8;
    case 142u: goto L_089AC9CC;
    case 143u: goto L_089AC9E4;
    case 144u: goto L_089AC9EC;
    case 145u: goto L_089ACA1C;
    case 146u: goto L_089ACA44;
    case 147u: goto L_089ACA68;
    case 148u: goto L_089ACA70;
    case 149u: goto L_089ACAA4;
    case 150u: goto L_089ACAC4;
    case 151u: goto L_089ACACC;
    case 152u: goto L_089ACAD8;
    case 153u: goto L_089ACAF8;
    case 154u: goto L_089ACB00;
    case 155u: goto L_089ACB0C;
    case 156u: goto L_089ACB1C;
    case 157u: goto L_089ACB28;
    case 158u: goto L_089ACB30;
    case 159u: goto L_089ACB54;
    case 160u: goto L_089ACB64;
    case 161u: goto L_089ACB6C;
    case 162u: goto L_089ACB7C;
    case 163u: goto L_089ACB90;
    case 164u: goto L_089ACBA8;
    case 165u: goto L_089ACBB0;
    case 166u: goto L_089ACBC4;
    case 167u: goto L_089ACBD0;
    case 168u: goto L_089ACBEC;
    case 169u: goto L_089ACC04;
    case 170u: goto L_089ACC0C;
    case 171u: goto L_089ACC20;
    case 172u: goto L_089ACC2C;
    case 173u: goto L_089ACC34;
    case 174u: goto L_089ACC3C;
    case 175u: goto L_089ACC44;
    case 176u: goto L_089ACC50;
    case 177u: goto L_089ACC64;
    case 178u: goto L_089ACC6C;
    case 179u: goto L_089ACC74;
    case 180u: goto L_089ACC80;
    case 181u: goto L_089ACC94;
    case 182u: goto L_089ACC9C;
    case 183u: goto L_089ACCAC;
    case 184u: goto L_089ACCDC;
    case 185u: goto L_089ACCE4;
    case 186u: goto L_089ACD1C;
    case 187u: goto L_089ACD3C;
    case 188u: goto L_089ACD54;
    case 189u: goto L_089ACD60;
    case 190u: goto L_089ACD6C;
    case 191u: goto L_089ACD78;
    case 192u: goto L_089ACD84;
    case 193u: goto L_089ACD94;
    case 194u: goto L_089ACDA0;
    case 195u: goto L_089ACDA8;
    case 196u: goto L_089ACDC0;
    case 197u: goto L_089ACDEC;
    case 198u: goto L_089ACE28;
    case 199u: goto L_089ACE38;
    case 200u: goto L_089ACE44;
    case 201u: goto L_089ACE50;
    case 202u: goto L_089ACE5C;
    case 203u: goto L_089ACE64;
    case 204u: goto L_089ACE70;
    case 205u: goto L_089ACE78;
    case 206u: goto L_089ACEB8;
    case 207u: goto L_089ACEBC;
    case 208u: goto L_089ACEE8;
    case 209u: goto L_089ACF0C;
    case 210u: goto L_089ACF14;
    case 211u: goto L_089ACF28;
    case 212u: goto L_089ACF3C;
    case 213u: goto L_089ACF44;
    case 214u: goto L_089ACF58;
    case 215u: goto L_089ACF68;
    case 216u: goto L_089ACF70;
    case 217u: goto L_089ACF78;
    case 218u: goto L_089ACF88;
    case 219u: goto L_089ACF90;
    case 220u: goto L_089ACF98;
    case 221u: goto L_089ACFA0;
    case 222u: goto L_089ACFA8;
    case 223u: goto L_089ACFB0;
    case 224u: goto L_089ACFB8;
    case 225u: goto L_089ACFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089AC000:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-16));
    (void)rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 164u, 0x089ABF30u>(ctx, &aot_mem); return;
L_089AC008:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 164u, 0x089ABF30u>(ctx, &aot_mem); return;
      }
      goto L_089AC014;
    }
L_089AC014:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089AC184;
      }
      goto L_089AC01C;
    }
L_089AC01C:
    aot_gpr[9] = (aot_gpr[23] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (aot_gpr[22] + 0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089AC038u);
    aot_gpr[10] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 140u, 0x089ABC74u>(ctx, &aot_mem) && ctx.pc == 0x089AC038u) goto L_089AC038;
    return;
L_089AC038:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12928));
    aot_gpr[31] = (0x089AC054u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089AC054u) goto L_089AC054;
    return;
L_089AC054:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089AC058;
L_089AC058:
    if (aot_gpr[18] != 0u) {
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0))))));
        goto L_089AC130;
    }
    goto L_089AC060;
L_089AC060:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[2] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 165u, 0x089ABF34u>(ctx, &aot_mem); return;
      }
      goto L_089AC068;
    }
L_089AC068:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16304)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(296)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[22] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC090u);
    aot_gpr[8] = (aot_gpr[30] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC090u) goto L_089AC090;
    return;
L_089AC090:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 165u, 0x089ABF34u>(ctx, &aot_mem); return;
      }
      goto L_089AC098;
    }
L_089AC098:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-14868));
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16308)));
    aot_gpr[16] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC0B8u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC0B8u) goto L_089AC0B8;
    return;
L_089AC0B8:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_089AC0D4;
L_089AC0D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16308)));
    jump_target = aot_gpr[21];
    aot_gpr[31] = (0x089AC0E0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC0E0u) goto L_089AC0E0;
    return;
L_089AC0E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089AC128;
      }
      goto L_089AC0E8;
    }
L_089AC0E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC0F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16308)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC0F4u) goto L_089AC0F4;
    return;
L_089AC0F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089AC108;
      }
      goto L_089AC0FC;
    }
L_089AC0FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(80)));
    if (aot_gpr[19] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089AC1C8;
    }
    goto L_089AC108;
L_089AC108:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC114u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16308)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC114u) goto L_089AC114;
    return;
L_089AC114:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_089AC0D4;
L_089AC128:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-5));
    (void)rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 164u, 0x089ABF30u>(ctx, &aot_mem); return;
L_089AC130:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-11));
        (void)rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 164u, 0x089ABF30u>(ctx, &aot_mem); return;
    }
    goto L_089AC138;
L_089AC138:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[11] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[11] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[11] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[11] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[11] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[11] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[11] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[18] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[18] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[18] + static_cast<std::uint32_t>(11), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[18] + static_cast<std::uint32_t>(15), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089AC060;
L_089AC184:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089AC058;
      }
      goto L_089AC18C;
    }
L_089AC18C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (aot_gpr[23] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (aot_gpr[22] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[10] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089AC1B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 140u, 0x089ABC74u>(ctx, &aot_mem) && ctx.pc == 0x089AC1B0u) goto L_089AC1B0;
    return;
L_089AC1B0:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089AC058;
L_089AC1C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16308)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC1D8u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-5));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC1D8u) goto L_089AC1D8;
    return;
L_089AC1D8:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 165u, 0x089ABF34u>(ctx, &aot_mem); return;
L_089AC1E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16308)));
      if (branch_taken) {
          goto L_089AC240;
      }
      goto L_089AC218;
    }
L_089AC218:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AC21C;
L_089AC21C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC240:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AC21C;
      }
      goto L_089AC248;
    }
L_089AC248:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089AC258;
      }
      goto L_089AC250;
    }
L_089AC250:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-12));
    goto L_089AC21C;
L_089AC258:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-14868));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC26Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC26Cu) goto L_089AC26C;
    return;
L_089AC26C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_089AC2A0;
L_089AC284:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    goto L_089AC288;
L_089AC288:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC290u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC290u) goto L_089AC290;
    return;
L_089AC290:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_089AC2A0;
L_089AC2A0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[21];
    aot_gpr[31] = (0x089AC2ACu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC2ACu) goto L_089AC2AC;
    return;
L_089AC2AC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089AC250;
      }
      goto L_089AC2B8;
    }
L_089AC2B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC2C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC2C4u) goto L_089AC2C4;
    return;
L_089AC2C4:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089AC284;
      }
      goto L_089AC2D8;
    }
L_089AC2D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(80)));
    if (aot_gpr[18] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
        goto L_089AC288;
    }
    goto L_089AC2E4;
L_089AC2E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[2] != aot_gpr[19]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
        goto L_089AC288;
    }
    goto L_089AC2F0;
L_089AC2F0:
    aot_gpr[2] = (0u + 0u);
    goto L_089AC21C;
L_089AC2F8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089AC308;
      }
      goto L_089AC300;
    }
L_089AC300:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC308:
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(-20896));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(560));
    goto L_089AC328;
L_089AC31C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_089AC348;
      }
      goto L_089AC328;
    }
L_089AC328:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089AC31C;
      }
      goto L_089AC334;
    }
L_089AC334:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-20896));
    aot_gpr[2] = (aot_gpr[6] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC348:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC350:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-941));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-941));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089AC39Cu);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_089AC2F8;
L_089AC39C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-941));
    aot_gpr[31] = (0x089AC3A8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0428_entry, 428u, 145u, 0x089B0B58u>(ctx, &aot_mem) && ctx.pc == 0x089AC3A8u) goto L_089AC3A8;
    return;
L_089AC3A8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-14868));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16308)));
    aot_gpr[16] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089AC3C8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC3C8u) goto L_089AC3C8;
    return;
L_089AC3C8:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089AC3E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC3E8u) goto L_089AC3E8;
    return;
L_089AC3E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089AC454;
      }
      goto L_089AC3F0;
    }
L_089AC3F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC3FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16308)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC3FCu) goto L_089AC3FC;
    return;
L_089AC3FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16308)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089AC41Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC41Cu) goto L_089AC41C;
    return;
L_089AC41C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AC430;
      }
      goto L_089AC424;
    }
L_089AC424:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == aot_gpr[20]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
        goto L_089AC484;
    }
    goto L_089AC430;
L_089AC430:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089AC434;
L_089AC434:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_089AC440;
L_089AC440:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16308)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089AC44Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC44Cu) goto L_089AC44C;
    return;
L_089AC44C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089AC3F0;
      }
      goto L_089AC454;
    }
L_089AC454:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC484:
    { const bool branch_taken = aot_gpr[21] != aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089AC434;
      }
      goto L_089AC48C;
    }
L_089AC48C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AC4AC;
      }
      goto L_089AC4A0;
    }
L_089AC4A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC4ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC4ACu) goto L_089AC4AC;
    return;
L_089AC4AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16308)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC4BCu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC4BCu) goto L_089AC4BC;
    return;
L_089AC4BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_089AC440;
L_089AC4D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[3] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-14868));
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC524u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC524u) goto L_089AC524;
    return;
L_089AC524:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_089AC558;
L_089AC53C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089AC540;
L_089AC540:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC548u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC548u) goto L_089AC548;
    return;
L_089AC548:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_089AC558;
L_089AC558:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16308)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089AC564u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC564u) goto L_089AC564;
    return;
L_089AC564:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089AC5A8;
      }
      goto L_089AC56C;
    }
L_089AC56C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC578u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16308)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC578u) goto L_089AC578;
    return;
L_089AC578:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16308)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089AC53C;
      }
      goto L_089AC588;
    }
L_089AC588:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] != aot_gpr[19]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089AC540;
    }
    goto L_089AC594;
L_089AC594:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[22] ^ aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[2]);
    goto L_089AC53C;
L_089AC5A8:
    aot_gpr[2] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC5D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[21]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089AC648;
      }
      goto L_089AC624;
    }
L_089AC624:
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[6] != 0u;
    if (aot_gpr[7] == 0u) aot_gpr[18] = (aot_gpr[2]);
      if (branch_taken) {
          goto L_089AC6F0;
      }
      goto L_089AC630;
    }
L_089AC630:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089AC634;
L_089AC634:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC6DC;
      }
      goto L_089AC63C;
    }
L_089AC63C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_089AC670;
    }
    goto L_089AC648;
L_089AC648:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AC64C;
L_089AC64C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    goto L_089AC650;
L_089AC650:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC670:
    if (static_cast<std::int32_t>(aot_gpr[3]) < 0) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
        goto L_089AC73C;
    }
    goto L_089AC678;
L_089AC678:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089AC734;
      }
      goto L_089AC684;
    }
L_089AC684:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + 0u);
    if (aot_gpr[5] == 0u) aot_gpr[4] = (aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC6ACu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC6ACu) goto L_089AC6AC;
    return;
L_089AC6AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[19];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_089AC64C;
      }
      goto L_089AC6B8;
    }
L_089AC6B8:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC724;
      }
      goto L_089AC6C0;
    }
L_089AC6C0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16304)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC6D4u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(72));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC6D4u) goto L_089AC6D4;
    return;
L_089AC6D4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
    goto L_089AC64C;
L_089AC6DC:
    if (aot_gpr[19] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089AC64C;
    }
    goto L_089AC6E4;
L_089AC6E4:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    goto L_089AC63C;
L_089AC6F0:
    aot_gpr[31] = (0x089AC6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 123u, 0x089ABB78u>(ctx, &aot_mem) && ctx.pc == 0x089AC6F8u) goto L_089AC6F8;
    return;
L_089AC6F8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089AC64C;
    }
    goto L_089AC700;
L_089AC700:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089AC714u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    goto L_089AC1E0;
L_089AC714:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089AC634;
    }
    goto L_089AC71C;
L_089AC71C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    goto L_089AC650;
L_089AC724:
    aot_gpr[31] = (0x089AC72Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 126u, 0x089ABB94u>(ctx, &aot_mem) && ctx.pc == 0x089AC72Cu) goto L_089AC72C;
    return;
L_089AC72C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
    goto L_089AC64C;
L_089AC734:
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    goto L_089AC684;
L_089AC73C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[31] = (0x089AC754u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089AC2F8;
L_089AC754:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12932));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089AC76Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089AC76Cu) goto L_089AC76C;
    return;
L_089AC76C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089AC778u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0428_entry, 428u, 145u, 0x089B0B58u>(ctx, &aot_mem) && ctx.pc == 0x089AC778u) goto L_089AC778;
    return;
L_089AC778:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[31] = (0x089AC788u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 86u, 0x0899266Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC788u) goto L_089AC788;
    return;
L_089AC788:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(283), static_cast<std::uint8_t>(0u));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089AC684;
L_089AC79C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16308)));
    aot_gpr[6] = (aot_gpr[4] & 65535u);
    aot_gpr[7] = (2217u << 16u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(84));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(16308));
      if (branch_taken) {
          goto L_089AC7C0;
      }
      goto L_089AC7B8;
    }
L_089AC7B8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC7C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16304)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089AC7DC;
      }
      goto L_089AC7CC;
    }
L_089AC7CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14868)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC7DC:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-15748));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16304), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14868)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC7F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16308)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16308));
      if (branch_taken) {
          goto L_089AC820;
      }
      goto L_089AC810;
    }
L_089AC810:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-14864)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089AC820u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC820u) goto L_089AC820;
    return;
L_089AC820:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC830:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16308)));
    aot_gpr[5] = (2217u << 16u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089AC85C;
      }
      goto L_089AC844;
    }
L_089AC844:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16304)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (2215u << 16u);
        goto L_089AC864;
    }
    goto L_089AC850;
L_089AC850:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_089AC85C;
L_089AC85C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC864:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-15748));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16304), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC87C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16308)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-15));
      if (branch_taken) {
          goto L_089AC894;
      }
      goto L_089AC88C;
    }
L_089AC88C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (0u + 0u);
    goto L_089AC894;
L_089AC894:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC89C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-14868));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16308)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    aot_gpr[22] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC8ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC8ECu) goto L_089AC8EC;
    return;
L_089AC8EC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (aot_gpr[4] + static_cast<std::uint32_t>(12972));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16308)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    jump_target = aot_gpr[21];
    aot_gpr[31] = (0x089AC914u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC914u) goto L_089AC914;
    return;
L_089AC914:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089AC9EC;
      }
      goto L_089AC91C;
    }
L_089AC91C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC928u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16308)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC928u) goto L_089AC928;
    return;
L_089AC928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16308)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089AC948u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC948u) goto L_089AC948;
    return;
L_089AC948:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089AC9C8;
      }
      goto L_089AC958;
    }
L_089AC958:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16304)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC968u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC968u) goto L_089AC968;
    return;
L_089AC968:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089AC9CC;
      }
      goto L_089AC97C;
    }
L_089AC97C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089AC9B8;
      }
      goto L_089AC990;
    }
L_089AC990:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-931));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089AC9B8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC9B8u) goto L_089AC9B8;
    return;
L_089AC9B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16308)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AC9C8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC9C8u) goto L_089AC9C8;
    return;
L_089AC9C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089AC9CC;
L_089AC9CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16308)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    jump_target = aot_gpr[21];
    aot_gpr[31] = (0x089AC9E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC9E4u) goto L_089AC9E4;
    return;
L_089AC9E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089AC91C;
      }
      goto L_089AC9EC;
    }
L_089AC9EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACA1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[2] = (aot_gpr[5] + 0u);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
      if (branch_taken) {
          goto L_089ACA68;
      }
      goto L_089ACA44;
    }
L_089ACA44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACA68:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089ACA44;
      }
      goto L_089ACA70;
    }
L_089ACA70:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-14868));
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16308)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[3] + 0u);
    aot_gpr[17] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ACAA4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACAA4u) goto L_089ACAA4;
    return;
L_089ACAA4:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x089ACAC4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACAC4u) goto L_089ACAC4;
    return;
L_089ACAC4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089ACB30;
      }
      goto L_089ACACC;
    }
L_089ACACC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ACAD8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16308)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACAD8u) goto L_089ACAD8;
    return;
L_089ACAD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16308)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089ACAF8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACAF8u) goto L_089ACAF8;
    return;
L_089ACAF8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ACB0C;
      }
      goto L_089ACB00;
    }
L_089ACB00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[18] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(52)));
        goto L_089ACB54;
    }
    goto L_089ACB0C;
L_089ACB0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_089ACB1C;
L_089ACB1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16308)));
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x089ACB28u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACB28u) goto L_089ACB28;
    return;
L_089ACB28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089ACACC;
      }
      goto L_089ACB30;
    }
L_089ACB30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACB54:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089ACB6C;
      }
      goto L_089ACB64;
    }
L_089ACB64:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ACB6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACB6Cu) goto L_089ACB6C;
    return;
L_089ACB6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16308)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ACB7Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACB7Cu) goto L_089ACB7C;
    return;
L_089ACB7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_089ACB1C;
L_089ACB90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089ACBA8u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    goto L_089AC1E0;
L_089ACBA8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ACBC4;
      }
      goto L_089ACBB0;
    }
L_089ACBB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACBC4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-10));
        goto L_089ACBB0;
    }
    goto L_089ACBD0;
L_089ACBD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    goto L_089ACBB0;
L_089ACBEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089ACC04u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    goto L_089AC1E0;
L_089ACC04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ACC20;
      }
      goto L_089ACC0C;
    }
L_089ACC0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACC20:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_089ACC34;
      }
      goto L_089ACC2C;
    }
L_089ACC2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089ACC0C;
L_089ACC34:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-10));
    goto L_089ACC0C;
L_089ACC3C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACC64;
      }
      goto L_089ACC44;
    }
L_089ACC44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ACC64;
      }
      goto L_089ACC50;
    }
L_089ACC50:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14828)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACC64:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACC6C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACC94;
      }
      goto L_089ACC74;
    }
L_089ACC74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ACC94;
      }
      goto L_089ACC80;
    }
L_089ACC80:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14824)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACC94:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACC9C:
    aot_gpr[9] = (2217u << 16u);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(16332));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089ACCDC;
      }
      goto L_089ACCAC;
    }
L_089ACCAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(16332), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    goto L_089ACCDC;
L_089ACCDC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACCE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_089ACDC0;
      }
      goto L_089ACD1C;
    }
L_089ACD1C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-14928));
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16324)));
    aot_gpr[16] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ACD3Cu);
    aot_gpr[21] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACD3Cu) goto L_089ACD3C;
    return;
L_089ACD3C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_089ACD94;
L_089ACD54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ACD60u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16324)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACD60u) goto L_089ACD60;
    return;
L_089ACD60:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089ACD78;
      }
      goto L_089ACD6C;
    }
L_089ACD6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[20];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089ACDEC;
      }
      goto L_089ACD78;
    }
L_089ACD78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ACD84u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16324)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACD84u) goto L_089ACD84;
    return;
L_089ACD84:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_089ACD94;
L_089ACD94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16324)));
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x089ACDA0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACDA0u) goto L_089ACDA0;
    return;
L_089ACDA0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089ACD54;
      }
      goto L_089ACDA8;
    }
L_089ACDA8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-10));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_089ACDC0;
L_089ACDC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACDEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACE28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089ACE38u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    goto L_089ACCE4;
L_089ACE38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACE44:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(144)));
        goto L_089ACE70;
    }
    goto L_089ACE50;
L_089ACE50:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089ACE64;
      }
      goto L_089ACE5C;
    }
L_089ACE5C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACE64:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(292)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACE70:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACE78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-18));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
      if (branch_taken) {
          goto L_089ACEE8;
      }
      goto L_089ACEB8;
    }
L_089ACEB8:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089ACEBC;
L_089ACEBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACEE8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[20] = (aot_gpr[2] + static_cast<std::uint32_t>(16356));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(104));
    aot_gpr[22] = (2217u << 16u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089ACEB8;
      }
      goto L_089ACF0C;
    }
L_089ACF0C:
    aot_gpr[31] = (0x089ACF14u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-14928)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACF14u) goto L_089ACF14;
    return;
L_089ACF14:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(100), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(340));
    jump_target = aot_gpr[21];
    aot_gpr[31] = (0x089ACF28u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(16324));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACF28u) goto L_089ACF28;
    return;
L_089ACF28:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(352));
    aot_gpr[6] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (2217u << 16u);
      if (branch_taken) {
          goto L_089ACF58;
      }
      goto L_089ACF3C;
    }
L_089ACF3C:
    jump_target = aot_gpr[21];
    aot_gpr[31] = (0x089ACF44u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(16328));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACF44u) goto L_089ACF44;
    return;
L_089ACF44:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] << 3u);
    aot_gpr[2] = (aot_gpr[16] << 1u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_089ACF78;
      }
      goto L_089ACF58;
    }
L_089ACF58:
    aot_gpr[2] = (aot_gpr[23] + static_cast<std::uint32_t>(-14928));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089ACF68u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(16324));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACF68u) goto L_089ACF68;
    return;
L_089ACF68:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089ACF70u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(16328));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACF70u) goto L_089ACF70;
    return;
L_089ACF70:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089ACEBC;
L_089ACF78:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15728)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ACF88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACF88u) goto L_089ACF88;
    return;
L_089ACF88:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ACF58;
      }
      goto L_089ACF90;
    }
L_089ACF90:
    aot_gpr[31] = (0x089ACF98u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0428_entry, 428u, 152u, 0x089B0BC8u>(ctx, &aot_mem) && ctx.pc == 0x089ACF98u) goto L_089ACF98;
    return;
L_089ACF98:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089ACF58;
      }
      goto L_089ACFA0;
    }
L_089ACFA0:
    aot_gpr[31] = (0x089ACFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 45u, 0x089AE2C8u>(ctx, &aot_mem) && ctx.pc == 0x089ACFA8u) goto L_089ACFA8;
    return;
L_089ACFA8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ACF58;
      }
      goto L_089ACFB0;
    }
L_089ACFB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16320), aot_gpr[18]);
    goto L_089ACEB8;
L_089ACFB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-15));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[31] = (0x089ACFF8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x089ACFF8u) goto L_089ACFF8;
    return;
L_089ACFF8:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16320)));
    ctx.pc = 0x089AD000u; return;
}

void recomp_unit_0424(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0424_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_424(Runtime &runtime) {
    runtime.register_generated_unit(424u, 0x089AC000u, 4096u, &recomp_unit_0424, &recomp_unit_0424_entry);
    runtime.register_function(0x089AC000u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC008u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC014u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC01Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC038u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC054u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC058u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC060u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC068u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC090u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC098u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC0B8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC0D4u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC0E0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC0E8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC0F4u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC0FCu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC108u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC114u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC128u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC130u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC138u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC184u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC18Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC1B0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC1C8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC1D8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC1E0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC218u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC21Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC240u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC248u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC250u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC258u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC26Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC284u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC288u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC290u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC2A0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC2ACu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC2B8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC2C4u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC2D8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC2E4u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC2F0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC2F8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC300u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC308u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC31Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC328u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC334u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC348u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC350u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC39Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC3A8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC3C8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC3E8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC3F0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC3FCu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC41Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC424u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC430u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC434u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC440u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC44Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC454u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC484u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC48Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC4A0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC4ACu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC4BCu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC4D0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC524u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC53Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC540u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC548u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC558u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC564u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC56Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC578u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC588u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC594u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC5A8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC5D4u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC624u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC630u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC634u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC63Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC648u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC64Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC650u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC670u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC678u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC684u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC6ACu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC6B8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC6C0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC6D4u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC6DCu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC6E4u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC6F0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC6F8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC700u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC714u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC71Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC724u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC72Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC734u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC73Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC754u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC76Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC778u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC788u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC79Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC7B8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC7C0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC7CCu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC7DCu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC7F8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC810u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC820u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC830u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC844u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC850u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC85Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC864u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC87Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC88Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC894u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC89Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC8ECu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC914u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC91Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC928u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC948u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC958u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC968u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC97Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC990u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC9B8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC9C8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC9CCu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC9E4u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089AC9ECu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACA1Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACA44u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACA68u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACA70u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACAA4u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACAC4u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACACCu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACAD8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACAF8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACB00u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACB0Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACB1Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACB28u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACB30u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACB54u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACB64u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACB6Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACB7Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACB90u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACBA8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACBB0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACBC4u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACBD0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACBECu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC04u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC0Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC20u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC2Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC34u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC3Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC44u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC50u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC64u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC6Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC74u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC80u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC94u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACC9Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACCACu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACCDCu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACCE4u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACD1Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACD3Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACD54u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACD60u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACD6Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACD78u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACD84u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACD94u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACDA0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACDA8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACDC0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACDECu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACE28u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACE38u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACE44u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACE50u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACE5Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACE64u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACE70u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACE78u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACEB8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACEBCu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACEE8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACF0Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACF14u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACF28u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACF3Cu, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACF44u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACF58u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACF68u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACF70u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACF78u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACF88u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACF90u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACF98u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACFA0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACFA8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACFB0u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACFB8u, &recomp_unit_0424, "recomp_unit_0424");
    runtime.register_function(0x089ACFF8u, &recomp_unit_0424, "recomp_unit_0424");
}
} // namespace psprecomp
