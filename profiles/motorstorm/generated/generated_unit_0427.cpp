#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0427[1011] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 9,
    0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 24, 0, 0, 25, 0, 0, 0, 26, 0,
    0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0,
    0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0,
    50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 65, 0, 66, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 90, 91, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    94, 0, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0,
    0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    120, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0,
    131, 0, 0, 132, 133, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143,
    0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0,
    0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 171, 0, 0,
    0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 175, 176, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 195, 196, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 203, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0,
    0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 0, 210, 0, 0, 0, 211, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 222, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225,
};
void recomp_unit_0427_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089AF004u;
        entry_id = (entry_delta < 4044u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0427[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089AF004;
    case 2u: goto L_089AF010;
    case 3u: goto L_089AF030;
    case 4u: goto L_089AF038;
    case 5u: goto L_089AF050;
    case 6u: goto L_089AF05C;
    case 7u: goto L_089AF06C;
    case 8u: goto L_089AF078;
    case 9u: goto L_089AF080;
    case 10u: goto L_089AF090;
    case 11u: goto L_089AF098;
    case 12u: goto L_089AF0A4;
    case 13u: goto L_089AF0DC;
    case 14u: goto L_089AF0E8;
    case 15u: goto L_089AF0F0;
    case 16u: goto L_089AF100;
    case 17u: goto L_089AF120;
    case 18u: goto L_089AF144;
    case 19u: goto L_089AF180;
    case 20u: goto L_089AF198;
    case 21u: goto L_089AF1A0;
    case 22u: goto L_089AF1D4;
    case 23u: goto L_089AF1DC;
    case 24u: goto L_089AF1E0;
    case 25u: goto L_089AF1EC;
    case 26u: goto L_089AF1FC;
    case 27u: goto L_089AF208;
    case 28u: goto L_089AF220;
    case 29u: goto L_089AF228;
    case 30u: goto L_089AF238;
    case 31u: goto L_089AF240;
    case 32u: goto L_089AF244;
    case 33u: goto L_089AF270;
    case 34u: goto L_089AF2BC;
    case 35u: goto L_089AF2C4;
    case 36u: goto L_089AF2C8;
    case 37u: goto L_089AF2F0;
    case 38u: goto L_089AF2F8;
    case 39u: goto L_089AF314;
    case 40u: goto L_089AF31C;
    case 41u: goto L_089AF338;
    case 42u: goto L_089AF384;
    case 43u: goto L_089AF38C;
    case 44u: goto L_089AF390;
    case 45u: goto L_089AF3C0;
    case 46u: goto L_089AF3D8;
    case 47u: goto L_089AF3E0;
    case 48u: goto L_089AF3F4;
    case 49u: goto L_089AF3FC;
    case 50u: goto L_089AF404;
    case 51u: goto L_089AF41C;
    case 52u: goto L_089AF428;
    case 53u: goto L_089AF430;
    case 54u: goto L_089AF440;
    case 55u: goto L_089AF44C;
    case 56u: goto L_089AF458;
    case 57u: goto L_089AF460;
    case 58u: goto L_089AF470;
    case 59u: goto L_089AF4CC;
    case 60u: goto L_089AF514;
    case 61u: goto L_089AF524;
    case 62u: goto L_089AF554;
    case 63u: goto L_089AF564;
    case 64u: goto L_089AF570;
    case 65u: goto L_089AF574;
    case 66u: goto L_089AF57C;
    case 67u: goto L_089AF5A0;
    case 68u: goto L_089AF5AC;
    case 69u: goto L_089AF5B8;
    case 70u: goto L_089AF5C0;
    case 71u: goto L_089AF5C8;
    case 72u: goto L_089AF5D0;
    case 73u: goto L_089AF5F0;
    case 74u: goto L_089AF614;
    case 75u: goto L_089AF624;
    case 76u: goto L_089AF634;
    case 77u: goto L_089AF640;
    case 78u: goto L_089AF64C;
    case 79u: goto L_089AF654;
    case 80u: goto L_089AF680;
    case 81u: goto L_089AF688;
    case 82u: goto L_089AF694;
    case 83u: goto L_089AF6A0;
    case 84u: goto L_089AF6B0;
    case 85u: goto L_089AF6B8;
    case 86u: goto L_089AF6C0;
    case 87u: goto L_089AF6EC;
    case 88u: goto L_089AF6F4;
    case 89u: goto L_089AF744;
    case 90u: goto L_089AF748;
    case 91u: goto L_089AF74C;
    case 92u: goto L_089AF750;
    case 93u: goto L_089AF77C;
    case 94u: goto L_089AF784;
    case 95u: goto L_089AF78C;
    case 96u: goto L_089AF794;
    case 97u: goto L_089AF7A0;
    case 98u: goto L_089AF7AC;
    case 99u: goto L_089AF7C4;
    case 100u: goto L_089AF7E0;
    case 101u: goto L_089AF7E8;
    case 102u: goto L_089AF7F0;
    case 103u: goto L_089AF7F8;
    case 104u: goto L_089AF810;
    case 105u: goto L_089AF818;
    case 106u: goto L_089AF82C;
    case 107u: goto L_089AF84C;
    case 108u: goto L_089AF854;
    case 109u: goto L_089AF860;
    case 110u: goto L_089AF868;
    case 111u: goto L_089AF870;
    case 112u: goto L_089AF894;
    case 113u: goto L_089AF8C0;
    case 114u: goto L_089AF910;
    case 115u: goto L_089AF928;
    case 116u: goto L_089AF944;
    case 117u: goto L_089AF954;
    case 118u: goto L_089AF95C;
    case 119u: goto L_089AF978;
    case 120u: goto L_089AF984;
    case 121u: goto L_089AF988;
    case 122u: goto L_089AF9A0;
    case 123u: goto L_089AF9A8;
    case 124u: goto L_089AF9B4;
    case 125u: goto L_089AF9BC;
    case 126u: goto L_089AF9C8;
    case 127u: goto L_089AF9D0;
    case 128u: goto L_089AF9D8;
    case 129u: goto L_089AF9E0;
    case 130u: goto L_089AF9FC;
    case 131u: goto L_089AFA04;
    case 132u: goto L_089AFA10;
    case 133u: goto L_089AFA14;
    case 134u: goto L_089AFA28;
    case 135u: goto L_089AFA30;
    case 136u: goto L_089AFA38;
    case 137u: goto L_089AFA44;
    case 138u: goto L_089AFA4C;
    case 139u: goto L_089AFA58;
    case 140u: goto L_089AFA60;
    case 141u: goto L_089AFA6C;
    case 142u: goto L_089AFA74;
    case 143u: goto L_089AFA80;
    case 144u: goto L_089AFA88;
    case 145u: goto L_089AFA94;
    case 146u: goto L_089AFA9C;
    case 147u: goto L_089AFAB0;
    case 148u: goto L_089AFACC;
    case 149u: goto L_089AFAD8;
    case 150u: goto L_089AFADC;
    case 151u: goto L_089AFAF4;
    case 152u: goto L_089AFAFC;
    case 153u: goto L_089AFB08;
    case 154u: goto L_089AFB10;
    case 155u: goto L_089AFB1C;
    case 156u: goto L_089AFB24;
    case 157u: goto L_089AFB30;
    case 158u: goto L_089AFB38;
    case 159u: goto L_089AFB44;
    case 160u: goto L_089AFB4C;
    case 161u: goto L_089AFB54;
    case 162u: goto L_089AFB5C;
    case 163u: goto L_089AFB64;
    case 164u: goto L_089AFB6C;
    case 165u: goto L_089AFB94;
    case 166u: goto L_089AFBA4;
    case 167u: goto L_089AFBB4;
    case 168u: goto L_089AFBC8;
    case 169u: goto L_089AFBE4;
    case 170u: goto L_089AFBF4;
    case 171u: goto L_089AFBF8;
    case 172u: goto L_089AFC08;
    case 173u: goto L_089AFC1C;
    case 174u: goto L_089AFC24;
    case 175u: goto L_089AFC2C;
    case 176u: goto L_089AFC30;
    case 177u: goto L_089AFC38;
    case 178u: goto L_089AFC40;
    case 179u: goto L_089AFC4C;
    case 180u: goto L_089AFC54;
    case 181u: goto L_089AFC6C;
    case 182u: goto L_089AFC74;
    case 183u: goto L_089AFC84;
    case 184u: goto L_089AFCCC;
    case 185u: goto L_089AFCEC;
    case 186u: goto L_089AFCF8;
    case 187u: goto L_089AFD24;
    case 188u: goto L_089AFD38;
    case 189u: goto L_089AFD48;
    case 190u: goto L_089AFD60;
    case 191u: goto L_089AFD74;
    case 192u: goto L_089AFD84;
    case 193u: goto L_089AFD9C;
    case 194u: goto L_089AFDBC;
    case 195u: goto L_089AFDC0;
    case 196u: goto L_089AFDC4;
    case 197u: goto L_089AFDD4;
    case 198u: goto L_089AFDDC;
    case 199u: goto L_089AFDF0;
    case 200u: goto L_089AFDFC;
    case 201u: goto L_089AFE28;
    case 202u: goto L_089AFE54;
    case 203u: goto L_089AFE58;
    case 204u: goto L_089AFE64;
    case 205u: goto L_089AFE70;
    case 206u: goto L_089AFE88;
    case 207u: goto L_089AFE90;
    case 208u: goto L_089AFE9C;
    case 209u: goto L_089AFEA4;
    case 210u: goto L_089AFEB0;
    case 211u: goto L_089AFEC0;
    case 212u: goto L_089AFEC4;
    case 213u: goto L_089AFEEC;
    case 214u: goto L_089AFF1C;
    case 215u: goto L_089AFF28;
    case 216u: goto L_089AFF30;
    case 217u: goto L_089AFF38;
    case 218u: goto L_089AFF40;
    case 219u: goto L_089AFF54;
    case 220u: goto L_089AFF68;
    case 221u: goto L_089AFF74;
    case 222u: goto L_089AFF7C;
    case 223u: goto L_089AFF84;
    case 224u: goto L_089AFF94;
    case 225u: goto L_089AFFCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089AF004:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 195u, 0x089AEED0u>(ctx, &aot_mem); return;
L_089AF010:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089AF030u);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 156u, 0x089AEB2Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF030u) goto L_089AF030;
    return;
