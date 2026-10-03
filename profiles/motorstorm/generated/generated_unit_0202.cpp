#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0202[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37,
    0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 60, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 84, 0, 85, 0, 0, 86,
    0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 94, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 105, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0,
    0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 120, 121, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0, 127,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    151, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 162, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176,
    0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184,
};
void recomp_unit_0202_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088CE000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0202[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088CE000;
    case 2u: goto L_088CE048;
    case 3u: goto L_088CE070;
    case 4u: goto L_088CE0BC;
    case 5u: goto L_088CE108;
    case 6u: goto L_088CE110;
    case 7u: goto L_088CE140;
    case 8u: goto L_088CE174;
    case 9u: goto L_088CE1D0;
    case 10u: goto L_088CE1DC;
    case 11u: goto L_088CE1F0;
    case 12u: goto L_088CE208;
    case 13u: goto L_088CE220;
    case 14u: goto L_088CE22C;
    case 15u: goto L_088CE240;
    case 16u: goto L_088CE258;
    case 17u: goto L_088CE270;
    case 18u: goto L_088CE28C;
    case 19u: goto L_088CE2A0;
    case 20u: goto L_088CE2BC;
    case 21u: goto L_088CE2EC;
    case 22u: goto L_088CE2FC;
    case 23u: goto L_088CE318;
    case 24u: goto L_088CE348;
    case 25u: goto L_088CE358;
    case 26u: goto L_088CE36C;
    case 27u: goto L_088CE3A0;
    case 28u: goto L_088CE3CC;
    case 29u: goto L_088CE41C;
    case 30u: goto L_088CE47C;
    case 31u: goto L_088CE48C;
    case 32u: goto L_088CE4BC;
    case 33u: goto L_088CE4DC;
    case 34u: goto L_088CE4E4;
    case 35u: goto L_088CE4EC;
    case 36u: goto L_088CE4F4;
    case 37u: goto L_088CE4FC;
    case 38u: goto L_088CE504;
    case 39u: goto L_088CE50C;
    case 40u: goto L_088CE514;
    case 41u: goto L_088CE568;
    case 42u: goto L_088CE580;
    case 43u: goto L_088CE59C;
    case 44u: goto L_088CE5B4;
    case 45u: goto L_088CE5BC;
    case 46u: goto L_088CE5CC;
    case 47u: goto L_088CE5D4;
    case 48u: goto L_088CE5F4;
    case 49u: goto L_088CE608;
    case 50u: goto L_088CE610;
    case 51u: goto L_088CE630;
    case 52u: goto L_088CE64C;
    case 53u: goto L_088CE65C;
    case 54u: goto L_088CE690;
    case 55u: goto L_088CE6AC;
    case 56u: goto L_088CE6B4;
    case 57u: goto L_088CE6D8;
    case 58u: goto L_088CE6E4;
    case 59u: goto L_088CE6F0;
    case 60u: goto L_088CE6F8;
    case 61u: goto L_088CE70C;
    case 62u: goto L_088CE730;
    case 63u: goto L_088CE73C;
    case 64u: goto L_088CE748;
    case 65u: goto L_088CE754;
    case 66u: goto L_088CE758;
    case 67u: goto L_088CE760;
    case 68u: goto L_088CE76C;
    case 69u: goto L_088CE780;
    case 70u: goto L_088CE7B0;
    case 71u: goto L_088CE7C8;
    case 72u: goto L_088CE7D4;
    case 73u: goto L_088CE7DC;
    case 74u: goto L_088CE7E4;
    case 75u: goto L_088CE7EC;
    case 76u: goto L_088CE810;
    case 77u: goto L_088CE820;
    case 78u: goto L_088CE830;
    case 79u: goto L_088CE838;
    case 80u: goto L_088CE84C;
    case 81u: goto L_088CE854;
    case 82u: goto L_088CE85C;
    case 83u: goto L_088CE864;
    case 84u: goto L_088CE868;
    case 85u: goto L_088CE870;
    case 86u: goto L_088CE87C;
    case 87u: goto L_088CE884;
    case 88u: goto L_088CE898;
    case 89u: goto L_088CE8AC;
    case 90u: goto L_088CE8B4;
    case 91u: goto L_088CE8D8;
    case 92u: goto L_088CE8F0;
    case 93u: goto L_088CE908;
    case 94u: goto L_088CE918;
    case 95u: goto L_088CE91C;
    case 96u: goto L_088CE92C;
    case 97u: goto L_088CE960;
    case 98u: goto L_088CE988;
    case 99u: goto L_088CE9A8;
    case 100u: goto L_088CE9D0;
    case 101u: goto L_088CE9EC;
    case 102u: goto L_088CEA18;
    case 103u: goto L_088CEA38;
    case 104u: goto L_088CEA4C;
    case 105u: goto L_088CEA50;
    case 106u: goto L_088CEA6C;
    case 107u: goto L_088CEA74;
    case 108u: goto L_088CEA7C;
    case 109u: goto L_088CEA84;
    case 110u: goto L_088CEAAC;
    case 111u: goto L_088CEAB4;
    case 112u: goto L_088CEAC8;
    case 113u: goto L_088CEAD0;
    case 114u: goto L_088CEAF0;
    case 115u: goto L_088CEAF8;
    case 116u: goto L_088CEB0C;
    case 117u: goto L_088CEB14;
    case 118u: goto L_088CEB24;
    case 119u: goto L_088CEB34;
    case 120u: goto L_088CEB38;
    case 121u: goto L_088CEB3C;
    case 122u: goto L_088CEB4C;
    case 123u: goto L_088CEB54;
    case 124u: goto L_088CEB60;
    case 125u: goto L_088CEB68;
    case 126u: goto L_088CEB70;
    case 127u: goto L_088CEB7C;
    case 128u: goto L_088CEB8C;
    case 129u: goto L_088CEBB4;
    case 130u: goto L_088CEBC8;
    case 131u: goto L_088CEBD0;
    case 132u: goto L_088CEBE0;
    case 133u: goto L_088CEBF0;
    case 134u: goto L_088CEBFC;
    case 135u: goto L_088CEC50;
    case 136u: goto L_088CEC54;
    case 137u: goto L_088CEC5C;
    case 138u: goto L_088CEC80;
    case 139u: goto L_088CEC90;
    case 140u: goto L_088CECB8;
    case 141u: goto L_088CECBC;
    case 142u: goto L_088CECE0;
    case 143u: goto L_088CECE8;
    case 144u: goto L_088CECF0;
    case 145u: goto L_088CED04;
    case 146u: goto L_088CED2C;
    case 147u: goto L_088CED34;
    case 148u: goto L_088CED48;
    case 149u: goto L_088CED50;
    case 150u: goto L_088CED74;
    case 151u: goto L_088CED80;
    case 152u: goto L_088CED94;
    case 153u: goto L_088CEDA0;
    case 154u: goto L_088CEDAC;
    case 155u: goto L_088CEDBC;
    case 156u: goto L_088CEDD0;
    case 157u: goto L_088CEDE8;
    case 158u: goto L_088CEE04;
    case 159u: goto L_088CEE10;
    case 160u: goto L_088CEE18;
    case 161u: goto L_088CEE28;
    case 162u: goto L_088CEE30;
    case 163u: goto L_088CEE34;
    case 164u: goto L_088CEE44;
    case 165u: goto L_088CEE58;
    case 166u: goto L_088CEE60;
    case 167u: goto L_088CEE6C;
    case 168u: goto L_088CEE8C;
    case 169u: goto L_088CEE94;
    case 170u: goto L_088CEEA4;
    case 171u: goto L_088CEEC4;
    case 172u: goto L_088CEEF4;
    case 173u: goto L_088CEF14;
    case 174u: goto L_088CEF58;
    case 175u: goto L_088CEF64;
    case 176u: goto L_088CEF7C;
    case 177u: goto L_088CEF84;
    case 178u: goto L_088CEF90;
    case 179u: goto L_088CEFA0;
    case 180u: goto L_088CEFB8;
    case 181u: goto L_088CEFC0;
    case 182u: goto L_088CEFD4;
    case 183u: goto L_088CEFE8;
    case 184u: goto L_088CEFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088CE000:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(6));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(6));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(10));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 179u, 0x088CDEA8u>(ctx, &aot_mem); return;
      }
      goto L_088CE048;
    }
