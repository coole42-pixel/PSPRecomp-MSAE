#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0487[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 6, 0, 0, 7, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 20, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 34, 0, 35, 0, 36, 37, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0,
    43, 44, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0,
    0, 59, 0, 60, 0, 0, 0, 0, 61, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 67, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 81,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92,
    0, 93, 0, 0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 0, 105, 0,
    106, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114,
    0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0,
    121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 130,
    0, 0, 131, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 147, 148, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 153, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0,
    0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 201, 0, 202, 0, 203, 0,
    0, 204, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0,
    211, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 218, 219, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 226, 227, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 236, 237,
};
void recomp_unit_0487_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089EB000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0487[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089EB000;
    case 2u: goto L_089EB024;
    case 3u: goto L_089EB02C;
    case 4u: goto L_089EB054;
    case 5u: goto L_089EB058;
    case 6u: goto L_089EB064;
    case 7u: goto L_089EB070;
    case 8u: goto L_089EB078;
    case 9u: goto L_089EB0A8;
    case 10u: goto L_089EB0B4;
    case 11u: goto L_089EB0BC;
    case 12u: goto L_089EB0CC;
    case 13u: goto L_089EB0D4;
    case 14u: goto L_089EB0F8;
    case 15u: goto L_089EB104;
    case 16u: goto L_089EB114;
    case 17u: goto L_089EB120;
    case 18u: goto L_089EB12C;
    case 19u: goto L_089EB130;
    case 20u: goto L_089EB150;
    case 21u: goto L_089EB154;
    case 22u: goto L_089EB15C;
    case 23u: goto L_089EB164;
    case 24u: goto L_089EB16C;
    case 25u: goto L_089EB190;
    case 26u: goto L_089EB198;
    case 27u: goto L_089EB1B0;
    case 28u: goto L_089EB1B8;
    case 29u: goto L_089EB1C0;
    case 30u: goto L_089EB1C8;
    case 31u: goto L_089EB1D0;
    case 32u: goto L_089EB1D8;
    case 33u: goto L_089EB200;
    case 34u: goto L_089EB20C;
    case 35u: goto L_089EB214;
    case 36u: goto L_089EB21C;
    case 37u: goto L_089EB220;
    case 38u: goto L_089EB228;
    case 39u: goto L_089EB238;
    case 40u: goto L_089EB250;
    case 41u: goto L_089EB260;
    case 42u: goto L_089EB270;
    case 43u: goto L_089EB280;
    case 44u: goto L_089EB284;
    case 45u: goto L_089EB28C;
    case 46u: goto L_089EB294;
    case 47u: goto L_089EB2A8;
    case 48u: goto L_089EB2C4;
    case 49u: goto L_089EB2D0;
    case 50u: goto L_089EB2D4;
    case 51u: goto L_089EB2F0;
    case 52u: goto L_089EB304;
    case 53u: goto L_089EB314;
    case 54u: goto L_089EB338;
    case 55u: goto L_089EB340;
    case 56u: goto L_089EB348;
    case 57u: goto L_089EB36C;
    case 58u: goto L_089EB374;
    case 59u: goto L_089EB384;
    case 60u: goto L_089EB38C;
    case 61u: goto L_089EB3A0;
    case 62u: goto L_089EB3A4;
    case 63u: goto L_089EB3C0;
    case 64u: goto L_089EB3CC;
    case 65u: goto L_089EB3D8;
    case 66u: goto L_089EB404;
    case 67u: goto L_089EB40C;
    case 68u: goto L_089EB41C;
    case 69u: goto L_089EB424;
    case 70u: goto L_089EB42C;
    case 71u: goto L_089EB438;
    case 72u: goto L_089EB444;
    case 73u: goto L_089EB450;
    case 74u: goto L_089EB458;
    case 75u: goto L_089EB494;
    case 76u: goto L_089EB4A8;
    case 77u: goto L_089EB4B8;
    case 78u: goto L_089EB4C0;
    case 79u: goto L_089EB4C8;
    case 80u: goto L_089EB4F8;
    case 81u: goto L_089EB4FC;
    case 82u: goto L_089EB51C;
    case 83u: goto L_089EB52C;
    case 84u: goto L_089EB538;
    case 85u: goto L_089EB540;
    case 86u: goto L_089EB544;
    case 87u: goto L_089EB58C;
    case 88u: goto L_089EB594;
    case 89u: goto L_089EB5A4;
    case 90u: goto L_089EB5C8;
    case 91u: goto L_089EB5D0;
    case 92u: goto L_089EB5FC;
    case 93u: goto L_089EB604;
    case 94u: goto L_089EB610;
    case 95u: goto L_089EB618;
    case 96u: goto L_089EB624;
    case 97u: goto L_089EB62C;
    case 98u: goto L_089EB634;
    case 99u: goto L_089EB63C;
    case 100u: goto L_089EB644;
    case 101u: goto L_089EB650;
    case 102u: goto L_089EB658;
    case 103u: goto L_089EB660;
    case 104u: goto L_089EB66C;
    case 105u: goto L_089EB678;
    case 106u: goto L_089EB680;
    case 107u: goto L_089EB68C;
    case 108u: goto L_089EB69C;
    case 109u: goto L_089EB6A4;
    case 110u: goto L_089EB6AC;
    case 111u: goto L_089EB6C8;
    case 112u: goto L_089EB6E0;
    case 113u: goto L_089EB6F4;
    case 114u: goto L_089EB6FC;
    case 115u: goto L_089EB710;
    case 116u: goto L_089EB71C;
    case 117u: goto L_089EB72C;
    case 118u: goto L_089EB734;
    case 119u: goto L_089EB760;
    case 120u: goto L_089EB778;
    case 121u: goto L_089EB780;
    case 122u: goto L_089EB788;
    case 123u: goto L_089EB790;
    case 124u: goto L_089EB7BC;
    case 125u: goto L_089EB7CC;
    case 126u: goto L_089EB7D4;
    case 127u: goto L_089EB7E0;
    case 128u: goto L_089EB7E8;
    case 129u: goto L_089EB7F0;
    case 130u: goto L_089EB7FC;
    case 131u: goto L_089EB808;
    case 132u: goto L_089EB80C;
    case 133u: goto L_089EB828;
    case 134u: goto L_089EB834;
    case 135u: goto L_089EB844;
    case 136u: goto L_089EB84C;
    case 137u: goto L_089EB858;
    case 138u: goto L_089EB86C;
    case 139u: goto L_089EB890;
    case 140u: goto L_089EB89C;
    case 141u: goto L_089EB8AC;
    case 142u: goto L_089EB8B4;
    case 143u: goto L_089EB8C0;
    case 144u: goto L_089EB8D4;
    case 145u: goto L_089EB8E4;
    case 146u: goto L_089EB910;
    case 147u: goto L_089EB918;
    case 148u: goto L_089EB91C;
    case 149u: goto L_089EB924;
    case 150u: goto L_089EB934;
    case 151u: goto L_089EB940;
    case 152u: goto L_089EB948;
    case 153u: goto L_089EB954;
    case 154u: goto L_089EB958;
    case 155u: goto L_089EB970;
    case 156u: goto L_089EB998;
    case 157u: goto L_089EB9A4;
    case 158u: goto L_089EB9CC;
    case 159u: goto L_089EB9D8;
    case 160u: goto L_089EB9EC;
    case 161u: goto L_089EBA00;
    case 162u: goto L_089EBA14;
    case 163u: goto L_089EBA28;
    case 164u: goto L_089EBA3C;
    case 165u: goto L_089EBA50;
    case 166u: goto L_089EBA60;
    case 167u: goto L_089EBA74;
    case 168u: goto L_089EBAA0;
    case 169u: goto L_089EBAAC;
    case 170u: goto L_089EBAD8;
    case 171u: goto L_089EBAE4;
    case 172u: goto L_089EBAF8;
    case 173u: goto L_089EBB24;
    case 174u: goto L_089EBB30;
    case 175u: goto L_089EBB44;
    case 176u: goto L_089EBB58;
    case 177u: goto L_089EBB6C;
    case 178u: goto L_089EBB80;
    case 179u: goto L_089EBB94;
    case 180u: goto L_089EBBA8;
    case 181u: goto L_089EBBBC;
    case 182u: goto L_089EBBE4;
    case 183u: goto L_089EBBF0;
    case 184u: goto L_089EBC04;
    case 185u: goto L_089EBC14;
    case 186u: goto L_089EBC40;
    case 187u: goto L_089EBC54;
    case 188u: goto L_089EBC94;
    case 189u: goto L_089EBCB8;
    case 190u: goto L_089EBCC0;
    case 191u: goto L_089EBCC8;
    case 192u: goto L_089EBCDC;
    case 193u: goto L_089EBCF4;
    case 194u: goto L_089EBD10;
    case 195u: goto L_089EBD20;
    case 196u: goto L_089EBD28;
    case 197u: goto L_089EBD3C;
    case 198u: goto L_089EBD4C;
    case 199u: goto L_089EBD58;
    case 200u: goto L_089EBD64;
    case 201u: goto L_089EBD68;
    case 202u: goto L_089EBD70;
    case 203u: goto L_089EBD78;
    case 204u: goto L_089EBD84;
    case 205u: goto L_089EBD88;
    case 206u: goto L_089EBD9C;
    case 207u: goto L_089EBDAC;
    case 208u: goto L_089EBDE0;
    case 209u: goto L_089EBDE8;
    case 210u: goto L_089EBDF8;
    case 211u: goto L_089EBE00;
    case 212u: goto L_089EBE0C;
    case 213u: goto L_089EBE14;
    case 214u: goto L_089EBE1C;
    case 215u: goto L_089EBE28;
    case 216u: goto L_089EBE54;
    case 217u: goto L_089EBE60;
    case 218u: goto L_089EBE68;
    case 219u: goto L_089EBE6C;
    case 220u: goto L_089EBE74;
    case 221u: goto L_089EBEA0;
    case 222u: goto L_089EBECC;
    case 223u: goto L_089EBF04;
    case 224u: goto L_089EBF1C;
    case 225u: goto L_089EBF24;
    case 226u: goto L_089EBF30;
    case 227u: goto L_089EBF34;
    case 228u: goto L_089EBF3C;
    case 229u: goto L_089EBF48;
    case 230u: goto L_089EBF54;
    case 231u: goto L_089EBF8C;
    case 232u: goto L_089EBF94;
    case 233u: goto L_089EBFD0;
    case 234u: goto L_089EBFE0;
    case 235u: goto L_089EBFF0;
    case 236u: goto L_089EBFF8;
    case 237u: goto L_089EBFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089EB000:
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
L_089EB024:
    if (aot_gpr[2] == aot_gpr[20]) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
        (void)rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 286u, 0x089EAFB8u>(ctx, &aot_mem); return;
    }
    goto L_089EB02C;