L_089AF030:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 171u, 0x089AEC44u>(ctx, &aot_mem); return;
L_089AF038:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089AF05C;
      }
      goto L_089AF050;
    }
L_089AF050:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_089AF06C;
    }
    goto L_089AF05C;
L_089AF05C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF06C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089AF090;
      }
      goto L_089AF078;
    }
L_089AF078:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_089AF080;
L_089AF080:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF090:
    aot_gpr[31] = (0x089AF098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 18u, 0x089AE0A0u>(ctx, &aot_mem) && ctx.pc == 0x089AF098u) goto L_089AF098;
    return;
L_089AF098:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_089AF080;
L_089AF0A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(-14928));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16460)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF0DCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(104));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF0DCu) goto L_089AF0DC;
    return;
L_089AF0DC:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AF120;
      }
      goto L_089AF0E8;
    }
L_089AF0E8:
    aot_gpr[31] = (0x089AF0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 27u, 0x089AE11Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF0F0u) goto L_089AF0F0;
    return;
L_089AF0F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16460)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF100u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF100u) goto L_089AF100;
    return;
L_089AF100:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16460)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089AF120u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF120u) goto L_089AF120;
    return;
L_089AF120:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(104), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(108), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
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
L_089AF144:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089AF240;
      }
      goto L_089AF180;
    }