L_088CE048:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(352), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(364));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(356), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(360), aot_gpr[6]);
    aot_gpr[31] = (0x088CE070u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CE070u) goto L_088CE070;
    return;
L_088CE070:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(380), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(384), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(102)));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(406), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(408), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(412), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(416), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(116)));
    aot_gpr[6] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(420), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    goto L_088CE0BC;
L_088CE0BC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(388), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(400), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(424), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(436), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(144))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(448), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(150))))));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(454), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088CE0BC;
      }
      goto L_088CE108;
    }
L_088CE108:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(156)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(460), aot_gpr[4]);
    goto L_088CE110;
L_088CE110:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE140:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CE48C;
      }
      goto L_088CE174;
    }
L_088CE174:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1))))));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE208;
      }
      goto L_088CE1D0;
    }
L_088CE1D0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    goto L_088CE1DC;
L_088CE1DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x088CE1F0u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CE1F0u) goto L_088CE1F0;
    return;
L_088CE1F0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(1))))));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088CE1DC;
      }
      goto L_088CE208;
    }
L_088CE208:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE258;
      }
      goto L_088CE220;
    }
L_088CE220:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[20] + static_cast<std::uint32_t>(68));
    goto L_088CE22C;
L_088CE22C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x088CE240u);
    aot_gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CE240u) goto L_088CE240;
    return;
