#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0439[1022] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0,
    0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0,
    0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0,
    0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0,
    146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0,
    0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159,
    0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166,
    0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0,
    0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0,
    204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213,
};
void recomp_unit_0439_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089BB000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0439[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089BB000;
    case 2u: goto L_089BB01C;
    case 3u: goto L_089BB02C;
    case 4u: goto L_089BB038;
    case 5u: goto L_089BB054;
    case 6u: goto L_089BB078;
    case 7u: goto L_089BB084;
    case 8u: goto L_089BB0A0;
    case 9u: goto L_089BB0C4;
    case 10u: goto L_089BB0D4;
    case 11u: goto L_089BB0E4;
    case 12u: goto L_089BB104;
    case 13u: goto L_089BB128;
    case 14u: goto L_089BB138;
    case 15u: goto L_089BB144;
    case 16u: goto L_089BB150;
    case 17u: goto L_089BB15C;
    case 18u: goto L_089BB168;
    case 19u: goto L_089BB184;
    case 20u: goto L_089BB1A8;
    case 21u: goto L_089BB1B4;
    case 22u: goto L_089BB1D0;
    case 23u: goto L_089BB1F4;
    case 24u: goto L_089BB204;
    case 25u: goto L_089BB210;
    case 26u: goto L_089BB22C;
    case 27u: goto L_089BB250;
    case 28u: goto L_089BB25C;
    case 29u: goto L_089BB268;
    case 30u: goto L_089BB278;
    case 31u: goto L_089BB284;
    case 32u: goto L_089BB2A0;
    case 33u: goto L_089BB2C4;
    case 34u: goto L_089BB2D4;
    case 35u: goto L_089BB2E0;
    case 36u: goto L_089BB2EC;
    case 37u: goto L_089BB308;
    case 38u: goto L_089BB32C;
    case 39u: goto L_089BB338;
    case 40u: goto L_089BB344;
    case 41u: goto L_089BB350;
    case 42u: goto L_089BB360;
    case 43u: goto L_089BB36C;
    case 44u: goto L_089BB378;
    case 45u: goto L_089BB394;
    case 46u: goto L_089BB3A0;
    case 47u: goto L_089BB3C4;
    case 48u: goto L_089BB3D4;
    case 49u: goto L_089BB3F0;
    case 50u: goto L_089BB404;
    case 51u: goto L_089BB428;
    case 52u: goto L_089BB434;
    case 53u: goto L_089BB440;
    case 54u: goto L_089BB45C;
    case 55u: goto L_089BB470;
    case 56u: goto L_089BB494;
    case 57u: goto L_089BB4A4;
    case 58u: goto L_089BB4B0;
    case 59u: goto L_089BB4BC;
    case 60u: goto L_089BB4D8;
    case 61u: goto L_089BB4FC;
    case 62u: goto L_089BB508;
    case 63u: goto L_089BB514;
    case 64u: goto L_089BB520;
    case 65u: goto L_089BB52C;
    case 66u: goto L_089BB538;
    case 67u: goto L_089BB548;
    case 68u: goto L_089BB554;
    case 69u: goto L_089BB560;
    case 70u: goto L_089BB570;
    case 71u: goto L_089BB57C;
    case 72u: goto L_089BB598;
    case 73u: goto L_089BB5BC;
    case 74u: goto L_089BB5C8;
    case 75u: goto L_089BB5D4;
    case 76u: goto L_089BB5E0;
    case 77u: goto L_089BB5FC;
    case 78u: goto L_089BB620;
    case 79u: goto L_089BB62C;
    case 80u: goto L_089BB648;
    case 81u: goto L_089BB66C;
    case 82u: goto L_089BB678;
    case 83u: goto L_089BB694;
    case 84u: goto L_089BB6B8;
    case 85u: goto L_089BB6C8;
    case 86u: goto L_089BB6D4;
    case 87u: goto L_089BB6F0;
    case 88u: goto L_089BB714;
    case 89u: goto L_089BB720;
    case 90u: goto L_089BB73C;
    case 91u: goto L_089BB760;
    case 92u: goto L_089BB76C;
    case 93u: goto L_089BB778;
    case 94u: goto L_089BB794;
    case 95u: goto L_089BB7B8;
    case 96u: goto L_089BB7C8;
    case 97u: goto L_089BB7D4;
    case 98u: goto L_089BB7E0;
    case 99u: goto L_089BB800;
    case 100u: goto L_089BB824;
    case 101u: goto L_089BB830;
    case 102u: goto L_089BB83C;
    case 103u: goto L_089BB858;
    case 104u: goto L_089BB87C;
    case 105u: goto L_089BB88C;
    case 106u: goto L_089BB898;
    case 107u: goto L_089BB8A4;
    case 108u: goto L_089BB8B0;
    case 109u: goto L_089BB8BC;
    case 110u: goto L_089BB8C8;
    case 111u: goto L_089BB8D8;
    case 112u: goto L_089BB8E8;
    case 113u: goto L_089BB8F8;
    case 114u: goto L_089BB904;
    case 115u: goto L_089BB910;
    case 116u: goto L_089BB91C;
    case 117u: goto L_089BB928;
    case 118u: goto L_089BB934;
    case 119u: goto L_089BB940;
    case 120u: goto L_089BB94C;
    case 121u: goto L_089BB958;
    case 122u: goto L_089BB964;
    case 123u: goto L_089BB970;
    case 124u: goto L_089BB97C;
    case 125u: goto L_089BB998;
    case 126u: goto L_089BB9BC;
    case 127u: goto L_089BB9C8;
    case 128u: goto L_089BB9D4;
    case 129u: goto L_089BB9F0;
    case 130u: goto L_089BBA14;
    case 131u: goto L_089BBA24;
    case 132u: goto L_089BBA30;
    case 133u: goto L_089BBA4C;
    case 134u: goto L_089BBA70;
    case 135u: goto L_089BBA7C;
    case 136u: goto L_089BBA98;
    case 137u: goto L_089BBABC;
    case 138u: goto L_089BBACC;
    case 139u: goto L_089BBAD8;
    case 140u: goto L_089BBAF4;
    case 141u: goto L_089BBB18;
    case 142u: goto L_089BBB24;
    case 143u: goto L_089BBB40;
    case 144u: goto L_089BBB64;
    case 145u: goto L_089BBB74;
    case 146u: goto L_089BBB80;
    case 147u: goto L_089BBB8C;
    case 148u: goto L_089BBB98;
    case 149u: goto L_089BBBB8;
    case 150u: goto L_089BBBDC;
    case 151u: goto L_089BBBE8;
    case 152u: goto L_089BBBF4;
    case 153u: goto L_089BBC04;
    case 154u: goto L_089BBC10;
    case 155u: goto L_089BBC20;
    case 156u: goto L_089BBC2C;
    case 157u: goto L_089BBC48;
    case 158u: goto L_089BBC6C;
    case 159u: goto L_089BBC7C;
    case 160u: goto L_089BBC88;
    case 161u: goto L_089BBC94;
    case 162u: goto L_089BBCA0;
    case 163u: goto L_089BBCC0;
    case 164u: goto L_089BBCE4;
    case 165u: goto L_089BBCF0;
    case 166u: goto L_089BBCFC;
    case 167u: goto L_089BBD08;
    case 168u: goto L_089BBD18;
    case 169u: goto L_089BBD24;
    case 170u: goto L_089BBD30;
    case 171u: goto L_089BBD3C;
    case 172u: goto L_089BBD48;
    case 173u: goto L_089BBD58;
    case 174u: goto L_089BBD64;
    case 175u: goto L_089BBD80;
    case 176u: goto L_089BBDA4;
    case 177u: goto L_089BBDB4;
    case 178u: goto L_089BBDC4;
    case 179u: goto L_089BBDD0;
    case 180u: goto L_089BBDEC;
    case 181u: goto L_089BBE10;
    case 182u: goto L_089BBE1C;
    case 183u: goto L_089BBE28;
    case 184u: goto L_089BBE34;
    case 185u: goto L_089BBE44;
    case 186u: goto L_089BBE50;
    case 187u: goto L_089BBE5C;
    case 188u: goto L_089BBE68;
    case 189u: goto L_089BBE78;
    case 190u: goto L_089BBE84;
    case 191u: goto L_089BBE90;
    case 192u: goto L_089BBE9C;
    case 193u: goto L_089BBEB8;
    case 194u: goto L_089BBEDC;
    case 195u: goto L_089BBEEC;
    case 196u: goto L_089BBEF8;
    case 197u: goto L_089BBF14;
    case 198u: goto L_089BBF38;
    case 199u: goto L_089BBF44;
    case 200u: goto L_089BBF50;
    case 201u: goto L_089BBF5C;
    case 202u: goto L_089BBF68;
    case 203u: goto L_089BBF74;
    case 204u: goto L_089BBF80;
    case 205u: goto L_089BBF8C;
    case 206u: goto L_089BBF98;
    case 207u: goto L_089BBFA8;
    case 208u: goto L_089BBFB8;
    case 209u: goto L_089BBFC4;
    case 210u: goto L_089BBFD0;
    case 211u: goto L_089BBFDC;
    case 212u: goto L_089BBFE8;
    case 213u: goto L_089BBFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089BB000:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB01Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB01Cu) goto L_089BB01C;
    return;