L_089AF180:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16460)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14912)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF198u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(104));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF198u) goto L_089AF198;
    return;
L_089AF198:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AF240;
      }
      goto L_089AF1A0;
    }
L_089AF1A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(13056));
    aot_gpr[23] = (aot_gpr[3] + static_cast<std::uint32_t>(-15728));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-937));
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(3072));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    goto L_089AF1DC;
L_089AF1D4:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[20];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089AF244;
      }
      goto L_089AF1DC;
    }
L_089AF1DC:
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[18]);
    goto L_089AF1E0;
L_089AF1E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089AF1D4;
      }
      goto L_089AF1EC;
    }
L_089AF1EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[21] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089AF1D4;
      }
      goto L_089AF1FC;
    }
L_089AF1FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF208u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF208u) goto L_089AF208;
    return;
L_089AF208:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[22]);
      if (branch_taken) {
          goto L_089AF228;
      }
      goto L_089AF220;
    }
L_089AF220:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF228u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF228u) goto L_089AF228;
    return;
L_089AF228:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089AF238u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF238u) goto L_089AF238;
    return;
L_089AF238:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[20];
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[18]);
      if (branch_taken) {
          goto L_089AF1E0;
      }
      goto L_089AF240;
    }
L_089AF240:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089AF244;
L_089AF244:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF270:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(-14928));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(104));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16460)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089AF2BCu);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF2BCu) goto L_089AF2BC;
    return;
