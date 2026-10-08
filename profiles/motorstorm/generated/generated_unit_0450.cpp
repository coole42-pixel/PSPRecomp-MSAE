#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0450[1020] = {
    1, 2, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13,
    0, 0, 14, 15, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 30, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 42, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0,
    59, 0, 60, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 63, 64, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79,
    0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87,
    0, 88, 89, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 100, 0, 0, 0, 101, 0, 0,
    102, 0, 103, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 109, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 113,
    0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0,
    0, 120, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0,
    132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140,
    0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0,
    155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161,
    0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 168,
    0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206,
};
void recomp_unit_0450_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089C6004u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0450[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C6004;
    case 2u: goto L_089C6008;
    case 3u: goto L_089C6010;
    case 4u: goto L_089C601C;
    case 5u: goto L_089C6024;
    case 6u: goto L_089C602C;
    case 7u: goto L_089C603C;
    case 8u: goto L_089C6044;
    case 9u: goto L_089C604C;
    case 10u: goto L_089C6054;
    case 11u: goto L_089C605C;
    case 12u: goto L_089C6078;
    case 13u: goto L_089C6080;
    case 14u: goto L_089C608C;
    case 15u: goto L_089C6090;
    case 16u: goto L_089C609C;
    case 17u: goto L_089C60AC;
    case 18u: goto L_089C60B4;
    case 19u: goto L_089C60C0;
    case 20u: goto L_089C60C8;
    case 21u: goto L_089C60DC;
    case 22u: goto L_089C60F4;
    case 23u: goto L_089C610C;
    case 24u: goto L_089C6114;
    case 25u: goto L_089C611C;
    case 26u: goto L_089C6124;
    case 27u: goto L_089C612C;
    case 28u: goto L_089C6134;
    case 29u: goto L_089C6144;
    case 30u: goto L_089C6148;
    case 31u: goto L_089C6150;
    case 32u: goto L_089C6158;
    case 33u: goto L_089C6164;
    case 34u: goto L_089C616C;
    case 35u: goto L_089C6174;
    case 36u: goto L_089C617C;
    case 37u: goto L_089C6184;
    case 38u: goto L_089C61B8;
    case 39u: goto L_089C61C0;
    case 40u: goto L_089C61D0;
    case 41u: goto L_089C6204;
    case 42u: goto L_089C620C;
    case 43u: goto L_089C621C;
    case 44u: goto L_089C6224;
    case 45u: goto L_089C622C;
    case 46u: goto L_089C62D8;
    case 47u: goto L_089C62FC;
    case 48u: goto L_089C63AC;
    case 49u: goto L_089C63B0;
    case 50u: goto L_089C63D4;
    case 51u: goto L_089C6484;
    case 52u: goto L_089C6498;
    case 53u: goto L_089C64A0;
    case 54u: goto L_089C64AC;
    case 55u: goto L_089C64C0;
    case 56u: goto L_089C64DC;
    case 57u: goto L_089C64E4;
    case 58u: goto L_089C64F8;
    case 59u: goto L_089C6504;
    case 60u: goto L_089C650C;
    case 61u: goto L_089C6510;
    case 62u: goto L_089C651C;
    case 63u: goto L_089C65A0;
    case 64u: goto L_089C65A4;
    case 65u: goto L_089C65AC;
    case 66u: goto L_089C65B4;
    case 67u: goto L_089C65BC;
    case 68u: goto L_089C65EC;
    case 69u: goto L_089C66BC;
    case 70u: goto L_089C66C8;
    case 71u: goto L_089C66D4;
    case 72u: goto L_089C66DC;
    case 73u: goto L_089C66E4;
    case 74u: goto L_089C66EC;
    case 75u: goto L_089C6730;
    case 76u: goto L_089C674C;
    case 77u: goto L_089C6758;
    case 78u: goto L_089C6778;
    case 79u: goto L_089C6780;
    case 80u: goto L_089C678C;
    case 81u: goto L_089C6798;
    case 82u: goto L_089C67A4;
    case 83u: goto L_089C67B4;
    case 84u: goto L_089C67CC;
    case 85u: goto L_089C67D4;
    case 86u: goto L_089C67D8;
    case 87u: goto L_089C6800;
    case 88u: goto L_089C6808;
    case 89u: goto L_089C680C;
    case 90u: goto L_089C6810;
    case 91u: goto L_089C6838;
    case 92u: goto L_089C6864;
    case 93u: goto L_089C686C;
    case 94u: goto L_089C6880;
    case 95u: goto L_089C68B4;
    case 96u: goto L_089C68C4;
    case 97u: goto L_089C68D0;
    case 98u: goto L_089C68DC;
    case 99u: goto L_089C68E4;
    case 100u: goto L_089C68E8;
    case 101u: goto L_089C68F8;
    case 102u: goto L_089C6904;
    case 103u: goto L_089C690C;
    case 104u: goto L_089C6914;
    case 105u: goto L_089C6920;
    case 106u: goto L_089C692C;
    case 107u: goto L_089C6938;
    case 108u: goto L_089C6944;
    case 109u: goto L_089C6948;
    case 110u: goto L_089C6954;
    case 111u: goto L_089C695C;
    case 112u: goto L_089C6964;
    case 113u: goto L_089C6980;
    case 114u: goto L_089C6988;
    case 115u: goto L_089C699C;
    case 116u: goto L_089C69B0;
    case 117u: goto L_089C69B8;
    case 118u: goto L_089C69E8;
    case 119u: goto L_089C69FC;
    case 120u: goto L_089C6A08;
    case 121u: goto L_089C6A0C;
    case 122u: goto L_089C6A1C;
    case 123u: goto L_089C6A24;
    case 124u: goto L_089C6A38;
    case 125u: goto L_089C6A60;
    case 126u: goto L_089C6A68;
    case 127u: goto L_089C6A84;
    case 128u: goto L_089C6A94;
    case 129u: goto L_089C6AA8;
    case 130u: goto L_089C6AE4;
    case 131u: goto L_089C6AF8;
    case 132u: goto L_089C6B04;
    case 133u: goto L_089C6B0C;
    case 134u: goto L_089C6B2C;
    case 135u: goto L_089C6B34;
    case 136u: goto L_089C6B4C;
    case 137u: goto L_089C6B54;
    case 138u: goto L_089C6B64;
    case 139u: goto L_089C6B6C;
    case 140u: goto L_089C6B80;
    case 141u: goto L_089C6B8C;
    case 142u: goto L_089C6BA4;
    case 143u: goto L_089C6BB8;
    case 144u: goto L_089C6BC0;
    case 145u: goto L_089C6BD8;
    case 146u: goto L_089C6BE0;
    case 147u: goto L_089C6BEC;
    case 148u: goto L_089C6C18;
    case 149u: goto L_089C6C38;
    case 150u: goto L_089C6C40;
    case 151u: goto L_089C6C48;
    case 152u: goto L_089C6C60;
    case 153u: goto L_089C6C6C;
    case 154u: goto L_089C6C78;
    case 155u: goto L_089C6C84;
    case 156u: goto L_089C6C94;
    case 157u: goto L_089C6CD4;
    case 158u: goto L_089C6CE8;
    case 159u: goto L_089C6CF0;
    case 160u: goto L_089C6CF8;
    case 161u: goto L_089C6D00;
    case 162u: goto L_089C6D18;
    case 163u: goto L_089C6D20;
    case 164u: goto L_089C6D2C;
    case 165u: goto L_089C6D54;
    case 166u: goto L_089C6D60;
    case 167u: goto L_089C6D64;
    case 168u: goto L_089C6D80;
    case 169u: goto L_089C6D88;
    case 170u: goto L_089C6D90;
    case 171u: goto L_089C6D98;
    case 172u: goto L_089C6DAC;
    case 173u: goto L_089C6DC0;
    case 174u: goto L_089C6DC8;
    case 175u: goto L_089C6DE0;
    case 176u: goto L_089C6DEC;
    case 177u: goto L_089C6E14;
    case 178u: goto L_089C6E20;
    case 179u: goto L_089C6E30;
    case 180u: goto L_089C6E3C;
    case 181u: goto L_089C6E54;
    case 182u: goto L_089C6E64;
    case 183u: goto L_089C6E6C;
    case 184u: goto L_089C6E74;
    case 185u: goto L_089C6E94;
    case 186u: goto L_089C6E9C;
    case 187u: goto L_089C6EA4;
    case 188u: goto L_089C6EAC;
    case 189u: goto L_089C6EC0;
    case 190u: goto L_089C6EDC;
    case 191u: goto L_089C6EE4;
    case 192u: goto L_089C6EF0;
    case 193u: goto L_089C6F18;
    case 194u: goto L_089C6F28;
    case 195u: goto L_089C6F30;
    case 196u: goto L_089C6F50;
    case 197u: goto L_089C6F5C;
    case 198u: goto L_089C6F6C;
    case 199u: goto L_089C6F78;
    case 200u: goto L_089C6F88;
    case 201u: goto L_089C6FAC;
    case 202u: goto L_089C6FB4;
    case 203u: goto L_089C6FD0;
    case 204u: goto L_089C6FD8;
    case 205u: goto L_089C6FE0;
    case 206u: goto L_089C6FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C6004:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C6008;
L_089C6008:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089C6010;
L_089C6010:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (0u | 54509u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 187u, 0x089C5F20u>(ctx, &aot_mem); return;
      }
      goto L_089C601C;
    }