L_089BB01C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BB02Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB02Cu) goto L_089BB02C;
    return;
L_089BB02C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB038u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB038u) goto L_089BB038;
    return;
L_089BB038:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB054:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB078u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB078u) goto L_089BB078;
    return;
L_089BB078:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB084u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB084u) goto L_089BB084;
    return;
L_089BB084:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB0A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB0C4u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB0C4u) goto L_089BB0C4;
    return;
L_089BB0C4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BB0D4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB0D4u) goto L_089BB0D4;
    return;
L_089BB0D4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(38));
    aot_gpr[31] = (0x089BB0E4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB0E4u) goto L_089BB0E4;
    return;
L_089BB0E4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(70));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BB104:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB128u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB128u) goto L_089BB128;
    return;
L_089BB128:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB138u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB138u) goto L_089BB138;
    return;
L_089BB138:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB144u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB144u) goto L_089BB144;
    return;
L_089BB144:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB150u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB150u) goto L_089BB150;
    return;
L_089BB150:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB15Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB15Cu) goto L_089BB15C;
    return;
L_089BB15C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB168u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB168u) goto L_089BB168;
    return;
L_089BB168:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB184:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB1A8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB1A8u) goto L_089BB1A8;
    return;
L_089BB1A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB1B4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB1B4u) goto L_089BB1B4;
    return;