L_089AF2BC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
        goto L_089AF2F0;
    }
    goto L_089AF2C4;
L_089AF2C4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089AF2C8;
L_089AF2C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
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
L_089AF2F0:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF2F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16460)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF2F8u) goto L_089AF2F8;
    return;
L_089AF2F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16460)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089AF314u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF314u) goto L_089AF314;
    return;
L_089AF314:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089AF2C4;
      }
      goto L_089AF31C;
    }
L_089AF31C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(3200), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(3204), aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    goto L_089AF2C8;
L_089AF338:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[18]);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[16]);
    aot_gpr[31] = (0x089AF384u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089AF384u) goto L_089AF384;
    return;
L_089AF384:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (2217u << 16u);
      if (branch_taken) {
          goto L_089AF3C0;
      }
      goto L_089AF38C;
    }
L_089AF38C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(60)));
    goto L_089AF390;
L_089AF390:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF3C0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16460)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14912)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF3D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(104));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF3D8u) goto L_089AF3D8;
    return;
L_089AF3D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AF570;
      }
      goto L_089AF3E0;
    }
L_089AF3E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_089AF5D0;
      }
      goto L_089AF3F4;
    }
L_089AF3F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089AF5C0;
      }
      goto L_089AF3FC;
    }
L_089AF3FC:
    if (aot_gpr[3] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
        goto L_089AF574;
    }
    goto L_089AF404;
L_089AF404:
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(116));
    aot_gpr[4] = (aot_gpr[30] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[31] = (0x089AF41Cu);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF41Cu) goto L_089AF41C;
    return;
L_089AF41C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AF428u);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    goto L_089AF9E0;
L_089AF428:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
        goto L_089AF574;
    }
    goto L_089AF430;
L_089AF430:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (aot_gpr[2] & 7u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
        goto L_089AF574;
    }
    goto L_089AF440;
L_089AF440:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[22] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
        goto L_089AF574;
    }
    goto L_089AF44C;
L_089AF44C:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    goto L_089AF458;
L_089AF458:
    aot_gpr[31] = (0x089AF460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 88u, 0x089AE6D8u>(ctx, &aot_mem) && ctx.pc == 0x089AF460u) goto L_089AF460;
    return;
L_089AF460:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[17] << 5u);
      if (branch_taken) {
          goto L_089AF570;
      }
      goto L_089AF470;
    }
L_089AF470:
    aot_gpr[3] = (aot_gpr[17] << 7u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (aot_gpr[30] + 0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[14]);
    aot_gpr[31] = (0x089AF4CCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 167u, 0x089AEBD4u>(ctx, &aot_mem) && ctx.pc == 0x089AF4CCu) goto L_089AF4CC;
    return;
L_089AF4CC:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    aot_gpr[31] = (0x089AF514u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    goto L_089AF038;
L_089AF514:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[6] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089AF458;
      }
      goto L_089AF524;
    }
L_089AF524:
    aot_gpr[16] = (aot_gpr[21] + static_cast<std::uint32_t>(28));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(300));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-966));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-966));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[31] = (0x089AF554u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0428_entry, 428u, 145u, 0x089B0B58u>(ctx, &aot_mem) && ctx.pc == 0x089AF554u) goto L_089AF554;
    return;
L_089AF554:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089AF570;
      }
      goto L_089AF564;
    }
L_089AF564:
    aot_gpr[4] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF570u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF570u) goto L_089AF570;
    return;
L_089AF570:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    goto L_089AF574;
L_089AF574:
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(60)));
        goto L_089AF390;
    }
    goto L_089AF57C;
L_089AF57C:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(-15728));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF5A0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF5A0u) goto L_089AF5A0;
    return;
L_089AF5A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089AF38C;
      }
      goto L_089AF5AC;
    }
L_089AF5AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF5B8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF5B8u) goto L_089AF5B8;
    return;
L_089AF5B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(60)));
    goto L_089AF390;
L_089AF5C0:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AF404;
      }
      goto L_089AF5C8;
    }
L_089AF5C8:
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
        goto L_089AF574;
    }
    goto L_089AF5D0;
L_089AF5D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_089AF6C0;
      }
      goto L_089AF5F0;
    }