L_089EB02C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EB0A8;
      }
      goto L_089EB054;
    }
L_089EB054:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    goto L_089EB058;
L_089EB058:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[22];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 287u, 0x089EAFC0u>(ctx, &aot_mem); return;
      }
      goto L_089EB064;
    }
L_089EB064:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    if (aot_gpr[17] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        (void)rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 283u, 0x089EAFA0u>(ctx, &aot_mem); return;
    }
    goto L_089EB070;
L_089EB070:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    (void)rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 288u, 0x089EAFC4u>(ctx, &aot_mem); return;
L_089EB078:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB0A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089EB0B4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089EB0B4u) goto L_089EB0B4;
    return;
L_089EB0B4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_089EB0CC;
    }
    goto L_089EB0BC;
L_089EB0BC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089EB058;
      }
      goto L_089EB0CC;
    }
L_089EB0CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    goto L_089EB058;
L_089EB0D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089EB130;
      }
      goto L_089EB0F8;
    }
L_089EB0F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089EB16C;
      }
      goto L_089EB104;
    }
L_089EB104:
    aot_gpr[20] = (0u + 0u);
    aot_gpr[19] = (0u + 0u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089EB114;
L_089EB114:
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
        goto L_089EB150;
    }
    goto L_089EB120;
L_089EB120:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[18];
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089EB190;
      }
      goto L_089EB12C;
    }
