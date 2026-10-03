#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0201[1024] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 8, 0, 9, 0, 0, 10, 11, 0, 12, 0, 0, 13, 14, 0,
    15, 0, 0, 16, 17, 0, 18, 0, 0, 19, 20, 0, 21, 0, 0, 22, 23, 0, 24, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32,
    0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44,
    0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0,
    0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0,
    0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 93, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112,
    0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117,
    0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0,
    0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 156, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 163, 164,
    0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 171, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197,
};
void recomp_unit_0201_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088CD000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0201[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088CD000;
    case 2u: goto L_088CD014;
    case 3u: goto L_088CD050;
    case 4u: goto L_088CD0F4;
    case 5u: goto L_088CD110;
    case 6u: goto L_088CD13C;
    case 7u: goto L_088CD144;
    case 8u: goto L_088CD148;
    case 9u: goto L_088CD150;
    case 10u: goto L_088CD15C;
    case 11u: goto L_088CD160;
    case 12u: goto L_088CD168;
    case 13u: goto L_088CD174;
    case 14u: goto L_088CD178;
    case 15u: goto L_088CD180;
    case 16u: goto L_088CD18C;
    case 17u: goto L_088CD190;
    case 18u: goto L_088CD198;
    case 19u: goto L_088CD1A4;
    case 20u: goto L_088CD1A8;
    case 21u: goto L_088CD1B0;
    case 22u: goto L_088CD1BC;
    case 23u: goto L_088CD1C0;
    case 24u: goto L_088CD1C8;
    case 25u: goto L_088CD1D4;
    case 26u: goto L_088CD1E8;
    case 27u: goto L_088CD200;
    case 28u: goto L_088CD210;
    case 29u: goto L_088CD228;
    case 30u: goto L_088CD2DC;
    case 31u: goto L_088CD2E4;
    case 32u: goto L_088CD2FC;
    case 33u: goto L_088CD308;
    case 34u: goto L_088CD318;
    case 35u: goto L_088CD338;
    case 36u: goto L_088CD354;
    case 37u: goto L_088CD378;
    case 38u: goto L_088CD3A8;
    case 39u: goto L_088CD3D4;
    case 40u: goto L_088CD400;
    case 41u: goto L_088CD430;
    case 42u: goto L_088CD45C;
    case 43u: goto L_088CD468;
    case 44u: goto L_088CD47C;
    case 45u: goto L_088CD484;
    case 46u: goto L_088CD49C;
    case 47u: goto L_088CD4AC;
    case 48u: goto L_088CD4CC;
    case 49u: goto L_088CD4E8;
    case 50u: goto L_088CD504;
    case 51u: goto L_088CD51C;
    case 52u: goto L_088CD528;
    case 53u: goto L_088CD538;
    case 54u: goto L_088CD554;
    case 55u: goto L_088CD55C;
    case 56u: goto L_088CD564;
    case 57u: goto L_088CD578;
    case 58u: goto L_088CD5A4;
    case 59u: goto L_088CD5AC;
    case 60u: goto L_088CD5B4;
    case 61u: goto L_088CD5BC;
    case 62u: goto L_088CD5C4;
    case 63u: goto L_088CD5CC;
    case 64u: goto L_088CD5D4;
    case 65u: goto L_088CD5DC;
    case 66u: goto L_088CD5E4;
    case 67u: goto L_088CD5EC;
    case 68u: goto L_088CD5F4;
    case 69u: goto L_088CD5FC;
    case 70u: goto L_088CD604;
    case 71u: goto L_088CD624;
    case 72u: goto L_088CD630;
    case 73u: goto L_088CD638;
    case 74u: goto L_088CD64C;
    case 75u: goto L_088CD654;
    case 76u: goto L_088CD66C;
    case 77u: goto L_088CD678;
    case 78u: goto L_088CD690;
    case 79u: goto L_088CD69C;
    case 80u: goto L_088CD6B4;
    case 81u: goto L_088CD6C0;
    case 82u: goto L_088CD6D4;
    case 83u: goto L_088CD6DC;
    case 84u: goto L_088CD6E4;
    case 85u: goto L_088CD6EC;
    case 86u: goto L_088CD6F8;
    case 87u: goto L_088CD704;
    case 88u: goto L_088CD710;
    case 89u: goto L_088CD728;
    case 90u: goto L_088CD740;
    case 91u: goto L_088CD758;
    case 92u: goto L_088CD770;
    case 93u: goto L_088CD784;
    case 94u: goto L_088CD788;
    case 95u: goto L_088CD790;
    case 96u: goto L_088CD7B0;
    case 97u: goto L_088CD7B8;
    case 98u: goto L_088CD7C8;
    case 99u: goto L_088CD7D8;
    case 100u: goto L_088CD804;
    case 101u: goto L_088CD80C;
    case 102u: goto L_088CD820;
    case 103u: goto L_088CD838;
    case 104u: goto L_088CD864;
    case 105u: goto L_088CD870;
    case 106u: goto L_088CD87C;
    case 107u: goto L_088CD880;
    case 108u: goto L_088CD8AC;
    case 109u: goto L_088CD8C0;
    case 110u: goto L_088CD8C8;
    case 111u: goto L_088CD8F0;
    case 112u: goto L_088CD8FC;
    case 113u: goto L_088CD90C;
    case 114u: goto L_088CD914;
    case 115u: goto L_088CD94C;
    case 116u: goto L_088CD96C;
    case 117u: goto L_088CD97C;
    case 118u: goto L_088CD990;
    case 119u: goto L_088CD99C;
    case 120u: goto L_088CD9B4;
    case 121u: goto L_088CD9D4;
    case 122u: goto L_088CD9E0;
    case 123u: goto L_088CD9E8;
    case 124u: goto L_088CDA04;
    case 125u: goto L_088CDA0C;
    case 126u: goto L_088CDA20;
    case 127u: goto L_088CDA2C;
    case 128u: goto L_088CDA4C;
    case 129u: goto L_088CDA54;
    case 130u: goto L_088CDA68;
    case 131u: goto L_088CDA78;
    case 132u: goto L_088CDA98;
    case 133u: goto L_088CDAA8;
    case 134u: goto L_088CDAAC;
    case 135u: goto L_088CDABC;
    case 136u: goto L_088CDAE4;
    case 137u: goto L_088CDAF0;
    case 138u: goto L_088CDB04;
    case 139u: goto L_088CDB18;
    case 140u: goto L_088CDB2C;
    case 141u: goto L_088CDB34;
    case 142u: goto L_088CDB44;
    case 143u: goto L_088CDB4C;
    case 144u: goto L_088CDB5C;
    case 145u: goto L_088CDB68;
    case 146u: goto L_088CDB9C;
    case 147u: goto L_088CDBB0;
    case 148u: goto L_088CDBBC;
    case 149u: goto L_088CDBCC;
    case 150u: goto L_088CDBD0;
    case 151u: goto L_088CDBF0;
    case 152u: goto L_088CDC0C;
    case 153u: goto L_088CDC18;
    case 154u: goto L_088CDC44;
    case 155u: goto L_088CDC58;
    case 156u: goto L_088CDC5C;
    case 157u: goto L_088CDC7C;
    case 158u: goto L_088CDC8C;
    case 159u: goto L_088CDCA0;
    case 160u: goto L_088CDCAC;
    case 161u: goto L_088CDCD4;
    case 162u: goto L_088CDCE0;
    case 163u: goto L_088CDCF8;
    case 164u: goto L_088CDCFC;
    case 165u: goto L_088CDD1C;
    case 166u: goto L_088CDD4C;
    case 167u: goto L_088CDD6C;
    case 168u: goto L_088CDDA4;
    case 169u: goto L_088CDDB4;
    case 170u: goto L_088CDDEC;
    case 171u: goto L_088CDDF0;
    case 172u: goto L_088CDE04;
    case 173u: goto L_088CDE1C;
    case 174u: goto L_088CDE30;
    case 175u: goto L_088CDE34;
    case 176u: goto L_088CDE48;
    case 177u: goto L_088CDE60;
    case 178u: goto L_088CDE80;
    case 179u: goto L_088CDEA8;
    case 180u: goto L_088CDEB8;
    case 181u: goto L_088CDEC8;
    case 182u: goto L_088CDEE4;
    case 183u: goto L_088CDF10;
    case 184u: goto L_088CDF20;
    case 185u: goto L_088CDF30;
    case 186u: goto L_088CDF48;
    case 187u: goto L_088CDF74;
    case 188u: goto L_088CDF84;
    case 189u: goto L_088CDF94;
    case 190u: goto L_088CDFA4;
    case 191u: goto L_088CDFB4;
    case 192u: goto L_088CDFC0;
    case 193u: goto L_088CDFC8;
    case 194u: goto L_088CDFD4;
    case 195u: goto L_088CDFE4;
    case 196u: goto L_088CDFEC;
    case 197u: goto L_088CDFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088CD000:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32448), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD014:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] << 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[4] = (aot_gpr[8] << 24u);
    aot_gpr[6] = (aot_gpr[7] << 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088CD050u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088CD050u) goto L_088CD050;
    return;