L_089AF5F0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    goto L_089AF614;
L_089AF614:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089AF624u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 88u, 0x089AE6D8u>(ctx, &aot_mem) && ctx.pc == 0x089AF624u) goto L_089AF624;
    return;
L_089AF624:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    if (aot_gpr[17] == aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
        goto L_089AF574;
    }
    goto L_089AF634;
L_089AF634:
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(32));
    goto L_089AF654;
L_089AF640:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089AF64Cu);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 88u, 0x089AE6D8u>(ctx, &aot_mem) && ctx.pc == 0x089AF64Cu) goto L_089AF64C;
    return;
L_089AF64C:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[22];
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AF570;
      }
      goto L_089AF654;
    }
L_089AF654:
    aot_gpr[2] = (aot_gpr[17] << 5u);
    aot_gpr[3] = (aot_gpr[17] << 7u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[30] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
      if (branch_taken) {
          goto L_089AF688;
      }
      goto L_089AF680;
    }
L_089AF680:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF688u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF688u) goto L_089AF688;
    return;
L_089AF688:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AF694u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089AF038;
L_089AF694:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[23];
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089AF640;
      }
      goto L_089AF6A0;
    }
L_089AF6A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(200) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089AF640;
      }
      goto L_089AF6B0;
    }
L_089AF6B0:
    aot_gpr[31] = (0x089AF6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 18u, 0x089AE0A0u>(ctx, &aot_mem) && ctx.pc == 0x089AF6B8u) goto L_089AF6B8;
    return;
L_089AF6B8:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089AF640;
L_089AF6C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(80)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[30] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[31] = (0x089AF6ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0428_entry, 428u, 145u, 0x089B0B58u>(ctx, &aot_mem) && ctx.pc == 0x089AF6ECu) goto L_089AF6EC;
    return;
L_089AF6EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_089AF614;
L_089AF6F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[11] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_089AF77C;
      }
      goto L_089AF744;
    }
L_089AF744:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AF748;
L_089AF748:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089AF74C;
L_089AF74C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089AF750;
L_089AF750:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF77C:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AF748;
      }
      goto L_089AF784;
    }
L_089AF784:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089AF74C;
      }
      goto L_089AF78C;
    }
L_089AF78C:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089AF750;
      }
      goto L_089AF794;
    }
L_089AF794:
    aot_gpr[2] = (aot_gpr[9] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089AF750;
      }
      goto L_089AF7A0;
    }
L_089AF7A0:
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089AF750;
      }
      goto L_089AF7AC;
    }
L_089AF7AC:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15136)));
    aot_gpr[3] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF7C4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF7C4u) goto L_089AF7C4;
    return;
L_089AF7C4:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(16464));
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != aot_gpr[4]) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089AF748;
    }
    goto L_089AF7E0;
L_089AF7E0:
    aot_gpr[31] = (0x089AF7E8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 23u, 0x089AD1D0u>(ctx, &aot_mem) && ctx.pc == 0x089AF7E8u) goto L_089AF7E8;
    return;
L_089AF7E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AF7F8;
      }
      goto L_089AF7F0;
    }
L_089AF7F0:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-11));
    goto L_089AF748;
L_089AF7F8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16460)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14912)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF810u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(104));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF810u) goto L_089AF810;
    return;
L_089AF810:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[9] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AF7F0;
      }
      goto L_089AF818;
    }
L_089AF818:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(3188)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-13));
      if (branch_taken) {
          goto L_089AF748;
      }
      goto L_089AF82C;
    }
L_089AF82C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(3208), aot_gpr[2]);
    aot_gpr[4] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(3212), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    goto L_089AF84C;
L_089AF84C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089AF868;
      }
      goto L_089AF854;
    }
L_089AF854:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    if (aot_gpr[4] != aot_gpr[6]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
        goto L_089AF84C;
    }
    goto L_089AF860;
L_089AF860:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-23));
    goto L_089AF748;
L_089AF868:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[3] = (aot_gpr[4] << 5u);
      if (branch_taken) {
          goto L_089AF860;
      }
      goto L_089AF870;
    }
L_089AF870:
    aot_gpr[2] = (aot_gpr[4] << 7u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    aot_gpr[10] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(92), aot_gpr[9]);
    goto L_089AF894;
L_089AF894:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[10];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089AF894;
      }
      goto L_089AF8C0;
    }