L_089BB1B4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB1D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB1F4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB1F4u) goto L_089BB1F4;
    return;
L_089BB1F4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BB204u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB204u) goto L_089BB204;
    return;
L_089BB204:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB210u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB210u) goto L_089BB210;
    return;
L_089BB210:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB22C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB250u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB250u) goto L_089BB250;
    return;
L_089BB250:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB25Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB25Cu) goto L_089BB25C;
    return;
L_089BB25C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB268u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB268u) goto L_089BB268;
    return;
L_089BB268:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089BB278u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB278u) goto L_089BB278;
    return;
L_089BB278:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB284u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB284u) goto L_089BB284;
    return;
L_089BB284:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB2A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB2C4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB2C4u) goto L_089BB2C4;
    return;
L_089BB2C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[31] = (0x089BB2D4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB2D4u) goto L_089BB2D4;
    return;
L_089BB2D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB2E0u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB2E0u) goto L_089BB2E0;
    return;
L_089BB2E0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB2ECu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(38));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089BB2ECu) goto L_089BB2EC;
    return;
L_089BB2EC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem); return;
L_089BB308:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB32Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB32Cu) goto L_089BB32C;
    return;
L_089BB32C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB338u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB338u) goto L_089BB338;
    return;
L_089BB338:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB344u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB344u) goto L_089BB344;
    return;
