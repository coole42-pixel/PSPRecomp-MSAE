#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0466[1021] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12,
    0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29,
    0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35,
    0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 45, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 61, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0,
    0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 111, 112, 0, 0, 0, 0, 0,
    113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    119, 0, 0, 120, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 124, 125, 0, 126, 127, 0, 0, 128, 129, 0, 130, 131, 0, 0, 0, 0, 0,
    0, 132, 133, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 139, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0,
    144, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167,
    0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 172, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 178, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0,
    0, 184, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 195,
    0, 0, 0, 196, 0, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 201, 202, 0, 203, 0, 204, 0, 0, 205, 0, 206,
};
void recomp_unit_0466_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089D6000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0466[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D6000;
    case 2u: goto L_089D6008;
    case 3u: goto L_089D601C;
    case 4u: goto L_089D6038;
    case 5u: goto L_089D6054;
    case 6u: goto L_089D6070;
    case 7u: goto L_089D608C;
    case 8u: goto L_089D60A8;
    case 9u: goto L_089D60C4;
    case 10u: goto L_089D60D8;
    case 11u: goto L_089D60E8;
    case 12u: goto L_089D60FC;
    case 13u: goto L_089D6104;
    case 14u: goto L_089D6118;
    case 15u: goto L_089D6134;
    case 16u: goto L_089D6158;
    case 17u: goto L_089D6174;
    case 18u: goto L_089D6188;
    case 19u: goto L_089D6198;
    case 20u: goto L_089D61AC;
    case 21u: goto L_089D61B4;
    case 22u: goto L_089D61DC;
    case 23u: goto L_089D621C;
    case 24u: goto L_089D6224;
    case 25u: goto L_089D624C;
    case 26u: goto L_089D6264;
    case 27u: goto L_089D626C;
    case 28u: goto L_089D6274;
    case 29u: goto L_089D627C;
    case 30u: goto L_089D628C;
    case 31u: goto L_089D6298;
    case 32u: goto L_089D62B4;
    case 33u: goto L_089D62D0;
    case 34u: goto L_089D62E8;
    case 35u: goto L_089D62FC;
    case 36u: goto L_089D6304;
    case 37u: goto L_089D630C;
    case 38u: goto L_089D6320;
    case 39u: goto L_089D6328;
    case 40u: goto L_089D6338;
    case 41u: goto L_089D6350;
    case 42u: goto L_089D638C;
    case 43u: goto L_089D6394;
    case 44u: goto L_089D639C;
    case 45u: goto L_089D63B0;
    case 46u: goto L_089D63B4;
    case 47u: goto L_089D63DC;
    case 48u: goto L_089D63F0;
    case 49u: goto L_089D63F8;
    case 50u: goto L_089D6414;
    case 51u: goto L_089D6424;
    case 52u: goto L_089D6464;
    case 53u: goto L_089D6478;
    case 54u: goto L_089D64C4;
    case 55u: goto L_089D64F0;
    case 56u: goto L_089D64F8;
    case 57u: goto L_089D6500;
    case 58u: goto L_089D6548;
    case 59u: goto L_089D655C;
    case 60u: goto L_089D6568;
    case 61u: goto L_089D656C;
    case 62u: goto L_089D658C;
    case 63u: goto L_089D6598;
    case 64u: goto L_089D65A4;
    case 65u: goto L_089D65D8;
    case 66u: goto L_089D65E0;
    case 67u: goto L_089D65F4;
    case 68u: goto L_089D6600;
    case 69u: goto L_089D6634;
    case 70u: goto L_089D663C;
    case 71u: goto L_089D6668;
    case 72u: goto L_089D6684;
    case 73u: goto L_089D66A0;
    case 74u: goto L_089D66AC;
    case 75u: goto L_089D66BC;
    case 76u: goto L_089D66C8;
    case 77u: goto L_089D66D4;
    case 78u: goto L_089D66E0;
    case 79u: goto L_089D66EC;
    case 80u: goto L_089D6700;
    case 81u: goto L_089D6714;
    case 82u: goto L_089D6720;
    case 83u: goto L_089D672C;
    case 84u: goto L_089D673C;
    case 85u: goto L_089D6748;
    case 86u: goto L_089D6758;
    case 87u: goto L_089D6760;
    case 88u: goto L_089D6780;
    case 89u: goto L_089D6790;
    case 90u: goto L_089D67B4;
    case 91u: goto L_089D67C8;
    case 92u: goto L_089D6800;
    case 93u: goto L_089D6804;
    case 94u: goto L_089D680C;
    case 95u: goto L_089D6814;
    case 96u: goto L_089D6848;
    case 97u: goto L_089D685C;
    case 98u: goto L_089D689C;
    case 99u: goto L_089D68B4;
    case 100u: goto L_089D68BC;
    case 101u: goto L_089D68C4;
    case 102u: goto L_089D68E4;
    case 103u: goto L_089D68F0;
    case 104u: goto L_089D6904;
    case 105u: goto L_089D6914;
    case 106u: goto L_089D6924;
    case 107u: goto L_089D6938;
    case 108u: goto L_089D6948;
    case 109u: goto L_089D6950;
    case 110u: goto L_089D6958;
    case 111u: goto L_089D6964;
    case 112u: goto L_089D6968;
    case 113u: goto L_089D6980;
    case 114u: goto L_089D6988;
    case 115u: goto L_089D6990;
    case 116u: goto L_089D69B8;
    case 117u: goto L_089D69C0;
    case 118u: goto L_089D69F0;
    case 119u: goto L_089D6A00;
    case 120u: goto L_089D6A0C;
    case 121u: goto L_089D6A10;
    case 122u: goto L_089D6A18;
    case 123u: goto L_089D6A24;
    case 124u: goto L_089D6A3C;
    case 125u: goto L_089D6A40;
    case 126u: goto L_089D6A48;
    case 127u: goto L_089D6A4C;
    case 128u: goto L_089D6A58;
    case 129u: goto L_089D6A5C;
    case 130u: goto L_089D6A64;
    case 131u: goto L_089D6A68;
    case 132u: goto L_089D6A84;
    case 133u: goto L_089D6A88;
    case 134u: goto L_089D6A90;
    case 135u: goto L_089D6A98;
    case 136u: goto L_089D6AA0;
    case 137u: goto L_089D6AB4;
    case 138u: goto L_089D6AC8;
    case 139u: goto L_089D6ACC;
    case 140u: goto L_089D6ADC;
    case 141u: goto L_089D6AE4;
    case 142u: goto L_089D6AF0;
    case 143u: goto L_089D6AF8;
    case 144u: goto L_089D6B00;
    case 145u: goto L_089D6B08;
    case 146u: goto L_089D6B14;
    case 147u: goto L_089D6B1C;
    case 148u: goto L_089D6B30;
    case 149u: goto L_089D6B40;
    case 150u: goto L_089D6B80;
    case 151u: goto L_089D6B84;
    case 152u: goto L_089D6BB0;
    case 153u: goto L_089D6BB8;
    case 154u: goto L_089D6BC4;
    case 155u: goto L_089D6BCC;
    case 156u: goto L_089D6BE0;
    case 157u: goto L_089D6C14;
    case 158u: goto L_089D6C44;
    case 159u: goto L_089D6C50;
    case 160u: goto L_089D6C58;
    case 161u: goto L_089D6C74;
    case 162u: goto L_089D6C84;
    case 163u: goto L_089D6C8C;
    case 164u: goto L_089D6C94;
    case 165u: goto L_089D6CD0;
    case 166u: goto L_089D6CEC;
    case 167u: goto L_089D6CFC;
    case 168u: goto L_089D6D10;
    case 169u: goto L_089D6D1C;
    case 170u: goto L_089D6D28;
    case 171u: goto L_089D6D74;
    case 172u: goto L_089D6D78;
    case 173u: goto L_089D6D90;
    case 174u: goto L_089D6DAC;
    case 175u: goto L_089D6DB4;
    case 176u: goto L_089D6DC0;
    case 177u: goto L_089D6DCC;
    case 178u: goto L_089D6E1C;
    case 179u: goto L_089D6E20;
    case 180u: goto L_089D6E38;
    case 181u: goto L_089D6E40;
    case 182u: goto L_089D6E6C;
    case 183u: goto L_089D6E74;
    case 184u: goto L_089D6E84;
    case 185u: goto L_089D6E8C;
    case 186u: goto L_089D6E9C;
    case 187u: goto L_089D6EA4;
    case 188u: goto L_089D6ECC;
    case 189u: goto L_089D6EE0;
    case 190u: goto L_089D6F38;
    case 191u: goto L_089D6F3C;
    case 192u: goto L_089D6F58;
    case 193u: goto L_089D6F68;
    case 194u: goto L_089D6F74;
    case 195u: goto L_089D6F7C;
    case 196u: goto L_089D6F8C;
    case 197u: goto L_089D6F9C;
    case 198u: goto L_089D6FA4;
    case 199u: goto L_089D6FAC;
    case 200u: goto L_089D6FB4;
    case 201u: goto L_089D6FC8;
    case 202u: goto L_089D6FCC;
    case 203u: goto L_089D6FD4;
    case 204u: goto L_089D6FDC;
    case 205u: goto L_089D6FE8;
    case 206u: goto L_089D6FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D6000:
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 176u, 0x089D5C6Cu>(ctx, &aot_mem); return;
L_089D6008:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D601Cu);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x089D601Cu) goto L_089D601C;
    return;