L_089EB12C:
    aot_gpr[2] = (0u | 55007u);
    goto L_089EB130;
L_089EB130:
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
L_089EB150:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_089EB154;
L_089EB154:
    if (aot_gpr[16] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089EB114;
    }
    goto L_089EB15C;
L_089EB15C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[2] = (0u | 55002u);
      if (branch_taken) {
          goto L_089EB130;
      }
      goto L_089EB164;
    }
L_089EB164:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[2] = (0u | 55008u);
      if (branch_taken) {
          goto L_089EB130;
      }
      goto L_089EB16C;
    }
L_089EB16C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB190:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EB1B0;
      }
      goto L_089EB198;
    }
L_089EB198:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089EB150;
L_089EB1B0:
    aot_gpr[31] = (0x089EB1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089EB1B8u) goto L_089EB1B8;
    return;
L_089EB1B8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089EB1C8;
    }
    goto L_089EB1C0;
L_089EB1C0:
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    goto L_089EB150;
L_089EB1C8:
    if (aot_gpr[17] != aot_gpr[2]) {
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
        goto L_089EB150;
    }
    goto L_089EB1D0;
L_089EB1D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_089EB154;
L_089EB1D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089EB2D0;
      }
      goto L_089EB200;
    }
L_089EB200:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_089EB228;
      }
      goto L_089EB20C;
    }
