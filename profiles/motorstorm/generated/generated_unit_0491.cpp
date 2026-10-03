#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0491[1019] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0,
    20, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0,
    0, 28, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 35,
    36, 0, 37, 0, 0, 38, 0, 0, 39, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 45, 0, 46, 0, 0, 47,
    0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0,
    61, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 75, 76, 0, 77, 0, 0,
    78, 79, 0, 80, 0, 81, 82, 0, 0, 83, 0, 0, 84, 85, 0, 86, 0, 0, 87, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 92, 93, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 98, 0, 99, 0, 100, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105,
    0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 130, 131, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 153, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0,
    0, 0, 157, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 166, 0, 167, 0, 0, 0, 168, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174,
    0, 175, 0, 176, 0, 177, 0, 178, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0,
    0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 207,
    208, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 213, 214, 0, 215, 0, 216, 0, 0, 217, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 224, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0,
    0, 232, 0, 233, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 242,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 255,
};
void recomp_unit_0491_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089EF000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0491[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089EF000;
    case 2u: goto L_089EF018;
    case 3u: goto L_089EF024;
    case 4u: goto L_089EF02C;
    case 5u: goto L_089EF03C;
    case 6u: goto L_089EF044;
    case 7u: goto L_089EF048;
    case 8u: goto L_089EF054;
    case 9u: goto L_089EF074;
    case 10u: goto L_089EF094;
    case 11u: goto L_089EF0AC;
    case 12u: goto L_089EF0B8;
    case 13u: goto L_089EF0C0;
    case 14u: goto L_089EF0C8;
    case 15u: goto L_089EF0D4;
    case 16u: goto L_089EF0DC;
    case 17u: goto L_089EF0E4;
    case 18u: goto L_089EF0EC;
    case 19u: goto L_089EF0F4;
    case 20u: goto L_089EF100;
    case 21u: goto L_089EF108;
    case 22u: goto L_089EF114;
    case 23u: goto L_089EF128;
    case 24u: goto L_089EF148;
    case 25u: goto L_089EF158;
    case 26u: goto L_089EF164;
    case 27u: goto L_089EF170;
    case 28u: goto L_089EF184;
    case 29u: goto L_089EF188;
    case 30u: goto L_089EF194;
    case 31u: goto L_089EF1B0;
    case 32u: goto L_089EF1D4;
    case 33u: goto L_089EF1E8;
    case 34u: goto L_089EF1F8;
    case 35u: goto L_089EF1FC;
    case 36u: goto L_089EF200;
    case 37u: goto L_089EF208;
    case 38u: goto L_089EF214;
    case 39u: goto L_089EF220;
    case 40u: goto L_089EF224;
    case 41u: goto L_089EF23C;
    case 42u: goto L_089EF250;
    case 43u: goto L_089EF25C;
    case 44u: goto L_089EF264;
    case 45u: goto L_089EF268;
    case 46u: goto L_089EF270;
    case 47u: goto L_089EF27C;
    case 48u: goto L_089EF288;
    case 49u: goto L_089EF294;
    case 50u: goto L_089EF2AC;
    case 51u: goto L_089EF2B8;
    case 52u: goto L_089EF2C0;
    case 53u: goto L_089EF2CC;
    case 54u: goto L_089EF2E8;
    case 55u: goto L_089EF2F8;
    case 56u: goto L_089EF30C;
    case 57u: goto L_089EF34C;
    case 58u: goto L_089EF35C;
    case 59u: goto L_089EF364;
    case 60u: goto L_089EF370;
    case 61u: goto L_089EF380;
    case 62u: goto L_089EF388;
    case 63u: goto L_089EF390;
    case 64u: goto L_089EF3A4;
    case 65u: goto L_089EF3B8;
    case 66u: goto L_089EF3C0;
    case 67u: goto L_089EF3C8;
    case 68u: goto L_089EF3FC;
    case 69u: goto L_089EF428;
    case 70u: goto L_089EF434;
    case 71u: goto L_089EF43C;
    case 72u: goto L_089EF444;
    case 73u: goto L_089EF44C;
    case 74u: goto L_089EF45C;
    case 75u: goto L_089EF468;
    case 76u: goto L_089EF46C;
    case 77u: goto L_089EF474;
    case 78u: goto L_089EF480;
    case 79u: goto L_089EF484;
    case 80u: goto L_089EF48C;
    case 81u: goto L_089EF494;
    case 82u: goto L_089EF498;
    case 83u: goto L_089EF4A4;
    case 84u: goto L_089EF4B0;
    case 85u: goto L_089EF4B4;
    case 86u: goto L_089EF4BC;
    case 87u: goto L_089EF4C8;
    case 88u: goto L_089EF4CC;
    case 89u: goto L_089EF4D4;
    case 90u: goto L_089EF4DC;
    case 91u: goto L_089EF4E4;
    case 92u: goto L_089EF4F4;
    case 93u: goto L_089EF4F8;
    case 94u: goto L_089EF508;
    case 95u: goto L_089EF52C;
    case 96u: goto L_089EF550;
    case 97u: goto L_089EF564;
    case 98u: goto L_089EF568;
    case 99u: goto L_089EF570;
    case 100u: goto L_089EF578;
    case 101u: goto L_089EF580;
    case 102u: goto L_089EF590;
    case 103u: goto L_089EF5B0;
    case 104u: goto L_089EF5F4;
    case 105u: goto L_089EF5FC;
    case 106u: goto L_089EF60C;
    case 107u: goto L_089EF61C;
    case 108u: goto L_089EF62C;
    case 109u: goto L_089EF638;
    case 110u: goto L_089EF658;
    case 111u: goto L_089EF67C;
    case 112u: goto L_089EF6B0;
    case 113u: goto L_089EF6B8;
    case 114u: goto L_089EF6C0;
    case 115u: goto L_089EF6D0;
    case 116u: goto L_089EF6D8;
    case 117u: goto L_089EF6F0;
    case 118u: goto L_089EF704;
    case 119u: goto L_089EF70C;
    case 120u: goto L_089EF730;
    case 121u: goto L_089EF744;
    case 122u: goto L_089EF754;
    case 123u: goto L_089EF77C;
    case 124u: goto L_089EF784;
    case 125u: goto L_089EF7B8;
    case 126u: goto L_089EF7E8;
    case 127u: goto L_089EF81C;
    case 128u: goto L_089EF878;
    case 129u: goto L_089EF894;
    case 130u: goto L_089EF8A0;
    case 131u: goto L_089EF8A4;
    case 132u: goto L_089EF8A8;
    case 133u: goto L_089EF8B4;
    case 134u: goto L_089EF8C8;
    case 135u: goto L_089EF8D0;
    case 136u: goto L_089EF8D8;
    case 137u: goto L_089EF8E4;
    case 138u: goto L_089EF918;
    case 139u: goto L_089EF930;
    case 140u: goto L_089EF93C;
    case 141u: goto L_089EF948;
    case 142u: goto L_089EF950;
    case 143u: goto L_089EF964;
    case 144u: goto L_089EF99C;
    case 145u: goto L_089EF9B4;
    case 146u: goto L_089EF9C4;
    case 147u: goto L_089EF9CC;
    case 148u: goto L_089EF9E4;
    case 149u: goto L_089EFA00;
    case 150u: goto L_089EFA0C;
    case 151u: goto L_089EFA40;
    case 152u: goto L_089EFA50;
    case 153u: goto L_089EFA54;
    case 154u: goto L_089EFA60;
    case 155u: goto L_089EFA70;
    case 156u: goto L_089EFA78;
    case 157u: goto L_089EFA88;
    case 158u: goto L_089EFA8C;
    case 159u: goto L_089EFABC;
    case 160u: goto L_089EFAC4;
    case 161u: goto L_089EFAF4;
    case 162u: goto L_089EFB08;
    case 163u: goto L_089EFB18;
    case 164u: goto L_089EFB24;
    case 165u: goto L_089EFB34;
    case 166u: goto L_089EFB38;
    case 167u: goto L_089EFB40;
    case 168u: goto L_089EFB50;
    case 169u: goto L_089EFB54;
    case 170u: goto L_089EFB5C;
    case 171u: goto L_089EFB64;
    case 172u: goto L_089EFB6C;
    case 173u: goto L_089EFB74;
    case 174u: goto L_089EFB7C;
    case 175u: goto L_089EFB84;
    case 176u: goto L_089EFB8C;
    case 177u: goto L_089EFB94;
    case 178u: goto L_089EFB9C;
    case 179u: goto L_089EFBA0;
    case 180u: goto L_089EFBA8;
    case 181u: goto L_089EFBB8;
    case 182u: goto L_089EFBC8;
    case 183u: goto L_089EFBD0;
    case 184u: goto L_089EFBDC;
    case 185u: goto L_089EFBFC;
    case 186u: goto L_089EFC0C;
    case 187u: goto L_089EFC18;
    case 188u: goto L_089EFC2C;
    case 189u: goto L_089EFC48;
    case 190u: goto L_089EFC54;
    case 191u: goto L_089EFC60;
    case 192u: goto L_089EFC68;
    case 193u: goto L_089EFC7C;
    case 194u: goto L_089EFCE4;
    case 195u: goto L_089EFCF0;
    case 196u: goto L_089EFCF8;
    case 197u: goto L_089EFD10;
    case 198u: goto L_089EFD18;
    case 199u: goto L_089EFD20;
    case 200u: goto L_089EFD3C;
    case 201u: goto L_089EFD48;
    case 202u: goto L_089EFD50;
    case 203u: goto L_089EFD58;
    case 204u: goto L_089EFD64;
    case 205u: goto L_089EFD6C;
    case 206u: goto L_089EFD74;
    case 207u: goto L_089EFD7C;
    case 208u: goto L_089EFD80;
    case 209u: goto L_089EFD88;
    case 210u: goto L_089EFD94;
    case 211u: goto L_089EFD9C;
    case 212u: goto L_089EFDA4;
    case 213u: goto L_089EFDAC;
    case 214u: goto L_089EFDB0;
    case 215u: goto L_089EFDB8;
    case 216u: goto L_089EFDC0;
    case 217u: goto L_089EFDCC;
    case 218u: goto L_089EFDD0;
    case 219u: goto L_089EFDD8;
    case 220u: goto L_089EFDE0;
    case 221u: goto L_089EFE10;
    case 222u: goto L_089EFE30;
    case 223u: goto L_089EFE38;
    case 224u: goto L_089EFE44;
    case 225u: goto L_089EFE48;
    case 226u: goto L_089EFE50;
    case 227u: goto L_089EFE58;
    case 228u: goto L_089EFE60;
    case 229u: goto L_089EFE68;
    case 230u: goto L_089EFE70;
    case 231u: goto L_089EFE78;
    case 232u: goto L_089EFE84;
    case 233u: goto L_089EFE8C;
    case 234u: goto L_089EFE9C;
    case 235u: goto L_089EFEA4;
    case 236u: goto L_089EFEAC;
    case 237u: goto L_089EFEB4;
    case 238u: goto L_089EFEBC;
    case 239u: goto L_089EFED0;
    case 240u: goto L_089EFEDC;
    case 241u: goto L_089EFEF0;
    case 242u: goto L_089EFEFC;
    case 243u: goto L_089EFF20;
    case 244u: goto L_089EFF30;
    case 245u: goto L_089EFF3C;
    case 246u: goto L_089EFF44;
    case 247u: goto L_089EFF54;
    case 248u: goto L_089EFF74;
    case 249u: goto L_089EFF94;
    case 250u: goto L_089EFFA0;
    case 251u: goto L_089EFFAC;
    case 252u: goto L_089EFFBC;
    case 253u: goto L_089EFFC4;
    case 254u: goto L_089EFFE0;
    case 255u: goto L_089EFFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089EF000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    goto L_089EF018;
L_089EF018:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[17] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_089EF048;
    }
    goto L_089EF024;
