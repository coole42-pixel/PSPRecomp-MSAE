#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0470[1022] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0,
    0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18,
    0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 34, 0, 35, 36,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 40, 41, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 57, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63,
    0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 83, 0, 0, 84, 85,
    0, 0, 0, 0, 86, 87, 0, 0, 88, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 92, 0, 0, 0, 93, 0, 0, 0,
    94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 101, 0, 102, 103, 0, 0, 104, 105, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110,
    0, 111, 112, 0, 0, 113, 114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0,
    0, 127, 0, 128, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 133, 134, 0, 0, 135, 136, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 142, 0, 143, 0, 0, 144, 145, 0, 146, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0,
    149, 150, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 171, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 182,
    0, 0, 183, 184, 0, 0, 0, 0, 0, 0, 0, 185, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 196, 0, 197, 0, 198, 199, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 207, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211,
    0, 0, 212, 0, 213, 0, 214, 215, 0, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 223,
    0, 224, 225, 0, 226, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 233, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 237, 0, 238, 0, 0, 239, 0, 0,
    240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 245, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 249, 250, 251, 0, 0,
    252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 258, 259,
};
void recomp_unit_0470_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089DA004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0470[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089DA004;
    case 2u: goto L_089DA01C;
    case 3u: goto L_089DA024;
    case 4u: goto L_089DA02C;
    case 5u: goto L_089DA030;
    case 6u: goto L_089DA034;
    case 7u: goto L_089DA064;
    case 8u: goto L_089DA070;
    case 9u: goto L_089DA078;
    case 10u: goto L_089DA088;
    case 11u: goto L_089DA090;
    case 12u: goto L_089DA0A0;
    case 13u: goto L_089DA0B8;
    case 14u: goto L_089DA0D0;
    case 15u: goto L_089DA0E8;
    case 16u: goto L_089DA0F0;
    case 17u: goto L_089DA0F8;
    case 18u: goto L_089DA100;
    case 19u: goto L_089DA108;
    case 20u: goto L_089DA110;
    case 21u: goto L_089DA130;
    case 22u: goto L_089DA13C;
    case 23u: goto L_089DA148;
    case 24u: goto L_089DA160;
    case 25u: goto L_089DA168;
    case 26u: goto L_089DA170;
    case 27u: goto L_089DA178;
    case 28u: goto L_089DA190;
    case 29u: goto L_089DA1AC;
    case 30u: goto L_089DA1B4;
    case 31u: goto L_089DA1BC;
    case 32u: goto L_089DA1C8;
    case 33u: goto L_089DA1F0;
    case 34u: goto L_089DA1F4;
    case 35u: goto L_089DA1FC;
    case 36u: goto L_089DA200;
    case 37u: goto L_089DA21C;
    case 38u: goto L_089DA22C;
    case 39u: goto L_089DA234;
    case 40u: goto L_089DA23C;
    case 41u: goto L_089DA240;
    case 42u: goto L_089DA244;
    case 43u: goto L_089DA25C;
    case 44u: goto L_089DA264;
    case 45u: goto L_089DA270;
    case 46u: goto L_089DA278;
    case 47u: goto L_089DA284;
    case 48u: goto L_089DA2B4;
    case 49u: goto L_089DA2B8;
    case 50u: goto L_089DA2D8;
    case 51u: goto L_089DA2E0;
    case 52u: goto L_089DA2EC;
    case 53u: goto L_089DA2F4;
    case 54u: goto L_089DA314;
    case 55u: goto L_089DA324;
    case 56u: goto L_089DA32C;
    case 57u: goto L_089DA330;
    case 58u: goto L_089DA338;
    case 59u: goto L_089DA340;
    case 60u: goto L_089DA350;
    case 61u: goto L_089DA35C;
    case 62u: goto L_089DA368;
    case 63u: goto L_089DA380;
    case 64u: goto L_089DA390;
    case 65u: goto L_089DA398;
    case 66u: goto L_089DA3AC;
    case 67u: goto L_089DA3B0;
    case 68u: goto L_089DA3C0;
    case 69u: goto L_089DA3C8;
    case 70u: goto L_089DA3DC;
    case 71u: goto L_089DA3FC;
    case 72u: goto L_089DA404;
    case 73u: goto L_089DA40C;
    case 74u: goto L_089DA4B0;
    case 75u: goto L_089DA4B4;
    case 76u: goto L_089DA4CC;
    case 77u: goto L_089DA4D8;
    case 78u: goto L_089DA4E4;
    case 79u: goto L_089DA4F4;
    case 80u: goto L_089DA500;
    case 81u: goto L_089DA524;
    case 82u: goto L_089DA56C;
    case 83u: goto L_089DA570;
    case 84u: goto L_089DA57C;
    case 85u: goto L_089DA580;
    case 86u: goto L_089DA594;
    case 87u: goto L_089DA598;
    case 88u: goto L_089DA5A4;
    case 89u: goto L_089DA5A8;
    case 90u: goto L_089DA5C8;
    case 91u: goto L_089DA5E0;
    case 92u: goto L_089DA5E4;
    case 93u: goto L_089DA5F4;
    case 94u: goto L_089DA604;
    case 95u: goto L_089DA610;
    case 96u: goto L_089DA62C;
    case 97u: goto L_089DA64C;
    case 98u: goto L_089DA658;
    case 99u: goto L_089DA664;
    case 100u: goto L_089DA694;
    case 101u: goto L_089DA69C;
    case 102u: goto L_089DA6A4;
    case 103u: goto L_089DA6A8;
    case 104u: goto L_089DA6B4;
    case 105u: goto L_089DA6B8;
    case 106u: goto L_089DA6C0;
    case 107u: goto L_089DA6D8;
    case 108u: goto L_089DA6E0;
    case 109u: goto L_089DA6EC;
    case 110u: goto L_089DA700;
    case 111u: goto L_089DA708;
    case 112u: goto L_089DA70C;
    case 113u: goto L_089DA718;
    case 114u: goto L_089DA71C;
    case 115u: goto L_089DA728;
    case 116u: goto L_089DA73C;
    case 117u: goto L_089DA744;
    case 118u: goto L_089DA74C;
    case 119u: goto L_089DA754;
    case 120u: goto L_089DA75C;
    case 121u: goto L_089DA760;
    case 122u: goto L_089DA7A0;
    case 123u: goto L_089DA7A8;
    case 124u: goto L_089DA7DC;
    case 125u: goto L_089DA7E8;
    case 126u: goto L_089DA7FC;
    case 127u: goto L_089DA808;
    case 128u: goto L_089DA810;
    case 129u: goto L_089DA814;
    case 130u: goto L_089DA834;
    case 131u: goto L_089DA83C;
    case 132u: goto L_089DA844;
    case 133u: goto L_089DA850;
    case 134u: goto L_089DA854;
    case 135u: goto L_089DA860;
    case 136u: goto L_089DA864;
    case 137u: goto L_089DA86C;
    case 138u: goto L_089DA88C;
    case 139u: goto L_089DA894;
    case 140u: goto L_089DA8A4;
    case 141u: goto L_089DA8B4;
    case 142u: goto L_089DA8B8;
    case 143u: goto L_089DA8C0;
    case 144u: goto L_089DA8CC;
    case 145u: goto L_089DA8D0;
    case 146u: goto L_089DA8D8;
    case 147u: goto L_089DA8E4;
    case 148u: goto L_089DA8EC;
    case 149u: goto L_089DA904;
    case 150u: goto L_089DA908;
    case 151u: goto L_089DA910;
    case 152u: goto L_089DA918;
    case 153u: goto L_089DA924;
    case 154u: goto L_089DA92C;
    case 155u: goto L_089DA934;
    case 156u: goto L_089DA93C;
    case 157u: goto L_089DA94C;
    case 158u: goto L_089DA984;
    case 159u: goto L_089DA99C;
    case 160u: goto L_089DA9A4;
    case 161u: goto L_089DA9B4;
    case 162u: goto L_089DA9D4;
    case 163u: goto L_089DA9E8;
    case 164u: goto L_089DAA04;
    case 165u: goto L_089DAA0C;
    case 166u: goto L_089DAA1C;
    case 167u: goto L_089DAA24;
    case 168u: goto L_089DAA3C;
    case 169u: goto L_089DAA44;
    case 170u: goto L_089DAA4C;
    case 171u: goto L_089DAA50;
    case 172u: goto L_089DAA58;
    case 173u: goto L_089DAA64;
    case 174u: goto L_089DAA6C;
    case 175u: goto L_089DAA74;
    case 176u: goto L_089DAA88;
    case 177u: goto L_089DAAB8;
    case 178u: goto L_089DAAC0;
    case 179u: goto L_089DAAD0;
    case 180u: goto L_089DAADC;
    case 181u: goto L_089DAAF0;
    case 182u: goto L_089DAB00;
    case 183u: goto L_089DAB0C;
    case 184u: goto L_089DAB10;
    case 185u: goto L_089DAB30;
    case 186u: goto L_089DAB34;
    case 187u: goto L_089DAB5C;
    case 188u: goto L_089DAB64;
    case 189u: goto L_089DAB6C;
    case 190u: goto L_089DAB74;
    case 191u: goto L_089DAB84;
    case 192u: goto L_089DABAC;
    case 193u: goto L_089DABBC;
    case 194u: goto L_089DABE0;
    case 195u: goto L_089DABFC;
    case 196u: goto L_089DAC0C;
    case 197u: goto L_089DAC14;
    case 198u: goto L_089DAC1C;
    case 199u: goto L_089DAC20;
    case 200u: goto L_089DAC28;
    case 201u: goto L_089DAC38;
    case 202u: goto L_089DAC44;
    case 203u: goto L_089DAC64;
    case 204u: goto L_089DAC84;
    case 205u: goto L_089DACBC;
    case 206u: goto L_089DACC8;
    case 207u: goto L_089DACCC;
    case 208u: goto L_089DACD4;
    case 209u: goto L_089DACF0;
    case 210u: goto L_089DACF8;
    case 211u: goto L_089DAD00;
    case 212u: goto L_089DAD0C;
    case 213u: goto L_089DAD14;
    case 214u: goto L_089DAD1C;
    case 215u: goto L_089DAD20;
    case 216u: goto L_089DAD2C;
    case 217u: goto L_089DAD34;
    case 218u: goto L_089DAD3C;
    case 219u: goto L_089DAD48;
    case 220u: goto L_089DAD6C;
    case 221u: goto L_089DAD74;
    case 222u: goto L_089DAD7C;
    case 223u: goto L_089DAD80;
    case 224u: goto L_089DAD88;
    case 225u: goto L_089DAD8C;
    case 226u: goto L_089DAD94;
    case 227u: goto L_089DAD98;
    case 228u: goto L_089DADC8;
    case 229u: goto L_089DADD8;
    case 230u: goto L_089DADF0;
    case 231u: goto L_089DADF8;
    case 232u: goto L_089DAE00;
    case 233u: goto L_089DAEA0;
    case 234u: goto L_089DAEA4;
    case 235u: goto L_089DAEC0;
    case 236u: goto L_089DAEE0;
    case 237u: goto L_089DAEE4;
    case 238u: goto L_089DAEEC;
    case 239u: goto L_089DAEF8;
    case 240u: goto L_089DAF04;
    case 241u: goto L_089DAF10;
    case 242u: goto L_089DAF20;
    case 243u: goto L_089DAF2C;
    case 244u: goto L_089DAF38;
    case 245u: goto L_089DAF3C;
    case 246u: goto L_089DAF4C;
    case 247u: goto L_089DAF54;
    case 248u: goto L_089DAF68;
    case 249u: goto L_089DAF70;
    case 250u: goto L_089DAF74;
    case 251u: goto L_089DAF78;
    case 252u: goto L_089DAF84;
    case 253u: goto L_089DAF94;
    case 254u: goto L_089DAFA4;
    case 255u: goto L_089DAFD4;
    case 256u: goto L_089DAFE0;
    case 257u: goto L_089DAFEC;
    case 258u: goto L_089DAFF4;
    case 259u: goto L_089DAFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089DA004:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[2] = (aot_gpr[2] & 2048u);
    aot_gpr[3] = (aot_gpr[4] & 2048u);
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
        (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 170u, 0x089D9DF0u>(ctx, &aot_mem); return;
    }
    goto L_089DA01C;
L_089DA01C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 137u, 0x089D9BECu>(ctx, &aot_mem); return;
L_089DA024:
    aot_gpr[31] = (0x089DA02Cu);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 117u, 0x089D9A58u>(ctx, &aot_mem) && ctx.pc == 0x089DA02Cu) goto L_089DA02C;
    return;