L_089C601C:
    aot_gpr[5] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 187u, 0x089C5F20u>(ctx, &aot_mem); return;
L_089C6024:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 187u, 0x089C5F20u>(ctx, &aot_mem); return;
L_089C602C:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C603Cu);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 5u, 0x089CA090u>(ctx, &aot_mem) && ctx.pc == 0x089C603Cu) goto L_089C603C;
    return;
L_089C603C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 191u, 0x089C5F68u>(ctx, &aot_mem); return;
      }
      goto L_089C6044;
    }
L_089C6044:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    (void)rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 188u, 0x089C5F24u>(ctx, &aot_mem); return;
L_089C604C:
    if (aot_gpr[18] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089C6010;
    }
    goto L_089C6054;
L_089C6054:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C6008;
L_089C605C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089C60F4;
      }
      goto L_089C6078;
    }
L_089C6078:
    aot_gpr[31] = (0x089C6080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 61u, 0x089C24B0u>(ctx, &aot_mem) && ctx.pc == 0x089C6080u) goto L_089C6080;
    return;
L_089C6080:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C60DC;
      }
      goto L_089C608C;
    }
L_089C608C:
    aot_gpr[18] = (0u + 0u);
    goto L_089C6090;
L_089C6090:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C60C8;
      }
      goto L_089C609C;
    }