L_088CE240:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(2))))));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088CE22C;
      }
      goto L_088CE258;
    }
L_088CE258:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_088CE3A0;
      }
      goto L_088CE270;
    }
L_088CE270:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 10u);
    aot_gpr[30] = (aot_gpr[20] + static_cast<std::uint32_t>(180));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[21] = (0u | 6u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(340));
    goto L_088CE28C;
L_088CE28C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x088CE2A0u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CE2A0u) goto L_088CE2A0;
    return;
L_088CE2A0:
    aot_gpr[4] = (aot_gpr[23] << 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(280));
    goto L_088CE2BC;
L_088CE2BC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 10u);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[8] = (aot_gpr[4] << 3u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[31] = (0x088CE2ECu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CE2ECu) goto L_088CE2EC;
    return;
L_088CE2EC:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_088CE2BC;
      }
      goto L_088CE2FC;
    }
L_088CE2FC:
    aot_gpr[4] = (aot_gpr[22] << 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(200));
    goto L_088CE318;
L_088CE318:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 10u);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[8] = (aot_gpr[4] << 3u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[31] = (0x088CE348u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CE348u) goto L_088CE348;
    return;
L_088CE348:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_088CE318;
      }
      goto L_088CE358;
    }
L_088CE358:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[31] = (0x088CE36Cu);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CE36Cu) goto L_088CE36C;
    return;
L_088CE36C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(10));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(2));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(6));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(10));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_088CE28C;
      }
      goto L_088CE3A0;
    }
L_088CE3A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(364));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(56), aot_gpr[6]);
    aot_gpr[31] = (0x088CE3CCu);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CE3CCu) goto L_088CE3CC;
    return;
