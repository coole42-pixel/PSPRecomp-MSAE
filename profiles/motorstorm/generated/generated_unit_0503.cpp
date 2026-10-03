#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0503[1022] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 5, 0, 6, 0, 0, 7, 0, 0, 8, 9, 0, 10, 11, 0, 12, 0, 13,
    0, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 30,
    0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0,
    0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54,
    0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0,
    63, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78,
    0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 92, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0,
    0, 112, 0, 113, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0,
    119, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130,
    0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152,
    0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    159, 0, 160, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 166, 0, 0, 167, 0, 168, 0, 0, 169,
    0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 179, 0,
    0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 206,
    0, 207, 0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 216, 217, 0, 218, 0, 219, 0, 220,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 227, 228,
    0, 229, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 239, 0, 240,
};
void recomp_unit_0503_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089FB000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0503[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089FB000;
    case 2u: goto L_089FB010;
    case 3u: goto L_089FB030;
    case 4u: goto L_089FB034;
    case 5u: goto L_089FB03C;
    case 6u: goto L_089FB044;
    case 7u: goto L_089FB050;
    case 8u: goto L_089FB05C;
    case 9u: goto L_089FB060;
    case 10u: goto L_089FB068;
    case 11u: goto L_089FB06C;
    case 12u: goto L_089FB074;
    case 13u: goto L_089FB07C;
    case 14u: goto L_089FB088;
    case 15u: goto L_089FB094;
    case 16u: goto L_089FB09C;
    case 17u: goto L_089FB0A4;
    case 18u: goto L_089FB0B0;
    case 19u: goto L_089FB0C8;
    case 20u: goto L_089FB138;
    case 21u: goto L_089FB1C4;
    case 22u: goto L_089FB1EC;
    case 23u: goto L_089FB210;
    case 24u: goto L_089FB218;
    case 25u: goto L_089FB22C;
    case 26u: goto L_089FB234;
    case 27u: goto L_089FB254;
    case 28u: goto L_089FB25C;
    case 29u: goto L_089FB264;
    case 30u: goto L_089FB27C;
    case 31u: goto L_089FB284;
    case 32u: goto L_089FB290;
    case 33u: goto L_089FB2A4;
    case 34u: goto L_089FB2C0;
    case 35u: goto L_089FB2C8;
    case 36u: goto L_089FB2D4;
    case 37u: goto L_089FB300;
    case 38u: goto L_089FB30C;
    case 39u: goto L_089FB314;
    case 40u: goto L_089FB328;
    case 41u: goto L_089FB334;
    case 42u: goto L_089FB340;
    case 43u: goto L_089FB360;
    case 44u: goto L_089FB368;
    case 45u: goto L_089FB370;
    case 46u: goto L_089FB388;
    case 47u: goto L_089FB390;
    case 48u: goto L_089FB39C;
    case 49u: goto L_089FB3B0;
    case 50u: goto L_089FB3B8;
    case 51u: goto L_089FB3C0;
    case 52u: goto L_089FB3C8;
    case 53u: goto L_089FB3D8;
    case 54u: goto L_089FB3FC;
    case 55u: goto L_089FB404;
    case 56u: goto L_089FB410;
    case 57u: goto L_089FB41C;
    case 58u: goto L_089FB428;
    case 59u: goto L_089FB42C;
    case 60u: goto L_089FB448;
    case 61u: goto L_089FB460;
    case 62u: goto L_089FB474;
    case 63u: goto L_089FB480;
    case 64u: goto L_089FB484;
    case 65u: goto L_089FB48C;
    case 66u: goto L_089FB498;
    case 67u: goto L_089FB4AC;
    case 68u: goto L_089FB4B4;
    case 69u: goto L_089FB4D4;
    case 70u: goto L_089FB4E4;
    case 71u: goto L_089FB4EC;
    case 72u: goto L_089FB4F4;
    case 73u: goto L_089FB514;
    case 74u: goto L_089FB530;
    case 75u: goto L_089FB550;
    case 76u: goto L_089FB560;
    case 77u: goto L_089FB574;
    case 78u: goto L_089FB57C;
    case 79u: goto L_089FB584;
    case 80u: goto L_089FB590;
    case 81u: goto L_089FB5A4;
    case 82u: goto L_089FB5C0;
    case 83u: goto L_089FB5C8;
    case 84u: goto L_089FB5D4;
    case 85u: goto L_089FB608;
    case 86u: goto L_089FB630;
    case 87u: goto L_089FB63C;
    case 88u: goto L_089FB648;
    case 89u: goto L_089FB660;
    case 90u: goto L_089FB66C;
    case 91u: goto L_089FB67C;
    case 92u: goto L_089FB69C;
    case 93u: goto L_089FB6A0;
    case 94u: goto L_089FB6B0;
    case 95u: goto L_089FB6D8;
    case 96u: goto L_089FB6F0;
    case 97u: goto L_089FB700;
    case 98u: goto L_089FB730;
    case 99u: goto L_089FB738;
    case 100u: goto L_089FB740;
    case 101u: goto L_089FB754;
    case 102u: goto L_089FB75C;
    case 103u: goto L_089FB77C;
    case 104u: goto L_089FB788;
    case 105u: goto L_089FB794;
    case 106u: goto L_089FB7A0;
    case 107u: goto L_089FB7A8;
    case 108u: goto L_089FB7CC;
    case 109u: goto L_089FB7D4;
    case 110u: goto L_089FB7E0;
    case 111u: goto L_089FB7F4;
    case 112u: goto L_089FB804;
    case 113u: goto L_089FB80C;
    case 114u: goto L_089FB810;
    case 115u: goto L_089FB820;
    case 116u: goto L_089FB828;
    case 117u: goto L_089FB868;
    case 118u: goto L_089FB870;
    case 119u: goto L_089FB880;
    case 120u: goto L_089FB888;
    case 121u: goto L_089FB8A4;
    case 122u: goto L_089FB8BC;
    case 123u: goto L_089FB8E0;
    case 124u: goto L_089FB8EC;
    case 125u: goto L_089FB920;
    case 126u: goto L_089FB928;
    case 127u: goto L_089FB930;
    case 128u: goto L_089FB938;
    case 129u: goto L_089FB960;
    case 130u: goto L_089FB97C;
    case 131u: goto L_089FB984;
    case 132u: goto L_089FB990;
    case 133u: goto L_089FB998;
    case 134u: goto L_089FB9AC;
    case 135u: goto L_089FB9C0;
    case 136u: goto L_089FB9C8;
    case 137u: goto L_089FB9D4;
    case 138u: goto L_089FB9E4;
    case 139u: goto L_089FBA10;
    case 140u: goto L_089FBA20;
    case 141u: goto L_089FBA2C;
    case 142u: goto L_089FBA34;
    case 143u: goto L_089FBA3C;
    case 144u: goto L_089FBA48;
    case 145u: goto L_089FBA54;
    case 146u: goto L_089FBA60;
    case 147u: goto L_089FBA7C;
    case 148u: goto L_089FBA9C;
    case 149u: goto L_089FBABC;
    case 150u: goto L_089FBAE0;
    case 151u: goto L_089FBAF0;
    case 152u: goto L_089FBAFC;
    case 153u: goto L_089FBB04;
    case 154u: goto L_089FBB0C;
    case 155u: goto L_089FBB28;
    case 156u: goto L_089FBB40;
    case 157u: goto L_089FBB58;
    case 158u: goto L_089FBB74;
    case 159u: goto L_089FBB80;
    case 160u: goto L_089FBB88;
    case 161u: goto L_089FBB8C;
    case 162u: goto L_089FBB9C;
    case 163u: goto L_089FBBB0;
    case 164u: goto L_089FBBD0;
    case 165u: goto L_089FBBD8;
    case 166u: goto L_089FBBDC;
    case 167u: goto L_089FBBE8;
    case 168u: goto L_089FBBF0;
    case 169u: goto L_089FBBFC;
    case 170u: goto L_089FBC04;
    case 171u: goto L_089FBC0C;
    case 172u: goto L_089FBC28;
    case 173u: goto L_089FBC30;
    case 174u: goto L_089FBC38;
    case 175u: goto L_089FBC54;
    case 176u: goto L_089FBC5C;
    case 177u: goto L_089FBC64;
    case 178u: goto L_089FBC6C;
    case 179u: goto L_089FBC78;
    case 180u: goto L_089FBC84;
    case 181u: goto L_089FBC8C;
    case 182u: goto L_089FBCA8;
    case 183u: goto L_089FBCB4;
    case 184u: goto L_089FBCC0;
    case 185u: goto L_089FBCCC;
    case 186u: goto L_089FBCD4;
    case 187u: goto L_089FBCDC;
    case 188u: goto L_089FBCE4;
    case 189u: goto L_089FBD30;
    case 190u: goto L_089FBD38;
    case 191u: goto L_089FBD44;
    case 192u: goto L_089FBD58;
    case 193u: goto L_089FBD6C;
    case 194u: goto L_089FBD78;
    case 195u: goto L_089FBD80;
    case 196u: goto L_089FBDA0;
    case 197u: goto L_089FBDA8;
    case 198u: goto L_089FBDB4;
    case 199u: goto L_089FBDC0;
    case 200u: goto L_089FBDEC;
    case 201u: goto L_089FBDF8;
    case 202u: goto L_089FBE04;
    case 203u: goto L_089FBE30;
    case 204u: goto L_089FBE58;
    case 205u: goto L_089FBE60;
    case 206u: goto L_089FBE7C;
    case 207u: goto L_089FBE84;
    case 208u: goto L_089FBE90;
    case 209u: goto L_089FBE98;
    case 210u: goto L_089FBEA4;
    case 211u: goto L_089FBEAC;
    case 212u: goto L_089FBEB4;
    case 213u: goto L_089FBEBC;
    case 214u: goto L_089FBEC4;
    case 215u: goto L_089FBED8;
    case 216u: goto L_089FBEE0;
    case 217u: goto L_089FBEE4;
    case 218u: goto L_089FBEEC;
    case 219u: goto L_089FBEF4;
    case 220u: goto L_089FBEFC;
    case 221u: goto L_089FBF18;
    case 222u: goto L_089FBF44;
    case 223u: goto L_089FBF4C;
    case 224u: goto L_089FBF58;
    case 225u: goto L_089FBF64;
    case 226u: goto L_089FBF6C;
    case 227u: goto L_089FBF78;
    case 228u: goto L_089FBF7C;
    case 229u: goto L_089FBF84;
    case 230u: goto L_089FBF94;
    case 231u: goto L_089FBF9C;
    case 232u: goto L_089FBFA4;
    case 233u: goto L_089FBFB0;
    case 234u: goto L_089FBFB8;
    case 235u: goto L_089FBFC0;
    case 236u: goto L_089FBFD0;
    case 237u: goto L_089FBFDC;
    case 238u: goto L_089FBFE8;
    case 239u: goto L_089FBFEC;
    case 240u: goto L_089FBFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089FB000:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB010:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    if (aot_gpr[16] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_089FB060;
    }
    goto L_089FB030;
L_089FB030:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089FB034;
L_089FB034:
    aot_gpr[31] = (0x089FB03Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FB03Cu) goto L_089FB03C;
    return;
L_089FB03C:
    aot_gpr[31] = (0x089FB044u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB044u) goto L_089FB044;
    return;
L_089FB044:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FB050u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FB050u) goto L_089FB050;
    return;