L_089D601C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(428), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089D6038u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6038u) goto L_089D6038;
    return;
L_089D6038:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(436), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x089D6054u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6054u) goto L_089D6054;
    return;
L_089D6054:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(428)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(440), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x089D6070u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(444), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x089D6070u) goto L_089D6070;
    return;
L_089D6070:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(436)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(448), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x089D608Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(452), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x089D608Cu) goto L_089D608C;
    return;
L_089D608C:
    aot_gpr[7] = (aot_gpr[3] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(448)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089D60A8u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x089D60A8u) goto L_089D60A8;
    return;
L_089D60A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(440)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(444)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(456), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x089D60C4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(460), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x089D60C4u) goto L_089D60C4;
    return;
L_089D60C4:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(456)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(460)));
    aot_gpr[31] = (0x089D60D8u);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x089D60D8u) goto L_089D60D8;
    return;
L_089D60D8:
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(464), aot_gpr[2]);
    aot_gpr[31] = (0x089D60E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(468), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x089D60E8u) goto L_089D60E8;
    return;
L_089D60E8:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(464)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(468)));
    aot_gpr[31] = (0x089D60FCu);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 185u, 0x08A3FDA0u>(ctx, &aot_mem) && ctx.pc == 0x089D60FCu) goto L_089D60FC;
    return;