L_089BB344:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB350u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB350u) goto L_089BB350;
    return;
L_089BB350:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x089BB360u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB360u) goto L_089BB360;
    return;
L_089BB360:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB36Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB36Cu) goto L_089BB36C;
    return;
L_089BB36C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB378u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BB378u) goto L_089BB378;
    return;
L_089BB378:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BB394:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BB3A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB3C4u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB3C4u) goto L_089BB3C4;
    return;
L_089BB3C4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BB3D4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB3D4u) goto L_089BB3D4;
    return;
L_089BB3D4:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(38));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089BB3F0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089BB394;
L_089BB3F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB404:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB428u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB428u) goto L_089BB428;
    return;
L_089BB428:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BB434u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB434u) goto L_089BB434;
    return;
L_089BB434:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BB440u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB440u) goto L_089BB440;
    return;
L_089BB440:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089BB45Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089BB394;
L_089BB45C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB470:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB494u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB494u) goto L_089BB494;
    return;
L_089BB494:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[31] = (0x089BB4A4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB4A4u) goto L_089BB4A4;
    return;
L_089BB4A4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB4B0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB4B0u) goto L_089BB4B0;
    return;
L_089BB4B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB4BCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB4BCu) goto L_089BB4BC;
    return;
L_089BB4BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB4D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB4FCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB4FCu) goto L_089BB4FC;
    return;
L_089BB4FC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB508u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB508u) goto L_089BB508;
    return;
L_089BB508:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB514u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB514u) goto L_089BB514;
    return;
L_089BB514:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB520u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB520u) goto L_089BB520;
    return;
L_089BB520:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB52Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB52Cu) goto L_089BB52C;
    return;
L_089BB52C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB538u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB538u) goto L_089BB538;
    return;
L_089BB538:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(600));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB548u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB548u) goto L_089BB548;
    return;
L_089BB548:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB554u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB554u) goto L_089BB554;
    return;
L_089BB554:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB560u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(640));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB560u) goto L_089BB560;
    return;
L_089BB560:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(644));
    aot_gpr[31] = (0x089BB570u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB570u) goto L_089BB570;
    return;
L_089BB570:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB57Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(676));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BB57Cu) goto L_089BB57C;
    return;
L_089BB57C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BB598:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB5BCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB5BCu) goto L_089BB5BC;
    return;
L_089BB5BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB5C8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB5C8u) goto L_089BB5C8;
    return;
L_089BB5C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB5D4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB5D4u) goto L_089BB5D4;
    return;
L_089BB5D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB5E0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB5E0u) goto L_089BB5E0;
    return;
L_089BB5E0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB5FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB620u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB620u) goto L_089BB620;
    return;
L_089BB620:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB62Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB62Cu) goto L_089BB62C;
    return;
L_089BB62C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB648:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB66Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB66Cu) goto L_089BB66C;
    return;
L_089BB66C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB678u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB678u) goto L_089BB678;
    return;
L_089BB678:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB694:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB6B8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB6B8u) goto L_089BB6B8;
    return;
L_089BB6B8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BB6C8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB6C8u) goto L_089BB6C8;
    return;
L_089BB6C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB6D4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB6D4u) goto L_089BB6D4;
    return;
L_089BB6D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB6F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB714u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB714u) goto L_089BB714;
    return;
L_089BB714:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB720u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB720u) goto L_089BB720;
    return;
L_089BB720:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB73C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB760u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB760u) goto L_089BB760;
    return;
L_089BB760:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB76Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB76Cu) goto L_089BB76C;
    return;
L_089BB76C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB778u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB778u) goto L_089BB778;
    return;
L_089BB778:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB794:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB7B8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB7B8u) goto L_089BB7B8;
    return;
L_089BB7B8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB7C8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB7C8u) goto L_089BB7C8;
    return;
L_089BB7C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB7D4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB7D4u) goto L_089BB7D4;
    return;
L_089BB7D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB7E0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB7E0u) goto L_089BB7E0;
    return;
L_089BB7E0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BB800:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB824u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB824u) goto L_089BB824;
    return;