L_089FB050:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(80)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089FB034;
    }
    goto L_089FB05C;
L_089FB05C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_089FB060;
L_089FB060:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB094;
      }
      goto L_089FB068;
    }
L_089FB068:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089FB06C;
L_089FB06C:
    aot_gpr[31] = (0x089FB074u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FB074u) goto L_089FB074;
    return;
L_089FB074:
    aot_gpr[31] = (0x089FB07Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB07Cu) goto L_089FB07C;
    return;
L_089FB07C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FB088u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FB088u) goto L_089FB088;
    return;
L_089FB088:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089FB06C;
    }
    goto L_089FB094;
L_089FB094:
    aot_gpr[31] = (0x089FB09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FB09Cu) goto L_089FB09C;
    return;
L_089FB09C:
    aot_gpr[31] = (0x089FB0A4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB0A4u) goto L_089FB0A4;
    return;
L_089FB0A4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FB0B0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FB0B0u) goto L_089FB0B0;
    return;
L_089FB0B0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB0C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (0u | 0u);
    aot_gpr[6] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB138:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB1C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[16] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (32768u << 16u);
    aot_gpr[6] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (32768u << 16u);
      if (branch_taken) {
          goto L_089FB218;
      }
      goto L_089FB1EC;
    }
L_089FB1EC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FB290;
      }
      goto L_089FB210;
    }