L_089EF024:
    aot_gpr[31] = (0x089EF02Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089EF02Cu) goto L_089EF02C;
    return;
L_089EF02C:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089EF03Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089EF03Cu) goto L_089EF03C;
    return;
L_089EF03C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF074;
      }
      goto L_089EF044;
    }
L_089EF044:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089EF048;
L_089EF048:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089EF018;
      }
      goto L_089EF054;
    }
L_089EF054:
    aot_gpr[2] = (0u | 0u);
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
L_089EF074:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
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
L_089EF094:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    goto L_089EF0AC;
L_089EF0AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089EF0DC;
    }
    goto L_089EF0B8;
L_089EF0B8:
    aot_gpr[31] = (0x089EF0C0u);
    // nop
    goto L_089EFBDC;
L_089EF0C0:
    aot_gpr[31] = (0x089EF0C8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_089EFE9C;
L_089EF0C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EF0D4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089EF0D4u) goto L_089EF0D4;
    return;
L_089EF0D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089EF0DC;
L_089EF0DC:
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089EF108;
    }
    goto L_089EF0E4;
L_089EF0E4:
    aot_gpr[31] = (0x089EF0ECu);
    // nop
    goto L_089EFBDC;
L_089EF0EC:
    aot_gpr[31] = (0x089EF0F4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_089EFE9C;
L_089EF0F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EF100u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089EF100u) goto L_089EF100;
    return;