L_089C609C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089C60B4;
      }
      goto L_089C60AC;
    }
L_089C60AC:
    aot_gpr[31] = (0x089C60B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 2u, 0x089C10C8u>(ctx, &aot_mem) && ctx.pc == 0x089C60B4u) goto L_089C60B4;
    return;
L_089C60B4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C60C0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 137u, 0x089C5AECu>(ctx, &aot_mem) && ctx.pc == 0x089C60C0u) goto L_089C60C0;
    return;
L_089C60C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089C60C8;
L_089C60C8:
    aot_gpr[18] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C6090;
      }
      goto L_089C60DC;
    }
L_089C60DC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[3]));
    goto L_089C60F4;
L_089C60F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C610C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C611C;
      }
      goto L_089C6114;
    }
L_089C6114:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(112), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    goto L_089C611C;
L_089C611C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6124:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C6148;
      }
      goto L_089C612C;
    }
L_089C612C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089C6144;
      }
      goto L_089C6134;
    }
L_089C6134:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6144:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C6148;
L_089C6148:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6150:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C6164;
      }
      goto L_089C6158;
    }
L_089C6158:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    goto L_089C6164;
L_089C6164:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C616C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C617C;
      }
      goto L_089C6174;
    }
L_089C6174:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(184), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    goto L_089C617C;
L_089C617C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6184:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[9] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[7] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089C61C0;
      }
      goto L_089C61B8;
    }
L_089C61B8:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C61C0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(188)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C61C0u) goto L_089C61C0;
    return;
L_089C61C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C61D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[7] = (2217u << 16u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089C62D8;
      }
      goto L_089C6204;
    }
L_089C6204:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C62D8;
      }
      goto L_089C620C;
    }
L_089C620C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C62FC;
      }
      goto L_089C621C;
    }
L_089C621C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C63D4;
      }
      goto L_089C6224;
    }
L_089C6224:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (2205u << 16u);
      if (branch_taken) {
          goto L_089C65EC;
      }
      goto L_089C622C;
    }