L_089EB20C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089EB284;
L_089EB214:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089EB2F0;
      }
      goto L_089EB21C;
    }
L_089EB21C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_089EB220;
L_089EB220:
    if (aot_gpr[16] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089EB284;
    }
    goto L_089EB228;
L_089EB228:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089EB214;
      }
      goto L_089EB238;
    }
L_089EB238:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089EB250u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089EB250u) goto L_089EB250;
    return;
L_089EB250:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(800) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
        goto L_089EB21C;
    }
    goto L_089EB260;
L_089EB260:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089EB348;
      }
      goto L_089EB270;
    }
L_089EB270:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EB228;
      }
      goto L_089EB280;
    }
L_089EB280:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089EB284;
L_089EB284:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089EB3A0;
      }
      goto L_089EB28C;
    }
L_089EB28C:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089EB3A4;
      }
      goto L_089EB294;
    }
L_089EB294:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089EB2A8u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 257u, 0x089EADCCu>(ctx, &aot_mem) && ctx.pc == 0x089EB2A8u) goto L_089EB2A8;
    return;
L_089EB2A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089EB2C4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB2C4u) goto L_089EB2C4;
    return;
L_089EB2C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_089EB2D0;
L_089EB2D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089EB2D4;
L_089EB2D4:
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
L_089EB2F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089EB304u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089EB304u) goto L_089EB304;
    return;
L_089EB304:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(20000) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_089EB220;
    }
    goto L_089EB314;
L_089EB314:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-44));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089EB338u);
    aot_gpr[9] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 160u, 0x0898EB8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EB338u) goto L_089EB338;
    return;
L_089EB338:
    aot_gpr[31] = (0x089EB340u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089EB340u) goto L_089EB340;
    return;
L_089EB340:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_089EB220;
L_089EB348:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-28));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089EB36Cu);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 160u, 0x0898EB8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EB36Cu) goto L_089EB36C;
    return;
L_089EB36C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089EB2D4;
      }
      goto L_089EB374;
    }
L_089EB374:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
        goto L_089EB21C;
    }
    goto L_089EB384;
L_089EB384:
    aot_gpr[31] = (0x089EB38Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089EB38Cu) goto L_089EB38C;
    return;
L_089EB38C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    goto L_089EB21C;
L_089EB3A0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089EB3A4;
L_089EB3A4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB3C0:
    aot_gpr[2] = (2217u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28580));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB3CC:
    aot_gpr[2] = (2217u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28684));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB3D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(28684));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EB494;
      }
      goto L_089EB404;
    }
L_089EB404:
    aot_gpr[31] = (0x089EB40Cu);
    // nop
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EB40C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EB42C;
      }
      goto L_089EB41C;
    }
L_089EB41C:
    aot_gpr[31] = (0x089EB424u);
    // nop
    ctx.pc = 0x08A5B00Cu;
    return;