L_089EF100:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089EF108;
L_089EF108:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089EF0AC;
      }
      goto L_089EF114;
    }
L_089EF114:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EF128:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089EF194;
      }
      goto L_089EF148;
    }
L_089EF148:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-11176));
    goto L_089EF158;
L_089EF158:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_089EF188;
    }
    goto L_089EF164;
L_089EF164:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089EF184;
      }
      goto L_089EF170;
    }
L_089EF170:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089EF184u);
    aot_gpr[6] = (0u | 327u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x089EF184u) goto L_089EF184;
    return;
L_089EF184:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089EF188;
L_089EF188:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089EF158;
      }
      goto L_089EF194;
    }
L_089EF194:
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
L_089EF1B0:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(8160));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF200;
      }
      goto L_089EF1D4;
    }
L_089EF1D4:
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[6] & 1u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (aot_gpr[5] << 24u);
        goto L_089EF1F8;
    }
    goto L_089EF1E8;
L_089EF1E8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
      if (branch_taken) {
          goto L_089EF1FC;
      }
      goto L_089EF1F8;
    }
L_089EF1F8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    goto L_089EF1FC;
L_089EF1FC:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 48 ? 1u : 0u);
    goto L_089EF200;
L_089EF200:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-87));
      if (branch_taken) {
          goto L_089EF220;
      }
      goto L_089EF208;
    }
L_089EF208:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-87));
      if (branch_taken) {
          goto L_089EF220;
      }
      goto L_089EF214;
    }
L_089EF214:
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] << 4u);
      if (branch_taken) {
          goto L_089EF224;
      }
      goto L_089EF220;
    }
L_089EF220:
    aot_gpr[6] = (aot_gpr[6] << 4u);
    goto L_089EF224;
L_089EF224:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1))))));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF268;
      }
      goto L_089EF23C;
    }
L_089EF23C:
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089EF25C;
      }
      goto L_089EF250;
    }