L_089FB210:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089FB22C;
      }
      goto L_089FB218;
    }
L_089FB218:
    aot_gpr[2] = (0u | 60501u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB22C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089FB264;
      }
      goto L_089FB234;
    }
L_089FB234:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089FB290;
      }
      goto L_089FB254;
    }
L_089FB254:
    aot_gpr[31] = (0x089FB25Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089FB608;
L_089FB25C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB290;
      }
      goto L_089FB264;
    }
L_089FB264:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[31] = (0x089FB27Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FB27Cu) goto L_089FB27C;
    return;
L_089FB27C:
    aot_gpr[31] = (0x089FB284u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB284u) goto L_089FB284;
    return;
L_089FB284:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FB290u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FB290u) goto L_089FB290;
    return;
L_089FB290:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB2A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (32768u << 16u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[4] & aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089FB2C8;
      }
      goto L_089FB2C0;
    }
L_089FB2C0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 60501u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB2C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB2D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[16] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[7] = (32768u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089FB314;
      }
      goto L_089FB300;
    }
L_089FB300:
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_089FB39C;
      }
      goto L_089FB30C;
    }
L_089FB30C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_089FB328;
      }
      goto L_089FB314;
    }
L_089FB314:
    aot_gpr[2] = (0u | 60500u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB328:
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FB39C;
      }
      goto L_089FB334;
    }