L_088CD050:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1600));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(176));
    aot_gpr[4] = (aot_gpr[19] << 2u);
    aot_gpr[6] = (aot_gpr[18] << 5u);
    aot_gpr[7] = (aot_gpr[18] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[17] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[17] << 5u);
    aot_gpr[6] = (aot_gpr[17] << 3u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
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
L_088CD0F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088CD110u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088CD110u) goto L_088CD110;
    return;
L_088CD110:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1600));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_088CD148;
      }
      goto L_088CD13C;
    }
L_088CD13C:
    aot_gpr[31] = (0x088CD144u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 171u, 0x08A51EF0u>(ctx, &aot_mem) && ctx.pc == 0x088CD144u) goto L_088CD144;
    return;
L_088CD144:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_088CD148;
L_088CD148:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD160;
      }
      goto L_088CD150;
    }
L_088CD150:
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[31] = (0x088CD15Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 172u, 0x08A51EF8u>(ctx, &aot_mem) && ctx.pc == 0x088CD15Cu) goto L_088CD15C;
    return;
L_088CD15C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_088CD160;
L_088CD160:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD178;
      }
      goto L_088CD168;
    }
L_088CD168:
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x088CD174u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 173u, 0x08A51F00u>(ctx, &aot_mem) && ctx.pc == 0x088CD174u) goto L_088CD174;
    return;
