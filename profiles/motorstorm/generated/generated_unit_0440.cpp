#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0440[1024] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8,
    0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22,
    0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0,
    57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180,
    0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0,
    205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218,
};
void recomp_unit_0440_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089BC000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0440[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089BC000;
    case 2u: goto L_089BC00C;
    case 3u: goto L_089BC018;
    case 4u: goto L_089BC024;
    case 5u: goto L_089BC030;
    case 6u: goto L_089BC04C;
    case 7u: goto L_089BC070;
    case 8u: goto L_089BC07C;
    case 9u: goto L_089BC088;
    case 10u: goto L_089BC094;
    case 11u: goto L_089BC0A4;
    case 12u: goto L_089BC0B0;
    case 13u: goto L_089BC0BC;
    case 14u: goto L_089BC0C8;
    case 15u: goto L_089BC0D4;
    case 16u: goto L_089BC0F0;
    case 17u: goto L_089BC114;
    case 18u: goto L_089BC124;
    case 19u: goto L_089BC130;
    case 20u: goto L_089BC14C;
    case 21u: goto L_089BC170;
    case 22u: goto L_089BC17C;
    case 23u: goto L_089BC188;
    case 24u: goto L_089BC194;
    case 25u: goto L_089BC1A4;
    case 26u: goto L_089BC1B4;
    case 27u: goto L_089BC1C0;
    case 28u: goto L_089BC1CC;
    case 29u: goto L_089BC1E8;
    case 30u: goto L_089BC1F4;
    case 31u: goto L_089BC218;
    case 32u: goto L_089BC224;
    case 33u: goto L_089BC230;
    case 34u: goto L_089BC24C;
    case 35u: goto L_089BC270;
    case 36u: goto L_089BC280;
    case 37u: goto L_089BC28C;
    case 38u: goto L_089BC2A8;
    case 39u: goto L_089BC2CC;
    case 40u: goto L_089BC2DC;
    case 41u: goto L_089BC2E8;
    case 42u: goto L_089BC304;
    case 43u: goto L_089BC328;
    case 44u: goto L_089BC334;
    case 45u: goto L_089BC340;
    case 46u: goto L_089BC34C;
    case 47u: goto L_089BC35C;
    case 48u: goto L_089BC368;
    case 49u: goto L_089BC374;
    case 50u: goto L_089BC390;
    case 51u: goto L_089BC39C;
    case 52u: goto L_089BC3C0;
    case 53u: goto L_089BC3CC;
    case 54u: goto L_089BC3D8;
    case 55u: goto L_089BC3E4;
    case 56u: goto L_089BC3F4;
    case 57u: goto L_089BC400;
    case 58u: goto L_089BC40C;
    case 59u: goto L_089BC428;
    case 60u: goto L_089BC434;
    case 61u: goto L_089BC458;
    case 62u: goto L_089BC464;
    case 63u: goto L_089BC470;
    case 64u: goto L_089BC47C;
    case 65u: goto L_089BC48C;
    case 66u: goto L_089BC4A8;
    case 67u: goto L_089BC4B4;
    case 68u: goto L_089BC4C0;
    case 69u: goto L_089BC4D4;
    case 70u: goto L_089BC4F8;
    case 71u: goto L_089BC518;
    case 72u: goto L_089BC53C;
    case 73u: goto L_089BC548;
    case 74u: goto L_089BC554;
    case 75u: goto L_089BC560;
    case 76u: goto L_089BC570;
    case 77u: goto L_089BC57C;
    case 78u: goto L_089BC588;
    case 79u: goto L_089BC5A4;
    case 80u: goto L_089BC5C8;
    case 81u: goto L_089BC5E8;
    case 82u: goto L_089BC60C;
    case 83u: goto L_089BC618;
    case 84u: goto L_089BC624;
    case 85u: goto L_089BC630;
    case 86u: goto L_089BC640;
    case 87u: goto L_089BC64C;
    case 88u: goto L_089BC658;
    case 89u: goto L_089BC674;
    case 90u: goto L_089BC698;
    case 91u: goto L_089BC6A8;
    case 92u: goto L_089BC6B4;
    case 93u: goto L_089BC6C0;
    case 94u: goto L_089BC6DC;
    case 95u: goto L_089BC700;
    case 96u: goto L_089BC70C;
    case 97u: goto L_089BC718;
    case 98u: goto L_089BC724;
    case 99u: goto L_089BC734;
    case 100u: goto L_089BC740;
    case 101u: goto L_089BC750;
    case 102u: goto L_089BC760;
    case 103u: goto L_089BC77C;
    case 104u: goto L_089BC7A0;
    case 105u: goto L_089BC7B0;
    case 106u: goto L_089BC7BC;
    case 107u: goto L_089BC7C8;
    case 108u: goto L_089BC7E8;
    case 109u: goto L_089BC80C;
    case 110u: goto L_089BC818;
    case 111u: goto L_089BC824;
    case 112u: goto L_089BC830;
    case 113u: goto L_089BC83C;
    case 114u: goto L_089BC84C;
    case 115u: goto L_089BC85C;
    case 116u: goto L_089BC868;
    case 117u: goto L_089BC884;
    case 118u: goto L_089BC8A8;
    case 119u: goto L_089BC8B8;
    case 120u: goto L_089BC8C4;
    case 121u: goto L_089BC8D0;
    case 122u: goto L_089BC8EC;
    case 123u: goto L_089BC910;
    case 124u: goto L_089BC91C;
    case 125u: goto L_089BC928;
    case 126u: goto L_089BC934;
    case 127u: goto L_089BC944;
    case 128u: goto L_089BC954;
    case 129u: goto L_089BC960;
    case 130u: goto L_089BC96C;
    case 131u: goto L_089BC978;
    case 132u: goto L_089BC984;
    case 133u: goto L_089BC9A0;
    case 134u: goto L_089BC9C4;
    case 135u: goto L_089BC9D0;
    case 136u: goto L_089BC9DC;
    case 137u: goto L_089BC9E8;
    case 138u: goto L_089BCA04;
    case 139u: goto L_089BCA28;
    case 140u: goto L_089BCA38;
    case 141u: goto L_089BCA44;
    case 142u: goto L_089BCA60;
    case 143u: goto L_089BCA84;
    case 144u: goto L_089BCA90;
    case 145u: goto L_089BCA9C;
    case 146u: goto L_089BCAAC;
    case 147u: goto L_089BCAB8;
    case 148u: goto L_089BCAC4;
    case 149u: goto L_089BCAE0;
    case 150u: goto L_089BCB04;
    case 151u: goto L_089BCB14;
    case 152u: goto L_089BCB20;
    case 153u: goto L_089BCB2C;
    case 154u: goto L_089BCB38;
    case 155u: goto L_089BCB44;
    case 156u: goto L_089BCB60;
    case 157u: goto L_089BCB84;
    case 158u: goto L_089BCB90;
    case 159u: goto L_089BCB9C;
    case 160u: goto L_089BCBA8;
    case 161u: goto L_089BCBB4;
    case 162u: goto L_089BCBC0;
    case 163u: goto L_089BCBDC;
    case 164u: goto L_089BCC00;
    case 165u: goto L_089BCC10;
    case 166u: goto L_089BCC1C;
    case 167u: goto L_089BCC28;
    case 168u: goto L_089BCC34;
    case 169u: goto L_089BCC40;
    case 170u: goto L_089BCC4C;
    case 171u: goto L_089BCC68;
    case 172u: goto L_089BCC90;
    case 173u: goto L_089BCC9C;
    case 174u: goto L_089BCCA8;
    case 175u: goto L_089BCCB4;
    case 176u: goto L_089BCCC0;
    case 177u: goto L_089BCCCC;
    case 178u: goto L_089BCCDC;
    case 179u: goto L_089BCCEC;
    case 180u: goto L_089BCCFC;
    case 181u: goto L_089BCD08;
    case 182u: goto L_089BCD14;
    case 183u: goto L_089BCD20;
    case 184u: goto L_089BCD40;
    case 185u: goto L_089BCD64;
    case 186u: goto L_089BCD84;
    case 187u: goto L_089BCDA8;
    case 188u: goto L_089BCDB4;
    case 189u: goto L_089BCDC0;
    case 190u: goto L_089BCDDC;
    case 191u: goto L_089BCE0C;
    case 192u: goto L_089BCE18;
    case 193u: goto L_089BCE24;
    case 194u: goto L_089BCE34;
    case 195u: goto L_089BCE3C;
    case 196u: goto L_089BCE48;
    case 197u: goto L_089BCE50;
    case 198u: goto L_089BCE6C;
    case 199u: goto L_089BCE90;
    case 200u: goto L_089BCE9C;
    case 201u: goto L_089BCEB8;
    case 202u: goto L_089BCEDC;
    case 203u: goto L_089BCEE8;
    case 204u: goto L_089BCEF4;
    case 205u: goto L_089BCF00;
    case 206u: goto L_089BCF10;
    case 207u: goto L_089BCF2C;
    case 208u: goto L_089BCF38;
    case 209u: goto L_089BCF44;
    case 210u: goto L_089BCF58;
    case 211u: goto L_089BCF7C;
    case 212u: goto L_089BCF8C;
    case 213u: goto L_089BCF98;
    case 214u: goto L_089BCFB4;
    case 215u: goto L_089BCFD8;
    case 216u: goto L_089BCFE4;
    case 217u: goto L_089BCFF0;
    case 218u: goto L_089BCFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089BC000:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC00Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(396));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC00Cu) goto L_089BC00C;
    return;