L_089EF250:
    aot_gpr[5] = (aot_gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
      if (branch_taken) {
          goto L_089EF264;
      }
      goto L_089EF25C;
    }
L_089EF25C:
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    goto L_089EF264;
L_089EF264:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 48 ? 1u : 0u);
    goto L_089EF268;
L_089EF268:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(-87));
      if (branch_taken) {
          goto L_089EF288;
      }
      goto L_089EF270;
    }
L_089EF270:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(-87));
      if (branch_taken) {
          goto L_089EF288;
      }
      goto L_089EF27C;
    }
L_089EF27C:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(-48));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EF288:
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EF294:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089EF2F8;
      }
      goto L_089EF2AC;
    }
L_089EF2AC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF2F8;
      }
      goto L_089EF2B8;
    }
L_089EF2B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_089EF2C0;
L_089EF2C0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089EF2CCu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_089EF964;
L_089EF2CC:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EF2C0;
      }
      goto L_089EF2E8;
    }
L_089EF2E8:
    aot_gpr[6] = (aot_gpr[4] - aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[31] = (0x089EF2F8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089EF2F8u) goto L_089EF2F8;
    return;
L_089EF2F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EF30C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089EF34Cu);
    aot_gpr[20] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089EF34Cu) goto L_089EF34C;
    return;
L_089EF34C:
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-11008));
    goto L_089EF35C;
L_089EF35C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
      if (branch_taken) {
          goto L_089EF3C8;
      }
      goto L_089EF364;
    }
L_089EF364:
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
      if (branch_taken) {
          goto L_089EF3C8;
      }
      goto L_089EF370;
    }
L_089EF370:
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
        goto L_089EF3C8;
    }
    goto L_089EF380;
L_089EF380:
    aot_gpr[31] = (0x089EF388u);
    // nop
    goto L_089EFAF4;
L_089EF388:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089EF3A4;
      }
      goto L_089EF390;
    }
L_089EF390:
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF3C0;
      }
      goto L_089EF3A4;
    }
L_089EF3A4:
    aot_gpr[7] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[18] - aot_gpr[19]);
    aot_gpr[31] = (0x089EF3B8u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x089EF3B8u) goto L_089EF3B8;
    return;
L_089EF3B8:
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    goto L_089EF3C0;
L_089EF3C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EF35C;
      }
      goto L_089EF3C8;
    }
L_089EF3C8:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EF3FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_089EF508;
      }
      goto L_089EF428;
    }
L_089EF428:
    aot_gpr[19] = (0u | 43u);
    aot_gpr[18] = (0u | 32u);
    aot_gpr[17] = (0u | 37u);
    goto L_089EF434;
L_089EF434:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EF444;
      }
      goto L_089EF43C;
    }
L_089EF43C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[18]));
      if (branch_taken) {
          goto L_089EF4F8;
      }
      goto L_089EF444;
    }
L_089EF444:
    if (aot_gpr[4] != aot_gpr[17]) {
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
        goto L_089EF4F8;
    }
    goto L_089EF44C;
L_089EF44C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 97 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF46C;
      }
      goto L_089EF45C;
    }
L_089EF45C:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 58 ? 1u : 0u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
        goto L_089EF498;
    }
    goto L_089EF468;
L_089EF468:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 97 ? 1u : 0u);
    goto L_089EF46C;
L_089EF46C:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF484;
      }
      goto L_089EF474;
    }
L_089EF474:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 103 ? 1u : 0u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
        goto L_089EF498;
    }
    goto L_089EF480;
L_089EF480:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 65 ? 1u : 0u);
    goto L_089EF484;
L_089EF484:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 71 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF4F4;
      }
      goto L_089EF48C;
    }
L_089EF48C:
    if (aot_gpr[6] == 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
        goto L_089EF4F8;
    }
    goto L_089EF494;
L_089EF494:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
    goto L_089EF498;
L_089EF498:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 97 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF4B4;
      }
      goto L_089EF4A4;
    }
L_089EF4A4:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF4DC;
      }
      goto L_089EF4B0;
    }
L_089EF4B0:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 97 ? 1u : 0u);
    goto L_089EF4B4;
L_089EF4B4:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF4CC;
      }
      goto L_089EF4BC;
    }
L_089EF4BC:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 103 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF4DC;
      }
      goto L_089EF4C8;
    }
L_089EF4C8:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 65 ? 1u : 0u);
    goto L_089EF4CC;
L_089EF4CC:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 71 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF4F4;
      }
      goto L_089EF4D4;
    }
L_089EF4D4:
    if (aot_gpr[6] == 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
        goto L_089EF4F8;
    }
    goto L_089EF4DC;
L_089EF4DC:
    aot_gpr[31] = (0x089EF4E4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_089EF1B0;
L_089EF4E4:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EF4F8;
      }
      goto L_089EF4F4;
    }
L_089EF4F4:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_089EF4F8;
L_089EF4F8:
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EF434;
      }
      goto L_089EF508;
    }
L_089EF508:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
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
L_089EF52C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089EF550u);
    aot_gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089EF550u) goto L_089EF550;
    return;