L_089DA02C:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089DA030;
L_089DA030:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    goto L_089DA034;
L_089DA034:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA064:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 167u, 0x089D9DC4u>(ctx, &aot_mem); return;
L_089DA070:
    aot_gpr[31] = (0x089DA078u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 117u, 0x089D9A58u>(ctx, &aot_mem) && ctx.pc == 0x089DA078u) goto L_089DA078;
    return;
L_089DA078:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 202u, 0x089D9FC8u>(ctx, &aot_mem); return;
L_089DA088:
    aot_gpr[31] = (0x089DA090u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16384));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 138u, 0x089DF810u>(ctx, &aot_mem) && ctx.pc == 0x089DA090u) goto L_089DA090;
    return;
L_089DA090:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 131u, 0x089D9BACu>(ctx, &aot_mem); return;
      }
      goto L_089DA0A0;
    }
L_089DA0A0:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089DA0B8u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 234u, 0x089DFE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA0B8u) goto L_089DA0B8;
    return;
L_089DA0B8:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[17] = (aot_gpr[17] << 3u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[31] = (0x089DA0D0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 234u, 0x089DFE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA0D0u) goto L_089DA0D0;
    return;
L_089DA0D0:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 130u, 0x089D9BA8u>(ctx, &aot_mem); return;
L_089DA0E8:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[20] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 180u, 0x089D9E68u>(ctx, &aot_mem); return;
      }
      goto L_089DA0F0;
    }