L_089EB424:
    aot_gpr[31] = (0x089EB42Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08A5B0D4u;
    return;
L_089EB42C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EB444;
      }
      goto L_089EB438;
    }
L_089EB438:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089EB444u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB444u) goto L_089EB444;
    return;
L_089EB444:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EB450u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EB450:
    aot_gpr[31] = (0x089EB458u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5B004u;
    return;
L_089EB458:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28684), 0u);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28580));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(104));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem); return;
L_089EB494:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB4A8:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28576)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EB4C0;
      }
      goto L_089EB4B8;
    }
L_089EB4B8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB4C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(28576), 0u);
    goto L_089EB3D8;
L_089EB4C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28576)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
      if (branch_taken) {
          goto L_089EB51C;
      }
      goto L_089EB4F8;
    }
L_089EB4F8:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089EB4FC;
L_089EB4FC:
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
L_089EB51C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089EB634;
      }
      goto L_089EB52C;
    }
L_089EB52C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089EB4F8;
      }
      goto L_089EB538;
    }
L_089EB538:
    aot_gpr[31] = (0x089EB540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 68u, 0x089EE4E8u>(ctx, &aot_mem) && ctx.pc == 0x089EB540u) goto L_089EB540;
    return;
L_089EB540:
    aot_gpr[2] = (2217u << 16u);
    goto L_089EB544;
L_089EB544:
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(28684));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28684), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20296));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28576), aot_gpr[16]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[20] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x089EB58Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28684), aot_gpr[3]);
    ctx.pc = 0x08A5B0FCu;
    return;
L_089EB58C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_089EB658;
      }
      goto L_089EB594;
    }
L_089EB594:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EB5A4u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EB5A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (2207u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20312));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18204));
    aot_gpr[31] = (0x089EB5C8u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = 0x08A5B05Cu;
    return;
L_089EB5C8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_089EB66C;
      }
      goto L_089EB5D0;
    }
L_089EB5D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28696));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8192));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[31] = (0x089EB5FCu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 203u, 0x08A42B3Cu>(ctx, &aot_mem) && ctx.pc == 0x089EB5FCu) goto L_089EB5FC;
    return;
L_089EB5FC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089EB68C;
      }
      goto L_089EB604;
    }
L_089EB604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089EB610u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x08A5AFFCu;
    return;
L_089EB610:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EB644;
      }
      goto L_089EB618;
    }
L_089EB618:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EB624u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EB624:
    aot_gpr[31] = (0x089EB62Cu);
    // nop
    goto L_089EB3D8;
L_089EB62C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28576), 0u);
    goto L_089EB4F8;
L_089EB634:
    aot_gpr[31] = (0x089EB63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0488_entry, 488u, 120u, 0x089EC818u>(ctx, &aot_mem) && ctx.pc == 0x089EB63Cu) goto L_089EB63C;
    return;
L_089EB63C:
    aot_gpr[2] = (2217u << 16u);
    goto L_089EB544;
L_089EB644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EB650u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EB650:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089EB4FC;
L_089EB658:
    aot_gpr[31] = (0x089EB660u);
    // nop
    goto L_089EB3D8;
L_089EB660:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28576), 0u);
    goto L_089EB4F8;
L_089EB66C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EB678u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EB678:
    aot_gpr[31] = (0x089EB680u);
    // nop
    goto L_089EB3D8;
L_089EB680:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28576), 0u);
    goto L_089EB4F8;
L_089EB68C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EB69Cu);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EB69C:
    aot_gpr[31] = (0x089EB6A4u);
    // nop
    goto L_089EB3D8;
L_089EB6A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28576), 0u);
    goto L_089EB4F8;
L_089EB6AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(60));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089EB6C8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089EB6C8u) goto L_089EB6C8;
    return;
L_089EB6C8:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[16] = (aot_gpr[3] + static_cast<std::uint32_t>(28684));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089EB6F4;
      }
      goto L_089EB6E0;
    }
L_089EB6E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB6F4:
    aot_gpr[31] = (0x089EB6FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EB6FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[31] = (0x089EB710u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 116u, 0x08A43614u>(ctx, &aot_mem) && ctx.pc == 0x089EB710u) goto L_089EB710;
    return;
L_089EB710:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u | 32768u);
      if (branch_taken) {
          goto L_089EB778;
      }
      goto L_089EB71C;
    }
