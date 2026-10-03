#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0284[1024] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 0, 23,
    0, 0, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0,
    0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0,
    35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 45, 0, 0, 0,
    46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0,
    54, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64,
    0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0,
    76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 87, 0, 88, 0, 0,
    89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 92, 93, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 98, 99, 0, 0, 100, 0,
    0, 101, 0, 0, 0, 0, 102, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 108,
    0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 112, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 118, 119, 0,
    0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 124, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 130,
    131, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 136, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141,
    142, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 148, 149, 0, 0, 150, 0, 151, 152, 0, 153, 0, 0, 154, 0, 0,
    0, 155, 0, 0, 0, 0, 156, 157, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 162, 163, 164, 0, 0, 165, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 185, 0, 0, 0,
    0, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 200, 0, 0,
    0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 219, 220, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 233,
};
void recomp_unit_0284_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08920000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0284[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08920000;
    case 2u: goto L_08920014;
    case 3u: goto L_08920038;
    case 4u: goto L_0892004C;
    case 5u: goto L_08920054;
    case 6u: goto L_089200A0;
    case 7u: goto L_089200B8;
    case 8u: goto L_089200E4;
    case 9u: goto L_089200FC;
    case 10u: goto L_08920114;
    case 11u: goto L_08920124;
    case 12u: goto L_08920130;
    case 13u: goto L_08920160;
    case 14u: goto L_08920170;
    case 15u: goto L_08920178;
    case 16u: goto L_08920190;
    case 17u: goto L_089201B0;
    case 18u: goto L_089201C8;
    case 19u: goto L_089201D4;
    case 20u: goto L_089201DC;
    case 21u: goto L_089201EC;
    case 22u: goto L_089201F4;
    case 23u: goto L_089201FC;
    case 24u: goto L_08920208;
    case 25u: goto L_0892020C;
    case 26u: goto L_08920268;
    case 27u: goto L_08920274;
    case 28u: goto L_08920288;
    case 29u: goto L_08920290;
    case 30u: goto L_089202B4;
    case 31u: goto L_089202C4;
    case 32u: goto L_089202D8;
    case 33u: goto L_089202E4;
    case 34u: goto L_089202F8;
    case 35u: goto L_08920300;
    case 36u: goto L_08920314;
    case 37u: goto L_08920350;
    case 38u: goto L_0892038C;
    case 39u: goto L_08920394;
    case 40u: goto L_089203A4;
    case 41u: goto L_089203BC;
    case 42u: goto L_089203C0;
    case 43u: goto L_089203D8;
    case 44u: goto L_089203EC;
    case 45u: goto L_089203F0;
    case 46u: goto L_08920400;
    case 47u: goto L_08920410;
    case 48u: goto L_0892041C;
    case 49u: goto L_0892042C;
    case 50u: goto L_0892043C;
    case 51u: goto L_08920448;
    case 52u: goto L_08920470;
    case 53u: goto L_08920478;
    case 54u: goto L_08920480;
    case 55u: goto L_08920498;
    case 56u: goto L_089204A4;
    case 57u: goto L_089204B8;
    case 58u: goto L_089204BC;
    case 59u: goto L_089204CC;
    case 60u: goto L_089204D4;
    case 61u: goto L_089204F8;
    case 62u: goto L_08920528;
    case 63u: goto L_08920564;
    case 64u: goto L_0892057C;
    case 65u: goto L_08920584;
    case 66u: goto L_0892059C;
    case 67u: goto L_089205D8;
    case 68u: goto L_089205E8;
    case 69u: goto L_089205F8;
    case 70u: goto L_08920604;
    case 71u: goto L_0892062C;
    case 72u: goto L_0892063C;
    case 73u: goto L_08920648;
    case 74u: goto L_08920670;
    case 75u: goto L_08920678;
    case 76u: goto L_08920680;
    case 77u: goto L_08920694;
    case 78u: goto L_089206A8;
    case 79u: goto L_089206AC;
    case 80u: goto L_089206BC;
    case 81u: goto L_089206C4;
    case 82u: goto L_089206E8;
    case 83u: goto L_08920718;
    case 84u: goto L_08920748;
    case 85u: goto L_08920760;
    case 86u: goto L_08920768;
    case 87u: goto L_0892076C;
    case 88u: goto L_08920774;
    case 89u: goto L_08920780;
    case 90u: goto L_08920790;
    case 91u: goto L_089207A4;
    case 92u: goto L_089207A8;
    case 93u: goto L_089207AC;
    case 94u: goto L_089207B8;
    case 95u: goto L_089207C0;
    case 96u: goto L_089207D0;
    case 97u: goto L_089207E4;
    case 98u: goto L_089207E8;
    case 99u: goto L_089207EC;
    case 100u: goto L_089207F8;
    case 101u: goto L_08920804;
    case 102u: goto L_08920818;
    case 103u: goto L_0892081C;
    case 104u: goto L_08920830;
    case 105u: goto L_08920848;
    case 106u: goto L_0892085C;
    case 107u: goto L_08920870;
    case 108u: goto L_0892087C;
    case 109u: goto L_08920888;
    case 110u: goto L_08920898;
    case 111u: goto L_089208AC;
    case 112u: goto L_089208B0;
    case 113u: goto L_089208B4;
    case 114u: goto L_089208C0;
    case 115u: goto L_089208CC;
    case 116u: goto L_089208DC;
    case 117u: goto L_089208F0;
    case 118u: goto L_089208F4;
    case 119u: goto L_089208F8;
    case 120u: goto L_08920904;
    case 121u: goto L_08920910;
    case 122u: goto L_08920920;
    case 123u: goto L_08920934;
    case 124u: goto L_08920938;
    case 125u: goto L_0892093C;
    case 126u: goto L_08920948;
    case 127u: goto L_08920954;
    case 128u: goto L_08920964;
    case 129u: goto L_08920978;
    case 130u: goto L_0892097C;
    case 131u: goto L_08920980;
    case 132u: goto L_0892098C;
    case 133u: goto L_08920994;
    case 134u: goto L_089209A4;
    case 135u: goto L_089209B8;
    case 136u: goto L_089209BC;
    case 137u: goto L_089209C0;
    case 138u: goto L_089209CC;
    case 139u: goto L_089209D8;
    case 140u: goto L_089209E8;
    case 141u: goto L_089209FC;
    case 142u: goto L_08920A00;
    case 143u: goto L_08920A04;
    case 144u: goto L_08920A10;
    case 145u: goto L_08920A1C;
    case 146u: goto L_08920A2C;
    case 147u: goto L_08920A40;
    case 148u: goto L_08920A44;
    case 149u: goto L_08920A48;
    case 150u: goto L_08920A54;
    case 151u: goto L_08920A5C;
    case 152u: goto L_08920A60;
    case 153u: goto L_08920A68;
    case 154u: goto L_08920A74;
    case 155u: goto L_08920A84;
    case 156u: goto L_08920A98;
    case 157u: goto L_08920A9C;
    case 158u: goto L_08920AA0;
    case 159u: goto L_08920AAC;
    case 160u: goto L_08920AB8;
    case 161u: goto L_08920AC8;
    case 162u: goto L_08920ADC;
    case 163u: goto L_08920AE0;
    case 164u: goto L_08920AE4;
    case 165u: goto L_08920AF0;
    case 166u: goto L_08920B04;
    case 167u: goto L_08920B30;
    case 168u: goto L_08920B54;
    case 169u: goto L_08920B9C;
    case 170u: goto L_08920BD4;
    case 171u: goto L_08920BFC;
    case 172u: goto L_08920C08;
    case 173u: goto L_08920C1C;
    case 174u: goto L_08920C34;
    case 175u: goto L_08920C3C;
    case 176u: goto L_08920C44;
    case 177u: goto L_08920C5C;
    case 178u: goto L_08920C80;
    case 179u: goto L_08920C84;
    case 180u: goto L_08920C8C;
    case 181u: goto L_08920CA8;
    case 182u: goto L_08920CC0;
    case 183u: goto L_08920CD8;
    case 184u: goto L_08920CEC;
    case 185u: goto L_08920CF0;
    case 186u: goto L_08920D08;
    case 187u: goto L_08920D14;
    case 188u: goto L_08920D1C;
    case 189u: goto L_08920D24;
    case 190u: goto L_08920D2C;
    case 191u: goto L_08920D54;
    case 192u: goto L_08920D60;
    case 193u: goto L_08920D70;
    case 194u: goto L_08920D94;
    case 195u: goto L_08920DA0;
    case 196u: goto L_08920DAC;
    case 197u: goto L_08920DB4;
    case 198u: goto L_08920DCC;
    case 199u: goto L_08920DF0;
    case 200u: goto L_08920DF4;
    case 201u: goto L_08920E08;
    case 202u: goto L_08920E10;
    case 203u: goto L_08920E1C;
    case 204u: goto L_08920E38;
    case 205u: goto L_08920E48;
    case 206u: goto L_08920E50;
    case 207u: goto L_08920E5C;
    case 208u: goto L_08920E6C;
    case 209u: goto L_08920E78;
    case 210u: goto L_08920E94;
    case 211u: goto L_08920E9C;
    case 212u: goto L_08920EA4;
    case 213u: goto L_08920EB0;
    case 214u: goto L_08920EB8;
    case 215u: goto L_08920EC0;
    case 216u: goto L_08920EDC;
    case 217u: goto L_08920EF0;
    case 218u: goto L_08920F08;
    case 219u: goto L_08920F1C;
    case 220u: goto L_08920F20;
    case 221u: goto L_08920F38;
    case 222u: goto L_08920F44;
    case 223u: goto L_08920F4C;
    case 224u: goto L_08920F54;
    case 225u: goto L_08920F5C;
    case 226u: goto L_08920F84;
    case 227u: goto L_08920F90;
    case 228u: goto L_08920FA0;
    case 229u: goto L_08920FB4;
    case 230u: goto L_08920FBC;
    case 231u: goto L_08920FD4;
    case 232u: goto L_08920FF8;
    case 233u: goto L_08920FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08920000:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920038;
      }
      goto L_08920014;
    }