L_089D60FC:
    aot_gpr[4] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 176u, 0x089D5C6Cu>(ctx, &aot_mem); return;
L_089D6104:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D6118u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6118u) goto L_089D6118;
    return;
L_089D6118:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089D6134u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6134u) goto L_089D6134;
    return;
L_089D6134:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[3]);
    aot_gpr[31] = (0x089D6158u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x089D6158u) goto L_089D6158;
    return;
L_089D6158:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x089D6174u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(412), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x089D6174u) goto L_089D6174;
    return;
L_089D6174:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[31] = (0x089D6188u);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x089D6188u) goto L_089D6188;
    return;
L_089D6188:
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[2]);
    aot_gpr[31] = (0x089D6198u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x089D6198u) goto L_089D6198;
    return;
L_089D6198:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[31] = (0x089D61ACu);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 185u, 0x08A3FDA0u>(ctx, &aot_mem) && ctx.pc == 0x089D61ACu) goto L_089D61AC;
    return;
L_089D61AC:
    aot_gpr[4] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 176u, 0x089D5C6Cu>(ctx, &aot_mem); return;
L_089D61B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 196u, 0x089D5DD4u>(ctx, &aot_mem); return;
L_089D61DC:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr[4] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[3];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_fpr[1] = aot_fpr[1] - aot_fpr[4];
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 200u, 0x089D5E58u>(ctx, &aot_mem); return;
      }
      goto L_089D621C;
    }
L_089D621C:
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 176u, 0x089D5C6Cu>(ctx, &aot_mem); return;
L_089D6224:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[2] - aot_gpr[3]);
    if (aot_gpr[4] == 0u) aot_gpr[3] = (aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[4] = (0u < aot_gpr[3] ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 176u, 0x089D5C6Cu>(ctx, &aot_mem); return;
      }
      goto L_089D624C;
    }