L_089BC00C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC018u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC018u) goto L_089BC018;
    return;
L_089BC018:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC024u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(404));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC024u) goto L_089BC024;
    return;
L_089BC024:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC030u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(408));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC030u) goto L_089BC030;
    return;
L_089BC030:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(412));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BC04C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC070u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC070u) goto L_089BC070;
    return;
L_089BC070:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC07Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC07Cu) goto L_089BC07C;
    return;
L_089BC07C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC088u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC088u) goto L_089BC088;
    return;
L_089BC088:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC094u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC094u) goto L_089BC094;
    return;
L_089BC094:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC0A4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC0A4u) goto L_089BC0A4;
    return;
L_089BC0A4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC0B0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC0B0u) goto L_089BC0B0;
    return;
L_089BC0B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC0BCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC0BCu) goto L_089BC0BC;
    return;
L_089BC0BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC0C8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC0C8u) goto L_089BC0C8;
    return;
L_089BC0C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC0D4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BC0D4u) goto L_089BC0D4;
    return;
L_089BC0D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BC0F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC114u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC114u) goto L_089BC114;
    return;
L_089BC114:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BC124u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC124u) goto L_089BC124;
    return;
L_089BC124:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC130u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC130u) goto L_089BC130;
    return;
L_089BC130:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BC14C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC170u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC170u) goto L_089BC170;
    return;