L_089DA0F0:
    aot_gpr[20] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 180u, 0x089D9E68u>(ctx, &aot_mem); return;
L_089DA0F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 152u, 0x089D9CB4u>(ctx, &aot_mem); return;
      }
      goto L_089DA100;
    }
L_089DA100:
    aot_gpr[31] = (0x089DA108u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 224u, 0x089DFD80u>(ctx, &aot_mem) && ctx.pc == 0x089DA108u) goto L_089DA108;
    return;
L_089DA108:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DA030;
      }
      goto L_089DA110;
    }
L_089DA110:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(208)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DA130u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA130u) goto L_089DA130;
    return;
L_089DA130:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DA1B4;
      }
      goto L_089DA13C;
    }
L_089DA13C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 151u, 0x089D9CB0u>(ctx, &aot_mem); return;
L_089DA148:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(260)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x089DA160u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 233u, 0x089DFE30u>(ctx, &aot_mem) && ctx.pc == 0x089DA160u) goto L_089DA160;
    return;
L_089DA160:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 180u, 0x089D9E68u>(ctx, &aot_mem); return;
L_089DA168:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 126u, 0x089D9B50u>(ctx, &aot_mem); return;
      }
      goto L_089DA170;
    }
L_089DA170:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    goto L_089DA034;
L_089DA178:
    aot_gpr[2] = (65535u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 12530u);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[20] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 172u, 0x089D9DFCu>(ctx, &aot_mem); return;
      }
      goto L_089DA190;
    }
L_089DA190:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[5] << (aot_gpr[2] & 31u));
    aot_gpr[2] = (24576u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 1u);
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[2]);
    if (aot_gpr[3] != 0u) {
    aot_gpr[20] = (0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 172u, 0x089D9DFCu>(ctx, &aot_mem); return;
    }
    goto L_089DA1AC;
L_089DA1AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 173u, 0x089D9E00u>(ctx, &aot_mem); return;
L_089DA1B4:
    aot_gpr[31] = (0x089DA1BCu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 216u, 0x089DFCECu>(ctx, &aot_mem) && ctx.pc == 0x089DA1BCu) goto L_089DA1BC;
    return;
L_089DA1BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 151u, 0x089D9CB0u>(ctx, &aot_mem); return;
L_089DA1C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089DA23C;
      }
      goto L_089DA1F0;
    }
L_089DA1F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    goto L_089DA1F4;
L_089DA1F4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089DA240;
      }
      goto L_089DA1FC;
    }
L_089DA1FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089DA200;
L_089DA200:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(98));
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089DA25C;
      }
      goto L_089DA21C;
    }
L_089DA21C:
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DA1F4;
      }
      goto L_089DA22C;
    }
L_089DA22C:
    aot_gpr[31] = (0x089DA234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA234u) goto L_089DA234;
    return;
L_089DA234:
    if (aot_gpr[16] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DA200;
    }
    goto L_089DA23C;
L_089DA23C:
    aot_gpr[2] = (0u + 0u);
    goto L_089DA240;