L_08920014:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[11]));
    aot_gpr[10] = (aot_gpr[10] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr[10]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08920038;
L_08920038:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[9] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08920000;
      }
      goto L_0892004C;
    }
L_0892004C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08920054:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_089202B4;
      }
      goto L_089200A0;
    }
L_089200A0:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089202B4;
      }
      goto L_089200B8;
    }
L_089200B8:
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (48163u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[30] = (0u | 10u);
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[22] = (65280u << 16u);
    aot_gpr[21] = (16384u << 16u);
    goto L_089200E4;
L_089200E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920290;
      }
      goto L_089200FC;
    }
L_089200FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[19] = (0u | 0u);
    goto L_08920114;
L_08920114:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08920124u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920124u) goto L_08920124;
    return;
L_08920124:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920288;
      }
      goto L_08920130;
    }
L_08920130:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08920160u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920160u) goto L_08920160;
    return;
L_08920160:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08920274;
      }
      goto L_08920170;
    }
L_08920170:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920274;
      }
      goto L_08920178;
    }
L_08920178:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(192));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08920190u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920190u) goto L_08920190;
    return;
L_08920190:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (4u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(184));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089201B0u);
    aot_gpr[5] = (aot_gpr[2] | aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089201B0u) goto L_089201B0;
    return;