L_089C622C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6888));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(244), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6612));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(192), aot_gpr[2]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6620));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6628));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6660));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6688));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6760));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6768));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6776));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6784));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6792));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6800));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(228), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6808));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(232), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6880));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(240), aot_gpr[2]);
      if (branch_taken) {
          goto L_089C63AC;
      }
      goto L_089C62D8;
    }
L_089C62D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C62FC:
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-10748));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-10100));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(192), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-8808));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-8576));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-8428));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-8248));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-6604));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-6876));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-6452));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-6436));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-6428));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(228), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-6420));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(232), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-6124));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-5856));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(240), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(244), aot_gpr[3]);
      if (branch_taken) {
          goto L_089C65BC;
      }
      goto L_089C63AC;
    }
L_089C63AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089C63B0;
L_089C63B0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C63D4:
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5688));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4908));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(192), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4436));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4196));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2296));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1404));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(356));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(72));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(576));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(704));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(772));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(228), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(780));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(232), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1436));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(2744));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(240), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(244), aot_gpr[3]);
      if (branch_taken) {
          goto L_089C66BC;
      }
      goto L_089C6484;
    }
L_089C6484:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(208)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C6498u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6498u) goto L_089C6498;
    return;
L_089C6498:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C62D8;
      }
      goto L_089C64A0;
    }
L_089C64A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_089C65A4;
    }
    goto L_089C64AC;
L_089C64AC:
    aot_gpr[2] = (7u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 41248u);
    aot_gpr[18] = (0u + 0u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    goto L_089C64C0;
L_089C64C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(556));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(580));
      if (branch_taken) {
          goto L_089C6510;
      }
      goto L_089C64DC;
    }
L_089C64DC:
    aot_gpr[31] = (0x089C64E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089C64E4u) goto L_089C64E4;
    return;
L_089C64E4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C66E4;
      }
      goto L_089C64F8;
    }
L_089C64F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C6504u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 116u, 0x08A43614u>(ctx, &aot_mem) && ctx.pc == 0x089C6504u) goto L_089C6504;
    return;
L_089C6504:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C62D8;
      }
      goto L_089C650C;
    }
L_089C650C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089C6510;
L_089C6510:
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[17]);
    aot_gpr[31] = (0x089C651Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 136u, 0x08A43700u>(ctx, &aot_mem) && ctx.pc == 0x089C651Cu) goto L_089C651C;
    return;
L_089C651C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[19]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(540), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(544), 0u);
    aot_gpr[3] = (0u | 65534u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(548), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(552), aot_gpr[20]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C64C0;
      }
      goto L_089C65A0;
    }
L_089C65A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    goto L_089C65A4;
L_089C65A4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_089C66C8;
    }
    goto L_089C65AC;
L_089C65AC:
    aot_gpr[31] = (0x089C65B4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 136u, 0x08A43700u>(ctx, &aot_mem) && ctx.pc == 0x089C65B4u) goto L_089C65B4;
    return;
L_089C65B4:
    aot_gpr[4] = (0u + 0u);
    goto L_089C62D8;
L_089C65BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C65EC:
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-26024));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-31380));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(244), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-30792));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(192), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-30128));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-30096));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-30068));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-29996));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-29208));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-29088));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-29080));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28988));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-28980));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(228), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28128));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(232), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-26316));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), aot_gpr[2]);
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(240), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C66BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    goto L_089C6484;
L_089C66C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C66D4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 116u, 0x08A43614u>(ctx, &aot_mem) && ctx.pc == 0x089C66D4u) goto L_089C66D4;
    return;
L_089C66D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C62D8;
      }
      goto L_089C66DC;
    }
L_089C66DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089C63B0;
L_089C66E4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(100));
    goto L_089C62D8;
L_089C66EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2240));
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2224), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2220), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2216), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2212), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2208), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[7] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2236), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2232), aot_gpr[22]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2228), aot_gpr[21]);
      if (branch_taken) {
          goto L_089C6808;
      }
      goto L_089C6730;
    }
L_089C6730:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[6] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12916));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C674C:
    aot_gpr[17] = (aot_gpr[17] & 65535u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_089C6980;
      }
      goto L_089C6758;
    }
L_089C6758:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C6778u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 147u, 0x089CCC34u>(ctx, &aot_mem) && ctx.pc == 0x089C6778u) goto L_089C6778;
    return;
L_089C6778:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6780;
    }
L_089C6780:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 98u, 0x089C75E8u>(ctx, &aot_mem); return;
      }
      goto L_089C678C;
    }