L_089DA240:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089DA244;
L_089DA244:
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
L_089DA25C:
    aot_gpr[31] = (0x089DA264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 108u, 0x089D99D4u>(ctx, &aot_mem) && ctx.pc == 0x089DA264u) goto L_089DA264;
    return;
L_089DA264:
    aot_gpr[5] = (0u | 32768u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089DA240;
      }
      goto L_089DA270;
    }
L_089DA270:
    aot_gpr[31] = (0x089DA278u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 138u, 0x089DF810u>(ctx, &aot_mem) && ctx.pc == 0x089DA278u) goto L_089DA278;
    return;
L_089DA278:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089DA284u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 119u, 0x089DF684u>(ctx, &aot_mem) && ctx.pc == 0x089DA284u) goto L_089DA284;
    return;
L_089DA284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    if (aot_gpr[4] == 0u) aot_gpr[2] = (0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(168));
    aot_gpr[9] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(88));
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_089DA2B8;
      }
      goto L_089DA2B4;
    }
L_089DA2B4:
    aot_gpr[4] = (aot_gpr[6] & 65535u);
    goto L_089DA2B8;
L_089DA2B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-2));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[2] & 65535u);
    aot_gpr[31] = (0x089DA2D8u);
    aot_gpr[8] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 160u, 0x0898EB8Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA2D8u) goto L_089DA2D8;
    return;
L_089DA2D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089DA244;
      }
      goto L_089DA2E0;
    }
L_089DA2E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[3] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089DA21C;
      }
      goto L_089DA2EC;
    }
L_089DA2EC:
    aot_gpr[2] = (0u + 0u);
    goto L_089DA244;
L_089DA2F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089DA368;
      }
      goto L_089DA314;
    }
L_089DA314:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DA330;
      }
      goto L_089DA324;
    }
L_089DA324:
    aot_gpr[31] = (0x089DA32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 195u, 0x089EA990u>(ctx, &aot_mem) && ctx.pc == 0x089DA32Cu) goto L_089DA32C;
    return;
L_089DA32C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_089DA330;
L_089DA330:
    aot_gpr[31] = (0x089DA338u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 145u, 0x08A43764u>(ctx, &aot_mem) && ctx.pc == 0x089DA338u) goto L_089DA338;
    return;
L_089DA338:
    aot_gpr[31] = (0x089DA340u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089DA340u) goto L_089DA340;
    return;
L_089DA340:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DA350u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 200u, 0x089DFBF0u>(ctx, &aot_mem) && ctx.pc == 0x089DA350u) goto L_089DA350;
    return;
L_089DA350:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DA35Cu);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 198u, 0x089DFBD0u>(ctx, &aot_mem) && ctx.pc == 0x089DA35Cu) goto L_089DA35C;
    return;
L_089DA35C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089DA368;
L_089DA368:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA380:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DA3B0;
      }
      goto L_089DA390;
    }
L_089DA390:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089DA3B0;
      }
      goto L_089DA398;
    }
L_089DA398:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DA3C0;
      }
      goto L_089DA3AC;
    }
L_089DA3AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    goto L_089DA3B0;
L_089DA3B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA3C0:
    aot_gpr[31] = (0x089DA3C8u);
    // nop
    goto L_089DA2F4;
L_089DA3C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA3DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089DA3FCu);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 145u, 0x08A43764u>(ctx, &aot_mem) && ctx.pc == 0x089DA3FCu) goto L_089DA3FC;
    return;
L_089DA3FC:
    aot_gpr[31] = (0x089DA404u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 145u, 0x08A43764u>(ctx, &aot_mem) && ctx.pc == 0x089DA404u) goto L_089DA404;
    return;
L_089DA404:
    aot_gpr[31] = (0x089DA40Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(280));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089DA40Cu) goto L_089DA40C;
    return;
L_089DA40C:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(6)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(3)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(7)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(5)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(17)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DA4B4;
      }
      goto L_089DA4B0;
    }
L_089DA4B0:
    rt.unsupported(0x089DA4B0u, 0x000001CDu, "special? not lowered yet"); return;
L_089DA4B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x089DA4CCu);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 165u, 0x089DFA10u>(ctx, &aot_mem) && ctx.pc == 0x089DA4CCu) goto L_089DA4CC;
    return;
L_089DA4CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x089DA4D8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089DA380;
L_089DA4D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x089DA4E4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089DA380;
L_089DA4E4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089DA4F4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA4F4u) goto L_089DA4F4;
    return;
L_089DA4F4:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DA500u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 153u, 0x089DF984u>(ctx, &aot_mem) && ctx.pc == 0x089DA500u) goto L_089DA500;
    return;
L_089DA500:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA524:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(216));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(216), 0u);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089DA580;
      }
      goto L_089DA56C;
    }
L_089DA56C:
    aot_gpr[3] = (0u + 0u);
    goto L_089DA570;
L_089DA570:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DA570;
      }
      goto L_089DA57C;
    }
L_089DA57C:
    aot_gpr[7] = (aot_gpr[3] + 0u);
    goto L_089DA580;
L_089DA580:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(212)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(216)));
    aot_gpr[2] = (0u + 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    { const std::uint32_t dividend = aot_gpr[3]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DA598;
      }
      goto L_089DA594;
    }
L_089DA594:
    rt.unsupported(0x089DA594u, 0x000001CDu, "special? not lowered yet"); return;
L_089DA598:
    aot_gpr[3] = (ctx.lo);
    { const bool branch_taken = aot_gpr[7] != 0u;
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DA5A8;
      }
      goto L_089DA5A4;
    }
L_089DA5A4:
    rt.unsupported(0x089DA5A4u, 0x000001CDu, "special? not lowered yet"); return;