L_089EB71C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089EB72Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 116u, 0x08A43614u>(ctx, &aot_mem) && ctx.pc == 0x089EB72Cu) goto L_089EB72C;
    return;
L_089EB72C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EB778;
      }
      goto L_089EB734;
    }
L_089EB734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[31] = (0x089EB760u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EB760:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB778:
    aot_gpr[31] = (0x089EB780u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EB780:
    aot_gpr[31] = (0x089EB788u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089EB788u) goto L_089EB788;
    return;
L_089EB788:
    aot_gpr[3] = (0u + 0u);
    goto L_089EB6E0;
L_089EB790:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(28684));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x089EB7BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EB7BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == aot_gpr[4]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_089EB86C;
    }
    goto L_089EB7CC;
L_089EB7CC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(28684));
        goto L_089EB80C;
    }
    goto L_089EB7D4;
L_089EB7D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_089EB7E8;
      }
      goto L_089EB7E0;
    }
L_089EB7E0:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089EB8D4;
L_089EB7E8:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(28684));
      if (branch_taken) {
          goto L_089EB80C;
      }
      goto L_089EB7F0;
    }
L_089EB7F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(56)));
    if (aot_gpr[2] != aot_gpr[4]) {
    aot_gpr[3] = (aot_gpr[2] + 0u);
        goto L_089EB7E8;
    }
    goto L_089EB7FC;
L_089EB7FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089EB808;
L_089EB808:
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(28684));
    goto L_089EB80C;
L_089EB80C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) > static_cast<std::int32_t>(aot_gpr[3]) ? aot_gpr[2] : aot_gpr[3]);
    aot_gpr[31] = (0x089EB828u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 145u, 0x08A43764u>(ctx, &aot_mem) && ctx.pc == 0x089EB828u) goto L_089EB828;
    return;
L_089EB828:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EB834u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 145u, 0x08A43764u>(ctx, &aot_mem) && ctx.pc == 0x089EB834u) goto L_089EB834;
    return;
L_089EB834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089EB844u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089EB844u) goto L_089EB844;
    return;
L_089EB844:
    aot_gpr[31] = (0x089EB84Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089EB84Cu) goto L_089EB84C;
    return;
L_089EB84C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EB858u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EB858:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB86C:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(28684));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) > static_cast<std::int32_t>(aot_gpr[3]) ? aot_gpr[2] : aot_gpr[3]);
    aot_gpr[31] = (0x089EB890u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 145u, 0x08A43764u>(ctx, &aot_mem) && ctx.pc == 0x089EB890u) goto L_089EB890;
    return;
L_089EB890:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EB89Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 145u, 0x08A43764u>(ctx, &aot_mem) && ctx.pc == 0x089EB89Cu) goto L_089EB89C;
    return;
L_089EB89C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089EB8ACu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089EB8ACu) goto L_089EB8AC;
    return;
L_089EB8AC:
    aot_gpr[31] = (0x089EB8B4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089EB8B4u) goto L_089EB8B4;
    return;
L_089EB8B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EB8C0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EB8C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB8D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089EB808;
L_089EB8E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(28580));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28576)));
    goto L_089EB910;
L_089EB910:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089EB958;
      }
      goto L_089EB918;
    }
L_089EB918:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_089EB91C;
L_089EB91C:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089EB924u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB924u) goto L_089EB924;
    return;
L_089EB924:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089EB934u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB934u) goto L_089EB934;
    return;
L_089EB934:
    aot_gpr[16] = (aot_gpr[16] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28576)));
      if (branch_taken) {
          goto L_089EB910;
      }
      goto L_089EB940;
    }
L_089EB940:
    aot_gpr[31] = (0x089EB948u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28684)));
    ctx.pc = 0x08A5AFBCu;
    return;
L_089EB948:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28576)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
        goto L_089EB91C;
    }
    goto L_089EB954;
L_089EB954:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089EB958;
L_089EB958:
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
L_089EB970:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28580)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089EB998u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB998u) goto L_089EB998;
    return;