L_089C678C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[2] != aot_gpr[3]) {
    aot_gpr[6] = (0u + 0u);
        goto L_089C680C;
    }
    goto L_089C6798;
L_089C6798:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(10));
    aot_gpr[31] = (0x089C67A4u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C67A4u) goto L_089C67A4;
    return;
L_089C67A4:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(184));
    aot_gpr[31] = (0x089C67B4u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 202u, 0x08992E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C67B4u) goto L_089C67B4;
    return;
L_089C67B4:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089C67CCu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(46));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 147u, 0x089CCC34u>(ctx, &aot_mem) && ctx.pc == 0x089C67CCu) goto L_089C67CC;
    return;
L_089C67CC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C67D4;
    }
L_089C67D4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089C67D8;
L_089C67D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C6800u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6800u) goto L_089C6800;
    return;
L_089C6800:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6808;
    }
L_089C6808:
    aot_gpr[6] = (0u + 0u);
    goto L_089C680C;
L_089C680C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2236)));
    goto L_089C6810;
L_089C6810:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2232)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2228)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2224)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2220)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2216)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2212)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2208)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6838:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[8]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[17] = (aot_gpr[17] & 65535u);
    aot_gpr[31] = (0x089C6864u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 123u, 0x089CCA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6864u) goto L_089C6864;
    return;
L_089C6864:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C686C;
    }
L_089C686C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(50)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[5] << 6u);
      if (branch_taken) {
          goto L_089C6F28;
      }
      goto L_089C6880;
    }
L_089C6880:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(54)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(54)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(aot_gpr[3]));
        goto L_089C68B4;
    }
    goto L_089C68B4;
L_089C68B4:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x089C68C4u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C68C4u) goto L_089C68C4;
    return;
L_089C68C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089C68E8;
      }
      goto L_089C68D0;
    }
L_089C68D0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089C68E4;
      }
      goto L_089C68DC;
    }
L_089C68DC:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C68E4;
    }
L_089C68E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089C68E8;
L_089C68E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    aot_gpr[6] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(50)));
      if (branch_taken) {
          goto L_089C6920;
      }
      goto L_089C68F8;
    }
L_089C68F8:
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 91u, 0x089C7594u>(ctx, &aot_mem); return;
      }
      goto L_089C6904;
    }
L_089C6904:
    aot_gpr[31] = (0x089C690Cu);
    aot_gpr[7] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 147u, 0x089C5C1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C690Cu) goto L_089C690C;
    return;
L_089C690C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6914;
    }
L_089C6914:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(50)));
    goto L_089C6920;
L_089C6920:
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(54)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 85u, 0x089C7514u>(ctx, &aot_mem); return;
      }
      goto L_089C692C;
    }
L_089C692C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 103u, 0x089C7624u>(ctx, &aot_mem); return;
      }
      goto L_089C6938;
    }
L_089C6938:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(216)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (0u | 54509u);
        goto L_089C680C;
    }
    goto L_089C6944;
L_089C6944:
    aot_gpr[6] = (aot_gpr[20] + 0u);
    goto L_089C6948;
L_089C6948:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C6954u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6954u) goto L_089C6954;
    return;
L_089C6954:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C695C;
    }
L_089C695C:
    aot_gpr[6] = (0u + 0u);
    goto L_089C680C;
L_089C6964:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (aot_gpr[17] & 65535u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[16] < aot_gpr[3] ? 1u : 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 22u, 0x089C7184u>(ctx, &aot_mem); return;
      }
      goto L_089C6980;
    }
L_089C6980:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C680C;
L_089C6988:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (aot_gpr[17] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C699C;
    }
L_089C699C:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089C69B0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 83u, 0x089CC730u>(ctx, &aot_mem) && ctx.pc == 0x089C69B0u) goto L_089C69B0;
    return;
L_089C69B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C69B8;
    }
L_089C69B8:
    aot_gpr[3] = (aot_gpr[17] << 6u);
    aot_gpr[2] = (aot_gpr[17] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(30)));
    aot_gpr[5] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(444), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(31)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
        goto L_089C6A0C;
    }
    goto L_089C69E8;
L_089C69E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 102u, 0x089C761Cu>(ctx, &aot_mem); return;
      }
      goto L_089C69FC;
    }