L_089D624C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    aot_fpr[1] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 176u, 0x089D5C6Cu>(ctx, &aot_mem); return;
L_089D6264:
    aot_gpr[2] = (aot_gpr[2] & 255u);
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 101u, 0x089D5680u>(ctx, &aot_mem); return;
L_089D626C:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[2]))));
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 174u, 0x089D5C44u>(ctx, &aot_mem); return;
L_089D6274:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[2]))));
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 188u, 0x089D5D20u>(ctx, &aot_mem); return;
L_089D627C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[31] = (0x089D628Cu);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x089D628Cu) goto L_089D628C;
    return;
L_089D628C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 213u, 0x089D5F5Cu>(ctx, &aot_mem); return;
L_089D6298:
    aot_gpr[2] = (32768u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 176u, 0x089D5C6Cu>(ctx, &aot_mem); return;
L_089D62B4:
    aot_gpr[2] = (32768u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] & 255u);
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 176u, 0x089D5C6Cu>(ctx, &aot_mem); return;
L_089D62D0:
    aot_gpr[2] = (32768u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[3] < aot_gpr[6] ? 1u : 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 176u, 0x089D5C6Cu>(ctx, &aot_mem); return;
L_089D62E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089D62FCu);
    aot_gpr[7] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 164u, 0x08A3FC08u>(ctx, &aot_mem) && ctx.pc == 0x089D62FCu) goto L_089D62FC;
    return;
L_089D62FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 178u, 0x089D5C78u>(ctx, &aot_mem); return;
      }
      goto L_089D6304;
    }
L_089D6304:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 122u, 0x089D5814u>(ctx, &aot_mem); return;
L_089D630C:
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[1]) || std::isnan(aot_fpr[0])) && aot_fpr[1] == aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 122u, 0x089D5814u>(ctx, &aot_mem); return;
      }
      goto L_089D6320;
    }
L_089D6320:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 178u, 0x089D5C78u>(ctx, &aot_mem); return;
L_089D6328:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089D6338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D6338u) goto L_089D6338;
    return;
L_089D6338:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 93u, 0x089D558Cu>(ctx, &aot_mem); return;
L_089D6350:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D63B0;
      }
      goto L_089D638C;
    }
L_089D638C:
    aot_gpr[31] = (0x089D6394u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D6394u) goto L_089D6394;
    return;
L_089D6394:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D63B0;
      }
      goto L_089D639C;
    }
L_089D639C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1028)));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D63DC;
      }
      goto L_089D63B0;
    }
L_089D63B0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    goto L_089D63B4;
L_089D63B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D63DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D63F8;
      }
      goto L_089D63F0;
    }
L_089D63F0:
    aot_gpr[31] = (0x089D63F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 19u, 0x089D20C4u>(ctx, &aot_mem) && ctx.pc == 0x089D63F8u) goto L_089D63F8;
    return;
L_089D63F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x089D6414u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 93u, 0x089D558Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6414u) goto L_089D6414;
    return;
L_089D6414:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089D6424u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6424u) goto L_089D6424;
    return;
L_089D6424:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(304)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(13));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[22]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[7]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[29]);
    aot_gpr[31] = (0x089D6464u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6464u) goto L_089D6464;
    return;
L_089D6464:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1248)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D64F0;
      }
      goto L_089D6478;
    }
L_089D6478:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1252)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1248)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D64C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D64C4u) goto L_089D64C4;
    return;
L_089D64C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D64F0:
    aot_gpr[31] = (0x089D64F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 54u, 0x089D2320u>(ctx, &aot_mem) && ctx.pc == 0x089D64F8u) goto L_089D64F8;
    return;
L_089D64F8:
    aot_gpr[2] = (0u + 0u);
    goto L_089D63B4;
L_089D6500:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[23]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[23] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089D65A4;
      }
      goto L_089D6548;
    }
L_089D6548:
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(22284));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(304)));
    if (aot_gpr[22] == 0u) {
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(10));
        goto L_089D65A4;
    }
    goto L_089D655C;
L_089D655C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D65D8;
      }
      goto L_089D6568;
    }