L_089201B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] & 64u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920268;
      }
      goto L_089201C8;
    }
L_089201C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089201EC;
      }
      goto L_089201D4;
    }
L_089201D4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[4]);
      if (branch_taken) {
          goto L_08920208;
      }
      goto L_089201DC;
    }
L_089201DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[4]);
      if (branch_taken) {
          goto L_08920208;
      }
      goto L_089201EC;
    }
L_089201EC:
    if (aot_gpr[20] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0892020C;
    }
    goto L_089201F4;
L_089201F4:
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[20]);
      if (branch_taken) {
          goto L_08920208;
      }
      goto L_089201FC;
    }
L_089201FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_08920208;
L_08920208:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0892020C;
L_0892020C:
    aot_gpr[5] = (70u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32760));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(38)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[30]));
    aot_gpr[5] = (aot_gpr[4] << 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[4] << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_08920274;
      }
      goto L_08920268;
    }
L_08920268:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_08920274;
L_08920274:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08920114;
      }
      goto L_08920288;
    }
L_08920288:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    goto L_08920290;
L_08920290:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089200E4;
      }
      goto L_089202B4;
    }
L_089202B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920314;
      }
      goto L_089202C4;
    }
L_089202C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (49440u << 16u);
      if (branch_taken) {
          goto L_08920314;
      }
      goto L_089202D8;
    }
L_089202D8:
    aot_gpr[6] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089202E4;
L_089202E4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920300;
      }
      goto L_089202F8;
    }