L_088CD174:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    goto L_088CD178;
L_088CD178:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD190;
      }
      goto L_088CD180;
    }
L_088CD180:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x088CD18Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 174u, 0x08A51F08u>(ctx, &aot_mem) && ctx.pc == 0x088CD18Cu) goto L_088CD18C;
    return;
L_088CD18C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_088CD190;
L_088CD190:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD1A8;
      }
      goto L_088CD198;
    }
L_088CD198:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088CD1A4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 174u, 0x08A51F08u>(ctx, &aot_mem) && ctx.pc == 0x088CD1A4u) goto L_088CD1A4;
    return;
L_088CD1A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    goto L_088CD1A8;
L_088CD1A8:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD1C0;
      }
      goto L_088CD1B0;
    }
L_088CD1B0:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088CD1BCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 174u, 0x08A51F08u>(ctx, &aot_mem) && ctx.pc == 0x088CD1BCu) goto L_088CD1BC;
    return;
L_088CD1BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    goto L_088CD1C0;
L_088CD1C0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD210;
      }
      goto L_088CD1C8;
    }
L_088CD1C8:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088CD1D4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 73u, 0x08A4B414u>(ctx, &aot_mem) && ctx.pc == 0x088CD1D4u) goto L_088CD1D4;
    return;
L_088CD1D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(160), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088CD1E8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 175u, 0x08A51F10u>(ctx, &aot_mem) && ctx.pc == 0x088CD1E8u) goto L_088CD1E8;
    return;