L_089D6568:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_089D656C;
L_089D656C:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(22284));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[2] = (aot_gpr[3] << 6u);
    aot_gpr[3] = (aot_gpr[3] << 4u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D67C8;
      }
      goto L_089D658C;
    }
L_089D658C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089D6684;
      }
      goto L_089D6598;
    }
L_089D6598:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089D6684;
      }
      goto L_089D65A4;
    }
L_089D65A4:
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
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D65D8:
    if (aot_gpr[6] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_089D656C;
    }
    goto L_089D65E0;
L_089D65E0:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(164));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D65F4u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D65F4u) goto L_089D65F4;
    return;
L_089D65F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (0x089D6600u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 52u, 0x08985468u>(ctx, &aot_mem) && ctx.pc == 0x089D6600u) goto L_089D6600;
    return;
L_089D6600:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(9)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(352)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089D6634u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D6634u) goto L_089D6634;
    return;
L_089D6634:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(196));
    goto L_089D663C;
L_089D663C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[7];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089D663C;
      }
      goto L_089D6668;
    }
L_089D6668:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_089D6568;
L_089D6684:
    aot_gpr[30] = (2217u << 16u);
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(22282));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(20884));
    aot_gpr[31] = (0x089D66A0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089D66A0u) goto L_089D66A0;
    return;
L_089D66A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x089D66ACu);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 16u, 0x08986158u>(ctx, &aot_mem) && ctx.pc == 0x089D66ACu) goto L_089D66AC;
    return;
L_089D66AC:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089D66BCu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D66BCu) goto L_089D66BC;
    return;
L_089D66BC:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089D66C8u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D66C8u) goto L_089D66C8;
    return;
L_089D66C8:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089D66D4u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D66D4u) goto L_089D66D4;
    return;
L_089D66D4:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089D66E0u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D66E0u) goto L_089D66E0;
    return;
L_089D66E0:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089D66ECu);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D66ECu) goto L_089D66EC;
    return;
L_089D66EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D6700u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D6700u) goto L_089D6700;
    return;
L_089D6700:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089D6714u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D6714u) goto L_089D6714;
    return;
L_089D6714:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089D6720u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D6720u) goto L_089D6720;
    return;
L_089D6720:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089D672Cu);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D672Cu) goto L_089D672C;
    return;
L_089D672C:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x089D673Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089D673Cu) goto L_089D673C;
    return;
L_089D673C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) <= 0;
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089D6804;
      }
      goto L_089D6748;
    }
L_089D6748:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089D67C8;
      }
      goto L_089D6758;
    }
L_089D6758:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(4));
    goto L_089D6760;
L_089D6760:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089D6780u);
    aot_gpr[5] = (aot_gpr[3] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 229u, 0x089D4E40u>(ctx, &aot_mem) && ctx.pc == 0x089D6780u) goto L_089D6780;
    return;
L_089D6780:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D65A4;
      }
      goto L_089D6790;
    }
L_089D6790:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D6800;
      }
      goto L_089D67B4;
    }
L_089D67B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089D6760;
      }
      goto L_089D67C8;
    }
L_089D67C8:
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
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D6800:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    goto L_089D6804;
L_089D6804:
    aot_gpr[31] = (0x089D680Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089D680Cu) goto L_089D680C;
    return;
L_089D680C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089D6848;
      }
      goto L_089D6814;
    }
L_089D6814:
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
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D6848:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089D685Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D685Cu) goto L_089D685C;
    return;
L_089D685C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[30] + static_cast<std::uint32_t>(20884));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[23]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[2]);
    aot_gpr[31] = (0x089D689Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D689Cu) goto L_089D689C;
    return;
L_089D689C:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D6950;
      }
      goto L_089D68B4;
    }
L_089D68B4:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_089D6948;
      }
      goto L_089D68BC;
    }
L_089D68BC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089D68E4;
      }
      goto L_089D68C4;
    }
L_089D68C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[23] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089D65A4;
L_089D68E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[7] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D65A4;
      }
      goto L_089D68F0;
    }
L_089D68F0:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(104));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089D6904;
L_089D6904:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D6914u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 21u, 0x08985274u>(ctx, &aot_mem) && ctx.pc == 0x089D6914u) goto L_089D6914;
    return;