L_089FB334:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089FB370;
      }
      goto L_089FB340;
    }
L_089FB340:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089FB39C;
      }
      goto L_089FB360;
    }
L_089FB360:
    aot_gpr[31] = (0x089FB368u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089FB608;
L_089FB368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB39C;
      }
      goto L_089FB370;
    }
L_089FB370:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[31] = (0x089FB388u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FB388u) goto L_089FB388;
    return;
L_089FB388:
    aot_gpr[31] = (0x089FB390u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB390u) goto L_089FB390;
    return;
L_089FB390:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FB39Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FB39Cu) goto L_089FB39C;
    return;
L_089FB39C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB3B0:
    if (aot_gpr[5] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[5]);
        goto L_089FB3C0;
    }
    goto L_089FB3B8;
L_089FB3B8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB3C0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB3C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (2215u << 16u);
      if (branch_taken) {
          goto L_089FB410;
      }
      goto L_089FB3D8;
    }
L_089FB3D8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[6];
    aot_gpr[6] = (2215u << 16u);
      if (branch_taken) {
          goto L_089FB48C;
      }
      goto L_089FB3FC;
    }
L_089FB3FC:
    aot_gpr[31] = (0x089FB404u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8487));
    goto L_089FB6B0;
L_089FB404:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB410:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8487));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_089FB41C;
L_089FB41C:
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(20));
    if (aot_gpr[6] == aot_gpr[5]) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
        goto L_089FB484;
    }
    goto L_089FB428;
L_089FB428:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    goto L_089FB42C;
L_089FB42C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[9] == aot_gpr[10]) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_089FB474;
    }
    goto L_089FB448;
L_089FB448:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[31] = (0x089FB460u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    goto L_089FB6B0;
L_089FB460:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_089FB474;
L_089FB474:
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    if (aot_gpr[9] != aot_gpr[5]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
        goto L_089FB42C;
    }
    goto L_089FB480;
L_089FB480:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    goto L_089FB484;
L_089FB484:
    if (aot_gpr[7] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_089FB41C;
    }
    goto L_089FB48C;
L_089FB48C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB498:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089FB4ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FB4ACu) goto L_089FB4AC;
    return;
L_089FB4AC:
    aot_gpr[31] = (0x089FB4B4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB4B4u) goto L_089FB4B4;
    return;
L_089FB4B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 492u);
    aot_gpr[31] = (0x089FB4D4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8512));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089FB4D4u) goto L_089FB4D4;
    return;
L_089FB4D4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089FB4F4;
      }
      goto L_089FB4E4;
    }
L_089FB4E4:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FB574;
      }
      goto L_089FB4EC;
    }
L_089FB4EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB590;
      }
      goto L_089FB4F4;
    }
L_089FB4F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    if (aot_gpr[7] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[6]);
        goto L_089FB514;
    }
    goto L_089FB514;
L_089FB514:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[5]);
        goto L_089FB530;
    }
    goto L_089FB530;
L_089FB530:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
      if (branch_taken) {
          goto L_089FB560;
      }
      goto L_089FB550;
    }
L_089FB550:
    aot_gpr[6] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_089FB560;
L_089FB560:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB574:
    aot_gpr[31] = (0x089FB57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FB57Cu) goto L_089FB57C;
    return;
L_089FB57C:
    aot_gpr[31] = (0x089FB584u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB584u) goto L_089FB584;
    return;
L_089FB584:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FB590u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FB590u) goto L_089FB590;
    return;
L_089FB590:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB5A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089FB5C0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FB5C0u) goto L_089FB5C0;
    return;
L_089FB5C0:
    aot_gpr[31] = (0x089FB5C8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB5C8u) goto L_089FB5C8;
    return;
L_089FB5C8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FB5D4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FB5D4u) goto L_089FB5D4;
    return;
L_089FB5D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB608:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089FB6A0;
      }
      goto L_089FB630;
    }
L_089FB630:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089FB648;
      }
      goto L_089FB63C;
    }
L_089FB63C:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089FB648;
L_089FB648:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FB67C;
      }
      goto L_089FB660;
    }
L_089FB660:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089FB66Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_089FB5A4;
L_089FB66C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB67C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(68), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    if (aot_gpr[7] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[4]);
        goto L_089FB69C;
    }
    goto L_089FB69C;