L_089EB998:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB9A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28584)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089EB9CCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB9CCu) goto L_089EB9CC;
    return;
L_089EB9CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB9D8:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28588)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB9EC:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28592)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBA00:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28596)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBA14:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28600)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBA28:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28604)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBA3C:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28608)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBA50:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28612)));
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBA60:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28616)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBA74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28620)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089EBAA0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBAA0u) goto L_089EBAA0;
    return;
L_089EBAA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBAAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28624)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089EBAD8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBAD8u) goto L_089EBAD8;
    return;
L_089EBAD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBAE4:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28628)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBAF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28632)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089EBB24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBB24u) goto L_089EBB24;
    return;
L_089EBB24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBB30:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28636)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBB44:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28640)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBB58:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28644)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBB6C:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28648)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBB80:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28652)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBB94:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28656)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBBA8:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28660)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBBBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28664)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089EBBE4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBBE4u) goto L_089EBBE4;
    return;
L_089EBBE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBBF0:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28668)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBC04:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28672)));
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBC14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089EBC40u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    ctx.pc = 0x08A5A88Cu;
    return;
L_089EBC40:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBC54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[29] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(5)));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[4] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBC94:
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[2] = (0u + 0u);
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(5)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBCB8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBCC0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBCC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089EBCDCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.pc = 0x08A5A874u;
    return;
L_089EBCDC:
    aot_gpr[3] = (0u | 50000u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) aot_gpr[3] = (0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBCF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(255));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x089EBD10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089EBD10u) goto L_089EBD10;
    return;
L_089EBD10:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBD20:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBD28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089EBD3Cu);
    // nop
    goto L_089EB3CC;
L_089EBD3C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EBD9C;
      }
      goto L_089EBD4C;
    }
L_089EBD4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EBD58u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EBD58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089EBD88;
    }
    goto L_089EBD64;
L_089EBD64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_089EBD68;
L_089EBD68:
    aot_gpr[31] = (0x089EBD70u);
    aot_gpr[5] = (0u + 0u);
    ctx.pc = 0x08A5A9ACu;
    return;
L_089EBD70:
    aot_gpr[31] = (0x089EBD78u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_089EB790;
L_089EBD78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
        goto L_089EBD68;
    }
    goto L_089EBD84;
L_089EBD84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089EBD88;
L_089EBD88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08A5B09Cu; return;
L_089EBD9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBDAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x089EBDE0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    ctx.pc = 0x08A5A874u;
    return;
L_089EBDE0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089EBEA0;
      }
      goto L_089EBDE8;
    }
L_089EBDE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 65523u);
    aot_gpr[31] = (0x089EBDF8u);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = 0x08A5A9A4u;
    return;
L_089EBDF8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EBEA0;
      }
      goto L_089EBE00;
    }
L_089EBE00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[30] + 0u);
      if (branch_taken) {
          goto L_089EBE54;
      }
      goto L_089EBE0C;
    }
L_089EBE0C:
    aot_gpr[31] = (0x089EBE14u);
    // nop
    goto L_089EB6AC;
L_089EBE14:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089EBECC;
      }
      goto L_089EBE1C;
    }
L_089EBE1C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089EBE28u);
    aot_gpr[5] = (0u + 0u);
    ctx.pc = 0x08A5A9ACu;
    return;
L_089EBE28:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBE54:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089EBE60u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = 0x08A5A9BCu;
    return;
L_089EBE60:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089EBF04;
      }
      goto L_089EBE68;
    }
L_089EBE68:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089EBE6C;
L_089EBE6C:
    aot_gpr[31] = (0x089EBE74u);
    aot_gpr[5] = (0u + 0u);
    ctx.pc = 0x08A5A9ACu;
    return;
L_089EBE74:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u | 50000u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBEA0:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u | 50000u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBECC:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
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
L_089EBF04:
    aot_gpr[4] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[31] = (0x089EBF1Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = 0x08A5A9BCu;
    return;
L_089EBF1C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089EBE6C;
      }
      goto L_089EBF24;
    }
L_089EBF24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089EBF48;
      }
      goto L_089EBF30;
    }