L_089D6914:
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D6938;
      }
      goto L_089D6924;
    }
L_089D6924:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[5] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089D6938;
L_089D6938:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D6904;
      }
      goto L_089D6948;
    }
L_089D6948:
    aot_gpr[7] = (aot_gpr[17] + 0u);
    goto L_089D65A4;
L_089D6950:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[7] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D65A4;
      }
      goto L_089D6958;
    }
L_089D6958:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1084)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_089D6988;
      }
      goto L_089D6964;
    }
L_089D6964:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26192)));
    goto L_089D6968;
L_089D6968:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[31] = (0x089D6980u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089D6980u) goto L_089D6980;
    return;
L_089D6980:
    aot_gpr[7] = (aot_gpr[17] + 0u);
    goto L_089D65A4;
L_089D6988:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26192)));
    goto L_089D6990;
L_089D6990:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1084)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26192)));
      if (branch_taken) {
          goto L_089D6990;
      }
      goto L_089D69B8;
    }
L_089D69B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26192)));
    goto L_089D6968;
L_089D69C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    if (aot_gpr[18] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_089D6A68;
    }
    goto L_089D69F0;
L_089D69F0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1028)));
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_089D6A68;
    }
    goto L_089D6A00;
L_089D6A00:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[20] = (2216u << 16u);
      if (branch_taken) {
          goto L_089D6A64;
      }
      goto L_089D6A0C;
    }
L_089D6A0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    goto L_089D6A10;
L_089D6A10:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089D6AE4;
    }
    goto L_089D6A18;
L_089D6A18:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
        goto L_089D6A40;
    }
    goto L_089D6A24;
L_089D6A24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D6B08;
      }
      goto L_089D6A3C;
    }
L_089D6A3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    goto L_089D6A40;
L_089D6A40:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089D6A84;
      }
      goto L_089D6A48;
    }
L_089D6A48:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089D6A4C;
L_089D6A4C:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089D6A58u);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 93u, 0x089D558Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6A58u) goto L_089D6A58;
    return;
L_089D6A58:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(84)));
    goto L_089D6A5C;
L_089D6A5C:
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
        goto L_089D6A10;
    }
    goto L_089D6A64;
L_089D6A64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089D6A68;
L_089D6A68:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089D6A84:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089D6A88;
L_089D6A88:
    aot_gpr[31] = (0x089D6A90u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D6A90u) goto L_089D6A90;
    return;
L_089D6A90:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D6AC8;
      }
      goto L_089D6A98;
    }
L_089D6A98:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[19];
    aot_gpr[3] = (aot_gpr[16] << 2u);
      if (branch_taken) {
          goto L_089D6AC8;
      }
      goto L_089D6AA0;
    }
L_089D6AA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
        goto L_089D6ACC;
    }
    goto L_089D6AB4;
L_089D6AB4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D6AF8;
      }
      goto L_089D6AC8;
    }
L_089D6AC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    goto L_089D6ACC;
L_089D6ACC:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (aot_gpr[18] + 0u);
        goto L_089D6A88;
    }
    goto L_089D6ADC;
L_089D6ADC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089D6A4C;
L_089D6AE4:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D6AF0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    goto L_089D6500;
L_089D6AF0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(84)));
    goto L_089D6A5C;
L_089D6AF8:
    aot_gpr[31] = (0x089D6B00u);
    // nop
    goto L_089D6500;
L_089D6B00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    goto L_089D6ACC;
L_089D6B08:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D6B14u);
    aot_gpr[6] = (0u + 0u);
    goto L_089D6500;
L_089D6B14:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(84)));
    goto L_089D6A5C;
L_089D6B1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089D6B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 62u, 0x089D23E4u>(ctx, &aot_mem) && ctx.pc == 0x089D6B30u) goto L_089D6B30;
    return;
L_089D6B30:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D6B40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[20]);
    aot_gpr[20] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    aot_gpr[17] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_089D6BB0;
      }
      goto L_089D6B80;
    }
L_089D6B80:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D6B84;
L_089D6B84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D6BB0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D6B84;
      }
      goto L_089D6BB8;
    }
L_089D6BB8:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089D6BC4u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D6BC4u) goto L_089D6BC4;
    return;