L_089BB824:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB830u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB830u) goto L_089BB830;
    return;
L_089BB830:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB83Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB83Cu) goto L_089BB83C;
    return;
L_089BB83C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB858:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB87Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB87Cu) goto L_089BB87C;
    return;
L_089BB87C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB88Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB88Cu) goto L_089BB88C;
    return;
L_089BB88C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB898u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB898u) goto L_089BB898;
    return;
L_089BB898:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB8A4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB8A4u) goto L_089BB8A4;
    return;
L_089BB8A4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB8B0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB8B0u) goto L_089BB8B0;
    return;
L_089BB8B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB8BCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB8BCu) goto L_089BB8BC;
    return;
L_089BB8BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB8C8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB8C8u) goto L_089BB8C8;
    return;
L_089BB8C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    aot_gpr[31] = (0x089BB8D8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB8D8u) goto L_089BB8D8;
    return;
L_089BB8D8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(120));
    aot_gpr[31] = (0x089BB8E8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB8E8u) goto L_089BB8E8;
    return;
L_089BB8E8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB8F8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB8F8u) goto L_089BB8F8;
    return;
L_089BB8F8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB904u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB904u) goto L_089BB904;
    return;
L_089BB904:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB910u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB910u) goto L_089BB910;
    return;
L_089BB910:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB91Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB91Cu) goto L_089BB91C;
    return;
L_089BB91C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB928u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(196));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB928u) goto L_089BB928;
    return;
L_089BB928:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB934u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB934u) goto L_089BB934;
    return;
L_089BB934:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB940u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB940u) goto L_089BB940;
    return;
L_089BB940:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB94Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB94Cu) goto L_089BB94C;
    return;
L_089BB94C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB958u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB958u) goto L_089BB958;
    return;
L_089BB958:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB964u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(216));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB964u) goto L_089BB964;
    return;
L_089BB964:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB970u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(220));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB970u) goto L_089BB970;
    return;
L_089BB970:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB97Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(224));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB97Cu) goto L_089BB97C;
    return;
L_089BB97C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(228));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB998:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BB9BCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BB9BCu) goto L_089BB9BC;
    return;
L_089BB9BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB9C8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BB9C8u) goto L_089BB9C8;
    return;
L_089BB9C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BB9D4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BB9D4u) goto L_089BB9D4;
    return;
L_089BB9D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BB9F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BBA14u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBA14u) goto L_089BBA14;
    return;
L_089BBA14:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BBA24u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBA24u) goto L_089BBA24;
    return;
L_089BBA24:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBA30u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBA30u) goto L_089BBA30;
    return;
L_089BBA30:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BBA4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BBA70u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBA70u) goto L_089BBA70;
    return;
L_089BBA70:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBA7Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBA7Cu) goto L_089BBA7C;
    return;
L_089BBA7C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BBA98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BBABCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBABCu) goto L_089BBABC;
    return;
L_089BBABC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BBACCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBACCu) goto L_089BBACC;
    return;
L_089BBACC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBAD8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBAD8u) goto L_089BBAD8;
    return;
L_089BBAD8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BBAF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BBB18u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBB18u) goto L_089BBB18;
    return;
L_089BBB18:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBB24u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBB24u) goto L_089BBB24;
    return;
L_089BBB24:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BBB40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BBB64u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBB64u) goto L_089BBB64;
    return;
L_089BBB64:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBB74u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBB74u) goto L_089BBB74;
    return;
L_089BBB74:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBB80u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBB80u) goto L_089BBB80;
    return;
L_089BBB80:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBB8Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBB8Cu) goto L_089BBB8C;
    return;
L_089BBB8C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBB98u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BBB98u) goto L_089BBB98;
    return;
L_089BBB98:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(45));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BBBB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BBBDCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBBDCu) goto L_089BBBDC;
    return;
L_089BBBDC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBBE8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBBE8u) goto L_089BBBE8;
    return;
L_089BBBE8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBBF4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBBF4u) goto L_089BBBF4;
    return;