L_089BC170:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC17Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC17Cu) goto L_089BC17C;
    return;
L_089BC17C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC188u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC188u) goto L_089BC188;
    return;
L_089BC188:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC194u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC194u) goto L_089BC194;
    return;
L_089BC194:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089BC1A4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC1A4u) goto L_089BC1A4;
    return;
L_089BC1A4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[31] = (0x089BC1B4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC1B4u) goto L_089BC1B4;
    return;
L_089BC1B4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC1C0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC1C0u) goto L_089BC1C0;
    return;
L_089BC1C0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC1CCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(324));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BC1CCu) goto L_089BC1CC;
    return;
L_089BC1CC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BC1E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BC1F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC218u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC218u) goto L_089BC218;
    return;
L_089BC218:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC224u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC224u) goto L_089BC224;
    return;
L_089BC224:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC230u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC230u) goto L_089BC230;
    return;
L_089BC230:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BC24C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC270u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC270u) goto L_089BC270;
    return;
L_089BC270:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BC280u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC280u) goto L_089BC280;
    return;
L_089BC280:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC28Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC28Cu) goto L_089BC28C;
    return;
L_089BC28C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BC2A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC2CCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC2CCu) goto L_089BC2CC;
    return;
L_089BC2CC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BC2DCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC2DCu) goto L_089BC2DC;
    return;