L_089AF8C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(68), aot_gpr[18]);
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((aot_gpr[21] & 0x0000000Fu) << 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[23]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(76), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(88), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[31] = (0x089AF910u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 78u, 0x089AE5B0u>(ctx, &aot_mem) && ctx.pc == 0x089AF910u) goto L_089AF910;
    return;
L_089AF910:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089AF944;
      }
      goto L_089AF928;
    }
L_089AF928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(3188), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_089AF748;
L_089AF944:
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089AF954u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF954u) goto L_089AF954;
    return;
L_089AF954:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089AF74C;
L_089AF95C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089AF978u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089AF978u) goto L_089AF978;
    return;
L_089AF978:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AF9A0;
      }
      goto L_089AF984;
    }
L_089AF984:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AF988;
L_089AF988:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF9A0:
    aot_gpr[31] = (0x089AF9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089AF9A8u) goto L_089AF9A8;
    return;
L_089AF9A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089AF984;
      }
      goto L_089AF9B4;
    }
L_089AF9B4:
    aot_gpr[31] = (0x089AF9BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089AF9BCu) goto L_089AF9BC;
    return;
L_089AF9BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089AF984;
      }
      goto L_089AF9C8;
    }
L_089AF9C8:
    aot_gpr[31] = (0x089AF9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089AF9D0u) goto L_089AF9D0;
    return;
L_089AF9D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089AF988;
      }
      goto L_089AF9D8;
    }
L_089AF9D8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AF988;
L_089AF9E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089AF9FCu);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089AF9FCu) goto L_089AF9FC;
    return;
L_089AF9FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089AFA9C;
      }
      goto L_089AFA04;
    }
L_089AFA04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089AFA28;
      }
      goto L_089AFA10;
    }
L_089AFA10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089AFA14;
L_089AFA14:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFA28:
    aot_gpr[31] = (0x089AFA30u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089AFA30u) goto L_089AFA30;
    return;
L_089AFA30:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089AFA9C;
      }
      goto L_089AFA38;
    }
L_089AFA38:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089AFA44u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089AFA44u) goto L_089AFA44;
    return;
L_089AFA44:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089AFA9C;
      }
      goto L_089AFA4C;
    }
L_089AFA4C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089AFA58u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089AFA58u) goto L_089AFA58;
    return;
L_089AFA58:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089AFA9C;
      }
      goto L_089AFA60;
    }
L_089AFA60:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089AFA6Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089AFA6Cu) goto L_089AFA6C;
    return;
L_089AFA6C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089AFA9C;
      }
      goto L_089AFA74;
    }
L_089AFA74:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089AFA80u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089AFA80u) goto L_089AFA80;
    return;
L_089AFA80:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089AFA9C;
      }
      goto L_089AFA88;
    }
L_089AFA88:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089AFA94u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089AFA94u) goto L_089AFA94;
    return;
L_089AFA94:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089AFA14;
      }
      goto L_089AFA9C;
    }
L_089AFA9C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFAB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089AFACCu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089AFACCu) goto L_089AFACC;
    return;
L_089AFACC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089AFAF4;
      }
      goto L_089AFAD8;
    }
L_089AFAD8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AFADC;
L_089AFADC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFAF4:
    aot_gpr[31] = (0x089AFAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089AFAFCu) goto L_089AFAFC;
    return;
L_089AFAFC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AFAD8;
      }
      goto L_089AFB08;
    }
L_089AFB08:
    aot_gpr[31] = (0x089AFB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089AFB10u) goto L_089AFB10;
    return;
L_089AFB10:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089AFAD8;
      }
      goto L_089AFB1C;
    }
L_089AFB1C:
    aot_gpr[31] = (0x089AFB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089AFB24u) goto L_089AFB24;
    return;
L_089AFB24:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AFAD8;
      }
      goto L_089AFB30;
    }
L_089AFB30:
    aot_gpr[31] = (0x089AFB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089AFB38u) goto L_089AFB38;
    return;
L_089AFB38:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(18));
      if (branch_taken) {
          goto L_089AFAD8;
      }
      goto L_089AFB44;
    }
L_089AFB44:
    aot_gpr[31] = (0x089AFB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089AFB4Cu) goto L_089AFB4C;
    return;
L_089AFB4C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089AFADC;
      }
      goto L_089AFB54;
    }
L_089AFB54:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AFADC;
L_089AFB5C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089AFB64:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem); return;
L_089AFB6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20328));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16488)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089AFBA4;
      }
      goto L_089AFB94;
    }