L_088CE3CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(406)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(416)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(420)));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_088CE41C;
L_088CE41C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(388)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(84), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(400)));
    aot_gpr[9] = (aot_gpr[9] & 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(424)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(436)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(448))))));
    aot_gpr[9] = (aot_gpr[9] << 16u);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[9]) >> 16u));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(454))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] << 16u);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[9]) >> 16u));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088CE41C;
      }
      goto L_088CE47C;
    }
L_088CE47C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(460)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(160), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(156), aot_gpr[4]);
    goto L_088CE48C;
L_088CE48C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE4BC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32472), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE4DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE4E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE4EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE4F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE4FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE504:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE50C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE514:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-1448));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088CE568u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 148u, 0x08877A30u>(ctx, &aot_mem) && ctx.pc == 0x088CE568u) goto L_088CE568;
    return;
L_088CE568:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE580:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CE5F4;
      }
      goto L_088CE59C;
    }
L_088CE59C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1448));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[31] = (0x088CE5B4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x088CE5B4u) goto L_088CE5B4;
    return;
L_088CE5B4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_088CE5CC;
      }
      goto L_088CE5BC;
    }
L_088CE5BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_088CE5CC;
L_088CE5CC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088CE5F4;
      }
      goto L_088CE5D4;
    }
L_088CE5D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088CE5F4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE5F4u) goto L_088CE5F4;
    return;
L_088CE5F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE608:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE610:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32480), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE630:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CE6F8;
      }
      goto L_088CE64C;
    }
L_088CE64C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088CE65Cu);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088CE65Cu) goto L_088CE65C;
    return;
L_088CE65C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (24948u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(24900));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (20563u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20575));
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088CE690u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088CE690u) goto L_088CE690;
    return;
L_088CE690:
    aot_gpr[4] = (0u | 32768u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(5112));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_088CE6B4;
      }
      goto L_088CE6AC;
    }
L_088CE6AC:
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7268), aot_gpr[4]);
    goto L_088CE6B4;
L_088CE6B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088CE6D8u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE6D8u) goto L_088CE6D8;
    return;
L_088CE6D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (0x088CE6E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3948)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088CE6E4u) goto L_088CE6E4;
    return;
L_088CE6E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE6F8;
      }
      goto L_088CE6F0;
    }
L_088CE6F0:
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7268), aot_gpr[4]);
    goto L_088CE6F8;
L_088CE6F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE70C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088CE730u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088CE730u) goto L_088CE730;
    return;
L_088CE730:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CE758;
      }
      goto L_088CE73C;
    }
L_088CE73C:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[31] = (0x088CE748u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088CE748u) goto L_088CE748;
    return;
L_088CE748:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CE754u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_088CE630;
L_088CE754:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088CE758;
L_088CE758:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE76C;
      }
      goto L_088CE760;
    }
L_088CE760:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088CE76C;
L_088CE76C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE780:
    aot_gpr[4] = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (ctx.lo);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE7B0:
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE7DC;
      }
      goto L_088CE7C8;
    }
L_088CE7C8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CE7E4;
      }
      goto L_088CE7D4;
    }
L_088CE7D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE820;
      }
      goto L_088CE7DC;
    }
L_088CE7DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE830;
      }
      goto L_088CE7E4;
    }
L_088CE7E4:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE820;
      }
      goto L_088CE7EC;
    }
L_088CE7EC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (49152u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(72), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CE830;
      }
      goto L_088CE810;
    }
L_088CE810:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CE830;
      }
      goto L_088CE820;
    }
L_088CE820:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_088CE830;
L_088CE830:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE838:
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE85C;
      }
      goto L_088CE84C;
    }
L_088CE84C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE864;
      }
      goto L_088CE854;
    }
L_088CE854:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE868;
      }
      goto L_088CE85C;
    }
L_088CE85C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE8AC;
      }
      goto L_088CE864;
    }
L_088CE864:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_088CE868;
L_088CE868:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_088CE87C;
      }
      goto L_088CE870;
    }
L_088CE870:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_088CE87C;
L_088CE87C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088CE898;
      }
      goto L_088CE884;
    }