L_089BC2DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC2E8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC2E8u) goto L_089BC2E8;
    return;
L_089BC2E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BC304:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC328u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC328u) goto L_089BC328;
    return;
L_089BC328:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC334u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC334u) goto L_089BC334;
    return;
L_089BC334:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC340u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC340u) goto L_089BC340;
    return;
L_089BC340:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC34Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC34Cu) goto L_089BC34C;
    return;
L_089BC34C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1000));
    aot_gpr[31] = (0x089BC35Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC35Cu) goto L_089BC35C;
    return;
L_089BC35C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC368u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC368u) goto L_089BC368;
    return;
L_089BC368:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC374u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1032));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BC374u) goto L_089BC374;
    return;
L_089BC374:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BC390:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BC39C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC3C0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC3C0u) goto L_089BC3C0;
    return;
L_089BC3C0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC3CCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC3CCu) goto L_089BC3CC;
    return;
L_089BC3CC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC3D8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC3D8u) goto L_089BC3D8;
    return;
L_089BC3D8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC3E4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC3E4u) goto L_089BC3E4;
    return;
L_089BC3E4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089BC3F4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC3F4u) goto L_089BC3F4;
    return;
L_089BC3F4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC400u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC400u) goto L_089BC400;
    return;
L_089BC400:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC40Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BC40Cu) goto L_089BC40C;
    return;
L_089BC40C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BC428:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BC434:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC458u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC458u) goto L_089BC458;
    return;
L_089BC458:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC464u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC464u) goto L_089BC464;
    return;
L_089BC464:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC470u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC470u) goto L_089BC470;
    return;
L_089BC470:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC47Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC47Cu) goto L_089BC47C;
    return;
L_089BC47C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC48Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC48Cu) goto L_089BC48C;
    return;
L_089BC48C:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(140));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x089BC4A8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0438_entry, 438u, 52u, 0x089BA5ACu>(ctx, &aot_mem) && ctx.pc == 0x089BC4A8u) goto L_089BC4A8;
    return;
L_089BC4A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC4B4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BC4B4u) goto L_089BC4B4;
    return;
L_089BC4B4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC4C0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC4C0u) goto L_089BC4C0;
    return;
L_089BC4C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC4D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC4F8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC4F8u) goto L_089BC4F8;
    return;
L_089BC4F8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BC518:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC53Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC53Cu) goto L_089BC53C;
    return;
L_089BC53C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC548u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC548u) goto L_089BC548;
    return;
L_089BC548:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC554u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC554u) goto L_089BC554;
    return;
L_089BC554:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC560u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC560u) goto L_089BC560;
    return;
L_089BC560:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089BC570u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC570u) goto L_089BC570;
    return;
L_089BC570:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC57Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC57Cu) goto L_089BC57C;
    return;
L_089BC57C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC588u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BC588u) goto L_089BC588;
    return;
L_089BC588:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BC5A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC5C8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC5C8u) goto L_089BC5C8;
    return;
L_089BC5C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BC5E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC60Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC60Cu) goto L_089BC60C;
    return;
L_089BC60C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC618u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC618u) goto L_089BC618;
    return;
L_089BC618:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC624u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC624u) goto L_089BC624;
    return;
L_089BC624:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC630u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC630u) goto L_089BC630;
    return;
L_089BC630:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089BC640u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC640u) goto L_089BC640;
    return;
L_089BC640:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC64Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC64Cu) goto L_089BC64C;
    return;
L_089BC64C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC658u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BC658u) goto L_089BC658;
    return;
L_089BC658:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BC674:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC698u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC698u) goto L_089BC698;
    return;
L_089BC698:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[31] = (0x089BC6A8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC6A8u) goto L_089BC6A8;
    return;
L_089BC6A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC6B4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC6B4u) goto L_089BC6B4;
    return;
L_089BC6B4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC6C0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC6C0u) goto L_089BC6C0;
    return;
L_089BC6C0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BC6DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC700u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC700u) goto L_089BC700;
    return;
L_089BC700:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC70Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC70Cu) goto L_089BC70C;
    return;
L_089BC70C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC718u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC718u) goto L_089BC718;
    return;
L_089BC718:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC724u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC724u) goto L_089BC724;
    return;