L_088CD1E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088CD200u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x088CD200u) goto L_088CD200;
    return;
L_088CD200:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088CD210u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 200u, 0x08943F24u>(ctx, &aot_mem) && ctx.pc == 0x088CD210u) goto L_088CD210;
    return;
L_088CD210:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD228:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(176));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(21))))));
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(22))))));
    aot_gpr[9] = (aot_gpr[7] << 5u);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[9] - aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(20))))));
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(20))))));
    aot_gpr[4] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[9] << 3u);
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(20))))));
    aot_gpr[9] = (aot_gpr[7] << 5u);
    aot_gpr[7] = (aot_gpr[7] << 3u);
    aot_gpr[7] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(20))))));
    aot_gpr[9] = (aot_gpr[7] << 5u);
    aot_gpr[9] = (aot_gpr[9] - aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[9] - aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(160)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CD308;
      }
      goto L_088CD2DC;
    }
L_088CD2DC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD308;
      }
      goto L_088CD2E4;
    }
L_088CD2E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[31] = (0x088CD2FCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 93u, 0x088DD7ACu>(ctx, &aot_mem) && ctx.pc == 0x088CD2FCu) goto L_088CD2FC;
    return;
L_088CD2FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088CD308;
L_088CD308:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD318:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088CD338u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088CD338u) goto L_088CD338;
    return;
L_088CD338:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1600));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CD354u);
    aot_gpr[6] = (0u | 176u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CD354u) goto L_088CD354;
    return;
L_088CD354:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(21))))));
    aot_gpr[31] = (0x088CD378u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CD378u) goto L_088CD378;
    return;
L_088CD378:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(22))))));
    aot_gpr[6] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[31] = (0x088CD3A8u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CD3A8u) goto L_088CD3A8;
    return;
L_088CD3A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(20))))));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x088CD3D4u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CD3D4u) goto L_088CD3D4;
    return;
L_088CD3D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(20))))));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[6] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x088CD400u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CD400u) goto L_088CD400;
    return;
L_088CD400:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(20))))));
    aot_gpr[6] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[31] = (0x088CD430u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CD430u) goto L_088CD430;
    return;
L_088CD430:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(20))))));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[6] << 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088CD45Cu);
    aot_gpr[6] = (aot_gpr[7] - aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CD45Cu) goto L_088CD45C;
    return;
L_088CD45C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD4CC;
      }
      goto L_088CD468;
    }
L_088CD468:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088CD47Cu);
    aot_gpr[6] = (0u | 1u);
    goto L_088CD228;
L_088CD47C:
    aot_gpr[31] = (0x088CD484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 93u, 0x088DD7ACu>(ctx, &aot_mem) && ctx.pc == 0x088CD484u) goto L_088CD484;
    return;
L_088CD484:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(160), aot_gpr[18]);
    aot_gpr[31] = (0x088CD49Cu);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 93u, 0x088DD7ACu>(ctx, &aot_mem) && ctx.pc == 0x088CD49Cu) goto L_088CD49C;
    return;
L_088CD49C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CD4ACu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CD4ACu) goto L_088CD4AC;
    return;
L_088CD4AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088CD4CCu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 48u, 0x08942488u>(ctx, &aot_mem) && ctx.pc == 0x088CD4CCu) goto L_088CD4CC;
    return;
L_088CD4CC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD4E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CD564;
      }
      goto L_088CD504;
    }
L_088CD504:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1600));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CD51Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x088CD51Cu) goto L_088CD51C;
    return;
L_088CD51C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088CD564;
      }
      goto L_088CD528;
    }
L_088CD528:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD55C;
      }
      goto L_088CD538;
    }