L_089EF550:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF590;
      }
      goto L_089EF564;
    }
L_089EF564:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[17]);
    goto L_089EF568;
L_089EF568:
    aot_gpr[31] = (0x089EF570u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_089EFAF4;
L_089EF570:
    if (aot_gpr[2] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(3));
        goto L_089EF580;
    }
    goto L_089EF578;
L_089EF578:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EF580;
      }
      goto L_089EF580;
    }
L_089EF580:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089EF568;
      }
      goto L_089EF590;
    }
L_089EF590:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_089EF5B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    aot_gpr[18] = (0u | 35u);
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[21]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[21] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089EF61C;
      }
      goto L_089EF5F4;
    }
L_089EF5F4:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[17] + aot_gpr[20]);
    goto L_089EF5FC;
L_089EF5FC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089EF60Cu);
    aot_gpr[6] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089EF60Cu) goto L_089EF60C;
    return;
L_089EF60C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(35));
      if (branch_taken) {
          goto L_089EF5FC;
      }
      goto L_089EF61C;
    }
L_089EF61C:
    { const std::uint32_t dividend = aot_gpr[16]; const std::uint32_t divisor = aot_gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (ctx.hi);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_089EF658;
      }
      goto L_089EF62C;
    }
L_089EF62C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089EF638u);
    aot_gpr[6] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089EF638u) goto L_089EF638;
    return;
L_089EF638:
    aot_gpr[4] = (aot_gpr[19] << 5u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089EF658u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089EF658u) goto L_089EF658;
    return;
L_089EF658:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EF67C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF784;
      }
      goto L_089EF6B0;
    }
L_089EF6B0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF784;
      }
      goto L_089EF6B8;
    }
L_089EF6B8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[9] = (0u | 3u);
      if (branch_taken) {
          goto L_089EF784;
      }
      goto L_089EF6C0;
    }
L_089EF6C0:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[22] = (ctx.hi);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[8] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089EF6D8;
      }
      goto L_089EF6D0;
    }
L_089EF6D0:
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[22]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(3));
    goto L_089EF6D8;
L_089EF6D8:
    aot_gpr[10] = (aot_gpr[8] << 2u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[10] = (ctx.lo);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF784;
      }
      goto L_089EF6F0;
    }
L_089EF6F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x089EF704u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_089EFBDC;
L_089EF704:
    aot_gpr[31] = (0x089EF70Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_089EFE9C;
L_089EF70C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 533u);
    aot_gpr[31] = (0x089EF730u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-11000));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089EF730u) goto L_089EF730;
    return;
L_089EF730:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089EF744u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089EF744u) goto L_089EF744;
    return;
L_089EF744:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x089EF754u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089EF754u) goto L_089EF754;
    return;
L_089EF754:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[9] = (0u | 3u);
      if (branch_taken) {
          goto L_089EF7B8;
      }
      goto L_089EF77C;
    }
L_089EF77C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF8C8;
      }
      goto L_089EF784;
    }
L_089EF784:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EF7B8:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[23] = (16u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    aot_gpr[21] = (0u | 61u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[6] + aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-19056));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-16384));
    aot_gpr[30] = (1008u << 16u);
    aot_gpr[20] = (ctx.lo);
    goto L_089EF7E8;
L_089EF7E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[19] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089EF81Cu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089EF81Cu) goto L_089EF81C;
    return;
L_089EF81C:
    aot_gpr[4] = (64512u << 16u);
    aot_gpr[4] = (aot_gpr[19] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] >> 26u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[19] & aot_gpr[30]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 20u));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (aot_gpr[19] & aot_gpr[23]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 14u));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (aot_gpr[19] & 16128u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 8u));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089EF8A4;
      }
      goto L_089EF878;
    }
L_089EF878:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[20] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089EF8A8;
      }
      goto L_089EF894;
    }
L_089EF894:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[22] != aot_gpr[4];
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[21]));
      if (branch_taken) {
          goto L_089EF8A4;
      }
      goto L_089EF8A0;
    }
L_089EF8A0:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[21]));
    goto L_089EF8A4;
L_089EF8A4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089EF8A8;
L_089EF8A8:
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089EF8B4u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089EF8B4u) goto L_089EF8B4;
    return;
L_089EF8B4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EF7E8;
      }
      goto L_089EF8C8;
    }
L_089EF8C8:
    aot_gpr[31] = (0x089EF8D0u);
    // nop
    goto L_089EFBDC;
L_089EF8D0:
    aot_gpr[31] = (0x089EF8D8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_089EFE9C;
L_089EF8D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x089EF8E4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089EF8E4u) goto L_089EF8E4;
    return;
L_089EF8E4:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EF918:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 42u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    goto L_089EF930;
L_089EF930:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089EF93Cu);
    aot_gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x089EF93Cu) goto L_089EF93C;
    return;
L_089EF93C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF950;
      }
      goto L_089EF948;
    }
L_089EF948:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_089EF930;
      }
      goto L_089EF950;
    }
L_089EF950:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EF964:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (0u | 38u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089EFA88;
      }
      goto L_089EF99C;
    }