L_088CE884:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CE8AC;
      }
      goto L_088CE898;
    }
L_088CE898:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_088CE8AC;
L_088CE8AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE8B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[10] + static_cast<std::uint32_t>(15));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088CE8D8u);
    aot_gpr[7] = (aot_gpr[10] + static_cast<std::uint32_t>(14));
    goto L_088CE780;
L_088CE8D8:
    aot_gpr[4] = (aot_gpr[9] << 2u);
    aot_gpr[4] = (aot_gpr[10] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE8F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088CE91C;
      }
      goto L_088CE908;
    }
L_088CE908:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088CE918u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 183u, 0x08A51F88u>(ctx, &aot_mem) && ctx.pc == 0x088CE918u) goto L_088CE918;
    return;
L_088CE918:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_088CE91C;
L_088CE91C:
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE92C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE960:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088CE988u);
    aot_gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CE988u) goto L_088CE988;
    return;
L_088CE988:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CE9EC;
      }
      goto L_088CE9A8;
    }
L_088CE9A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088CE9D0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CE9D0u) goto L_088CE9D0;
    return;
L_088CE9D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088CE9EC;
L_088CE9EC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_088CEA18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (0u | 0u);
    aot_gpr[3] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[12] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088CEB4C;
      }
      goto L_088CEA38;
    }
L_088CEA38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[24] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[24] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[15] = (0u | 0u);
      if (branch_taken) {
          goto L_088CEB4C;
      }
      goto L_088CEA4C;
    }
L_088CEA4C:
    aot_gpr[14] = (16384u << 16u);
    goto L_088CEA50;
L_088CEA50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[15]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[6] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088CEB3C;
      }
      goto L_088CEA6C;
    }
L_088CEA6C:
    { const bool branch_taken = aot_gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CEA7C;
      }
      goto L_088CEA74;
    }
L_088CEA74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088CEAC8;
      }
      goto L_088CEA7C;
    }
L_088CEA7C:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    goto L_088CEA84;
L_088CEA84:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(14)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(15)));
    aot_gpr[25] = (aot_gpr[9] << 5u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[25]);
    aot_gpr[9] = (aot_gpr[9] << 2u);
    aot_gpr[9] = (aot_gpr[9] - aot_gpr[25]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[9] = (aot_gpr[9] & 65535u);
    { const bool branch_taken = aot_gpr[9] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CEAB4;
      }
      goto L_088CEAAC;
    }
L_088CEAAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088CEAC8;
      }
      goto L_088CEAB4;
    }
L_088CEAB4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088CEA84;
      }
      goto L_088CEAC8;
    }
L_088CEAC8:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEB3C;
      }
      goto L_088CEAD0;
    }
L_088CEAD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[6] = (aot_gpr[5] | aot_gpr[14]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088CEAF0u);
    aot_gpr[6] = (aot_gpr[12] | 0u);
    goto L_088CE8B4;
L_088CEAF0:
    { const bool branch_taken = aot_gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CEB14;
      }
      goto L_088CEAF8;
    }
L_088CEAF8:
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088CEB0Cu);
    aot_gpr[6] = (aot_gpr[12] | 0u);
    goto L_088CE838;
L_088CEB0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088CEB38;
      }
      goto L_088CEB14;
    }
L_088CEB14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[31] = (0x088CEB24u);
    aot_gpr[6] = (aot_gpr[12] | 0u);
    goto L_088CE838;
L_088CEB24:
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088CEB34u);
    aot_gpr[6] = (aot_gpr[12] | 0u);
    goto L_088CE7B0;
L_088CEB34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_088CEB38;
L_088CEB38:
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    goto L_088CEB3C;
L_088CEB3C:
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[24] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088CEA50;
      }
      goto L_088CEB4C;
    }
L_088CEB4C:
    { const bool branch_taken = aot_gpr[12] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088CEB70;
      }
      goto L_088CEB54;
    }