L_089EBF30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089EBF34;
L_089EBF34:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBE0C;
      }
      goto L_089EBF3C;
    }
L_089EBF3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[16] != aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_089EBF34;
    }
    goto L_089EBF48;
L_089EBF48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(14)));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089EBE0C;
L_089EBF54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[19] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0488_entry, 488u, 4u, 0x089EC028u>(ctx, &aot_mem); return;
      }
      goto L_089EBF8C;
    }
L_089EBF8C:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[3] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0488_entry, 488u, 4u, 0x089EC028u>(ctx, &aot_mem); return;
      }
      goto L_089EBF94;
    }
L_089EBF94:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[31] = (0x089EBFD0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    goto L_089EB3CC;
L_089EBFD0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EBFE0u);
    aot_gpr[18] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_089EBFE0:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0488_entry, 488u, 4u, 0x089EC028u>(ctx, &aot_mem); return;
      }
      goto L_089EBFF0;
    }
L_089EBFF0:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089EBFFC;
      }
      goto L_089EBFF8;
    }
L_089EBFF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089EBFFC;
L_089EBFFC:
    aot_gpr[31] = (0x089EC004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0487(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0487_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_487(Runtime &runtime) {
    runtime.register_generated_unit(487u, 0x089EB000u, 4096u, &recomp_unit_0487, &recomp_unit_0487_entry);
    runtime.register_function(0x089EB000u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB024u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB02Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB054u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB058u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB064u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB070u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB078u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB0A8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB0B4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB0BCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB0CCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB0D4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB0F8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB104u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB114u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB120u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB12Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB130u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB150u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB154u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB15Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB164u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB16Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB190u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB198u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB1B0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB1B8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB1C0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB1C8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB1D0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB1D8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB200u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB20Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB214u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB21Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB220u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB228u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB238u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB250u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB260u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB270u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB280u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB284u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB28Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB294u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB2A8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB2C4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB2D0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB2D4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB2F0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB304u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB314u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB338u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB340u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB348u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB36Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB374u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB384u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB38Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB3A0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB3A4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB3C0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB3CCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB3D8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB404u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB40Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB41Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB424u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB42Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB438u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB444u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB450u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB458u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB494u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB4A8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB4B8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB4C0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB4C8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB4F8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB4FCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB51Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB52Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB538u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB540u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB544u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB58Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB594u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB5A4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB5C8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB5D0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB5FCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB604u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB610u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB618u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB624u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB62Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB634u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB63Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB644u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB650u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB658u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB660u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB66Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB678u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB680u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB68Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB69Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB6A4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB6ACu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB6C8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB6E0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB6F4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB6FCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB710u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB71Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB72Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB734u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB760u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB778u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB780u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB788u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB790u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB7BCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB7CCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB7D4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB7E0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB7E8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB7F0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB7FCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB808u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB80Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB828u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB834u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB844u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB84Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB858u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB86Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB890u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB89Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB8ACu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB8B4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB8C0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB8D4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB8E4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB910u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB918u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB91Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB924u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB934u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB940u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB948u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB954u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB958u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB970u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB998u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB9A4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB9CCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB9D8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EB9ECu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBA00u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBA14u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBA28u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBA3Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBA50u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBA60u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBA74u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBAA0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBAACu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBAD8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBAE4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBAF8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBB24u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBB30u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBB44u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBB58u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBB6Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBB80u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBB94u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBBA8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBBBCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBBE4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBBF0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBC04u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBC14u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBC40u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBC54u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBC94u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBCB8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBCC0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBCC8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBCDCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBCF4u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD10u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD20u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD28u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD3Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD4Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD58u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD64u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD68u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD70u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD78u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD84u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD88u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBD9Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBDACu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBDE0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBDE8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBDF8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBE00u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBE0Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBE14u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBE1Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBE28u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBE54u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBE60u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBE68u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBE6Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBE74u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBEA0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBECCu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBF04u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBF1Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBF24u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBF30u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBF34u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBF3Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBF48u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBF54u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBF8Cu, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBF94u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBFD0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBFE0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBFF0u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBFF8u, &recomp_unit_0487, "recomp_unit_0487");
    runtime.register_function(0x089EBFFCu, &recomp_unit_0487, "recomp_unit_0487");
}
} // namespace psprecomp