L_089BBBF4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x089BBC04u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBC04u) goto L_089BBC04;
    return;
L_089BBC04:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBC10u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBC10u) goto L_089BBC10;
    return;
L_089BBC10:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(88));
    aot_gpr[31] = (0x089BBC20u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBC20u) goto L_089BBC20;
    return;
L_089BBC20:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBC2Cu);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBC2Cu) goto L_089BBC2C;
    return;
L_089BBC2C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(120));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BBC48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BBC6Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBC6Cu) goto L_089BBC6C;
    return;
L_089BBC6C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBC7Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBC7Cu) goto L_089BBC7C;
    return;
L_089BBC7C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBC88u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBC88u) goto L_089BBC88;
    return;
L_089BBC88:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBC94u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBC94u) goto L_089BBC94;
    return;
L_089BBC94:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBCA0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBCA0u) goto L_089BBCA0;
    return;
L_089BBCA0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BBCC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BBCE4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBCE4u) goto L_089BBCE4;
    return;
L_089BBCE4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBCF0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBCF0u) goto L_089BBCF0;
    return;
L_089BBCF0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBCFCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBCFCu) goto L_089BBCFC;
    return;
L_089BBCFC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBD08u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBD08u) goto L_089BBD08;
    return;
L_089BBD08:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBD18u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBD18u) goto L_089BBD18;
    return;
L_089BBD18:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBD24u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBD24u) goto L_089BBD24;
    return;
L_089BBD24:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBD30u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBD30u) goto L_089BBD30;
    return;
L_089BBD30:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBD3Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBD3Cu) goto L_089BBD3C;
    return;
L_089BBD3C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBD48u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBD48u) goto L_089BBD48;
    return;
L_089BBD48:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(76));
    aot_gpr[31] = (0x089BBD58u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBD58u) goto L_089BBD58;
    return;
L_089BBD58:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBD64u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BBD64u) goto L_089BBD64;
    return;
L_089BBD64:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BBD80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BBDA4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBDA4u) goto L_089BBDA4;
    return;
L_089BBDA4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BBDB4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBDB4u) goto L_089BBDB4;
    return;
L_089BBDB4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(38));
    aot_gpr[31] = (0x089BBDC4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBDC4u) goto L_089BBDC4;
    return;
L_089BBDC4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBDD0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBDD0u) goto L_089BBDD0;
    return;
L_089BBDD0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(104));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BBDEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BBE10u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBE10u) goto L_089BBE10;
    return;
L_089BBE10:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBE1Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBE1Cu) goto L_089BBE1C;
    return;
L_089BBE1C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBE28u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBE28u) goto L_089BBE28;
    return;
L_089BBE28:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBE34u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBE34u) goto L_089BBE34;
    return;
L_089BBE34:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBE44u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBE44u) goto L_089BBE44;
    return;
L_089BBE44:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBE50u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBE50u) goto L_089BBE50;
    return;
L_089BBE50:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBE5Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBE5Cu) goto L_089BBE5C;
    return;
L_089BBE5C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBE68u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBE68u) goto L_089BBE68;
    return;
L_089BBE68:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBE78u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBE78u) goto L_089BBE78;
    return;
L_089BBE78:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBE84u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBE84u) goto L_089BBE84;
    return;
L_089BBE84:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBE90u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBE90u) goto L_089BBE90;
    return;
L_089BBE90:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBE9Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BBE9Cu) goto L_089BBE9C;
    return;
L_089BBE9C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BBEB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BBEDCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBEDCu) goto L_089BBEDC;
    return;
L_089BBEDC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BBEECu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBEECu) goto L_089BBEEC;
    return;
L_089BBEEC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBEF8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBEF8u) goto L_089BBEF8;
    return;
L_089BBEF8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BBF14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BBF38u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBF38u) goto L_089BBF38;
    return;
L_089BBF38:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBF44u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BBF44u) goto L_089BBF44;
    return;
L_089BBF44:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBF50u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBF50u) goto L_089BBF50;
    return;
L_089BBF50:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBF5Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBF5Cu) goto L_089BBF5C;
    return;