L_088CD538:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088CD554u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD554u) goto L_088CD554;
    return;
L_088CD554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD564;
      }
      goto L_088CD55C;
    }
L_088CD55C:
    aot_gpr[31] = (0x088CD564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088CD564u) goto L_088CD564;
    return;
L_088CD564:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD578:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_088CD5AC;
      }
      goto L_088CD5A4;
    }
L_088CD5A4:
    aot_gpr[11] = (aot_gpr[11] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[11]);
    goto L_088CD5AC;
L_088CD5AC:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD5BC;
      }
      goto L_088CD5B4;
    }
L_088CD5B4:
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[10]);
    goto L_088CD5BC;
L_088CD5BC:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD5CC;
      }
      goto L_088CD5C4;
    }
L_088CD5C4:
    aot_gpr[9] = (aot_gpr[9] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[9]);
    goto L_088CD5CC;
L_088CD5CC:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD5DC;
      }
      goto L_088CD5D4;
    }
L_088CD5D4:
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    goto L_088CD5DC;
L_088CD5DC:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD5EC;
      }
      goto L_088CD5E4;
    }
L_088CD5E4:
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    goto L_088CD5EC;
L_088CD5EC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD5FC;
      }
      goto L_088CD5F4;
    }
L_088CD5F4:
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    goto L_088CD5FC;
L_088CD5FC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[5] - aot_gpr[2]);
      if (branch_taken) {
          goto L_088CD624;
      }
      goto L_088CD604;
    }
L_088CD604:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[4] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[31] = (0x088CD624u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 48u, 0x08942488u>(ctx, &aot_mem) && ctx.pc == 0x088CD624u) goto L_088CD624;
    return;
L_088CD624:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD630:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088CD64C;
      }
      goto L_088CD638;
    }
L_088CD638:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (aot_gpr[7] << (aot_gpr[5] & 31u));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[5]);
      if (branch_taken) {
          goto L_088CD6D4;
      }
      goto L_088CD64C;
    }
L_088CD64C:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088CD66C;
      }
      goto L_088CD654;
    }
L_088CD654:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[7] << (aot_gpr[5] & 31u));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[5]);
      if (branch_taken) {
          goto L_088CD6D4;
      }
      goto L_088CD66C;
    }
L_088CD66C:
    aot_gpr[8] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088CD690;
      }
      goto L_088CD678;
    }
L_088CD678:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[7] << (aot_gpr[5] & 31u));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[5]);
      if (branch_taken) {
          goto L_088CD6D4;
      }
      goto L_088CD690;
    }
L_088CD690:
    aot_gpr[8] = (0u | 3u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088CD6B4;
      }
      goto L_088CD69C;
    }
L_088CD69C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[7] << (aot_gpr[5] & 31u));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[5]);
      if (branch_taken) {
          goto L_088CD6D4;
      }
      goto L_088CD6B4;
    }
L_088CD6B4:
    aot_gpr[8] = (0u | 4u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088CD6D4;
      }
      goto L_088CD6C0;
    }
L_088CD6C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[7] << (aot_gpr[5] & 31u));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    goto L_088CD6D4;
L_088CD6D4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD6DC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088CD770;
      }
      goto L_088CD6E4;
    }
L_088CD6E4:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088CD758;
      }
      goto L_088CD6EC;
    }
L_088CD6EC:
    aot_gpr[8] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088CD740;
      }
      goto L_088CD6F8;
    }
L_088CD6F8:
    aot_gpr[8] = (0u | 3u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088CD728;
      }
      goto L_088CD704;
    }
L_088CD704:
    aot_gpr[8] = (0u | 4u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088CD784;
      }
      goto L_088CD710;
    }
L_088CD710:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[7] << (aot_gpr[5] & 31u));
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088CD788;
      }
      goto L_088CD728;
    }
L_088CD728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[7] << (aot_gpr[5] & 31u));
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088CD788;
      }
      goto L_088CD740;
    }