L_089202F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(200), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(40)));
    goto L_08920300;
L_08920300:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089202E4;
      }
      goto L_08920314;
    }
L_08920314:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08920350:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08920394;
      }
      goto L_0892038C;
    }
L_0892038C:
    aot_gpr[31] = (0x08920394u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 155u, 0x08922B84u>(ctx, &aot_mem) && ctx.pc == 0x08920394u) goto L_08920394;
    return;
L_08920394:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089204F8;
      }
      goto L_089203A4;
    }
L_089203A4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089204F8;
      }
      goto L_089203BC;
    }
L_089203BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089203C0;
L_089203C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089204D4;
      }
      goto L_089203D8;
    }
L_089203D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(210)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[21] = (aot_gpr[30] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089204D4;
      }
      goto L_089203EC;
    }
L_089203EC:
    aot_gpr[23] = (0u | 0u);
    goto L_089203F0;
L_089203F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(210)));
    aot_gpr[5] = (aot_gpr[22] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08920410;
      }
      goto L_08920400;
    }
L_08920400:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(308)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[23]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08920410;
      }
      goto L_08920410;
    }
L_08920410:
    aot_gpr[19] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089204BC;
      }
      goto L_0892041C;
    }
L_0892041C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[18] = (0u | 0u);
    goto L_0892042C;
L_0892042C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0892043Cu);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892043Cu) goto L_0892043C;
    return;
L_0892043C:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089204B8;
      }
      goto L_08920448;
    }
L_08920448:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08920470u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920470u) goto L_08920470;
    return;
L_08920470:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089204A4;
      }
      goto L_08920478;
    }
L_08920478:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089204A4;
      }
      goto L_08920480;
    }
L_08920480:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] & 64u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089204A4;
      }
      goto L_08920498;
    }
L_08920498:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089204A4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0309_entry, 309u, 38u, 0x08939548u>(ctx, &aot_mem) && ctx.pc == 0x089204A4u) goto L_089204A4;
    return;
L_089204A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0892042C;
      }
      goto L_089204B8;
    }
L_089204B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(210)));
    goto L_089204BC;
L_089204BC:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089203F0;
      }
      goto L_089204CC;
    }
L_089204CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    goto L_089204D4;
L_089204D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089203C0;
      }
      goto L_089204F8;
    }
L_089204F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08920528:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_089206E8;
      }
      goto L_08920564;
    }
L_08920564:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089206E8;
      }
      goto L_0892057C;
    }
L_0892057C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[30] = (2u << 16u);
    goto L_08920584;
L_08920584:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089206C4;
      }
      goto L_0892059C;
    }
L_0892059C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (16u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(210)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_089206BC;
      }
      goto L_089205D8;
    }
L_089205D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(210)));
    aot_gpr[5] = (aot_gpr[21] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089205F8;
      }
      goto L_089205E8;
    }
L_089205E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(308)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[23]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089205F8;
      }
      goto L_089205F8;
    }
L_089205F8:
    aot_gpr[19] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089206AC;
      }
      goto L_08920604;
    }
L_08920604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[18] = (0u | 0u);
    goto L_0892062C;
L_0892062C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0892063Cu);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892063Cu) goto L_0892063C;
    return;
L_0892063C:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089206A8;
      }
      goto L_08920648;
    }
L_08920648:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08920670u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920670u) goto L_08920670;
    return;
L_08920670:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08920694;
      }
      goto L_08920678;
    }
L_08920678:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920694;
      }
      goto L_08920680;
    }
L_08920680:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 128u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    goto L_08920694;
L_08920694:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0892062C;
      }
      goto L_089206A8;
    }
L_089206A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(210)));
    goto L_089206AC;
L_089206AC:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089205D8;
      }
      goto L_089206BC;
    }
L_089206BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_089206C4;
L_089206C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08920584;
      }
      goto L_089206E8;
    }
L_089206E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08920718:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08920748u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08920748u) goto L_08920748;
    return;
L_08920748:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1640));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0892076C;
      }
      goto L_08920760;
    }
L_08920760:
    aot_gpr[31] = (0x08920768u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 95u, 0x08A546ACu>(ctx, &aot_mem) && ctx.pc == 0x08920768u) goto L_08920768;
    return;
L_08920768:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    goto L_0892076C;
L_0892076C:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089207AC;
      }
      goto L_08920774;
    }