L_089BBF5C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBF68u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBF68u) goto L_089BBF68;
    return;
L_089BBF68:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBF74u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBF74u) goto L_089BBF74;
    return;
L_089BBF74:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBF80u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBF80u) goto L_089BBF80;
    return;
L_089BBF80:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBF8Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBF8Cu) goto L_089BBF8C;
    return;
L_089BBF8C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBF98u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBF98u) goto L_089BBF98;
    return;
L_089BBF98:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x089BBFA8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBFA8u) goto L_089BBFA8;
    return;
L_089BBFA8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBFB8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(308));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BBFB8u) goto L_089BBFB8;
    return;
L_089BBFB8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBFC4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(372));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBFC4u) goto L_089BBFC4;
    return;
L_089BBFC4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBFD0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(376));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBFD0u) goto L_089BBFD0;
    return;
L_089BBFD0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBFDCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(380));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBFDCu) goto L_089BBFDC;
    return;
L_089BBFDC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBFE8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBFE8u) goto L_089BBFE8;
    return;
L_089BBFE8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BBFF4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(388));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BBFF4u) goto L_089BBFF4;
    return;
L_089BBFF4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BC000u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(392));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0439(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0439_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_439(Runtime &runtime) {
    runtime.register_generated_unit(439u, 0x089BB000u, 4096u, &recomp_unit_0439, &recomp_unit_0439_entry);
    runtime.register_function(0x089BB000u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB01Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB02Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB038u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB054u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB078u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB084u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB0A0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB0C4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB0D4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB0E4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB104u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB128u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB138u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB144u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB150u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB15Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB168u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB184u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB1A8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB1B4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB1D0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB1F4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB204u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB210u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB22Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB250u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB25Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB268u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB278u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB284u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB2A0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB2C4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB2D4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB2E0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB2ECu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB308u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB32Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB338u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB344u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB350u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB360u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB36Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB378u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB394u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB3A0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB3C4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB3D4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB3F0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB404u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB428u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB434u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB440u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB45Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB470u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB494u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB4A4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB4B0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB4BCu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB4D8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB4FCu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB508u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB514u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB520u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB52Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB538u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB548u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB554u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB560u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB570u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB57Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB598u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB5BCu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB5C8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB5D4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB5E0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB5FCu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB620u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB62Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB648u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB66Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB678u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB694u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB6B8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB6C8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB6D4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB6F0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB714u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB720u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB73Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB760u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB76Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB778u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB794u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB7B8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB7C8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB7D4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB7E0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB800u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB824u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB830u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB83Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB858u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB87Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB88Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB898u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB8A4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB8B0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB8BCu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB8C8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB8D8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB8E8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB8F8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB904u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB910u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB91Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB928u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB934u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB940u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB94Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB958u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB964u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB970u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB97Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB998u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB9BCu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB9C8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB9D4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BB9F0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBA14u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBA24u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBA30u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBA4Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBA70u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBA7Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBA98u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBABCu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBACCu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBAD8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBAF4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBB18u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBB24u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBB40u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBB64u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBB74u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBB80u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBB8Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBB98u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBBB8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBBDCu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBBE8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBBF4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBC04u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBC10u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBC20u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBC2Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBC48u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBC6Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBC7Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBC88u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBC94u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBCA0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBCC0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBCE4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBCF0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBCFCu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBD08u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBD18u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBD24u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBD30u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBD3Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBD48u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBD58u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBD64u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBD80u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBDA4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBDB4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBDC4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBDD0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBDECu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBE10u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBE1Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBE28u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBE34u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBE44u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBE50u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBE5Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBE68u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBE78u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBE84u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBE90u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBE9Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBEB8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBEDCu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBEECu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBEF8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBF14u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBF38u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBF44u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBF50u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBF5Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBF68u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBF74u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBF80u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBF8Cu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBF98u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBFA8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBFB8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBFC4u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBFD0u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBFDCu, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBFE8u, &recomp_unit_0439, "recomp_unit_0439");
    runtime.register_function(0x089BBFF4u, &recomp_unit_0439, "recomp_unit_0439");
}
} // namespace psprecomp