L_088CD740:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[7] << (aot_gpr[5] & 31u));
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088CD788;
      }
      goto L_088CD758;
    }
L_088CD758:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[7] << (aot_gpr[5] & 31u));
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088CD788;
      }
      goto L_088CD770;
    }
L_088CD770:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (aot_gpr[7] << (aot_gpr[5] & 31u));
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088CD788;
      }
      goto L_088CD784;
    }
L_088CD784:
    aot_gpr[2] = (0u | 0u);
    goto L_088CD788;
L_088CD788:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD790:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32456), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD7B0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD7B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088CD7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088CD7C8u) goto L_088CD7C8;
    return;
L_088CD7C8:
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD7D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088CD804u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088CD804u) goto L_088CD804;
    return;
L_088CD804:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CD94C;
      }
      goto L_088CD80C;
    }
L_088CD80C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CD8C0;
      }
      goto L_088CD820;
    }
L_088CD820:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[19] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CD8AC;
      }
      goto L_088CD838;
    }
L_088CD838:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088CD864u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD864u) goto L_088CD864;
    return;
L_088CD864:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_088CD880;
      }
      goto L_088CD870;
    }
L_088CD870:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CD87Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 40u, 0x088CE514u>(ctx, &aot_mem) && ctx.pc == 0x088CD87Cu) goto L_088CD87C;
    return;
L_088CD87C:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    goto L_088CD880;
L_088CD880:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[19] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[6]));
      if (branch_taken) {
          goto L_088CD8C0;
      }
      goto L_088CD8AC;
    }
L_088CD8AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CD820;
      }
      goto L_088CD8C0;
    }
L_088CD8C0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088CD94C;
      }
      goto L_088CD8C8;
    }
L_088CD8C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088CD8F0u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD8F0u) goto L_088CD8F0;
    return;
L_088CD8F0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_088CD914;
    }
    goto L_088CD8FC;
L_088CD8FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CD90Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 40u, 0x088CE514u>(ctx, &aot_mem) && ctx.pc == 0x088CD90Cu) goto L_088CD90C;
    return;
L_088CD90C:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088CD914;
L_088CD914:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088CD94C;
L_088CD94C:
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
L_088CD96C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDA20;
      }
      goto L_088CD97C;
    }
L_088CD97C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDA20;
      }
      goto L_088CD990;
    }
L_088CD990:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDA0C;
      }
      goto L_088CD99C;
    }
L_088CD99C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CDA0C;
      }
      goto L_088CD9B4;
    }
L_088CD9B4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088CD9E0;
      }
      goto L_088CD9D4;
    }
L_088CD9D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_088CD9E0;
L_088CD9E0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CDA04;
      }
      goto L_088CD9E8;
    }
L_088CD9E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(72));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088CDA04u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CDA04u) goto L_088CDA04;
    return;
L_088CDA04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDA20;
      }
      goto L_088CDA0C;
    }
L_088CDA0C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CD990;
      }
      goto L_088CDA20;
    }
L_088CDA20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDA2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088CDA4Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 91u, 0x088C0738u>(ctx, &aot_mem) && ctx.pc == 0x088CDA4Cu) goto L_088CDA4C;
    return;
L_088CDA4C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 0u);
    goto L_088CDA54;
L_088CDA54:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088CDA54;
      }
      goto L_088CDA68;
    }
L_088CDA68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDA78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] << 2u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDAAC;
      }
      goto L_088CDA98;
    }
L_088CDA98:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088CDAA8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088CDAA8u) goto L_088CDAA8;
    return;
L_088CDAA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_088CDAAC;
L_088CDAAC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDABC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(57))))));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDB04;
      }
      goto L_088CDAE4;
    }
L_088CDAE4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CDAF0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CDA78;
L_088CDAF0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(57))))));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CDAE4;
      }
      goto L_088CDB04;
    }