L_088CEB54:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[13]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEB68;
      }
      goto L_088CEB60;
    }
L_088CEB60:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CEBF0;
      }
      goto L_088CEB68;
    }
L_088CEB68:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[13]);
      if (branch_taken) {
          goto L_088CEBF0;
      }
      goto L_088CEB70;
    }
L_088CEB70:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_088CEB7C;
L_088CEB7C:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEBE0;
      }
      goto L_088CEB8C;
    }
L_088CEB8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(14)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(15)));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] & 65535u);
    aot_gpr[6] = (aot_gpr[9] | 0u);
    goto L_088CEBB4;
L_088CEBB4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CEBD0;
      }
      goto L_088CEBC8;
    }
L_088CEBC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEBE0;
      }
      goto L_088CEBD0;
    }
L_088CEBD0:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088CEBB4;
      }
      goto L_088CEBE0;
    }
L_088CEBE0:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088CEB7C;
      }
      goto L_088CEBF0;
    }
L_088CEBF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEBFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[9] & 255u);
    aot_gpr[9] = (aot_gpr[11] << 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[30]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[30] = (aot_gpr[6] | 0u);
    aot_gpr[22] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
      if (branch_taken) {
          goto L_088CEC54;
      }
      goto L_088CEC50;
    }
L_088CEC50:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    goto L_088CEC54;
L_088CEC54:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEEC4;
      }
      goto L_088CEC5C;
    }
L_088CEC5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[30] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[30] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[23] = (2218u << 16u);
    goto L_088CEC80;
L_088CEC80:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEEA4;
      }
      goto L_088CEC90;
    }
L_088CEC90:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CEE8C;
      }
      goto L_088CECB8;
    }
L_088CECB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088CECBC;
L_088CECBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088CEE6C;
      }
      goto L_088CECE0;
    }
L_088CECE0:
    { const bool branch_taken = aot_gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CECF0;
      }
      goto L_088CECE8;
    }
L_088CECE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088CED48;
      }
      goto L_088CECF0;
    }
L_088CECF0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] << 4u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[7]);
    aot_gpr[7] = (0u | 0u);
    goto L_088CED04;
L_088CED04:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(14)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(15)));
    aot_gpr[10] = (aot_gpr[8] << 5u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[8] & 65535u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CED34;
      }
      goto L_088CED2C;
    }
L_088CED2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088CED48;
      }
      goto L_088CED34;
    }
L_088CED34:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088CED04;
      }
      goto L_088CED48;
    }
L_088CED48:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEE6C;
      }
      goto L_088CED50;
    }
L_088CED50:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (16384u << 16u);
    aot_gpr[6] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CED74u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    goto L_088CE8B4;
L_088CED74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CEDA0;
      }
      goto L_088CED80;
    }
L_088CED80:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088CED94u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    goto L_088CE838;
L_088CED94:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088CEE60;
      }
      goto L_088CEDA0;
    }
L_088CEDA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088CEE30;
      }
      goto L_088CEDAC;
    }
L_088CEDAC:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEE28;
      }
      goto L_088CEDBC;
    }
L_088CEDBC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[19] + aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    goto L_088CEDD0;
L_088CEDD0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CEE18;
      }
      goto L_088CEDE8;
    }
L_088CEDE8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x088CEE04u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-3948)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088CEE04u) goto L_088CEE04;
    return;
L_088CEE04:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEE18;
      }
      goto L_088CEE10;
    }
L_088CEE10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088CEE28;
      }
      goto L_088CEE18;
    }
L_088CEE18:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088CEDD0;
      }
      goto L_088CEE28;
    }
L_088CEE28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEE34;
      }
      goto L_088CEE30;
    }
L_088CEE30:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_088CEE34;
L_088CEE34:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088CEE44u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    goto L_088CE838;
L_088CEE44:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088CEE58u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    goto L_088CE7B0;
L_088CEE58:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    goto L_088CEE60;
L_088CEE60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_088CEE6C;
L_088CEE6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_088CECBC;
      }
      goto L_088CEE8C;
    }