L_089FB69C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    goto L_089FB6A0;
L_089FB6A0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB6B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089FB730;
      }
      goto L_089FB6D8;
    }
L_089FB6D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[19] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u < aot_gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_089FB730;
      }
      goto L_089FB6F0;
    }
L_089FB6F0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FB700u);
    aot_gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB700u) goto L_089FB700;
    return;
L_089FB700:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[6] = (32768u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FB730u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FB730u) goto L_089FB730;
    return;
L_089FB730:
    aot_gpr[31] = (0x089FB738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 84u, 0x08A3941Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB738u) goto L_089FB738;
    return;
L_089FB738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB738;
      }
      goto L_089FB740;
    }
L_089FB740:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] & 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (0u | 4u);
      if (branch_taken) {
          goto L_089FB75C;
      }
      goto L_089FB754;
    }
L_089FB754:
    aot_gpr[6] = (aot_gpr[7] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    goto L_089FB75C;
L_089FB75C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[9]);
      if (branch_taken) {
          goto L_089FB870;
      }
      goto L_089FB77C;
    }
L_089FB77C:
    aot_gpr[8] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[8] == 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_089FB828;
    }
    goto L_089FB788;
L_089FB788:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    if (aot_gpr[7] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
        goto L_089FB7D4;
    }
    goto L_089FB794;
L_089FB794:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[8]);
      if (branch_taken) {
          goto L_089FB7A8;
      }
      goto L_089FB7A0;
    }
L_089FB7A0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), 0u);
    goto L_089FB7A8;
L_089FB7A8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[10] < aot_gpr[8] ? 1u : 0u);
    if (aot_gpr[9] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), 0u);
        goto L_089FB810;
    }
    goto L_089FB7CC;
L_089FB7CC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[8]);
      if (branch_taken) {
          goto L_089FB80C;
      }
      goto L_089FB7D4;
    }
L_089FB7D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[31] = (0x089FB7E0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089FB498;
L_089FB7E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089FB804;
      }
      goto L_089FB7F4;
    }
L_089FB7F4:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB804:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[8]);
    goto L_089FB80C;
L_089FB80C:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), 0u);
    goto L_089FB810;
L_089FB810:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    if (aot_gpr[8] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[7]);
        goto L_089FB820;
    }
    goto L_089FB820;
L_089FB820:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_089FB828;
L_089FB828:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), aot_gpr[10]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[11] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[5]);
    aot_gpr[10] = (aot_gpr[6] < aot_gpr[9] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[9]);
    aot_gpr[6] = (32768u << 16u);
    if (aot_gpr[10] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[9]);
        goto L_089FB868;
    }
    goto L_089FB868;
L_089FB868:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_089FB8EC;
      }
      goto L_089FB870;
    }
L_089FB870:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[31] = (0x089FB880u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FB880u) goto L_089FB880;
    return;
L_089FB880:
    aot_gpr[31] = (0x089FB888u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB888u) goto L_089FB888;
    return;
L_089FB888:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 244u);
    aot_gpr[31] = (0x089FB8A4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8512));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089FB8A4u) goto L_089FB8A4;
    return;
L_089FB8A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089FB7F4;
      }
      goto L_089FB8BC;
    }
L_089FB8BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[7]);
    aot_gpr[9] = (aot_gpr[9] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[6] = (32768u << 16u);
    if (aot_gpr[9] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[7]);
        goto L_089FB8E0;
    }
    goto L_089FB8E0;
L_089FB8E0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), aot_gpr[7]);
    goto L_089FB8EC;
L_089FB8EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB920:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB928:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB930:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB938:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB960:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FB998;
      }
      goto L_089FB97C;
    }
L_089FB97C:
    aot_gpr[31] = (0x089FB984u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FBBB0;
L_089FB984:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB998;
      }
      goto L_089FB990;
    }
L_089FB990:
    aot_gpr[31] = (0x089FB998u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FB9AC;
L_089FB998:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB9AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FB9C0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FB9C0u) goto L_089FB9C0;
    return;
L_089FB9C0:
    aot_gpr[31] = (0x089FB9C8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB9C8u) goto L_089FB9C8;
    return;
L_089FB9C8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FB9D4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FB9D4u) goto L_089FB9D4;
    return;
L_089FB9D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB9E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[18] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089FBA9C;
      }
      goto L_089FBA10;
    }
L_089FBA10:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089FBA20u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 79u, 0x089FC400u>(ctx, &aot_mem) && ctx.pc == 0x089FBA20u) goto L_089FBA20;
    return;
L_089FBA20:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089FBA34;
      }
      goto L_089FBA2C;
    }
L_089FBA2C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
      if (branch_taken) {
          goto L_089FBA7C;
      }
      goto L_089FBA34;
    }