L_088CDB04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDB18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088CDB2Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 95u, 0x088C07A4u>(ctx, &aot_mem) && ctx.pc == 0x088CDB2Cu) goto L_088CDB2C;
    return;
L_088CDB2C:
    aot_gpr[31] = (0x088CDB34u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088CDABC;
L_088CDB34:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDB44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDB4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088CDB5Cu);
    aot_gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x088CDB5Cu) goto L_088CDB5C;
    return;
L_088CDB5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDB68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (0u | 17112u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088CDB9Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088CDB9Cu) goto L_088CDB9C;
    return;
L_088CDB9C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088CDBB0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088CDBB0u) goto L_088CDBB0;
    return;
L_088CDBB0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088CDBD0;
      }
      goto L_088CDBBC;
    }
L_088CDBBC:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CDBCCu);
    aot_gpr[7] = (0u | 0u);
    goto L_088CD0F4;
L_088CDBCC:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CDBD0;
L_088CDBD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
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
L_088CDBF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088CDC0Cu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088CDC0Cu) goto L_088CDC0C;
    return;
L_088CDC0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDC18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088CDC5C;
      }
      goto L_088CDC44;
    }
L_088CDC44:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088CDC58u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_088CD318;
L_088CDC58:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CDC5C;
L_088CDC5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDC7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088CDCA0;
      }
      goto L_088CDC8C;
    }
L_088CDC8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088CDCA0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_088CD318;
L_088CDCA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDCAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088CDCD4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088CDCD4u) goto L_088CDCD4;
    return;
L_088CDCD4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CDCFC;
      }
      goto L_088CDCE0;
    }
L_088CDCE0:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1))))));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CDCF8u);
    aot_gpr[5] = (0u | 0u);
    goto L_088CD014;
L_088CDCF8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_088CDCFC;
L_088CDCFC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(57))))));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CDD1Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 7u, 0x088CE140u>(ctx, &aot_mem) && ctx.pc == 0x088CDD1Cu) goto L_088CDD1C;
    return;
L_088CDD1C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(57))))));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr[4]));
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
L_088CDD4C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32464), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDD6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 6u, 0x088CE110u>(ctx, &aot_mem); return;
      }
      goto L_088CDDA4;
    }
L_088CDDA4:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088CDDB4u);
    aot_gpr[6] = (0u | 464u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088CDDB4u) goto L_088CDDB4;
    return;
L_088CDDB4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(20))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(21))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(22))))));
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(23)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(1))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088CDE1C;
      }
      goto L_088CDDEC;
    }
L_088CDDEC:
    aot_gpr[19] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    goto L_088CDDF0;
L_088CDDF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x088CDE04u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CDE04u) goto L_088CDE04;
    return;
L_088CDE04:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(1))))));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088CDDF0;
      }
      goto L_088CDE1C;
    }
L_088CDE1C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(2))))));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088CDE60;
      }
      goto L_088CDE30;
    }
L_088CDE30:
    aot_gpr[19] = (aot_gpr[21] + static_cast<std::uint32_t>(68));
    goto L_088CDE34;
L_088CDE34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x088CDE48u);
    aot_gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CDE48u) goto L_088CDE48;
    return;
L_088CDE48:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(2))))));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088CDE34;
      }
      goto L_088CDE60;
    }
L_088CDE60:
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(340));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 2u, 0x088CE048u>(ctx, &aot_mem); return;
      }
      goto L_088CDE80;
    }
L_088CDE80:
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(180));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[23] = (aot_gpr[21] | 0u);
    aot_gpr[19] = (0u | 10u);
    aot_gpr[30] = (0u | 0u);
    aot_gpr[22] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[23] + static_cast<std::uint32_t>(340));
    goto L_088CDEA8;
L_088CDEA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDEC8;
      }
      goto L_088CDEB8;
    }
L_088CDEB8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088CDEC8u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CDEC8u) goto L_088CDEC8;
    return;
L_088CDEC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(280));
    goto L_088CDEE4;