L_088CEE8C:
    { const bool branch_taken = aot_gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CEEA4;
      }
      goto L_088CEE94;
    }
L_088CEE94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088CEEA4;
L_088CEEA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
      if (branch_taken) {
          goto L_088CEC80;
      }
      goto L_088CEEC4;
    }
L_088CEEC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEEF4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32488), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEF14:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32500)));
    aot_gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[6] = (0u | 1u);
        goto L_088CEF58;
    }
    goto L_088CEF58;
L_088CEF58:
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CEF84;
      }
      goto L_088CEF64;
    }
L_088CEF64:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] & 3072u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEF84;
      }
      goto L_088CEF7C;
    }
L_088CEF7C:
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_088CEF84;
L_088CEF84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEFA0;
      }
      goto L_088CEF90;
    }
L_088CEF90:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088CEFA0;
L_088CEFA0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(33)));
    aot_gpr[6] = (aot_gpr[7] & 3u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_088CEFFC;
      }
      goto L_088CEFB8;
    }
L_088CEFB8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEFD4;
      }
      goto L_088CEFC0;
    }
L_088CEFC0:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 4u, 0x088CF03Cu>(ctx, &aot_mem); return;
      }
      goto L_088CEFD4;
    }
L_088CEFD4:
    aot_gpr[6] = (aot_gpr[7] & 12u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 4u, 0x088CF03Cu>(ctx, &aot_mem); return;
      }
      goto L_088CEFE8;
    }
L_088CEFE8:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 4u, 0x088CF03Cu>(ctx, &aot_mem); return;
      }
      goto L_088CEFFC;
    }
L_088CEFFC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 2u, 0x088CF018u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 1u, 0x088CF004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0202(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0202_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_202(Runtime &runtime) {
    runtime.register_generated_unit(202u, 0x088CE000u, 4096u, &recomp_unit_0202, &recomp_unit_0202_entry);
    runtime.register_function(0x088CE000u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE048u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE070u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE0BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE108u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE110u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE140u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE174u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE1D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE1DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE1F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE208u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE220u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE22Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE240u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE258u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE270u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE28Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE2A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE2BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE2ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE2FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE318u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE348u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE358u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE36Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE3A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE3CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE41Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE47Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE48Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE4BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE4DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE4E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE4ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE4F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE4FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE504u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE50Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE514u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE568u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE580u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE59Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE5B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE5BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE5CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE5D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE5F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE608u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE610u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE630u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE64Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE65Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE690u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE6ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE6B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE6D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE6E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE6F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE6F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE70Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE730u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE73Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE748u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE754u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE758u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE760u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE76Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE780u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE7B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE7C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE7D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE7DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE7E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE7ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE810u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE820u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE830u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE838u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE84Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE854u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE85Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE864u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE868u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE870u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE87Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE884u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE898u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE8ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE8B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE8D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE8F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE908u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE918u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE91Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE92Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE960u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE988u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE9A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE9D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CE9ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEA18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEA38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEA4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEA50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEA6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEA74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEA7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEA84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEAACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEAB4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEAC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEAD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEAF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEAF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEB8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEBB4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEBC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEBD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEBE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEBF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEBFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEC50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEC54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEC5Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEC80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEC90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CECB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CECBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CECE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CECE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CECF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CED04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CED2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CED34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CED48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CED50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CED74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CED80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CED94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEDA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEDACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEDBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEDD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEDE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEE04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEE10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEE18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEE28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEE30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEE34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEE44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEE58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEE60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEE6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEE8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEE94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEEA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEEC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEEF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEF14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEF58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEF64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEF7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEF84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEF90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEFA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEFB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEFC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEFD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEFE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x088CEFFCu, &recomp_unit_0202, "recomp_unit_0202");
}
} // namespace psprecomp