L_089D6BC4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D6C14;
      }
      goto L_089D6BCC;
    }
L_089D6BCC:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(108));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089D6BE0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6BE0u) goto L_089D6BE0;
    return;
L_089D6BE0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
        goto L_089D6C44;
    }
    goto L_089D6C14;
L_089D6C14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D6C44:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1256)));
        goto L_089D6C8C;
    }
    goto L_089D6C50;
L_089D6C50:
    aot_gpr[31] = (0x089D6C58u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 16u, 0x08986158u>(ctx, &aot_mem) && ctx.pc == 0x089D6C58u) goto L_089D6C58;
    return;
L_089D6C58:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[21]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    goto L_089D6C74;
L_089D6C74:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[31] = (0x089D6C84u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6C84u) goto L_089D6C84;
    return;
L_089D6C84:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    goto L_089D6B84;
L_089D6C8C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_089D6DB4;
      }
      goto L_089D6C94;
    }
L_089D6C94:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[31] = (0x089D6CD0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 16u, 0x08986158u>(ctx, &aot_mem) && ctx.pc == 0x089D6CD0u) goto L_089D6CD0;
    return;
L_089D6CD0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[21]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1256)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D6CECu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D6CECu) goto L_089D6CEC;
    return;
L_089D6CEC:
    aot_gpr[23] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[23] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_089D6D10;
      }
      goto L_089D6CFC;
    }
L_089D6CFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_089D6C74;
L_089D6D10:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[31] = (0x089D6D1Cu);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 19u, 0x089D20C4u>(ctx, &aot_mem) && ctx.pc == 0x089D6D1Cu) goto L_089D6D1C;
    return;
L_089D6D1C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1248)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_089D6E74;
      }
      goto L_089D6D28;
    }
L_089D6D28:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(304)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1252)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1248)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D6D74u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D6D74u) goto L_089D6D74;
    return;
L_089D6D74:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D6D78;
L_089D6D78:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    aot_gpr[31] = (0x089D6D90u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 93u, 0x089D558Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6D90u) goto L_089D6D90;
    return;
L_089D6D90:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x089D6DACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6DACu) goto L_089D6DAC;
    return;
L_089D6DAC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    goto L_089D6B84;
L_089D6DB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[31] = (0x089D6DC0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 19u, 0x089D20C4u>(ctx, &aot_mem) && ctx.pc == 0x089D6DC0u) goto L_089D6DC0;
    return;
L_089D6DC0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1248)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_089D6E8C;
      }
      goto L_089D6DCC;
    }
L_089D6DCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(304)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1252)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1248)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D6E1Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D6E1Cu) goto L_089D6E1C;
    return;
L_089D6E1C:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D6E20;
L_089D6E20:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    aot_gpr[31] = (0x089D6E38u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0465_entry, 465u, 93u, 0x089D558Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6E38u) goto L_089D6E38;
    return;
L_089D6E38:
    aot_gpr[31] = (0x089D6E40u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 16u, 0x08986158u>(ctx, &aot_mem) && ctx.pc == 0x089D6E40u) goto L_089D6E40;
    return;
L_089D6E40:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[31] = (0x089D6E6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6E6Cu) goto L_089D6E6C;
    return;
L_089D6E6C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    goto L_089D6B84;
L_089D6E74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089D6E84u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 54u, 0x089D2320u>(ctx, &aot_mem) && ctx.pc == 0x089D6E84u) goto L_089D6E84;
    return;
L_089D6E84:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D6D78;
L_089D6E8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089D6E9Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 54u, 0x089D2320u>(ctx, &aot_mem) && ctx.pc == 0x089D6E9Cu) goto L_089D6E9C;
    return;
L_089D6E9C:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D6E20;
L_089D6EA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1248)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[16] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_089D6F58;
      }
      goto L_089D6ECC;
    }
L_089D6ECC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D6FA4;
      }
      goto L_089D6EE0;
    }
L_089D6EE0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(304)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1252)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(10)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x089D6F38u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D6F38u) goto L_089D6F38;
    return;
L_089D6F38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089D6F3C;
L_089D6F3C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D6F58:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089D6F3C;
      }
      goto L_089D6F68;
    }
L_089D6F68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(10)));
    aot_gpr[31] = (0x089D6F74u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D6F74u) goto L_089D6F74;
    return;