L_088CDEE4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[4] << 3u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDF20;
      }
      goto L_088CDF10;
    }
L_088CDF10:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CDF20u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CDF20u) goto L_088CDF20;
    return;
L_088CDF20:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_088CDEE4;
      }
      goto L_088CDF30;
    }
L_088CDF30:
    aot_gpr[4] = (aot_gpr[30] << 3u);
    aot_gpr[4] = (aot_gpr[30] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[30] + aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(200));
    goto L_088CDF48;
L_088CDF48:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[4] << 3u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDF84;
      }
      goto L_088CDF74;
    }
L_088CDF74:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CDF84u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CDF84u) goto L_088CDF84;
    return;
L_088CDF84:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_088CDF48;
      }
      goto L_088CDF94;
    }
L_088CDF94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[22]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088CDFFC;
      }
      goto L_088CDFA4;
    }
L_088CDFA4:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDFC8;
      }
      goto L_088CDFB4;
    }
L_088CDFB4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088CDFC0u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CDFC0u) goto L_088CDFC0;
    return;
L_088CDFC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 1u, 0x088CE000u>(ctx, &aot_mem); return;
      }
      goto L_088CDFC8;
    }
L_088CDFC8:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CDFEC;
      }
      goto L_088CDFD4;
    }
L_088CDFD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088CDFE4u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CDFE4u) goto L_088CDFE4;
    return;
L_088CDFE4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[23] + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_088CDFFC;
      }
      goto L_088CDFEC;
    }
L_088CDFEC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088CDFFCu);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CDFFCu) goto L_088CDFFC;
    return;
L_088CDFFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x088CE000u; return;
}

void recomp_unit_0201(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0201_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_201(Runtime &runtime) {
    runtime.register_generated_unit(201u, 0x088CD000u, 4096u, &recomp_unit_0201, &recomp_unit_0201_entry);
    runtime.register_function(0x088CD000u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD014u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD050u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD0F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD110u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD13Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD144u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD148u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD150u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD15Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD160u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD168u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD174u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD178u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD180u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD18Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD190u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD198u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD1A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD1A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD1B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD1BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD1C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD1C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD1D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD1E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD200u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD210u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD228u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD2DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD2E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD2FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD308u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD318u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD338u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD354u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD378u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD3A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD3D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD400u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD430u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD45Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD468u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD47Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD484u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD49Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD4ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD4CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD4E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD504u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD51Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD528u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD538u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD554u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD55Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD564u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD578u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD5A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD5ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD5B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD5BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD5C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD5CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD5D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD5DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD5E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD5ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD5F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD5FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD604u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD624u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD630u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD638u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD64Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD654u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD66Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD678u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD690u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD69Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD6B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD6C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD6D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD6DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD6E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD6ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD6F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD704u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD710u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD728u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD740u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD758u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD770u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD784u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD788u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD790u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD7B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD7B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD7C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD7D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD804u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD80Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD820u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD838u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD864u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD870u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD87Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD880u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD8ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD8C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD8C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD8F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD8FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD90Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD914u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD94Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD96Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD97Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD990u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD99Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD9B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD9D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD9E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CD9E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDA04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDA0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDA20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDA2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDA4Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDA54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDA68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDA78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDA98u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDAA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDAACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDABCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDAE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDAF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDB04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDB18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDB2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDB34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDB44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDB4Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDB5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDB68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDB9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDBB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDBBCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDBCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDBD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDBF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDC0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDC18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDC44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDC58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDC5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDC7Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDC8Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDCA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDCACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDCD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDCE0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDCF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDCFCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDD1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDD4Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDD6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDDA4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDDB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDDECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDDF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDE04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDE1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDE30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDE34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDE48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDE60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDE80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDEA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDEB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDEC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDEE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDF10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDF20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDF30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDF48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDF74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDF84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDF94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDFA4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDFB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDFC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDFC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDFD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDFE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDFECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x088CDFFCu, &recomp_unit_0201, "recomp_unit_0201");
}
} // namespace psprecomp