L_08920774:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08920780u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 200u, 0x08A53EF4u>(ctx, &aot_mem) && ctx.pc == 0x08920780u) goto L_08920780;
    return;
L_08920780:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089207A8;
      }
      goto L_08920790;
    }
L_08920790:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089207A4u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 22u, 0x08A53168u>(ctx, &aot_mem) && ctx.pc == 0x089207A4u) goto L_089207A4;
    return;
L_089207A4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089207A8;
L_089207A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_089207AC;
L_089207AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089207EC;
      }
      goto L_089207B8;
    }
L_089207B8:
    aot_gpr[31] = (0x089207C0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 202u, 0x08A53F04u>(ctx, &aot_mem) && ctx.pc == 0x089207C0u) goto L_089207C0;
    return;
L_089207C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089207E8;
      }
      goto L_089207D0;
    }
L_089207D0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089207E4u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 65u, 0x08A54484u>(ctx, &aot_mem) && ctx.pc == 0x089207E4u) goto L_089207E4;
    return;
L_089207E4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089207E8;
L_089207E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    goto L_089207EC;
L_089207EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920870;
      }
      goto L_089207F8;
    }
L_089207F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920870;
      }
      goto L_08920804;
    }
L_08920804:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08920870;
      }
      goto L_08920818;
    }
L_08920818:
    aot_gpr[9] = (16384u << 16u);
    goto L_0892081C;
L_0892081C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892085C;
      }
      goto L_08920830;
    }
L_08920830:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (aot_gpr[10] & aot_gpr[9]);
    aot_gpr[10] = (0u < aot_gpr[10] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892085C;
      }
      goto L_08920848;
    }
L_08920848:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_0892085C;
L_0892085C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892081C;
      }
      goto L_08920870;
    }
L_08920870:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089208B4;
      }
      goto L_0892087C;
    }
L_0892087C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08920888u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 96u, 0x08A546B4u>(ctx, &aot_mem) && ctx.pc == 0x08920888u) goto L_08920888;
    return;
L_08920888:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089208B0;
      }
      goto L_08920898;
    }
L_08920898:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089208ACu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 145u, 0x08A559B4u>(ctx, &aot_mem) && ctx.pc == 0x089208ACu) goto L_089208AC;
    return;
L_089208AC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089208B0;
L_089208B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    goto L_089208B4;
L_089208B4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089208F8;
      }
      goto L_089208C0;
    }
L_089208C0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089208CCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 97u, 0x08A546BCu>(ctx, &aot_mem) && ctx.pc == 0x089208CCu) goto L_089208CC;
    return;
L_089208CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089208F4;
      }
      goto L_089208DC;
    }
L_089208DC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089208F0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 74u, 0x08A5545Cu>(ctx, &aot_mem) && ctx.pc == 0x089208F0u) goto L_089208F0;
    return;
L_089208F0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089208F4;
L_089208F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    goto L_089208F8;
L_089208F8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892093C;
      }
      goto L_08920904;
    }
L_08920904:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08920910u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 98u, 0x08A546C4u>(ctx, &aot_mem) && ctx.pc == 0x08920910u) goto L_08920910;
    return;
L_08920910:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08920938;
      }
      goto L_08920920;
    }
L_08920920:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08920934u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 94u, 0x08A555CCu>(ctx, &aot_mem) && ctx.pc == 0x08920934u) goto L_08920934;
    return;
L_08920934:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08920938;
L_08920938:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    goto L_0892093C;
L_0892093C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920980;
      }
      goto L_08920948;
    }
L_08920948:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08920954u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 99u, 0x08A546CCu>(ctx, &aot_mem) && ctx.pc == 0x08920954u) goto L_08920954;
    return;
L_08920954:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892097C;
      }
      goto L_08920964;
    }
L_08920964:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08920978u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 114u, 0x08A5573Cu>(ctx, &aot_mem) && ctx.pc == 0x08920978u) goto L_08920978;
    return;
L_08920978:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_0892097C;
L_0892097C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    goto L_08920980;
L_08920980:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089209C0;
      }
      goto L_0892098C;
    }
L_0892098C:
    aot_gpr[31] = (0x08920994u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 100u, 0x08A546D4u>(ctx, &aot_mem) && ctx.pc == 0x08920994u) goto L_08920994;
    return;