L_089FBA34:
    aot_gpr[31] = (0x089FBA3Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 212u, 0x089FCC3Cu>(ctx, &aot_mem) && ctx.pc == 0x089FBA3Cu) goto L_089FBA3C;
    return;
L_089FBA3C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FBA48u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089FB930;
L_089FBA48:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x089FBA54u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089FB930;
L_089FBA54:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[31] = (0x089FBA60u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 20u, 0x089FC128u>(ctx, &aot_mem) && ctx.pc == 0x089FBA60u) goto L_089FBA60;
    return;
L_089FBA60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FBA7Cu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FBA7Cu) goto L_089FBA7C;
    return;
L_089FBA7C:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_089FBA9C:
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
L_089FBABC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089FBB40;
      }
      goto L_089FBAE0;
    }
L_089FBAE0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089FBAF0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 88u, 0x089FC4B4u>(ctx, &aot_mem) && ctx.pc == 0x089FBAF0u) goto L_089FBAF0;
    return;
L_089FBAF0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089FBB04;
      }
      goto L_089FBAFC;
    }
L_089FBAFC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_089FBB28;
      }
      goto L_089FBB04;
    }
L_089FBB04:
    aot_gpr[31] = (0x089FBB0Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 20u, 0x089FC128u>(ctx, &aot_mem) && ctx.pc == 0x089FBB0Cu) goto L_089FBB0C;
    return;
L_089FBB0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FBB28u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FBB28u) goto L_089FBB28;
    return;
L_089FBB28:
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
L_089FBB40:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBB58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089FBB9C;
      }
      goto L_089FBB74;
    }
L_089FBB74:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x089FBB80u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 11u, 0x089FD094u>(ctx, &aot_mem) && ctx.pc == 0x089FBB80u) goto L_089FBB80;
    return;
L_089FBB80:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_089FBB8C;
      }
      goto L_089FBB88;
    }
L_089FBB88:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089FBB8C;
L_089FBB8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBB9C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBBB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089FBBDC;
      }
      goto L_089FBBD0;
    }
L_089FBBD0:
    aot_gpr[31] = (0x089FBBD8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 68u, 0x089FC364u>(ctx, &aot_mem) && ctx.pc == 0x089FBBD8u) goto L_089FBBD8;
    return;
L_089FBBD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_089FBBDC;
L_089FBBDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089FBC04;
    }
    goto L_089FBBE8;
L_089FBBE8:
    aot_gpr[31] = (0x089FBBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 88u, 0x089FD49Cu>(ctx, &aot_mem) && ctx.pc == 0x089FBBF0u) goto L_089FBBF0;
    return;
L_089FBBF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089FBBFCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 6u, 0x089FD048u>(ctx, &aot_mem) && ctx.pc == 0x089FBBFCu) goto L_089FBBFC;
    return;
L_089FBBFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089FBC04;
L_089FBC04:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089FBC30;
    }
    goto L_089FBC0C;
L_089FBC0C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FBC28u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FBC28u) goto L_089FBC28;
    return;
L_089FBC28:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089FBC30;
L_089FBC30:
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_089FBC5C;
    }
    goto L_089FBC38;
L_089FBC38:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(532)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FBC54u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FBC54u) goto L_089FBC54;
    return;
L_089FBC54:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_089FBC5C;
L_089FBC5C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FBC84;
      }
      goto L_089FBC64;
    }
L_089FBC64:
    aot_gpr[31] = (0x089FBC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FBC6Cu) goto L_089FBC6C;
    return;
L_089FBC6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FBC78u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FBC78u) goto L_089FBC78;
    return;
L_089FBC78:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FBC84;
L_089FBC84:
    aot_gpr[31] = (0x089FBC8Cu);
    aot_gpr[5] = (0u | 0u);
    goto L_089FBCDC;
L_089FBC8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBCA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089FBCCC;
      }
      goto L_089FBCB4;
    }
L_089FBCB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FBCD4;
      }
      goto L_089FBCC0;
    }
L_089FBCC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FBCD4;
      }
      goto L_089FBCCC;
    }
L_089FBCCC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBCD4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBCDC:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBCE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1648));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1620), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1612), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1616), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1624), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1636), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[22] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1628), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1632), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1640), aot_gpr[31]);
    aot_gpr[31] = (0x089FBD30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(36), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 118u, 0x089FD61Cu>(ctx, &aot_mem) && ctx.pc == 0x089FBD30u) goto L_089FBD30;
    return;
L_089FBD30:
    aot_gpr[31] = (0x089FBD38u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x089FBD38u) goto L_089FBD38;
    return;