L_089BC724:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089BC734u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC734u) goto L_089BC734;
    return;
L_089BC734:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC740u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC740u) goto L_089BC740;
    return;
L_089BC740:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    aot_gpr[31] = (0x089BC750u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC750u) goto L_089BC750;
    return;
L_089BC750:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x089BC760u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC760u) goto L_089BC760;
    return;
L_089BC760:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(356));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BC77C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC7A0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC7A0u) goto L_089BC7A0;
    return;
L_089BC7A0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC7B0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC7B0u) goto L_089BC7B0;
    return;
L_089BC7B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC7BCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC7BCu) goto L_089BC7BC;
    return;
L_089BC7BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC7C8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC7C8u) goto L_089BC7C8;
    return;
L_089BC7C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BC7E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC80Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC80Cu) goto L_089BC80C;
    return;
L_089BC80C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC818u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC818u) goto L_089BC818;
    return;
L_089BC818:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC824u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC824u) goto L_089BC824;
    return;
L_089BC824:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC830u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC830u) goto L_089BC830;
    return;
L_089BC830:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC83Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC83Cu) goto L_089BC83C;
    return;
L_089BC83C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x089BC84Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC84Cu) goto L_089BC84C;
    return;
L_089BC84C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    aot_gpr[31] = (0x089BC85Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC85Cu) goto L_089BC85C;
    return;
L_089BC85C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC868u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC868u) goto L_089BC868;
    return;
L_089BC868:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BC884:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC8A8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC8A8u) goto L_089BC8A8;
    return;
L_089BC8A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[31] = (0x089BC8B8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC8B8u) goto L_089BC8B8;
    return;
L_089BC8B8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC8C4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC8C4u) goto L_089BC8C4;
    return;
L_089BC8C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC8D0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC8D0u) goto L_089BC8D0;
    return;
L_089BC8D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BC8EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC910u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC910u) goto L_089BC910;
    return;
L_089BC910:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC91Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC91Cu) goto L_089BC91C;
    return;
L_089BC91C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC928u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC928u) goto L_089BC928;
    return;
L_089BC928:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC934u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC934u) goto L_089BC934;
    return;
L_089BC934:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089BC944u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC944u) goto L_089BC944;
    return;
L_089BC944:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(600));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC954u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC954u) goto L_089BC954;
    return;
L_089BC954:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC960u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC960u) goto L_089BC960;
    return;
L_089BC960:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC96Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(664));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC96Cu) goto L_089BC96C;
    return;
L_089BC96C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC978u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(668));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC978u) goto L_089BC978;
    return;
L_089BC978:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC984u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(672));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BC984u) goto L_089BC984;
    return;
L_089BC984:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BC9A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BC9C4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BC9C4u) goto L_089BC9C4;
    return;
L_089BC9C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC9D0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC9D0u) goto L_089BC9D0;
    return;
L_089BC9D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC9DCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC9DCu) goto L_089BC9DC;
    return;
L_089BC9DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC9E8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BC9E8u) goto L_089BC9E8;
    return;
L_089BC9E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BCA04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCA28u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCA28u) goto L_089BCA28;
    return;
L_089BCA28:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BCA38u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCA38u) goto L_089BCA38;
    return;
L_089BCA38:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCA44u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCA44u) goto L_089BCA44;
    return;
L_089BCA44:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BCA60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCA84u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCA84u) goto L_089BCA84;
    return;
L_089BCA84:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCA90u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCA90u) goto L_089BCA90;
    return;
L_089BCA90:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCA9Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCA9Cu) goto L_089BCA9C;
    return;
L_089BCA9C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089BCAACu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCAACu) goto L_089BCAAC;
    return;
L_089BCAAC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCAB8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCAB8u) goto L_089BCAB8;
    return;
L_089BCAB8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCAC4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BCAC4u) goto L_089BCAC4;
    return;
L_089BCAC4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BCAE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCB04u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCB04u) goto L_089BCB04;
    return;
L_089BCB04:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCB14u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCB14u) goto L_089BCB14;
    return;
L_089BCB14:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCB20u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCB20u) goto L_089BCB20;
    return;