L_089C69FC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 115u, 0x089C76C4u>(ctx, &aot_mem); return;
      }
      goto L_089C6A08;
    }
L_089C6A08:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    goto L_089C6A0C;
L_089C6A0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(30)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C6A1Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6A1Cu) goto L_089C6A1C;
    return;
L_089C6A1C:
    aot_gpr[6] = (0u + 0u);
    goto L_089C680C;
L_089C6A24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[5] << 6u);
      if (branch_taken) {
          goto L_089C6980;
      }
      goto L_089C6A38;
    }
L_089C6A38:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(448)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[4];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089C6808;
      }
      goto L_089C6A60;
    }
L_089C6A60:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(448), aot_gpr[4]);
    goto L_089C680C;
L_089C6A68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (aot_gpr[17] & 65535u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[16] < aot_gpr[3] ? 1u : 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_089C6980;
      }
      goto L_089C6A84;
    }
L_089C6A84:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x089C6A94u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C6A94u) goto L_089C6A94;
    return;
L_089C6A94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-8));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6AA8;
    }
L_089C6AA8:
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(456), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2236)));
      if (branch_taken) {
          goto L_089C6810;
      }
      goto L_089C6AE4;
    }
L_089C6AE4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089C6AF8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6AF8u) goto L_089C6AF8;
    return;
L_089C6AF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(60), aot_gpr[16]);
      if (branch_taken) {
          goto L_089C6808;
      }
      goto L_089C6B04;
    }
L_089C6B04:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[3] = (0u + 0u);
    goto L_089C6B0C;
L_089C6B0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(456), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C6B0C;
      }
      goto L_089C6B2C;
    }
L_089C6B2C:
    aot_gpr[6] = (0u + 0u);
    goto L_089C680C;
L_089C6B34:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[8]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x089C6B4Cu);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 108u, 0x089CC94Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6B4Cu) goto L_089C6B4C;
    return;
L_089C6B4C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6B54;
    }
L_089C6B54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(55)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089C6B64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    goto L_089C61D0;
L_089C6B64:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6B6C;
    }
L_089C6B6C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(54)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(104)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(92), aot_gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 83u, 0x089C7508u>(ctx, &aot_mem); return;
      }
      goto L_089C6B80;
    }
L_089C6B80:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 84u, 0x089C750Cu>(ctx, &aot_mem); return;
      }
      goto L_089C6B8C;
    }
L_089C6B8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(50)));
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089C6808;
      }
      goto L_089C6BA4;
    }
L_089C6BA4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(212)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C6BB8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6BB8u) goto L_089C6BB8;
    return;
L_089C6BB8:
    aot_gpr[6] = (0u + 0u);
    goto L_089C680C;
L_089C6BC0:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[8]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x089C6BD8u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 137u, 0x089CCB70u>(ctx, &aot_mem) && ctx.pc == 0x089C6BD8u) goto L_089C6BD8;
    return;
L_089C6BD8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6BE0;
    }
L_089C6BE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(38)));
      if (branch_taken) {
          goto L_089C6C18;
      }
      goto L_089C6BEC;
    }
L_089C6BEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(488), aot_gpr[2]);
    goto L_089C6C18;
L_089C6C18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(212)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C6C38u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6C38u) goto L_089C6C38;
    return;
L_089C6C38:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6C40;
    }
L_089C6C40:
    aot_gpr[6] = (0u + 0u);
    goto L_089C680C;
L_089C6C48:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[8]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089C6C60u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 207u, 0x089CBF70u>(ctx, &aot_mem) && ctx.pc == 0x089C6C60u) goto L_089C6C60;
    return;
L_089C6C60:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (aot_gpr[17] & 65535u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6C6C;
    }
L_089C6C6C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(29)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 70u, 0x089C7484u>(ctx, &aot_mem); return;
    }
    goto L_089C6C78;
L_089C6C78:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6C84;
    }
L_089C6C84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 73u, 0x089C74A4u>(ctx, &aot_mem); return;
      }
      goto L_089C6C94;
    }
L_089C6C94:
    aot_gpr[3] = (aot_gpr[10] << 6u);
    aot_gpr[2] = (aot_gpr[10] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(504)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(504), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089C680C;
L_089C6CD4:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C6CE8u);
    aot_gpr[7] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 142u, 0x089C3984u>(ctx, &aot_mem) && ctx.pc == 0x089C6CE8u) goto L_089C6CE8;
    return;