L_08920994:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089209BC;
      }
      goto L_089209A4;
    }
L_089209A4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089209B8u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 134u, 0x08A558ACu>(ctx, &aot_mem) && ctx.pc == 0x089209B8u) goto L_089209B8;
    return;
L_089209B8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089209BC;
L_089209BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    goto L_089209C0;
L_089209C0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920A04;
      }
      goto L_089209CC;
    }
L_089209CC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089209D8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 101u, 0x08A546DCu>(ctx, &aot_mem) && ctx.pc == 0x089209D8u) goto L_089209D8;
    return;
L_089209D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08920A00;
      }
      goto L_089209E8;
    }
L_089209E8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089209FCu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 165u, 0x08A55B24u>(ctx, &aot_mem) && ctx.pc == 0x089209FCu) goto L_089209FC;
    return;
L_089209FC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08920A00;
L_08920A00:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    goto L_08920A04;
L_08920A04:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920A48;
      }
      goto L_08920A10;
    }
L_08920A10:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08920A1Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 102u, 0x08A546E4u>(ctx, &aot_mem) && ctx.pc == 0x08920A1Cu) goto L_08920A1C;
    return;
L_08920A1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08920A44;
      }
      goto L_08920A2C;
    }
L_08920A2C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08920A40u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 119u, 0x08940DD8u>(ctx, &aot_mem) && ctx.pc == 0x08920A40u) goto L_08920A40;
    return;
L_08920A40:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08920A44;
L_08920A44:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    goto L_08920A48;
L_08920A48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08920A60;
      }
      goto L_08920A54;
    }
L_08920A54:
    aot_gpr[31] = (0x08920A5Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 103u, 0x08A546ECu>(ctx, &aot_mem) && ctx.pc == 0x08920A5Cu) goto L_08920A5C;
    return;
L_08920A5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    goto L_08920A60;
L_08920A60:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920AA0;
      }
      goto L_08920A68;
    }
L_08920A68:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08920A74u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 104u, 0x08A546F4u>(ctx, &aot_mem) && ctx.pc == 0x08920A74u) goto L_08920A74;
    return;
L_08920A74:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08920A9C;
      }
      goto L_08920A84;
    }
L_08920A84:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08920A98u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 177u, 0x08A55C44u>(ctx, &aot_mem) && ctx.pc == 0x08920A98u) goto L_08920A98;
    return;
L_08920A98:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08920A9C;
L_08920A9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_08920AA0;
L_08920AA0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920AE4;
      }
      goto L_08920AAC;
    }
L_08920AAC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08920AB8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 105u, 0x08A546FCu>(ctx, &aot_mem) && ctx.pc == 0x08920AB8u) goto L_08920AB8;
    return;
L_08920AB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08920AE0;
      }
      goto L_08920AC8;
    }
L_08920AC8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08920ADCu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 189u, 0x08A55D64u>(ctx, &aot_mem) && ctx.pc == 0x08920ADCu) goto L_08920ADC;
    return;
L_08920ADC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08920AE0;
L_08920AE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    goto L_08920AE4;
L_08920AE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920B30;
      }
      goto L_08920AF0;
    }
L_08920AF0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08920B30;
      }
      goto L_08920B04;
    }
L_08920B04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08920B04;
      }
      goto L_08920B30;
    }
L_08920B30:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08920B54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[30] = (aot_gpr[8] | 0u);
    aot_gpr[21] = (aot_gpr[6] | 0u);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    aot_gpr[31] = (0x08920B9Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08920B9Cu) goto L_08920B9C;
    return;
L_08920B9C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1640));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(76), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_08920D1C;
      }
      goto L_08920BD4;
    }
L_08920BD4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08920C08;
      }
      goto L_08920BFC;
    }
L_08920BFC:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08920C08;
L_08920C08:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[7]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08920CC0;
      }
      goto L_08920C1C;
    }
L_08920C1C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[7]);
    aot_gpr[23] = (aot_gpr[20] & 1u);
    aot_gpr[20] = (aot_gpr[20] & 2u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    goto L_08920C34;
L_08920C34:
    { const bool branch_taken = aot_gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920C44;
      }
      goto L_08920C3C;
    }
L_08920C3C:
    if (aot_gpr[20] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
        goto L_08920C8C;
    }
    goto L_08920C44;
L_08920C44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[6] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08920C84;
      }
      goto L_08920C5C;
    }