L_089DA5A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(224), aot_gpr[3]);
    aot_gpr[4] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(228), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(264)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(220), aot_gpr[3]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(216), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA5C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089DA5F4;
      }
      goto L_089DA5E0;
    }
L_089DA5E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089DA5E4;
L_089DA5E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA5F4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(204));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(260));
    aot_gpr[31] = (0x089DA604u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 173u, 0x08992B24u>(ctx, &aot_mem) && ctx.pc == 0x089DA604u) goto L_089DA604;
    return;
L_089DA604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(250) ? 1u : 0u);
      if (branch_taken) {
          goto L_089DA73C;
      }
      goto L_089DA610;
    }
L_089DA610:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(260)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(264)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(250));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(260)));
    goto L_089DA62C;
L_089DA62C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(264)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), aot_gpr[2]);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), 0u);
      if (branch_taken) {
          goto L_089DA658;
      }
      goto L_089DA64C;
    }
L_089DA64C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DA64C;
      }
      goto L_089DA658;
    }
L_089DA658:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[10] = (0u + 0u);
      if (branch_taken) {
          goto L_089DA754;
      }
      goto L_089DA664;
    }
L_089DA664:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (4194u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 19923u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(216)));
    aot_gpr[4] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[4]) * static_cast<std::uint64_t>(aot_gpr[2]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[2] = (ctx.hi);
    aot_gpr[7] = (aot_gpr[2] >> 6u);
    aot_gpr[3] = (aot_gpr[7] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[3]);
      if (branch_taken) {
          goto L_089DA74C;
      }
      goto L_089DA694;
    }
L_089DA694:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_089DA5E0;
      }
      goto L_089DA69C;
    }
L_089DA69C:
    { const bool branch_taken = aot_gpr[8] != 0u;
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DA6A8;
      }
      goto L_089DA6A4;
    }
L_089DA6A4:
    rt.unsupported(0x089DA6A4u, 0x000001CDu, "special? not lowered yet"); return;
L_089DA6A8:
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = aot_gpr[8] != 0u;
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DA6B8;
      }
      goto L_089DA6B4;
    }
L_089DA6B4:
    rt.unsupported(0x089DA6B4u, 0x000001CDu, "special? not lowered yet"); return;
L_089DA6B8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (ctx.lo);
      if (branch_taken) {
          goto L_089DA6EC;
      }
      goto L_089DA6C0;
    }
L_089DA6C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(228)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(224), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(228), aot_gpr[5]);
      if (branch_taken) {
          goto L_089DA6E0;
      }
      goto L_089DA6D8;
    }
L_089DA6D8:
    aot_gpr[5] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(228), aot_gpr[10]);
    goto L_089DA6E0;
L_089DA6E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[5]);
      if (branch_taken) {
          goto L_089DA6C0;
      }
      goto L_089DA6EC;
    }
L_089DA6EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(216)));
    aot_gpr[2] = (aot_gpr[3] << 1u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DA5E4;
      }
      goto L_089DA700;
    }
L_089DA700:
    { const bool branch_taken = aot_gpr[8] != 0u;
    { const std::uint32_t dividend = aot_gpr[3]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DA70C;
      }
      goto L_089DA708;
    }
L_089DA708:
    rt.unsupported(0x089DA708u, 0x000001CDu, "special? not lowered yet"); return;
L_089DA70C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (ctx.lo);
      if (branch_taken) {
          goto L_089DA5E4;
      }
      goto L_089DA718;
    }
L_089DA718:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(228), aot_gpr[2]);
    goto L_089DA71C;
L_089DA71C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(288)));
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(228), aot_gpr[2]);
        goto L_089DA71C;
    }
    goto L_089DA728;
L_089DA728:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA73C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(260)));
        goto L_089DA62C;
    }
    goto L_089DA744;
L_089DA744:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089DA5E4;
L_089DA74C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[5]);
    goto L_089DA694;
L_089DA754:
    { const bool branch_taken = aot_gpr[8] != 0u;
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DA760;
      }
      goto L_089DA75C;
    }
L_089DA75C:
    rt.unsupported(0x089DA75Cu, 0x000001CDu, "special? not lowered yet"); return;
L_089DA760:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1550));
    aot_gpr[10] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (aot_gpr[10] < static_cast<std::uint32_t>(1550) ? 1u : 0u);
    if (aot_gpr[3] != 0u) aot_gpr[10] = (aot_gpr[2]);
    aot_gpr[2] = (4194u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 19923u);
    aot_gpr[4] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[4]) * static_cast<std::uint64_t>(aot_gpr[2]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(216)));
    aot_gpr[2] = (ctx.hi);
    aot_gpr[7] = (aot_gpr[2] >> 6u);
    aot_gpr[3] = (aot_gpr[7] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[3]);
      if (branch_taken) {
          goto L_089DA694;
      }
      goto L_089DA7A0;
    }
L_089DA7A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[5]);
    goto L_089DA694;
L_089DA7A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089DA814;
      }
      goto L_089DA7DC;
    }
L_089DA7DC:
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x089DA7E8u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DA7E8u) goto L_089DA7E8;
    return;
L_089DA7E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] & 63488u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089DA810;
      }
      goto L_089DA7FC;
    }
L_089DA7FC:
    aot_gpr[2] = (aot_gpr[4] & 16384u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[4] & 8192u);
      if (branch_taken) {
          goto L_089DA88C;
      }
      goto L_089DA808;
    }
L_089DA808:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DA834;
      }
      goto L_089DA810;
    }
L_089DA810:
    aot_gpr[3] = (0u + 0u);
    goto L_089DA814;
L_089DA814:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA834:
    aot_gpr[31] = (0x089DA83Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089DA83Cu) goto L_089DA83C;
    return;
L_089DA83C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DA918;
      }
      goto L_089DA844;
    }
L_089DA844:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(122)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_089DA814;
    }
    goto L_089DA850;