L_089EF99C:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (0u | 35u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[19] = (2215u << 16u);
      if (branch_taken) {
          goto L_089EFA40;
      }
      goto L_089EF9B4;
    }
L_089EF9B4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x089EF9C4u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 87u, 0x089F0508u>(ctx, &aot_mem) && ctx.pc == 0x089EF9C4u) goto L_089EF9C4;
    return;
L_089EF9C4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089EFA8C;
    }
    goto L_089EF9CC;
L_089EF9CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089EF9E4u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x089EF9E4u) goto L_089EF9E4;
    return;
L_089EF9E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (0u | 59u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089EFA88;
      }
      goto L_089EFA00;
    }
L_089EFA00:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 256 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089EFA8C;
    }
    goto L_089EFA0C;
L_089EFA0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 24u));
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
L_089EFA40:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-11080));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089EFA8C;
    }
    goto L_089EFA50;
L_089EFA50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089EFA54;
L_089EFA54:
    aot_gpr[20] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x089EFA60u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089EFA60u) goto L_089EFA60;
    return;
L_089EFA60:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089EFA70u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089EFA70u) goto L_089EFA70;
    return;
L_089EFA70:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFABC;
      }
      goto L_089EFA78;
    }
L_089EFA78:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[18] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089EFA54;
    }
    goto L_089EFA88;
L_089EFA88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089EFA8C;
L_089EFA8C:
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
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
L_089EFABC:
    aot_gpr[31] = (0x089EFAC4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089EFAC4u) goto L_089EFAC4;
    return;
L_089EFAC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(4))))));
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
L_089EFAF4:
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EFB18;
      }
      goto L_089EFB08;
    }
L_089EFB08:
    aot_gpr[5] = (0u | 122u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 1u);
        goto L_089EFBA0;
    }
    goto L_089EFB18;
L_089EFB18:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 65 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EFB38;
      }
      goto L_089EFB24;
    }
L_089EFB24:
    aot_gpr[5] = (0u | 90u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 1u);
        goto L_089EFBA0;
    }
    goto L_089EFB34;
L_089EFB34:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 48 ? 1u : 0u);
    goto L_089EFB38;
L_089EFB38:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (0u | 45u);
      if (branch_taken) {
          goto L_089EFB54;
      }
      goto L_089EFB40;
    }
L_089EFB40:
    aot_gpr[5] = (0u | 57u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 1u);
        goto L_089EFBA0;
    }
    goto L_089EFB50;
L_089EFB50:
    aot_gpr[5] = (0u | 45u);
    goto L_089EFB54;
L_089EFB54:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 95u);
      if (branch_taken) {
          goto L_089EFB9C;
      }
      goto L_089EFB5C;
    }
L_089EFB5C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_089EFB9C;
      }
      goto L_089EFB64;
    }
L_089EFB64:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 33u);
      if (branch_taken) {
          goto L_089EFB9C;
      }
      goto L_089EFB6C;
    }
L_089EFB6C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 126u);
      if (branch_taken) {
          goto L_089EFB9C;
      }
      goto L_089EFB74;
    }
L_089EFB74:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 42u);
      if (branch_taken) {
          goto L_089EFB9C;
      }
      goto L_089EFB7C;
    }
L_089EFB7C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 39u);
      if (branch_taken) {
          goto L_089EFB9C;
      }
      goto L_089EFB84;
    }
L_089EFB84:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 40u);
      if (branch_taken) {
          goto L_089EFB9C;
      }
      goto L_089EFB8C;
    }
L_089EFB8C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 41u);
      if (branch_taken) {
          goto L_089EFB9C;
      }
      goto L_089EFB94;
    }
L_089EFB94:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EFBA0;
      }
      goto L_089EFB9C;
    }
L_089EFB9C:
    aot_gpr[2] = (0u | 1u);
    goto L_089EFBA0;
L_089EFBA0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFBA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_089EFBD0;
      }
      goto L_089EFBB8;
    }
L_089EFBB8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9824));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089EFBD0;
      }
      goto L_089EFBC8;
    }
L_089EFBC8:
    aot_gpr[31] = (0x089EFBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089EFBD0u) goto L_089EFBD0;
    return;
L_089EFBD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFBDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28708)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(28712));
      if (branch_taken) {
          goto L_089EFC18;
      }
      goto L_089EFBFC;
    }
L_089EFBFC:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28708), aot_gpr[5]);
    aot_gpr[31] = (0x089EFC0Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 12u, 0x089F00A4u>(ctx, &aot_mem) && ctx.pc == 0x089EFC0Cu) goto L_089EFC0C;
    return;
L_089EFC0C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x089EFC18u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18984));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089EFC18u) goto L_089EFC18;
    return;
L_089EFC18:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFC2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089EFC68;
      }
      goto L_089EFC48;
    }
L_089EFC48:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x089EFC54u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 25u, 0x089F0168u>(ctx, &aot_mem) && ctx.pc == 0x089EFC54u) goto L_089EFC54;
    return;
L_089EFC54:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFC68;
      }
      goto L_089EFC60;
    }
L_089EFC60:
    aot_gpr[31] = (0x089EFC68u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089EFC68u) goto L_089EFC68;
    return;