L_08920C5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x08920C80u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 1u, 0x08944000u>(ctx, &aot_mem) && ctx.pc == 0x08920C80u) goto L_08920C80;
    return;
L_08920C80:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08920C84;
L_08920C84:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08920CA8;
      }
      goto L_08920C8C;
    }
L_08920C8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    goto L_08920CA8;
L_08920CA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08920C34;
      }
      goto L_08920CC0;
    }
L_08920CC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08920CF0;
      }
      goto L_08920CD8;
    }
L_08920CD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x08920CECu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 47u, 0x08A55324u>(ctx, &aot_mem) && ctx.pc == 0x08920CECu) goto L_08920CEC;
    return;
L_08920CEC:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    goto L_08920CF0;
L_08920CF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08920D14;
      }
      goto L_08920D08;
    }
L_08920D08:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08920D14;
L_08920D14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08920D24;
      }
      goto L_08920D1C;
    }
L_08920D1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    goto L_08920D24;
L_08920D24:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920F4C;
      }
      goto L_08920D2C;
    }
L_08920D2C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08920D60;
      }
      goto L_08920D54;
    }
L_08920D54:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08920D60;
L_08920D60:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[6]);
      if (branch_taken) {
          goto L_08920EF0;
      }
      goto L_08920D70;
    }
L_08920D70:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[23] & 1u);
    aot_gpr[5] = (aot_gpr[23] & 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[23] & 8u);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    goto L_08920D94;
L_08920D94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920DB4;
      }
      goto L_08920DA0;
    }
L_08920DA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920DB4;
      }
      goto L_08920DAC;
    }
L_08920DAC:
    if (aot_gpr[23] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
        goto L_08920EC0;
    }
    goto L_08920DB4;
L_08920DB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[6] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08920DF4;
      }
      goto L_08920DCC;
    }
L_08920DCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x08920DF0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0306_entry, 306u, 6u, 0x08936038u>(ctx, &aot_mem) && ctx.pc == 0x08920DF0u) goto L_08920DF0;
    return;
L_08920DF0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08920DF4;
L_08920DF4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920E9C;
      }
      goto L_08920E08;
    }
L_08920E08:
    aot_gpr[31] = (0x08920E10u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 48u, 0x08A5533Cu>(ctx, &aot_mem) && ctx.pc == 0x08920E10u) goto L_08920E10;
    return;
L_08920E10:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08920E48;
      }
      goto L_08920E1C;
    }
L_08920E1C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(72), aot_gpr[4]);
      if (branch_taken) {
          goto L_08920E5C;
      }
      goto L_08920E38;
    }
L_08920E38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[4]);
      if (branch_taken) {
          goto L_08920E5C;
      }
      goto L_08920E48;
    }
L_08920E48:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_08920E5C;
      }
      goto L_08920E50;
    }
L_08920E50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_08920E5C;
L_08920E5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (0x08920E6Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 48u, 0x08A5533Cu>(ctx, &aot_mem) && ctx.pc == 0x08920E6Cu) goto L_08920E6C;
    return;
L_08920E6C:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08920E94;
      }
      goto L_08920E78;
    }
L_08920E78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[5]);
      if (branch_taken) {
          goto L_08920EB8;
      }
      goto L_08920E94;
    }
L_08920E94:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), 0u);
      if (branch_taken) {
          goto L_08920EB8;
      }
      goto L_08920E9C;
    }
L_08920E9C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_08920EB0;
      }
      goto L_08920EA4;
    }
L_08920EA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_08920EB0;
L_08920EB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), 0u);
    goto L_08920EB8;
L_08920EB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08920EDC;
      }
      goto L_08920EC0;
    }
L_08920EC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    goto L_08920EDC;
L_08920EDC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08920D94;
      }
      goto L_08920EF0;
    }
L_08920EF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08920F20;
      }
      goto L_08920F08;
    }
L_08920F08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08920F1Cu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 56u, 0x08A5538Cu>(ctx, &aot_mem) && ctx.pc == 0x08920F1Cu) goto L_08920F1C;
    return;
L_08920F1C:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    goto L_08920F20;
L_08920F20:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08920F44;
      }
      goto L_08920F38;
    }
L_08920F38:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08920F44;
L_08920F44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08920F54;
      }
      goto L_08920F4C;
    }