L_089DA850:
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    goto L_089DA854;
L_089DA854:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[2]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089DA814;
      }
      goto L_089DA860;
    }
L_089DA860:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089DA864;
L_089DA864:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DA86C;
L_089DA86C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA88C:
    aot_gpr[31] = (0x089DA894u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089DA894u) goto L_089DA894;
    return;
L_089DA894:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
        goto L_089DA8B8;
    }
    goto L_089DA8A4;
L_089DA8A4:
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[2]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DA864;
      }
      goto L_089DA8B4;
    }
L_089DA8B4:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    goto L_089DA8B8;
L_089DA8B8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[3] & 65535u);
      if (branch_taken) {
          goto L_089DA810;
      }
      goto L_089DA8C0;
    }
L_089DA8C0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    if (aot_gpr[17] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_089DA814;
    }
    goto L_089DA8CC;
L_089DA8CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089DA8D0;
L_089DA8D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089DA904;
      }
      goto L_089DA8D8;
    }
L_089DA8D8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DA904;
      }
      goto L_089DA8E4;
    }
L_089DA8E4:
    aot_gpr[31] = (0x089DA8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DA8ECu) goto L_089DA8EC;
    return;
L_089DA8EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[3] & 16384u);
    aot_gpr[3] = (aot_gpr[3] & 63488u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089DA92C;
      }
      goto L_089DA904;
    }
L_089DA904:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089DA908;
L_089DA908:
    if (aot_gpr[17] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089DA8D0;
    }
    goto L_089DA910;
L_089DA910:
    aot_gpr[3] = (0u + 0u);
    goto L_089DA814;
L_089DA918:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
      if (branch_taken) {
          goto L_089DA854;
      }
      goto L_089DA924;
    }
L_089DA924:
    aot_gpr[3] = (0u + 0u);
    goto L_089DA814;
L_089DA92C:
    aot_gpr[31] = (0x089DA934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089DA934u) goto L_089DA934;
    return;
L_089DA934:
    if (aot_gpr[18] != aot_gpr[2]) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089DA908;
    }
    goto L_089DA93C;
L_089DA93C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DA86C;
L_089DA94C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(260));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x089DA984u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 173u, 0x08992B24u>(ctx, &aot_mem) && ctx.pc == 0x089DA984u) goto L_089DA984;
    return;
L_089DA984:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089DA9E8;
      }
      goto L_089DA99C;
    }
L_089DA99C:
    aot_gpr[31] = (0x089DA9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 236u, 0x089DFE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA9A4u) goto L_089DA9A4;
    return;
L_089DA9A4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DA9B4u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 59u, 0x089D9448u>(ctx, &aot_mem) && ctx.pc == 0x089DA9B4u) goto L_089DA9B4;
    return;
L_089DA9B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[31] = (0x089DA9D4u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 160u, 0x0898EB8Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA9D4u) goto L_089DA9D4;
    return;
L_089DA9D4:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(260)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    goto L_089DA9E8;
L_089DA9E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DAA04:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DAA1C;
      }
      goto L_089DAA0C;
    }
L_089DAA0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_089DAA1C;
L_089DAA1C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DAA24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    goto L_089DAA3C;
L_089DAA3C:
    aot_gpr[31] = (0x089DAA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089DAA44u) goto L_089DAA44;
    return;
L_089DAA44:
    { const bool branch_taken = aot_gpr[16] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[16]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DAA50;
      }
      goto L_089DAA4C;
    }
L_089DAA4C:
    rt.unsupported(0x089DAA4Cu, 0x000001CDu, "special? not lowered yet"); return;
L_089DAA50:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (ctx.hi);
      if (branch_taken) {
          goto L_089DAA6C;
      }
      goto L_089DAA58;
    }
L_089DAA58:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(451));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(452));
      if (branch_taken) {
          goto L_089DAA3C;
      }
      goto L_089DAA64;
    }
L_089DAA64:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DAA3C;
      }
      goto L_089DAA6C;
    }
L_089DAA6C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089DAA3C;
      }
      goto L_089DAA74;
    }
L_089DAA74:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DAA88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_089DAB10;
      }
      goto L_089DAAB8;
    }
L_089DAAB8:
    aot_gpr[31] = (0x089DAAC0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089DAAC0u) goto L_089DAAC0;
    return;
L_089DAAC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(280)));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089DAAD0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DAAD0u) goto L_089DAAD0;
    return;
L_089DAAD0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(280)));
      if (branch_taken) {
          goto L_089DAB30;
      }
      goto L_089DAADC;
    }
L_089DAADC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[7];
    aot_gpr[3] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089DAB0C;
      }
      goto L_089DAAF0;
    }
L_089DAAF0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(512) ? 1u : 0u);
      if (branch_taken) {
          goto L_089DAB64;
      }
      goto L_089DAB00;
    }
L_089DAB00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[2];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DAAF0;
      }
      goto L_089DAB0C;
    }
L_089DAB0C:
    aot_gpr[3] = (0u + 0u);
    goto L_089DAB10;
L_089DAB10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DAB30:
    aot_gpr[2] = (aot_gpr[6] << 1u);
    goto L_089DAB34;
L_089DAB34:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(280)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089DAB5Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089DAB5Cu) goto L_089DAB5C;
    return;
L_089DAB5C:
    aot_gpr[3] = (0u + 0u);
    goto L_089DAB10;
L_089DAB64:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[6] << 1u);
      if (branch_taken) {
          goto L_089DAB34;
      }
      goto L_089DAB6C;
    }
L_089DAB6C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089DAC20;
      }
      goto L_089DAB74;
    }
L_089DAB74:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16384));
    aot_gpr[31] = (0x089DAB84u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 138u, 0x089DF810u>(ctx, &aot_mem) && ctx.pc == 0x089DAB84u) goto L_089DAB84;
    return;