L_089C6CE8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6CF0;
    }
L_089C6CF0:
    aot_gpr[6] = (0u + 0u);
    goto L_089C680C;
L_089C6CF8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[8]);
      if (branch_taken) {
          goto L_089C6980;
      }
      goto L_089C6D00;
    }
L_089C6D00:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x089C6D18u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 95u, 0x089CC838u>(ctx, &aot_mem) && ctx.pc == 0x089C6D18u) goto L_089C6D18;
    return;
L_089C6D18:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6D20;
    }
L_089C6D20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(38)));
      if (branch_taken) {
          goto L_089C6D60;
      }
      goto L_089C6D2C;
    }
L_089C6D2C:
    aot_gpr[3] = (aot_gpr[21] << 2u);
    aot_gpr[4] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(42)));
      if (branch_taken) {
          goto L_089C6D60;
      }
      goto L_089C6D54;
    }
L_089C6D54:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 86u, 0x089C7524u>(ctx, &aot_mem); return;
      }
      goto L_089C6D60;
    }
L_089C6D60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(212)));
    goto L_089C6D64;
L_089C6D64:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C6D80u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6D80u) goto L_089C6D80;
    return;
L_089C6D80:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6D88;
    }
L_089C6D88:
    aot_gpr[6] = (0u + 0u);
    goto L_089C680C;
L_089C6D90:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6D98;
    }
L_089C6D98:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[8]);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6DAC;
    }
L_089C6DAC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089C6DC0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 102u, 0x089CC8C8u>(ctx, &aot_mem) && ctx.pc == 0x089C6DC0u) goto L_089C6DC0;
    return;
L_089C6DC0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6DC8;
    }
L_089C6DC8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (0u | 54508u);
        goto L_089C680C;
    }
    goto L_089C6DE0;
L_089C6DE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(30)));
      if (branch_taken) {
          goto L_089C6E74;
      }
      goto L_089C6DEC;
    }
L_089C6DEC:
    aot_gpr[3] = (aot_gpr[21] << 2u);
    aot_gpr[4] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[9]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089C6E74;
      }
      goto L_089C6E14;
    }
L_089C6E14:
    aot_gpr[6] = (0u + 0u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
    goto L_089C6E20;
L_089C6E20:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[7] & 65535u);
    if (aot_gpr[2] == aot_gpr[3]) {
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[10]));
        (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 82u, 0x089C7500u>(ctx, &aot_mem); return;
    }
    goto L_089C6E30;
L_089C6E30:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C6E20;
      }
      goto L_089C6E3C;
    }
L_089C6E3C:
    aot_gpr[2] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089C6E64;
      }
      goto L_089C6E54;
    }
L_089C6E54:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089C6E64;
L_089C6E64:
    aot_gpr[31] = (0x089C6E6Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 209u, 0x089C3F78u>(ctx, &aot_mem) && ctx.pc == 0x089C6E6Cu) goto L_089C6E6C;
    return;
L_089C6E6C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6E74;
    }
L_089C6E74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(212)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C6E94u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6E94u) goto L_089C6E94;
    return;
L_089C6E94:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6E9C;
    }
L_089C6E9C:
    aot_gpr[6] = (0u + 0u);
    goto L_089C680C;
L_089C6EA4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6EAC;
    }
L_089C6EAC:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(212)));
        (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 34u, 0x089C72A0u>(ctx, &aot_mem); return;
    }
    goto L_089C6EC0;
L_089C6EC0:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[8]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089C6EDCu);
    aot_gpr[8] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 89u, 0x089CC7B4u>(ctx, &aot_mem) && ctx.pc == 0x089C6EDCu) goto L_089C6EDC;
    return;
L_089C6EDC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6EE4;
    }
L_089C6EE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(30)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 33u, 0x089C729Cu>(ctx, &aot_mem); return;
      }
      goto L_089C6EF0;
    }
L_089C6EF0:
    aot_gpr[3] = (aot_gpr[21] << 2u);
    aot_gpr[4] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 33u, 0x089C729Cu>(ctx, &aot_mem); return;
      }
      goto L_089C6F18;
    }
L_089C6F18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[5] << 6u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 25u, 0x089C71D0u>(ctx, &aot_mem); return;
      }
      goto L_089C6F28;
    }
L_089C6F28:
    aot_gpr[6] = (0u | 54508u);
    goto L_089C680C;