L_08920F4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    goto L_08920F54;
L_08920F54:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0285_entry, 285u, 9u, 0x08921090u>(ctx, &aot_mem); return;
      }
      goto L_08920F5C;
    }
L_08920F5C:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[23] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08920F90;
      }
      goto L_08920F84;
    }
L_08920F84:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08920F90;
L_08920F90:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[6]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0285_entry, 285u, 3u, 0x08921034u>(ctx, &aot_mem); return;
      }
      goto L_08920FA0;
    }
L_08920FA0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[6]);
    aot_gpr[20] = (aot_gpr[20] & 4u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    goto L_08920FB4;
L_08920FB4:
    if (aot_gpr[20] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
        (void)rt.invoke_chained_direct<&recomp_unit_0285_entry, 285u, 1u, 0x08921004u>(ctx, &aot_mem); return;
    }
    goto L_08920FBC;
L_08920FBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[6] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08920FFC;
      }
      goto L_08920FD4;
    }
L_08920FD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x08920FF8u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0309_entry, 309u, 49u, 0x089397D0u>(ctx, &aot_mem) && ctx.pc == 0x08920FF8u) goto L_08920FF8;
    return;
L_08920FF8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08920FFC;
L_08920FFC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0285_entry, 285u, 2u, 0x08921020u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0285_entry, 285u, 1u, 0x08921004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0284(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0284_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_284(Runtime &runtime) {
    runtime.register_generated_unit(284u, 0x08920000u, 4096u, &recomp_unit_0284, &recomp_unit_0284_entry);
    runtime.register_function(0x08920000u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920014u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920038u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892004Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920054u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089200A0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089200B8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089200E4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089200FCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920114u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920124u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920130u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920160u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920170u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920178u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920190u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089201B0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089201C8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089201D4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089201DCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089201ECu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089201F4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089201FCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920208u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892020Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920268u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920274u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920288u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920290u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089202B4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089202C4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089202D8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089202E4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089202F8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920300u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920314u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920350u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892038Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920394u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089203A4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089203BCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089203C0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089203D8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089203ECu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089203F0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920400u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920410u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892041Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892042Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892043Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920448u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920470u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920478u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920480u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920498u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089204A4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089204B8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089204BCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089204CCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089204D4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089204F8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920528u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920564u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892057Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920584u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892059Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089205D8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089205E8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089205F8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920604u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892062Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892063Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920648u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920670u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920678u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920680u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920694u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089206A8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089206ACu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089206BCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089206C4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089206E8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920718u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920748u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920760u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920768u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892076Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920774u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920780u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920790u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089207A4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089207A8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089207ACu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089207B8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089207C0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089207D0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089207E4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089207E8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089207ECu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089207F8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920804u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920818u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892081Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920830u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920848u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892085Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920870u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892087Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920888u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920898u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089208ACu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089208B0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089208B4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089208C0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089208CCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089208DCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089208F0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089208F4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089208F8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920904u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920910u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920920u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920934u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920938u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892093Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920948u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920954u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920964u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920978u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892097Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920980u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x0892098Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920994u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089209A4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089209B8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089209BCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089209C0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089209CCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089209D8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089209E8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x089209FCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A00u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A04u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A10u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A1Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A2Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A40u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A44u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A48u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A54u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A5Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A60u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A68u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A74u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A84u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A98u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920A9Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920AA0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920AACu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920AB8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920AC8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920ADCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920AE0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920AE4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920AF0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920B04u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920B30u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920B54u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920B9Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920BD4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920BFCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920C08u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920C1Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920C34u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920C3Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920C44u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920C5Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920C80u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920C84u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920C8Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920CA8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920CC0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920CD8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920CECu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920CF0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920D08u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920D14u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920D1Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920D24u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920D2Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920D54u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920D60u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920D70u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920D94u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920DA0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920DACu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920DB4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920DCCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920DF0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920DF4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920E08u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920E10u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920E1Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920E38u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920E48u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920E50u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920E5Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920E6Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920E78u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920E94u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920E9Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920EA4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920EB0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920EB8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920EC0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920EDCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920EF0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920F08u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920F1Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920F20u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920F38u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920F44u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920F4Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920F54u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920F5Cu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920F84u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920F90u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920FA0u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920FB4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920FBCu, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920FD4u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920FF8u, &recomp_unit_0284, "recomp_unit_0284");
    runtime.register_function(0x08920FFCu, &recomp_unit_0284, "recomp_unit_0284");
}
} // namespace psprecomp