L_089BCB20:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCB2Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCB2Cu) goto L_089BCB2C;
    return;
L_089BCB2C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCB38u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCB38u) goto L_089BCB38;
    return;
L_089BCB38:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCB44u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCB44u) goto L_089BCB44;
    return;
L_089BCB44:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BCB60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCB84u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCB84u) goto L_089BCB84;
    return;
L_089BCB84:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCB90u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCB90u) goto L_089BCB90;
    return;
L_089BCB90:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCB9Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCB9Cu) goto L_089BCB9C;
    return;
L_089BCB9C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCBA8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCBA8u) goto L_089BCBA8;
    return;
L_089BCBA8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCBB4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCBB4u) goto L_089BCBB4;
    return;
L_089BCBB4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCBC0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BCBC0u) goto L_089BCBC0;
    return;
L_089BCBC0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BCBDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCC00u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCC00u) goto L_089BCC00;
    return;
L_089BCC00:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCC10u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCC10u) goto L_089BCC10;
    return;
L_089BCC10:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCC1Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCC1Cu) goto L_089BCC1C;
    return;
L_089BCC1C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCC28u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCC28u) goto L_089BCC28;
    return;
L_089BCC28:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCC34u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCC34u) goto L_089BCC34;
    return;
L_089BCC34:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCC40u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCC40u) goto L_089BCC40;
    return;
L_089BCC40:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCC4Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCC4Cu) goto L_089BCC4C;
    return;
L_089BCC4C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BCC68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCC90u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCC90u) goto L_089BCC90;
    return;
L_089BCC90:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BCC9Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCC9Cu) goto L_089BCC9C;
    return;
L_089BCC9C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BCCA8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCCA8u) goto L_089BCCA8;
    return;
L_089BCCA8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BCCB4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCCB4u) goto L_089BCCB4;
    return;
L_089BCCB4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BCCC0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCCC0u) goto L_089BCCC0;
    return;
L_089BCCC0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BCCCCu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCCCCu) goto L_089BCCCC;
    return;
L_089BCCCC:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BCCDCu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCCDCu) goto L_089BCCDC;
    return;
L_089BCCDC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089BCCECu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(600));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCCECu) goto L_089BCCEC;
    return;
L_089BCCEC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(600));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BCCFCu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCCFCu) goto L_089BCCFC;
    return;
L_089BCCFC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BCD08u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCD08u) goto L_089BCD08;
    return;
L_089BCD08:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BCD14u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1244));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BCD14u) goto L_089BCD14;
    return;
L_089BCD14:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BCD20u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCD20u) goto L_089BCD20;
    return;
L_089BCD20:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1248));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BCD40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCD64u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCD64u) goto L_089BCD64;
    return;
L_089BCD64:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BCD84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCDA8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCDA8u) goto L_089BCDA8;
    return;
L_089BCDA8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCDB4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCDB4u) goto L_089BCDB4;
    return;
L_089BCDB4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCDC0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCDC0u) goto L_089BCDC0;
    return;
L_089BCDC0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BCDDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(400));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCE0Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCE0Cu) goto L_089BCE0C;
    return;
L_089BCE0C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089BCE18u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCE18u) goto L_089BCE18;
    return;
L_089BCE18:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x089BCE24u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCE24u) goto L_089BCE24;
    return;
L_089BCE24:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089BCE34u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCE34u) goto L_089BCE34;
    return;
L_089BCE34:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[17]);
    goto L_089BCE3C;
L_089BCE3C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089BCE48u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCE48u) goto L_089BCE48;
    return;
L_089BCE48:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[19];
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089BCE3C;
      }
      goto L_089BCE50;
    }
L_089BCE50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BCE6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCE90u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCE90u) goto L_089BCE90;
    return;
L_089BCE90:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCE9Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCE9Cu) goto L_089BCE9C;
    return;
L_089BCE9C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BCEB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCEDCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCEDCu) goto L_089BCEDC;
    return;
L_089BCEDC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCEE8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCEE8u) goto L_089BCEE8;
    return;
L_089BCEE8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCEF4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCEF4u) goto L_089BCEF4;
    return;
L_089BCEF4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCF00u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCF00u) goto L_089BCF00;
    return;