L_089DAB84:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(280)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[31] = (0x089DABACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 234u, 0x089DFE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089DABACu) goto L_089DABAC;
    return;
L_089DABAC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x089DABBCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 234u, 0x089DFE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089DABBCu) goto L_089DABBC;
    return;
L_089DABBC:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[31] = (0x089DABE0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 59u, 0x089D9448u>(ctx, &aot_mem) && ctx.pc == 0x089DABE0u) goto L_089DABE0;
    return;
L_089DABE0:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089DABFCu);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 132u, 0x0898E970u>(ctx, &aot_mem) && ctx.pc == 0x089DABFCu) goto L_089DABFC;
    return;
L_089DABFC:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(280)));
        goto L_089DAC20;
    }
    goto L_089DAC0C;
L_089DAC0C:
    if (aot_gpr[3] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(280)));
        goto L_089DAC20;
    }
    goto L_089DAC14;
L_089DAC14:
    aot_gpr[31] = (0x089DAC1Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 233u, 0x089DFE30u>(ctx, &aot_mem) && ctx.pc == 0x089DAC1Cu) goto L_089DAC1C;
    return;
L_089DAC1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(280)));
    goto L_089DAC20;
L_089DAC20:
    aot_gpr[31] = (0x089DAC28u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DAC28u) goto L_089DAC28;
    return;
L_089DAC28:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_089DAB10;
    }
    goto L_089DAC38;
L_089DAC38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(280)));
    aot_gpr[2] = (aot_gpr[3] << 1u);
    goto L_089DAB34;
L_089DAC44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[31] = (0x089DAC64u);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089DAC64u) goto L_089DAC64;
    return;
L_089DAC64:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089DAA88;
L_089DAC84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[19]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[16]);
      if (branch_taken) {
          goto L_089DAD98;
      }
      goto L_089DACBC;
    }
L_089DACBC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_089DAD94;
      }
      goto L_089DACC8;
    }
L_089DACC8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089DACCC;
L_089DACCC:
    aot_gpr[31] = (0x089DACD4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089DACD4u) goto L_089DACD4;
    return;
L_089DACD4:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(112)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1450));
    aot_gpr[31] = (0x089DACF0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 90u, 0x0898E62Cu>(ctx, &aot_mem) && ctx.pc == 0x089DACF0u) goto L_089DACF0;
    return;
L_089DACF0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089DAD80;
      }
      goto L_089DACF8;
    }
L_089DACF8:
    if (aot_gpr[3] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
        goto L_089DAD8C;
    }
    goto L_089DAD00;
L_089DAD00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089DAD20;
      }
      goto L_089DAD0C;
    }
L_089DAD0C:
    aot_gpr[31] = (0x089DAD14u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 232u, 0x089EAC50u>(ctx, &aot_mem) && ctx.pc == 0x089DAD14u) goto L_089DAD14;
    return;
L_089DAD14:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089DAF54;
    }
    goto L_089DAD1C;
L_089DAD1C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089DAD20;
L_089DAD20:
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089DAD80;
      }
      goto L_089DAD2C;
    }
L_089DAD2C:
    aot_gpr[31] = (0x089DAD34u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089DAD34u) goto L_089DAD34;
    return;
L_089DAD34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089DAD48;
      }
      goto L_089DAD3C;
    }
L_089DAD3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[22];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089DAD80;
      }
      goto L_089DAD48;
    }
L_089DAD48:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    aot_gpr[31] = (0x089DAD6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x089DAD6Cu) goto L_089DAD6C;
    return;
L_089DAD6C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089DAD80;
      }
      goto L_089DAD74;
    }
L_089DAD74:
    if (aot_gpr[22] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(112)));
        goto L_089DADC8;
    }
    goto L_089DAD7C;
L_089DAD7C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089DAD80;
L_089DAD80:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089DACCC;
      }
      goto L_089DAD88;
    }
L_089DAD88:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    goto L_089DAD8C;
L_089DAD8C:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089DACCC;
      }
      goto L_089DAD94;
    }
L_089DAD94:
    aot_gpr[2] = (0u + 0u);
    goto L_089DAD98;
L_089DAD98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DADC8:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (0x089DADD8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 117u, 0x089DF654u>(ctx, &aot_mem) && ctx.pc == 0x089DADD8u) goto L_089DADD8;
    return;
L_089DADD8:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    aot_gpr[31] = (0x089DADF0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 117u, 0x089DF654u>(ctx, &aot_mem) && ctx.pc == 0x089DADF0u) goto L_089DADF0;
    return;
L_089DADF0:
    aot_gpr[31] = (0x089DADF8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 136u, 0x089DF7ECu>(ctx, &aot_mem) && ctx.pc == 0x089DADF8u) goto L_089DADF8;
    return;
L_089DADF8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DAF70;
      }
      goto L_089DAE00;
    }
L_089DAE00:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(46)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(50)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(47)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(51)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(45)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(49)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(25)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DAEA4;
      }
      goto L_089DAEA0;
    }
L_089DAEA0:
    rt.unsupported(0x089DAEA0u, 0x000001CDu, "special? not lowered yet"); return;
L_089DAEA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (ctx.hi);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_089DAF70;
      }
      goto L_089DAEC0;
    }
L_089DAEC0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = ((aot_gpr[3] >> 11u) & 0x00000001u);
    aot_gpr[6] = (0u + 0u);
    goto L_089DAEEC;
L_089DAEE0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    goto L_089DAEE4;
L_089DAEE4:
    if (aot_gpr[16] == 0u) {
    aot_gpr[16] = (aot_gpr[6] + 0u);
        goto L_089DAF74;
    }
    goto L_089DAEEC;