L_089AFB94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFBA4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14716)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AFBB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFBB4u) goto L_089AFBB4;
    return;
L_089AFBB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16488), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFBC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AFBF8;
      }
      goto L_089AFBE4;
    }
L_089AFBE4:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-14712)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089AFBF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFBF4u) goto L_089AFBF4;
    return;
L_089AFBF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16488), 0u);
    goto L_089AFBF8;
L_089AFBF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFC08:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-15188));
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(-15212));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_089AFC1C;
L_089AFC1C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AFC30;
      }
      goto L_089AFC24;
    }
L_089AFC24:
    if (aot_gpr[3] != aot_gpr[4]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_089AFC1C;
    }
    goto L_089AFC2C;
L_089AFC2C:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(-15212));
    goto L_089AFC30;
L_089AFC30:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFC38:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFC40:
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089AFC6C;
      }
      goto L_089AFC4C;
    }
L_089AFC4C:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    goto L_089AFC54;
L_089AFC54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[7] << (aot_gpr[2] & 31u));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
      if (branch_taken) {
          goto L_089AFC54;
      }
      goto L_089AFC6C;
    }
L_089AFC6C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFC74:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFC84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[6]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(66));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[10]);
    aot_gpr[31] = (0x089AFCCCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFCCCu) goto L_089AFCCC;
    return;
L_089AFCCC:
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_089AFCF8;
L_089AFCEC:
    aot_gpr[5] = (aot_gpr[4] & 65535u);
    if (aot_gpr[5] == aot_gpr[9]) {
    aot_gpr[7] = (2203u << 16u);
        goto L_089AFD60;
    }
    goto L_089AFCF8;
L_089AFCF8:
    aot_gpr[3] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089AFCEC;
      }
      goto L_089AFD24;
    }
L_089AFD24:
    aot_gpr[7] = (2203u << 16u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-908));
    aot_gpr[31] = (0x089AFD38u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 202u, 0x08A39C40u>(ctx, &aot_mem) && ctx.pc == 0x089AFD38u) goto L_089AFD38;
    return;
L_089AFD38:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089AFD48u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    goto L_089AFC40;
L_089AFD48:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFD60:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-908));
    aot_gpr[31] = (0x089AFD74u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 202u, 0x08A39C40u>(ctx, &aot_mem) && ctx.pc == 0x089AFD74u) goto L_089AFD74;
    return;
L_089AFD74:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089AFD84u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    goto L_089AFC40;
L_089AFD84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFD9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089AFDD4;
      }
      goto L_089AFDBC;
    }
L_089AFDBC:
    aot_gpr[2] = (0u + 0u);
    goto L_089AFDC0;
L_089AFDC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089AFDC4;
L_089AFDC4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFDD4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089AFDC0;
      }
      goto L_089AFDDC;
    }
L_089AFDDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(6)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[31] = (0x089AFDF0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089AFDF0u) goto L_089AFDF0;
    return;
L_089AFDF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + 0u);
        goto L_089AFDC0;
    }
    goto L_089AFDFC;
L_089AFDFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6)));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    aot_gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_089AFE58;
      }
      goto L_089AFE28;
    }
L_089AFE28:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(6)));
    aot_gpr[2] = (aot_gpr[5] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[8];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_089AFEB0;
      }
      goto L_089AFE54;
    }
L_089AFE54:
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(1));
    goto L_089AFE58;
L_089AFE58:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089AFE88;
      }
      goto L_089AFE64;
    }
L_089AFE64:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    goto L_089AFE70;
L_089AFE70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (aot_gpr[6] << (aot_gpr[2] & 31u));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[2]);
      if (branch_taken) {
          goto L_089AFE70;
      }
      goto L_089AFE88;
    }
L_089AFE88:
    { const bool branch_taken = aot_gpr[9] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089AFF38;
      }
      goto L_089AFE90;
    }
L_089AFE90:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089AFDC4;
      }
      goto L_089AFE9C;
    }
L_089AFE9C:
    aot_gpr[31] = (0x089AFEA4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089AFEA4u) goto L_089AFEA4;
    return;
L_089AFEA4:
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089AFDC0;
L_089AFEB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[6];
    aot_gpr[10] = (0u + 0u);
      if (branch_taken) {
          goto L_089AFE54;
      }
      goto L_089AFEC0;
    }