L_089FBD38:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(668));
    aot_gpr[31] = (0x089FBD44u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 80u, 0x089F143Cu>(ctx, &aot_mem) && ctx.pc == 0x089FBD44u) goto L_089FBD44;
    return;
L_089FBD44:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(672));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FBD58u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 136u, 0x089F07B8u>(ctx, &aot_mem) && ctx.pc == 0x089FBD58u) goto L_089FBD58;
    return;
L_089FBD58:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(668), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1340), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1344), 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089FBD78;
      }
      goto L_089FBD6C;
    }
L_089FBD6C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089FBD78u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 153u, 0x089F0884u>(ctx, &aot_mem) && ctx.pc == 0x089FBD78u) goto L_089FBD78;
    return;
L_089FBD78:
    aot_gpr[31] = (0x089FBD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 83u, 0x089F1478u>(ctx, &aot_mem) && ctx.pc == 0x089FBD80u) goto L_089FBD80;
    return;
L_089FBD80:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x089FBDA0u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 91u, 0x089F14F4u>(ctx, &aot_mem) && ctx.pc == 0x089FBDA0u) goto L_089FBDA0;
    return;
L_089FBDA0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[2]);
      if (branch_taken) {
          goto L_089FBDEC;
      }
      goto L_089FBDA8;
    }
L_089FBDA8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089FBDB4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x089FBDB4u) goto L_089FBDB4;
    return;
L_089FBDB4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FBDC0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x089FBDC0u) goto L_089FBDC0;
    return;
L_089FBDC0:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1612)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1616)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1620)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1624)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1628)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1632)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1636)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1640)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1648));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBDEC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089FBDF8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x089FBDF8u) goto L_089FBDF8;
    return;
L_089FBDF8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FBE04u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x089FBE04u) goto L_089FBE04;
    return;
L_089FBE04:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1612)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1616)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1620)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1624)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1628)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1632)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1636)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1640)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1648));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBE30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089FBE58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 113u, 0x089FD5DCu>(ctx, &aot_mem) && ctx.pc == 0x089FBE58u) goto L_089FBE58;
    return;
L_089FBE58:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 500u);
      if (branch_taken) {
          goto L_089FBE7C;
      }
      goto L_089FBE60;
    }
L_089FBE60:
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089FBE98;
      }
      goto L_089FBE7C;
    }
L_089FBE7C:
    aot_gpr[31] = (0x089FBE84u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 115u, 0x089FD604u>(ctx, &aot_mem) && ctx.pc == 0x089FBE84u) goto L_089FBE84;
    return;
L_089FBE84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x089FBE90u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 116u, 0x089FD60Cu>(ctx, &aot_mem) && ctx.pc == 0x089FBE90u) goto L_089FBE90;
    return;
L_089FBE90:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_089FBE98;
L_089FBE98:
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_089FBEE4;
    }
    goto L_089FBEA4;
L_089FBEA4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089FBEE0;
      }
      goto L_089FBEAC;
    }
L_089FBEAC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FBEE0;
      }
      goto L_089FBEB4;
    }
L_089FBEB4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089FBEE0;
      }
      goto L_089FBEBC;
    }
L_089FBEBC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_089FBEE0;
      }
      goto L_089FBEC4;
    }
L_089FBEC4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FBED8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089FBF18;
L_089FBED8:
    aot_gpr[31] = (0x089FBEE0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 118u, 0x089FD61Cu>(ctx, &aot_mem) && ctx.pc == 0x089FBEE0u) goto L_089FBEE0;
    return;
L_089FBEE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_089FBEE4;
L_089FBEE4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBEFC;
      }
      goto L_089FBEEC;
    }
L_089FBEEC:
    aot_gpr[31] = (0x089FBEF4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 17u, 0x089FC0E0u>(ctx, &aot_mem) && ctx.pc == 0x089FBEF4u) goto L_089FBEF4;
    return;
L_089FBEF4:
    aot_gpr[31] = (0x089FBEFCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 118u, 0x089FD61Cu>(ctx, &aot_mem) && ctx.pc == 0x089FBEFCu) goto L_089FBEFC;
    return;
L_089FBEFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
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
L_089FBF18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[18] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089FBF64;
      }
      goto L_089FBF44;
    }
L_089FBF44:
    aot_gpr[31] = (0x089FBF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FBF4Cu) goto L_089FBF4C;
    return;
L_089FBF4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x089FBF58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FBF58u) goto L_089FBF58;
    return;
L_089FBF58:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089FBF7C;
      }
      goto L_089FBF64;
    }
L_089FBF64:
    aot_gpr[31] = (0x089FBF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FBF6Cu) goto L_089FBF6C;
    return;
L_089FBF6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FBF78u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FBF78u) goto L_089FBF78;
    return;