L_089DAEEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[2] != aot_gpr[4]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
        goto L_089DAEE4;
    }
    goto L_089DAEF8;
L_089DAEF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[5] != aot_gpr[2]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
        goto L_089DAEE4;
    }
    goto L_089DAF04;
L_089DAF04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[8] != aot_gpr[2]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
        goto L_089DAEE4;
    }
    goto L_089DAF10;
L_089DAF10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(110)));
    aot_gpr[10] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    if (aot_gpr[2] != 0u) aot_gpr[10] = (aot_gpr[6]);
      if (branch_taken) {
          goto L_089DAF74;
      }
      goto L_089DAF20;
    }
L_089DAF20:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(264)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DAF3C;
    }
    goto L_089DAF2C;
L_089DAF2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[7];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 122u, 0x089DB5E8u>(ctx, &aot_mem); return;
      }
      goto L_089DAF38;
    }
L_089DAF38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089DAF3C;
L_089DAF3C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-11));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    if (aot_gpr[3] != 0u) aot_gpr[6] = (aot_gpr[10]);
        goto L_089DAEE0;
    }
    goto L_089DAF4C;
L_089DAF4C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    goto L_089DAEE4;
L_089DAF54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(112)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x089DAF68u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 243u, 0x089EACE0u>(ctx, &aot_mem) && ctx.pc == 0x089DAF68u) goto L_089DAF68;
    return;
L_089DAF68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089DAD80;
L_089DAF70:
    aot_gpr[16] = (0u + 0u);
    goto L_089DAF74;
L_089DAF74:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_089DAF78;
L_089DAF78:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 5u, 0x089DB028u>(ctx, &aot_mem); return;
      }
      goto L_089DAF84;
    }
L_089DAF84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] & 16384u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 2u, 0x089DB004u>(ctx, &aot_mem); return;
      }
      goto L_089DAF94;
    }
L_089DAF94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089DAFA4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DAFA4u) goto L_089DAFA4;
    return;
L_089DAFA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(-2));
    aot_gpr[2] = (aot_gpr[4] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DAD7C;
      }
      goto L_089DAFD4;
    }
L_089DAFD4:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DAFF4;
      }
      goto L_089DAFE0;
    }
L_089DAFE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
        goto L_089DAFF8;
    }
    goto L_089DAFEC;
L_089DAFEC:
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 68u, 0x089DB350u>(ctx, &aot_mem); return;
    }
    goto L_089DAFF4;
L_089DAFF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    goto L_089DAFF8;
L_089DAFF8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[5]);
    ctx.pc = 0x089DB000u; return;
}

void recomp_unit_0470(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0470_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_470(Runtime &runtime) {
    runtime.register_generated_unit(470u, 0x089DA000u, 4096u, &recomp_unit_0470, &recomp_unit_0470_entry);
    runtime.register_function(0x089DA004u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA01Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA024u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA02Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA030u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA034u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA064u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA070u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA078u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA088u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA090u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA0A0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA0B8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA0D0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA0E8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA0F0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA0F8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA100u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA108u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA110u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA130u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA13Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA148u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA160u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA168u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA170u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA178u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA190u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA1ACu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA1B4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA1BCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA1C8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA1F0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA1F4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA1FCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA200u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA21Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA22Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA234u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA23Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA240u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA244u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA25Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA264u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA270u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA278u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA284u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA2B4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA2B8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA2D8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA2E0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA2ECu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA2F4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA314u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA324u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA32Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA330u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA338u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA340u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA350u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA35Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA368u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA380u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA390u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA398u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA3ACu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA3B0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA3C0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA3C8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA3DCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA3FCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA404u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA40Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA4B0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA4B4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA4CCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA4D8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA4E4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA4F4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA500u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA524u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA56Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA570u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA57Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA580u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA594u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA598u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA5A4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA5A8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA5C8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA5E0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA5E4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA5F4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA604u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA610u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA62Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA64Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA658u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA664u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA694u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA69Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA6A4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA6A8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA6B4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA6B8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA6C0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA6D8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA6E0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA6ECu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA700u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA708u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA70Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA718u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA71Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA728u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA73Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA744u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA74Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA754u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA75Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA760u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA7A0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA7A8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA7DCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA7E8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA7FCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA808u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA810u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA814u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA834u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA83Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA844u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA850u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA854u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA860u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA864u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA86Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA88Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA894u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA8A4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA8B4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA8B8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA8C0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA8CCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA8D0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA8D8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA8E4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA8ECu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA904u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA908u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA910u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA918u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA924u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA92Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA934u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA93Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA94Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA984u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA99Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA9A4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA9B4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA9D4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DA9E8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA04u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA0Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA1Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA24u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA3Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA44u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA4Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA50u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA58u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA64u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA6Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA74u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAA88u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAAB8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAAC0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAAD0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAADCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAAF0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAB00u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAB0Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAB10u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAB30u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAB34u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAB5Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAB64u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAB6Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAB74u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAB84u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DABACu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DABBCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DABE0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DABFCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAC0Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAC14u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAC1Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAC20u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAC28u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAC38u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAC44u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAC64u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAC84u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DACBCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DACC8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DACCCu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DACD4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DACF0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DACF8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD00u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD0Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD14u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD1Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD20u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD2Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD34u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD3Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD48u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD6Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD74u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD7Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD80u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD88u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD8Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD94u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAD98u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DADC8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DADD8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DADF0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DADF8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAE00u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAEA0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAEA4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAEC0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAEE0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAEE4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAEECu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAEF8u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF04u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF10u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF20u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF2Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF38u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF3Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF4Cu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF54u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF68u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF70u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF74u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF78u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF84u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAF94u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAFA4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAFD4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAFE0u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAFECu, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAFF4u, &recomp_unit_0470, "recomp_unit_0470");
    runtime.register_function(0x089DAFF8u, &recomp_unit_0470, "recomp_unit_0470");
}
} // namespace psprecomp