L_089BCF00:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCF10u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCF10u) goto L_089BCF10;
    return;
L_089BCF10:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(140));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x089BCF2Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0438_entry, 438u, 52u, 0x089BA5ACu>(ctx, &aot_mem) && ctx.pc == 0x089BCF2Cu) goto L_089BCF2C;
    return;
L_089BCF2C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCF38u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BCF38u) goto L_089BCF38;
    return;
L_089BCF38:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCF44u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCF44u) goto L_089BCF44;
    return;
L_089BCF44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BCF58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCF7Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCF7Cu) goto L_089BCF7C;
    return;
L_089BCF7C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BCF8Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCF8Cu) goto L_089BCF8C;
    return;
L_089BCF8C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCF98u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCF98u) goto L_089BCF98;
    return;
L_089BCF98:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BCFB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BCFD8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BCFD8u) goto L_089BCFD8;
    return;
L_089BCFD8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCFE4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BCFE4u) goto L_089BCFE4;
    return;
L_089BCFE4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCFF0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCFF0u) goto L_089BCFF0;
    return;
L_089BCFF0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BCFFCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BCFFCu) goto L_089BCFFC;
    return;
L_089BCFFC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = 0x089BD000u; return;
}

void recomp_unit_0440(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0440_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_440(Runtime &runtime) {
    runtime.register_generated_unit(440u, 0x089BC000u, 4096u, &recomp_unit_0440, &recomp_unit_0440_entry);
    runtime.register_function(0x089BC000u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC00Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC018u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC024u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC030u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC04Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC070u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC07Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC088u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC094u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC0A4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC0B0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC0BCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC0C8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC0D4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC0F0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC114u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC124u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC130u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC14Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC170u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC17Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC188u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC194u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC1A4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC1B4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC1C0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC1CCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC1E8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC1F4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC218u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC224u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC230u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC24Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC270u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC280u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC28Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC2A8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC2CCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC2DCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC2E8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC304u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC328u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC334u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC340u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC34Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC35Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC368u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC374u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC390u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC39Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC3C0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC3CCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC3D8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC3E4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC3F4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC400u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC40Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC428u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC434u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC458u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC464u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC470u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC47Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC48Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC4A8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC4B4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC4C0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC4D4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC4F8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC518u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC53Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC548u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC554u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC560u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC570u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC57Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC588u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC5A4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC5C8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC5E8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC60Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC618u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC624u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC630u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC640u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC64Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC658u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC674u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC698u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC6A8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC6B4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC6C0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC6DCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC700u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC70Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC718u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC724u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC734u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC740u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC750u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC760u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC77Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC7A0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC7B0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC7BCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC7C8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC7E8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC80Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC818u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC824u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC830u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC83Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC84Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC85Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC868u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC884u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC8A8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC8B8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC8C4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC8D0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC8ECu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC910u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC91Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC928u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC934u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC944u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC954u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC960u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC96Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC978u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC984u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC9A0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC9C4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC9D0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC9DCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BC9E8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCA04u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCA28u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCA38u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCA44u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCA60u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCA84u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCA90u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCA9Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCAACu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCAB8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCAC4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCAE0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCB04u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCB14u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCB20u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCB2Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCB38u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCB44u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCB60u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCB84u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCB90u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCB9Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCBA8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCBB4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCBC0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCBDCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCC00u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCC10u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCC1Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCC28u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCC34u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCC40u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCC4Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCC68u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCC90u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCC9Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCCA8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCCB4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCCC0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCCCCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCCDCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCCECu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCCFCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCD08u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCD14u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCD20u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCD40u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCD64u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCD84u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCDA8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCDB4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCDC0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCDDCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCE0Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCE18u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCE24u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCE34u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCE3Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCE48u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCE50u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCE6Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCE90u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCE9Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCEB8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCEDCu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCEE8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCEF4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCF00u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCF10u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCF2Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCF38u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCF44u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCF58u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCF7Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCF8Cu, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCF98u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCFB4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCFD8u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCFE4u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCFF0u, &recomp_unit_0440, "recomp_unit_0440");
    runtime.register_function(0x089BCFFCu, &recomp_unit_0440, "recomp_unit_0440");
}
} // namespace psprecomp