L_089EFC68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFC7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[11] | 0u);
    aot_gpr[23] = (aot_gpr[9] | 0u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[10] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10792));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10784));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089EFCE4u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-10760));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 6u, 0x089F0064u>(ctx, &aot_mem) && ctx.pc == 0x089EFCE4u) goto L_089EFCE4;
    return;
L_089EFCE4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089EFCF0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    goto L_089EFFC4;
L_089EFCF0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[21] = (0u | 0u);
        goto L_089EFCF8;
    }
    goto L_089EFCF8;
L_089EFCF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089EFD10u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 37u, 0x089F0214u>(ctx, &aot_mem) && ctx.pc == 0x089EFD10u) goto L_089EFD10;
    return;
L_089EFD10:
    aot_gpr[31] = (0x089EFD18u);
    // nop
    goto L_089EFBDC;
L_089EFD18:
    aot_gpr[31] = (0x089EFD20u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_089EFE9C;
L_089EFD20:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 1024u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 206u);
    aot_gpr[31] = (0x089EFD3Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10724));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089EFD3Cu) goto L_089EFD3C;
    return;
L_089EFD3C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[22] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089EFD6C;
      }
      goto L_089EFD48;
    }
L_089EFD48:
    aot_gpr[31] = (0x089EFD50u);
    // nop
    goto L_089EFBDC;
L_089EFD50:
    aot_gpr[31] = (0x089EFD58u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_089EFE9C;
L_089EFD58:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089EFD64u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089EFD64u) goto L_089EFD64;
    return;
L_089EFD64:
    aot_gpr[21] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[22] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089EFD6C;
L_089EFD6C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[22] < static_cast<std::uint32_t>(11) ? 1u : 0u);
      if (branch_taken) {
          goto L_089EFD7C;
      }
      goto L_089EFD74;
    }
L_089EFD74:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EFD80;
      }
      goto L_089EFD7C;
    }
L_089EFD7C:
    aot_gpr[21] = (0u | 0u);
    goto L_089EFD80;
L_089EFD80:
    aot_gpr[31] = (0x089EFD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 137u, 0x089F4820u>(ctx, &aot_mem) && ctx.pc == 0x089EFD88u) goto L_089EFD88;
    return;
L_089EFD88:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089EFD94u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 141u, 0x089F4870u>(ctx, &aot_mem) && ctx.pc == 0x089EFD94u) goto L_089EFD94;
    return;
L_089EFD94:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFDD0;
      }
      goto L_089EFD9C;
    }
L_089EFD9C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFDB0;
      }
      goto L_089EFDA4;
    }
L_089EFDA4:
    aot_gpr[31] = (0x089EFDACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 133u, 0x089F1798u>(ctx, &aot_mem) && ctx.pc == 0x089EFDACu) goto L_089EFDAC;
    return;
L_089EFDAC:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    goto L_089EFDB0;
L_089EFDB0:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFDD0;
      }
      goto L_089EFDB8;
    }
L_089EFDB8:
    aot_gpr[31] = (0x089EFDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089EFDC0u) goto L_089EFDC0;
    return;
L_089EFDC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x089EFDCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EFDCCu) goto L_089EFDCC;
    return;
L_089EFDCC:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    goto L_089EFDD0;
L_089EFDD0:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EFDE0;
      }
      goto L_089EFDD8;
    }
L_089EFDD8:
    aot_gpr[31] = (0x089EFDE0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089EFE10;
L_089EFDE0:
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFE10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (aot_gpr[16] | 0u);
        goto L_089EFE48;
    }
    goto L_089EFE30;
L_089EFE30:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089EFE48;
      }
      goto L_089EFE38;
    }
L_089EFE38:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089EFE44u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 37u, 0x089F0214u>(ctx, &aot_mem) && ctx.pc == 0x089EFE44u) goto L_089EFE44;
    return;
L_089EFE44:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089EFE48;
L_089EFE48:
    aot_gpr[31] = (0x089EFE50u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 37u, 0x089F0214u>(ctx, &aot_mem) && ctx.pc == 0x089EFE50u) goto L_089EFE50;
    return;
L_089EFE50:
    aot_gpr[31] = (0x089EFE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 137u, 0x089F4820u>(ctx, &aot_mem) && ctx.pc == 0x089EFE58u) goto L_089EFE58;
    return;
L_089EFE58:
    aot_gpr[31] = (0x089EFE60u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 152u, 0x089F4934u>(ctx, &aot_mem) && ctx.pc == 0x089EFE60u) goto L_089EFE60;
    return;
L_089EFE60:
    aot_gpr[31] = (0x089EFE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089EFE68u) goto L_089EFE68;
    return;
L_089EFE68:
    aot_gpr[31] = (0x089EFE70u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 49u, 0x089F3308u>(ctx, &aot_mem) && ctx.pc == 0x089EFE70u) goto L_089EFE70;
    return;
L_089EFE70:
    aot_gpr[31] = (0x089EFE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089EFE78u) goto L_089EFE78;
    return;
L_089EFE78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x089EFE84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EFE84u) goto L_089EFE84;
    return;