L_089D6F74:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D6F38;
      }
      goto L_089D6F7C;
    }
L_089D6F7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D6FE8;
      }
      goto L_089D6F8C;
    }
L_089D6F8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(10)));
    aot_gpr[31] = (0x089D6F9Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 54u, 0x089D2320u>(ctx, &aot_mem) && ctx.pc == 0x089D6F9Cu) goto L_089D6F9C;
    return;
L_089D6F9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089D6F3C;
L_089D6FA4:
    aot_gpr[31] = (0x089D6FACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(10)));
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D6FACu) goto L_089D6FAC;
    return;
L_089D6FAC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1248)));
        goto L_089D6FCC;
    }
    goto L_089D6FB4;
L_089D6FB4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D6FD4;
      }
      goto L_089D6FC8;
    }
L_089D6FC8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1248)));
    goto L_089D6FCC;
L_089D6FCC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089D6EE0;
L_089D6FD4:
    aot_gpr[31] = (0x089D6FDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(10)));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 4u, 0x089D202Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6FDCu) goto L_089D6FDC;
    return;
L_089D6FDC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1248)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089D6EE0;
L_089D6FE8:
    aot_gpr[31] = (0x089D6FF0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(10)));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 4u, 0x089D202Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6FF0u) goto L_089D6FF0;
    return;
L_089D6FF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(10)));
    aot_gpr[31] = (0x089D7000u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    (void)rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 54u, 0x089D2320u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0466(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0466_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_466(Runtime &runtime) {
    runtime.register_generated_unit(466u, 0x089D6000u, 4096u, &recomp_unit_0466, &recomp_unit_0466_entry);
    runtime.register_function(0x089D6000u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6008u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D601Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6038u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6054u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6070u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D608Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D60A8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D60C4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D60D8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D60E8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D60FCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6104u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6118u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6134u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6158u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6174u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6188u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6198u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D61ACu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D61B4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D61DCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D621Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6224u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D624Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6264u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D626Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6274u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D627Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D628Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6298u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D62B4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D62D0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D62E8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D62FCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6304u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D630Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6320u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6328u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6338u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6350u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D638Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6394u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D639Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D63B0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D63B4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D63DCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D63F0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D63F8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6414u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6424u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6464u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6478u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D64C4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D64F0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D64F8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6500u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6548u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D655Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6568u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D656Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D658Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6598u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D65A4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D65D8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D65E0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D65F4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6600u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6634u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D663Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6668u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6684u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D66A0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D66ACu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D66BCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D66C8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D66D4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D66E0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D66ECu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6700u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6714u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6720u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D672Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D673Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6748u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6758u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6760u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6780u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6790u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D67B4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D67C8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6800u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6804u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D680Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6814u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6848u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D685Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D689Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D68B4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D68BCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D68C4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D68E4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D68F0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6904u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6914u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6924u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6938u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6948u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6950u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6958u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6964u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6968u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6980u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6988u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6990u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D69B8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D69C0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D69F0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A00u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A0Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A10u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A18u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A24u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A3Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A40u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A48u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A4Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A58u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A5Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A64u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A68u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A84u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A88u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A90u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6A98u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6AA0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6AB4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6AC8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6ACCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6ADCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6AE4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6AF0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6AF8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6B00u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6B08u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6B14u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6B1Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6B30u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6B40u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6B80u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6B84u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6BB0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6BB8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6BC4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6BCCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6BE0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6C14u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6C44u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6C50u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6C58u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6C74u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6C84u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6C8Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6C94u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6CD0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6CECu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6CFCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6D10u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6D1Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6D28u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6D74u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6D78u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6D90u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6DACu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6DB4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6DC0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6DCCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6E1Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6E20u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6E38u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6E40u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6E6Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6E74u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6E84u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6E8Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6E9Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6EA4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6ECCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6EE0u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6F38u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6F3Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6F58u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6F68u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6F74u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6F7Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6F8Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6F9Cu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6FA4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6FACu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6FB4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6FC8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6FCCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6FD4u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6FDCu, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6FE8u, &recomp_unit_0466, "recomp_unit_0466");
    runtime.register_function(0x089D6FF0u, &recomp_unit_0466, "recomp_unit_0466");
}
} // namespace psprecomp