L_089AFEC0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089AFEC4;
L_089AFEC4:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[11]));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[10] = (aot_gpr[9] << 3u);
      if (branch_taken) {
          goto L_089AFF30;
      }
      goto L_089AFEEC;
    }
L_089AFEEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[10] + aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (aot_gpr[5] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[8];
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_089AFE54;
      }
      goto L_089AFF1C;
    }
L_089AFF1C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089AFEC4;
      }
      goto L_089AFF28;
    }
L_089AFF28:
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(1));
    goto L_089AFE58;
L_089AFF30:
    aot_gpr[9] = (0u + 0u);
    goto L_089AFE58;
L_089AFF38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089AFDC0;
L_089AFF40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[3] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_089AFF68;
      }
      goto L_089AFF54;
    }
L_089AFF54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFF68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089AFF54;
      }
      goto L_089AFF74;
    }
L_089AFF74:
    aot_gpr[31] = (0x089AFF7Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089AFF7Cu) goto L_089AFF7C;
    return;
L_089AFF7C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089AFF54;
      }
      goto L_089AFF84;
    }
L_089AFF84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFF94:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(18)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (aot_gpr[7] + aot_gpr[6]);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFFCC:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (~(0u | aot_gpr[5]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] >> (aot_gpr[3] & 31u));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[7]);
    aot_gpr[6] = (21845u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 21845u);
    aot_gpr[3] = (aot_gpr[2] >> 1u);
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[6] = (13107u << 16u);
    ctx.pc = 0x089B0000u; return;
}

void recomp_unit_0427(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0427_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_427(Runtime &runtime) {
    runtime.register_generated_unit(427u, 0x089AF000u, 4096u, &recomp_unit_0427, &recomp_unit_0427_entry);
    runtime.register_function(0x089AF004u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF010u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF030u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF038u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF050u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF05Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF06Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF078u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF080u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF090u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF098u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF0A4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF0DCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF0E8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF0F0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF100u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF120u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF144u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF180u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF198u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF1A0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF1D4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF1DCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF1E0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF1ECu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF1FCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF208u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF220u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF228u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF238u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF240u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF244u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF270u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF2BCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF2C4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF2C8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF2F0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF2F8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF314u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF31Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF338u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF384u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF38Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF390u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF3C0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF3D8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF3E0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF3F4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF3FCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF404u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF41Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF428u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF430u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF440u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF44Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF458u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF460u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF470u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF4CCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF514u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF524u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF554u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF564u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF570u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF574u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF57Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF5A0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF5ACu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF5B8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF5C0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF5C8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF5D0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF5F0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF614u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF624u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF634u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF640u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF64Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF654u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF680u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF688u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF694u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF6A0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF6B0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF6B8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF6C0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF6ECu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF6F4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF744u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF748u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF74Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF750u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF77Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF784u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF78Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF794u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF7A0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF7ACu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF7C4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF7E0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF7E8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF7F0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF7F8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF810u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF818u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF82Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF84Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF854u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF860u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF868u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF870u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF894u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF8C0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF910u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF928u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF944u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF954u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF95Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF978u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF984u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF988u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF9A0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF9A8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF9B4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF9BCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF9C8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF9D0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF9D8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF9E0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AF9FCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA04u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA10u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA14u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA28u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA30u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA38u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA44u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA4Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA58u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA60u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA6Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA74u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA80u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA88u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA94u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFA9Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFAB0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFACCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFAD8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFADCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFAF4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFAFCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB08u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB10u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB1Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB24u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB30u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB38u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB44u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB4Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB54u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB5Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB64u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB6Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFB94u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFBA4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFBB4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFBC8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFBE4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFBF4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFBF8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFC08u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFC1Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFC24u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFC2Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFC30u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFC38u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFC40u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFC4Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFC54u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFC6Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFC74u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFC84u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFCCCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFCECu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFCF8u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFD24u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFD38u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFD48u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFD60u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFD74u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFD84u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFD9Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFDBCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFDC0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFDC4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFDD4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFDDCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFDF0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFDFCu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFE28u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFE54u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFE58u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFE64u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFE70u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFE88u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFE90u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFE9Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFEA4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFEB0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFEC0u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFEC4u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFEECu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFF1Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFF28u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFF30u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFF38u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFF40u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFF54u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFF68u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFF74u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFF7Cu, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFF84u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFF94u, &recomp_unit_0427, "recomp_unit_0427");
    runtime.register_function(0x089AFFCCu, &recomp_unit_0427, "recomp_unit_0427");
}
} // namespace psprecomp