L_089C6F30:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089C6F50u);
    aot_gpr[8] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 117u, 0x089CC9F8u>(ctx, &aot_mem) && ctx.pc == 0x089C6F50u) goto L_089C6F50;
    return;
L_089C6F50:
    aot_gpr[17] = (aot_gpr[17] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6F5C;
    }
L_089C6F5C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (0u | 65535u);
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
        (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 75u, 0x089C74B0u>(ctx, &aot_mem); return;
    }
    goto L_089C6F6C;
L_089C6F6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(30)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 74u, 0x089C74ACu>(ctx, &aot_mem); return;
      }
      goto L_089C6F78;
    }
L_089C6F78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[5] << 6u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 73u, 0x089C74A4u>(ctx, &aot_mem); return;
      }
      goto L_089C6F88;
    }
L_089C6F88:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
        goto L_089C6FB4;
    }
    goto L_089C6FAC;
L_089C6FAC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089C6FB4;
L_089C6FB4:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089C6FD0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(182));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 117u, 0x089CC9F8u>(ctx, &aot_mem) && ctx.pc == 0x089C6FD0u) goto L_089C6FD0;
    return;
L_089C6FD0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C680C;
      }
      goto L_089C6FD8;
    }
L_089C6FD8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089C67D8;
L_089C6FE0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[6] = (0u + 0u);
        goto L_089C680C;
    }
    goto L_089C6FF0;
L_089C6FF0:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[8]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    ctx.pc = 0x089C7000u; return;
}

void recomp_unit_0450(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0450_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_450(Runtime &runtime) {
    runtime.register_generated_unit(450u, 0x089C6000u, 4096u, &recomp_unit_0450, &recomp_unit_0450_entry);
    runtime.register_function(0x089C6004u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6008u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6010u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C601Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6024u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C602Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C603Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6044u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C604Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6054u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C605Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6078u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6080u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C608Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6090u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C609Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C60ACu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C60B4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C60C0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C60C8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C60DCu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C60F4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C610Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6114u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C611Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6124u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C612Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6134u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6144u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6148u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6150u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6158u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6164u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C616Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6174u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C617Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6184u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C61B8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C61C0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C61D0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6204u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C620Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C621Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6224u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C622Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C62D8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C62FCu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C63ACu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C63B0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C63D4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6484u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6498u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C64A0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C64ACu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C64C0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C64DCu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C64E4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C64F8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6504u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C650Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6510u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C651Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C65A0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C65A4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C65ACu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C65B4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C65BCu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C65ECu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C66BCu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C66C8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C66D4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C66DCu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C66E4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C66ECu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6730u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C674Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6758u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6778u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6780u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C678Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6798u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C67A4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C67B4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C67CCu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C67D4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C67D8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6800u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6808u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C680Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6810u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6838u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6864u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C686Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6880u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C68B4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C68C4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C68D0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C68DCu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C68E4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C68E8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C68F8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6904u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C690Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6914u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6920u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C692Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6938u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6944u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6948u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6954u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C695Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6964u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6980u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6988u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C699Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C69B0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C69B8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C69E8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C69FCu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6A08u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6A0Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6A1Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6A24u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6A38u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6A60u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6A68u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6A84u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6A94u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6AA8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6AE4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6AF8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6B04u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6B0Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6B2Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6B34u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6B4Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6B54u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6B64u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6B6Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6B80u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6B8Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6BA4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6BB8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6BC0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6BD8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6BE0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6BECu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6C18u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6C38u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6C40u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6C48u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6C60u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6C6Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6C78u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6C84u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6C94u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6CD4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6CE8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6CF0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6CF8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6D00u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6D18u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6D20u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6D2Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6D54u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6D60u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6D64u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6D80u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6D88u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6D90u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6D98u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6DACu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6DC0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6DC8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6DE0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6DECu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6E14u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6E20u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6E30u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6E3Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6E54u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6E64u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6E6Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6E74u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6E94u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6E9Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6EA4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6EACu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6EC0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6EDCu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6EE4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6EF0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6F18u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6F28u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6F30u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6F50u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6F5Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6F6Cu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6F78u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6F88u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6FACu, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6FB4u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6FD0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6FD8u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6FE0u, &recomp_unit_0450, "recomp_unit_0450");
    runtime.register_function(0x089C6FF0u, &recomp_unit_0450, "recomp_unit_0450");
}
} // namespace psprecomp