L_089FBF78:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_089FBF7C;
L_089FBF7C:
    aot_gpr[31] = (0x089FBF84u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FBF84u) goto L_089FBF84;
    return;
L_089FBF84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FBF94u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FBF94u) goto L_089FBF94;
    return;
L_089FBF94:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 4u, 0x089FC03Cu>(ctx, &aot_mem); return;
      }
      goto L_089FBF9C;
    }
L_089FBF9C:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089FBFB0;
      }
      goto L_089FBFA4;
    }
L_089FBFA4:
    aot_gpr[18] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-7900));
      if (branch_taken) {
          goto L_089FBFB8;
      }
      goto L_089FBFB0;
    }
L_089FBFB0:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-7892));
    goto L_089FBFB8;
L_089FBFB8:
    aot_gpr[31] = (0x089FBFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FBFC0u) goto L_089FBFC0;
    return;
L_089FBFC0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FBFD0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FBFD0u) goto L_089FBFD0;
    return;
L_089FBFD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[31] = (0x089FBFDCu);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FBFDCu) goto L_089FBFDC;
    return;
L_089FBFDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FBFE8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FBFE8u) goto L_089FBFE8;
    return;
L_089FBFE8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_089FBFEC;
L_089FBFEC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 4u, 0x089FC03Cu>(ctx, &aot_mem); return;
      }
      goto L_089FBFF4;
    }
L_089FBFF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(532)));
    ctx.pc = 0x089FC000u; return;
}

void recomp_unit_0503(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0503_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_503(Runtime &runtime) {
    runtime.register_generated_unit(503u, 0x089FB000u, 4096u, &recomp_unit_0503, &recomp_unit_0503_entry);
    runtime.register_function(0x089FB000u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB010u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB030u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB034u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB03Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB044u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB050u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB05Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB060u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB068u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB06Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB074u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB07Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB088u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB094u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB09Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB0A4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB0B0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB0C8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB138u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB1C4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB1ECu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB210u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB218u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB22Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB234u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB254u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB25Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB264u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB27Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB284u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB290u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB2A4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB2C0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB2C8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB2D4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB300u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB30Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB314u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB328u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB334u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB340u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB360u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB368u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB370u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB388u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB390u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB39Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB3B0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB3B8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB3C0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB3C8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB3D8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB3FCu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB404u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB410u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB41Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB428u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB42Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB448u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB460u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB474u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB480u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB484u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB48Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB498u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB4ACu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB4B4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB4D4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB4E4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB4ECu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB4F4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB514u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB530u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB550u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB560u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB574u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB57Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB584u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB590u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB5A4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB5C0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB5C8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB5D4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB608u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB630u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB63Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB648u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB660u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB66Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB67Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB69Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB6A0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB6B0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB6D8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB6F0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB700u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB730u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB738u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB740u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB754u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB75Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB77Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB788u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB794u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB7A0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB7A8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB7CCu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB7D4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB7E0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB7F4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB804u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB80Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB810u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB820u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB828u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB868u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB870u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB880u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB888u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB8A4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB8BCu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB8E0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB8ECu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB920u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB928u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB930u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB938u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB960u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB97Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB984u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB990u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB998u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB9ACu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB9C0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB9C8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB9D4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FB9E4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBA10u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBA20u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBA2Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBA34u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBA3Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBA48u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBA54u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBA60u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBA7Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBA9Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBABCu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBAE0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBAF0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBAFCu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBB04u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBB0Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBB28u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBB40u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBB58u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBB74u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBB80u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBB88u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBB8Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBB9Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBBB0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBBD0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBBD8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBBDCu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBBE8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBBF0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBBFCu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBC04u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBC0Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBC28u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBC30u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBC38u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBC54u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBC5Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBC64u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBC6Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBC78u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBC84u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBC8Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBCA8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBCB4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBCC0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBCCCu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBCD4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBCDCu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBCE4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBD30u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBD38u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBD44u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBD58u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBD6Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBD78u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBD80u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBDA0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBDA8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBDB4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBDC0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBDECu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBDF8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBE04u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBE30u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBE58u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBE60u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBE7Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBE84u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBE90u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBE98u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBEA4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBEACu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBEB4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBEBCu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBEC4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBED8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBEE0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBEE4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBEECu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBEF4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBEFCu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBF18u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBF44u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBF4Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBF58u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBF64u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBF6Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBF78u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBF7Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBF84u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBF94u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBF9Cu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBFA4u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBFB0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBFB8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBFC0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBFD0u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBFDCu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBFE8u, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBFECu, &recomp_unit_0503, "recomp_unit_0503");
    runtime.register_function(0x089FBFF4u, &recomp_unit_0503, "recomp_unit_0503");
}
} // namespace psprecomp