L_089EFE84:
    aot_gpr[31] = (0x089EFE8Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 30u, 0x089F01B4u>(ctx, &aot_mem) && ctx.pc == 0x089EFE8Cu) goto L_089EFE8C;
    return;
L_089EFE8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFE9C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFEA4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFEAC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFEB4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFEBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089EFED0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 50u, 0x089F02DCu>(ctx, &aot_mem) && ctx.pc == 0x089EFED0u) goto L_089EFED0;
    return;
L_089EFED0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFEDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089EFEF0u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089EFEF0u) goto L_089EFEF0;
    return;
L_089EFEF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFEFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089EFF54;
      }
      goto L_089EFF20;
    }
L_089EFF20:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-10868));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    goto L_089EFF30;
L_089EFF30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EFF3Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EFF3Cu) goto L_089EFF3C;
    return;
L_089EFF3C:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[19]);
        goto L_089EFF74;
    }
    goto L_089EFF44;
L_089EFF44:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 19 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EFF30;
      }
      goto L_089EFF54;
    }
L_089EFF54:
    aot_gpr[2] = (0u | 0u);
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
L_089EFF74:
    aot_gpr[2] = (0u | 1u);
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
L_089EFF94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EFFBC;
      }
      goto L_089EFFA0;
    }
L_089EFFA0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089EFFBC;
      }
      goto L_089EFFAC;
    }
L_089EFFAC:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10868));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089EFFBC;
L_089EFFBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EFFC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089EFFE0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 16u, 0x089F00FCu>(ctx, &aot_mem) && ctx.pc == 0x089EFFE0u) goto L_089EFFE0;
    return;
L_089EFFE0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 2u, 0x089F0014u>(ctx, &aot_mem); return;
      }
      goto L_089EFFE8;
    }
L_089EFFE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[2] = (0u | 1u);
    ctx.pc = 0x089F0000u; return;
}

void recomp_unit_0491(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0491_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_491(Runtime &runtime) {
    runtime.register_generated_unit(491u, 0x089EF000u, 4096u, &recomp_unit_0491, &recomp_unit_0491_entry);
    runtime.register_function(0x089EF000u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF018u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF024u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF02Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF03Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF044u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF048u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF054u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF074u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF094u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF0ACu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF0B8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF0C0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF0C8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF0D4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF0DCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF0E4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF0ECu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF0F4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF100u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF108u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF114u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF128u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF148u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF158u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF164u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF170u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF184u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF188u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF194u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF1B0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF1D4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF1E8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF1F8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF1FCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF200u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF208u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF214u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF220u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF224u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF23Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF250u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF25Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF264u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF268u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF270u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF27Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF288u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF294u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF2ACu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF2B8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF2C0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF2CCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF2E8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF2F8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF30Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF34Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF35Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF364u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF370u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF380u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF388u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF390u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF3A4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF3B8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF3C0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF3C8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF3FCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF428u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF434u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF43Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF444u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF44Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF45Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF468u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF46Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF474u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF480u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF484u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF48Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF494u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF498u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF4A4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF4B0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF4B4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF4BCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF4C8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF4CCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF4D4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF4DCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF4E4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF4F4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF4F8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF508u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF52Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF550u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF564u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF568u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF570u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF578u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF580u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF590u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF5B0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF5F4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF5FCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF60Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF61Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF62Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF638u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF658u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF67Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF6B0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF6B8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF6C0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF6D0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF6D8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF6F0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF704u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF70Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF730u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF744u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF754u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF77Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF784u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF7B8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF7E8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF81Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF878u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF894u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF8A0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF8A4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF8A8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF8B4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF8C8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF8D0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF8D8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF8E4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF918u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF930u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF93Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF948u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF950u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF964u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF99Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF9B4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF9C4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF9CCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EF9E4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFA00u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFA0Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFA40u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFA50u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFA54u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFA60u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFA70u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFA78u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFA88u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFA8Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFABCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFAC4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFAF4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB08u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB18u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB24u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB34u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB38u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB40u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB50u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB54u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB5Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB64u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB6Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB74u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB7Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB84u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB8Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB94u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFB9Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFBA0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFBA8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFBB8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFBC8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFBD0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFBDCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFBFCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFC0Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFC18u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFC2Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFC48u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFC54u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFC60u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFC68u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFC7Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFCE4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFCF0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFCF8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD10u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD18u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD20u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD3Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD48u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD50u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD58u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD64u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD6Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD74u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD7Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD80u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD88u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD94u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFD9Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFDA4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFDACu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFDB0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFDB8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFDC0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFDCCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFDD0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFDD8u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFDE0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE10u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE30u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE38u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE44u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE48u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE50u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE58u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE60u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE68u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE70u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE78u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE84u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE8Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFE9Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFEA4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFEACu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFEB4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFEBCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFED0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFEDCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFEF0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFEFCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFF20u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFF30u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFF3Cu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFF44u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFF54u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFF74u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFF94u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFFA0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFFACu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFFBCu, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFFC4u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFFE0u, &recomp_unit_0491, "recomp_unit_0491");
    runtime.register_function(0x089EFFE8u, &recomp_unit_0491, "recomp_unit_0491");
}
} // namespace psprecomp
