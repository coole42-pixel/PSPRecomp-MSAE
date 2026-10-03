#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0111[1024] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 11, 0, 12, 0,
    13, 0, 14, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 57, 0, 0, 58, 0, 59, 60, 0, 0, 61,
    0, 62, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0,
    0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 83, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 100, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0,
    0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0,
    114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0,
    0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 140, 0, 0,
    0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0,
    0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 151, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0,
    0, 0, 0, 158, 0, 159, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172,
    0, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187,
    0, 0, 188, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202,
    0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216, 217, 0, 218, 0, 0, 0, 219, 0, 0, 220,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 237, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0,
    0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260,
};
void recomp_unit_0111_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08873000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0111[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08873000;
    case 2u: goto L_08873008;
    case 3u: goto L_08873024;
    case 4u: goto L_08873034;
    case 5u: goto L_0887303C;
    case 6u: goto L_08873044;
    case 7u: goto L_0887304C;
    case 8u: goto L_08873054;
    case 9u: goto L_0887305C;
    case 10u: goto L_08873068;
    case 11u: goto L_08873070;
    case 12u: goto L_08873078;
    case 13u: goto L_08873080;
    case 14u: goto L_08873088;
    case 15u: goto L_08873090;
    case 16u: goto L_0887309C;
    case 17u: goto L_088730A8;
    case 18u: goto L_088730B4;
    case 19u: goto L_088730C0;
    case 20u: goto L_088730E0;
    case 21u: goto L_08873100;
    case 22u: goto L_08873120;
    case 23u: goto L_0887312C;
    case 24u: goto L_0887314C;
    case 25u: goto L_08873154;
    case 26u: goto L_08873160;
    case 27u: goto L_08873184;
    case 28u: goto L_08873190;
    case 29u: goto L_08873198;
    case 30u: goto L_088731A0;
    case 31u: goto L_088731A8;
    case 32u: goto L_088731C8;
    case 33u: goto L_088731E8;
    case 34u: goto L_08873208;
    case 35u: goto L_08873210;
    case 36u: goto L_08873218;
    case 37u: goto L_08873220;
    case 38u: goto L_08873240;
    case 39u: goto L_08873248;
    case 40u: goto L_08873268;
    case 41u: goto L_08873288;
    case 42u: goto L_08873290;
    case 43u: goto L_08873298;
    case 44u: goto L_088732A0;
    case 45u: goto L_088732AC;
    case 46u: goto L_088732B4;
    case 47u: goto L_088732BC;
    case 48u: goto L_088732C8;
    case 49u: goto L_088732E8;
    case 50u: goto L_08873308;
    case 51u: goto L_08873310;
    case 52u: goto L_08873318;
    case 53u: goto L_08873320;
    case 54u: goto L_08873340;
    case 55u: goto L_0887334C;
    case 56u: goto L_08873354;
    case 57u: goto L_08873358;
    case 58u: goto L_08873364;
    case 59u: goto L_0887336C;
    case 60u: goto L_08873370;
    case 61u: goto L_0887337C;
    case 62u: goto L_08873384;
    case 63u: goto L_08873388;
    case 64u: goto L_08873394;
    case 65u: goto L_0887339C;
    case 66u: goto L_088733B0;
    case 67u: goto L_088733C0;
    case 68u: goto L_088733C8;
    case 69u: goto L_088733D0;
    case 70u: goto L_088733E8;
    case 71u: goto L_08873408;
    case 72u: goto L_08873444;
    case 73u: goto L_088734CC;
    case 74u: goto L_088734D4;
    case 75u: goto L_088734F0;
    case 76u: goto L_088734F8;
    case 77u: goto L_08873514;
    case 78u: goto L_0887351C;
    case 79u: goto L_08873538;
    case 80u: goto L_08873540;
    case 81u: goto L_08873568;
    case 82u: goto L_08873598;
    case 83u: goto L_0887359C;
    case 84u: goto L_088735A8;
    case 85u: goto L_088735BC;
    case 86u: goto L_088735CC;
    case 87u: goto L_088735D4;
    case 88u: goto L_088735F0;
    case 89u: goto L_08873600;
    case 90u: goto L_08873624;
    case 91u: goto L_08873630;
    case 92u: goto L_08873638;
    case 93u: goto L_08873644;
    case 94u: goto L_0887364C;
    case 95u: goto L_0887365C;
    case 96u: goto L_0887366C;
    case 97u: goto L_08873678;
    case 98u: goto L_08873680;
    case 99u: goto L_088736AC;
    case 100u: goto L_088736B0;
    case 101u: goto L_088736BC;
    case 102u: goto L_088736D0;
    case 103u: goto L_088736E0;
    case 104u: goto L_088736E8;
    case 105u: goto L_08873704;
    case 106u: goto L_0887370C;
    case 107u: goto L_0887371C;
    case 108u: goto L_08873728;
    case 109u: goto L_08873738;
    case 110u: goto L_08873744;
    case 111u: goto L_08873750;
    case 112u: goto L_08873760;
    case 113u: goto L_08873774;
    case 114u: goto L_08873780;
    case 115u: goto L_08873790;
    case 116u: goto L_088737A0;
    case 117u: goto L_088737A8;
    case 118u: goto L_088737B8;
    case 119u: goto L_088737C4;
    case 120u: goto L_088737CC;
    case 121u: goto L_088737DC;
    case 122u: goto L_088737EC;
    case 123u: goto L_088737F4;
    case 124u: goto L_08873804;
    case 125u: goto L_08873810;
    case 126u: goto L_08873818;
    case 127u: goto L_08873834;
    case 128u: goto L_08873838;
    case 129u: goto L_08873848;
    case 130u: goto L_08873850;
    case 131u: goto L_08873860;
    case 132u: goto L_08873888;
    case 133u: goto L_08873898;
    case 134u: goto L_088738A8;
    case 135u: goto L_088738B0;
    case 136u: goto L_088738C0;
    case 137u: goto L_088738CC;
    case 138u: goto L_088738D4;
    case 139u: goto L_088738F0;
    case 140u: goto L_088738F4;
    case 141u: goto L_08873904;
    case 142u: goto L_0887390C;
    case 143u: goto L_0887391C;
    case 144u: goto L_08873944;
    case 145u: goto L_08873964;
    case 146u: goto L_08873978;
    case 147u: goto L_08873984;
    case 148u: goto L_08873990;
    case 149u: goto L_088739A0;
    case 150u: goto L_088739A8;
    case 151u: goto L_088739B0;
    case 152u: goto L_088739B4;
    case 153u: goto L_088739BC;
    case 154u: goto L_088739D4;
    case 155u: goto L_088739E4;
    case 156u: goto L_088739F0;
    case 157u: goto L_088739F8;
    case 158u: goto L_08873A0C;
    case 159u: goto L_08873A14;
    case 160u: goto L_08873A18;
    case 161u: goto L_08873A28;
    case 162u: goto L_08873A38;
    case 163u: goto L_08873A58;
    case 164u: goto L_08873A60;
    case 165u: goto L_08873A70;
    case 166u: goto L_08873A7C;
    case 167u: goto L_08873AAC;
    case 168u: goto L_08873ABC;
    case 169u: goto L_08873ACC;
    case 170u: goto L_08873AD0;
    case 171u: goto L_08873AD8;
    case 172u: goto L_08873AFC;
    case 173u: goto L_08873B08;
    case 174u: goto L_08873B14;
    case 175u: goto L_08873B1C;
    case 176u: goto L_08873B24;
    case 177u: goto L_08873B2C;
    case 178u: goto L_08873B34;
    case 179u: goto L_08873B3C;
    case 180u: goto L_08873B44;
    case 181u: goto L_08873B4C;
    case 182u: goto L_08873B54;
    case 183u: goto L_08873B5C;
    case 184u: goto L_08873B64;
    case 185u: goto L_08873B6C;
    case 186u: goto L_08873B74;
    case 187u: goto L_08873B7C;
    case 188u: goto L_08873B88;
    case 189u: goto L_08873B94;
    case 190u: goto L_08873B9C;
    case 191u: goto L_08873BA4;
    case 192u: goto L_08873BAC;
    case 193u: goto L_08873BB4;
    case 194u: goto L_08873BBC;
    case 195u: goto L_08873BC4;
    case 196u: goto L_08873BCC;
    case 197u: goto L_08873BD4;
    case 198u: goto L_08873BDC;
    case 199u: goto L_08873BE4;
    case 200u: goto L_08873BEC;
    case 201u: goto L_08873BF4;
    case 202u: goto L_08873BFC;
    case 203u: goto L_08873C04;
    case 204u: goto L_08873C0C;
    case 205u: goto L_08873C14;
    case 206u: goto L_08873C1C;
    case 207u: goto L_08873C24;
    case 208u: goto L_08873C2C;
    case 209u: goto L_08873C4C;
    case 210u: goto L_08873C64;
    case 211u: goto L_08873C70;
    case 212u: goto L_08873C7C;
    case 213u: goto L_08873C84;
    case 214u: goto L_08873CB4;
    case 215u: goto L_08873CC0;
    case 216u: goto L_08873CD4;
    case 217u: goto L_08873CD8;
    case 218u: goto L_08873CE0;
    case 219u: goto L_08873CF0;
    case 220u: goto L_08873CFC;
    case 221u: goto L_08873D14;
    case 222u: goto L_08873D34;
    case 223u: goto L_08873D54;
    case 224u: goto L_08873D64;
    case 225u: goto L_08873D80;
    case 226u: goto L_08873DA0;
    case 227u: goto L_08873DB0;
    case 228u: goto L_08873DCC;
    case 229u: goto L_08873DE4;
    case 230u: goto L_08873E08;
    case 231u: goto L_08873E18;
    case 232u: goto L_08873E30;
    case 233u: goto L_08873E38;
    case 234u: goto L_08873E50;
    case 235u: goto L_08873E5C;
    case 236u: goto L_08873E80;
    case 237u: goto L_08873E88;
    case 238u: goto L_08873E8C;
    case 239u: goto L_08873E98;
    case 240u: goto L_08873EA4;
    case 241u: goto L_08873EB0;
    case 242u: goto L_08873ED0;
    case 243u: goto L_08873EF0;
    case 244u: goto L_08873F20;
    case 245u: goto L_08873F2C;
    case 246u: goto L_08873F38;
    case 247u: goto L_08873F50;
    case 248u: goto L_08873F64;
    case 249u: goto L_08873F70;
    case 250u: goto L_08873F78;
    case 251u: goto L_08873F88;
    case 252u: goto L_08873F9C;
    case 253u: goto L_08873FBC;
    case 254u: goto L_08873FCC;
    case 255u: goto L_08873FD4;
    case 256u: goto L_08873FDC;
    case 257u: goto L_08873FE4;
    case 258u: goto L_08873FEC;
    case 259u: goto L_08873FF4;
    case 260u: goto L_08873FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08873000:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25464), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873008:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08873024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 165u, 0x08931FC0u>(ctx, &aot_mem) && ctx.pc == 0x08873024u) goto L_08873024;
    return;
L_08873024:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08873034u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 205u, 0x08865F38u>(ctx, &aot_mem) && ctx.pc == 0x08873034u) goto L_08873034;
    return;
L_08873034:
    aot_gpr[31] = (0x0887303Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 68u, 0x08862498u>(ctx, &aot_mem) && ctx.pc == 0x0887303Cu) goto L_0887303C;
    return;
L_0887303C:
    aot_gpr[31] = (0x08873044u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x08873044u) goto L_08873044;
    return;
L_08873044:
    aot_gpr[31] = (0x0887304Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x0887304Cu) goto L_0887304C;
    return;
L_0887304C:
    aot_gpr[31] = (0x08873054u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x08873054u) goto L_08873054;
    return;
L_08873054:
    aot_gpr[31] = (0x0887305Cu);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x0887305Cu) goto L_0887305C;
    return;
L_0887305C:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x08873068u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 206u, 0x088C5E1Cu>(ctx, &aot_mem) && ctx.pc == 0x08873068u) goto L_08873068;
    return;
L_08873068:
    aot_gpr[31] = (0x08873070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 43u, 0x088173FCu>(ctx, &aot_mem) && ctx.pc == 0x08873070u) goto L_08873070;
    return;
L_08873070:
    aot_gpr[31] = (0x08873078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 93u, 0x08884AC0u>(ctx, &aot_mem) && ctx.pc == 0x08873078u) goto L_08873078;
    return;
L_08873078:
    aot_gpr[31] = (0x08873080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 56u, 0x0882E3F8u>(ctx, &aot_mem) && ctx.pc == 0x08873080u) goto L_08873080;
    return;
L_08873080:
    aot_gpr[31] = (0x08873088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 165u, 0x08931FC0u>(ctx, &aot_mem) && ctx.pc == 0x08873088u) goto L_08873088;
    return;
L_08873088:
    aot_gpr[31] = (0x08873090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 86u, 0x0882F7A0u>(ctx, &aot_mem) && ctx.pc == 0x08873090u) goto L_08873090;
    return;
L_08873090:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0887309Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2092)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 33u, 0x088122E4u>(ctx, &aot_mem) && ctx.pc == 0x0887309Cu) goto L_0887309C;
    return;
L_0887309C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088730A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7480)));
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 5u, 0x088C8074u>(ctx, &aot_mem) && ctx.pc == 0x088730A8u) goto L_088730A8;
    return;
L_088730A8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088730B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7520)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 96u, 0x0880B7A0u>(ctx, &aot_mem) && ctx.pc == 0x088730B4u) goto L_088730B4;
    return;
L_088730B4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088730C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7340)));
    if (rt.invoke_chained_direct<&recomp_unit_0266_entry, 266u, 81u, 0x0890EA98u>(ctx, &aot_mem) && ctx.pc == 0x088730C0u) goto L_088730C0;
    return;
L_088730C0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088730E0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088730E0u) goto L_088730E0;
    return;
L_088730E0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08873100u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873100u) goto L_08873100;
    return;
L_08873100:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5260)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08873120u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873120u) goto L_08873120;
    return;
L_08873120:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0887312Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2096)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 101u, 0x0880FB14u>(ctx, &aot_mem) && ctx.pc == 0x0887312Cu) goto L_0887312C;
    return;
L_0887312C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0887314Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887314Cu) goto L_0887314C;
    return;
L_0887314C:
    aot_gpr[31] = (0x08873154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 165u, 0x08931FC0u>(ctx, &aot_mem) && ctx.pc == 0x08873154u) goto L_08873154;
    return;
L_08873154:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08873160u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7476)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 13u, 0x088100E0u>(ctx, &aot_mem) && ctx.pc == 0x08873160u) goto L_08873160;
    return;
L_08873160:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[5] = (aot_gpr[5] ^ 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(5112));
      if (branch_taken) {
          goto L_08873190;
      }
      goto L_08873184;
    }
L_08873184:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2696));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(307)));
    goto L_08873190;
L_08873190:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088731A0;
      }
      goto L_08873198;
    }
L_08873198:
    aot_gpr[31] = (0x088731A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 88u, 0x088B75C8u>(ctx, &aot_mem) && ctx.pc == 0x088731A0u) goto L_088731A0;
    return;
L_088731A0:
    aot_gpr[31] = (0x088731A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 60u, 0x08911600u>(ctx, &aot_mem) && ctx.pc == 0x088731A8u) goto L_088731A8;
    return;
L_088731A8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088731C8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088731C8u) goto L_088731C8;
    return;
L_088731C8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088731E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088731E8u) goto L_088731E8;
    return;
L_088731E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08873208u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873208u) goto L_08873208;
    return;
L_08873208:
    aot_gpr[31] = (0x08873210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 81u, 0x0882BCB4u>(ctx, &aot_mem) && ctx.pc == 0x08873210u) goto L_08873210;
    return;
L_08873210:
    aot_gpr[31] = (0x08873218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 26u, 0x088B01CCu>(ctx, &aot_mem) && ctx.pc == 0x08873218u) goto L_08873218;
    return;
L_08873218:
    aot_gpr[31] = (0x08873220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 165u, 0x08931FC0u>(ctx, &aot_mem) && ctx.pc == 0x08873220u) goto L_08873220;
    return;
L_08873220:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08873240u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873240u) goto L_08873240;
    return;
L_08873240:
    aot_gpr[31] = (0x08873248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 165u, 0x08931FC0u>(ctx, &aot_mem) && ctx.pc == 0x08873248u) goto L_08873248;
    return;
L_08873248:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5240)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08873268u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873268u) goto L_08873268;
    return;
L_08873268:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5236)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08873288u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873288u) goto L_08873288;
    return;
L_08873288:
    aot_gpr[31] = (0x08873290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 141u, 0x088B9CF8u>(ctx, &aot_mem) && ctx.pc == 0x08873290u) goto L_08873290;
    return;
L_08873290:
    aot_gpr[31] = (0x08873298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 53u, 0x088C16F0u>(ctx, &aot_mem) && ctx.pc == 0x08873298u) goto L_08873298;
    return;
L_08873298:
    aot_gpr[31] = (0x088732A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 130u, 0x0887E9B0u>(ctx, &aot_mem) && ctx.pc == 0x088732A0u) goto L_088732A0;
    return;
L_088732A0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088732ACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5264)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 75u, 0x0885F4ACu>(ctx, &aot_mem) && ctx.pc == 0x088732ACu) goto L_088732AC;
    return;
L_088732AC:
    aot_gpr[31] = (0x088732B4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 141u, 0x08907DC4u>(ctx, &aot_mem) && ctx.pc == 0x088732B4u) goto L_088732B4;
    return;
L_088732B4:
    aot_gpr[31] = (0x088732BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 203u, 0x08880D94u>(ctx, &aot_mem) && ctx.pc == 0x088732BCu) goto L_088732BC;
    return;
L_088732BC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088732C8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6936)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 80u, 0x08826728u>(ctx, &aot_mem) && ctx.pc == 0x088732C8u) goto L_088732C8;
    return;
L_088732C8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5272)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088732E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088732E8u) goto L_088732E8;
    return;
L_088732E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5268)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08873308u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873308u) goto L_08873308;
    return;
L_08873308:
    aot_gpr[31] = (0x08873310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 22u, 0x088631A4u>(ctx, &aot_mem) && ctx.pc == 0x08873310u) goto L_08873310;
    return;
L_08873310:
    aot_gpr[31] = (0x08873318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 53u, 0x0887844Cu>(ctx, &aot_mem) && ctx.pc == 0x08873318u) goto L_08873318;
    return;
L_08873318:
    aot_gpr[31] = (0x08873320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 84u, 0x088849DCu>(ctx, &aot_mem) && ctx.pc == 0x08873320u) goto L_08873320;
    return;
L_08873320:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7512)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08873340u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873340u) goto L_08873340;
    return;
L_08873340:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5112)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873358;
      }
      goto L_0887334C;
    }
L_0887334C:
    aot_gpr[31] = (0x08873354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08873354u) goto L_08873354;
    return;
L_08873354:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(5112), 0u);
    goto L_08873358;
L_08873358:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873370;
      }
      goto L_08873364;
    }
L_08873364:
    aot_gpr[31] = (0x0887336Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887336Cu) goto L_0887336C;
    return;
L_0887336C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_08873370;
L_08873370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873388;
      }
      goto L_0887337C;
    }
L_0887337C:
    aot_gpr[31] = (0x08873384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08873384u) goto L_08873384;
    return;
L_08873384:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_08873388;
L_08873388:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887339C;
      }
      goto L_08873394;
    }
L_08873394:
    aot_gpr[31] = (0x0887339Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887339Cu) goto L_0887339C;
    return;
L_0887339C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[31] = (0x088733B0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 31u, 0x0891D244u>(ctx, &aot_mem) && ctx.pc == 0x088733B0u) goto L_088733B0;
    return;
L_088733B0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088733D0;
      }
      goto L_088733C0;
    }
L_088733C0:
    aot_gpr[31] = (0x088733C8u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 75u, 0x08943584u>(ctx, &aot_mem) && ctx.pc == 0x088733C8u) goto L_088733C8;
    return;
L_088733C8:
    aot_gpr[31] = (0x088733D0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 55u, 0x0891D414u>(ctx, &aot_mem) && ctx.pc == 0x088733D0u) goto L_088733D0;
    return;
L_088733D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088733E8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25472), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873408:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873444:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088734D4;
      }
      goto L_088734CC;
    }
L_088734CC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088734D4;
      }
      goto L_088734D4;
    }
L_088734D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088734F8;
      }
      goto L_088734F0;
    }
L_088734F0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088734F8;
      }
      goto L_088734F8;
    }
L_088734F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887351C;
      }
      goto L_08873514;
    }
L_08873514:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0887351C;
      }
      goto L_0887351C;
    }
L_0887351C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08873540;
      }
      goto L_08873538;
    }
L_08873538:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08873540;
      }
      goto L_08873540;
    }
L_08873540:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873568:
    aot_gpr[11] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088735CC;
      }
      goto L_08873598;
    }
L_08873598:
    aot_gpr[3] = (aot_gpr[4] | 0u);
    goto L_0887359C;
L_0887359C:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[12] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088735BC;
      }
      goto L_088735A8;
    }
L_088735A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(90)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(90), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088735CC;
      }
      goto L_088735BC;
    }
L_088735BC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[12] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887359C;
      }
      goto L_088735CC;
    }
L_088735CC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088735F0;
      }
      goto L_088735D4;
    }
L_088735D4:
    aot_gpr[5] = (aot_gpr[8] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(90), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    goto L_088735F0;
L_088735F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(348), aot_gpr[5]);
      if (branch_taken) {
          goto L_08873630;
      }
      goto L_08873600;
    }
L_08873600:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(352), aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08873630;
      }
      goto L_08873624;
    }
L_08873624:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(368), aot_gpr[5]);
    goto L_08873630;
L_08873630:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873644;
      }
      goto L_08873638;
    }
L_08873638:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(356)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(356), aot_gpr[5]);
    goto L_08873644;
L_08873644:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887366C;
      }
      goto L_0887364C;
    }
L_0887364C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(360), aot_gpr[5]);
      if (branch_taken) {
          goto L_08873678;
      }
      goto L_0887365C;
    }
L_0887365C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(364), aot_gpr[5]);
      if (branch_taken) {
          goto L_08873678;
      }
      goto L_0887366C;
    }
L_0887366C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(344)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), aot_gpr[5]);
    goto L_08873678;
L_08873678:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873680:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(404)));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(372)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(372), aot_gpr[10]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_088736E0;
      }
      goto L_088736AC;
    }
L_088736AC:
    aot_gpr[10] = (aot_gpr[4] | 0u);
    goto L_088736B0;
L_088736B0:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(408)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088736D0;
      }
      goto L_088736BC;
    }
L_088736BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(410)));
    aot_gpr[9] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(410), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088736E0;
      }
      goto L_088736D0;
    }
L_088736D0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088736B0;
      }
      goto L_088736E0;
    }
L_088736E0:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08873704;
      }
      goto L_088736E8;
    }
L_088736E8:
    aot_gpr[5] = (aot_gpr[8] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(408), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(410), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(404), aot_gpr[5]);
    goto L_08873704;
L_08873704:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887371C;
      }
      goto L_0887370C;
    }
L_0887370C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(664)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(664), aot_gpr[5]);
      if (branch_taken) {
          goto L_08873750;
      }
      goto L_0887371C;
    }
L_0887371C:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08873738;
      }
      goto L_08873728;
    }
L_08873728:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(668)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(668), aot_gpr[5]);
      if (branch_taken) {
          goto L_08873750;
      }
      goto L_08873738;
    }
L_08873738:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08873750;
      }
      goto L_08873744;
    }
L_08873744:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(672)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(672), aot_gpr[5]);
    goto L_08873750;
L_08873750:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(676)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(676), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873760:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08873774u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_08873444;
L_08873774:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873780:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(52));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08873790;
L_08873790:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088737A8;
      }
      goto L_088737A0;
    }
L_088737A0:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    goto L_088737A8;
L_088737A8:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08873790;
      }
      goto L_088737B8;
    }
L_088737B8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (aot_gpr[5] | 0u);
        goto L_088737C4;
    }
    goto L_088737C4;
L_088737C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088737CC:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(52));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_088737DC;
L_088737DC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088737F4;
      }
      goto L_088737EC;
    }
L_088737EC:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    goto L_088737F4;
L_088737F4:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088737DC;
      }
      goto L_08873804;
    }
L_08873804:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (aot_gpr[5] | 0u);
        goto L_08873810;
    }
    goto L_08873810;
L_08873810:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873818:
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[10] = (0u | 1u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    aot_gpr[8] = (aot_gpr[10] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08873860;
      }
      goto L_08873834;
    }
L_08873834:
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    goto L_08873838;
L_08873838:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (aot_gpr[11] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873850;
      }
      goto L_08873848;
    }
L_08873848:
    aot_gpr[11] = (aot_gpr[8] | 0u);
    aot_gpr[2] = (aot_gpr[10] | 0u);
    goto L_08873850;
L_08873850:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[10] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08873838;
      }
      goto L_08873860;
    }
L_08873860:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] & 65280u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 8u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873888:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(372));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08873898;
L_08873898:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088738B0;
      }
      goto L_088738A8;
    }
L_088738A8:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    goto L_088738B0;
L_088738B0:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08873898;
      }
      goto L_088738C0;
    }
L_088738C0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (aot_gpr[5] | 0u);
        goto L_088738CC;
    }
    goto L_088738CC;
L_088738CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088738D4:
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(408));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(404)));
    aot_gpr[10] = (0u | 1u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    aot_gpr[8] = (aot_gpr[10] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887391C;
      }
      goto L_088738F0;
    }
L_088738F0:
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    goto L_088738F4;
L_088738F4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (aot_gpr[11] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887390C;
      }
      goto L_08873904;
    }
L_08873904:
    aot_gpr[11] = (aot_gpr[8] | 0u);
    aot_gpr[2] = (aot_gpr[10] | 0u);
    goto L_0887390C;
L_0887390C:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[10] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088738F4;
      }
      goto L_0887391C;
    }
L_0887391C:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] & 65280u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 8u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873944:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25480), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873964:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088739B0;
      }
      goto L_08873978;
    }
L_08873978:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_08873990;
      }
      goto L_08873984;
    }
L_08873984:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088739A8;
      }
      goto L_08873990;
    }
L_08873990:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08873978;
      }
      goto L_088739A0;
    }
L_088739A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088739B0;
      }
      goto L_088739A8;
    }
L_088739A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088739B4;
      }
      goto L_088739B0;
    }
L_088739B0:
    aot_gpr[2] = (0u | 0u);
    goto L_088739B4;
L_088739B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088739BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[12] = (0u | 0u);
    aot_gpr[3] = (0u | 0u);
    goto L_088739D4;
L_088739D4:
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x088739E4u);
    aot_gpr[6] = (aot_gpr[3] | 0u);
    goto L_08873964;
L_088739E4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873A18;
      }
      goto L_088739F0;
    }
L_088739F0:
    { const bool branch_taken = aot_gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873A14;
      }
      goto L_088739F8;
    }
L_088739F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873A18;
      }
      goto L_08873A0C;
    }
L_08873A0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[12] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08873A18;
      }
      goto L_08873A14;
    }
L_08873A14:
    aot_gpr[12] = (aot_gpr[4] | 0u);
    goto L_08873A18;
L_08873A18:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[3] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088739D4;
      }
      goto L_08873A28;
    }
L_08873A28:
    aot_gpr[2] = (aot_gpr[12] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873A38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (aot_gpr[6] | 0u);
    aot_gpr[10] = (aot_gpr[7] | 0u);
    aot_gpr[3] = (aot_gpr[5] | 0u);
    aot_gpr[12] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08873A58u);
    aot_gpr[13] = (0u | 0u);
    goto L_08873964;
L_08873A58:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(0)));
        goto L_08873A7C;
    }
    goto L_08873A60;
L_08873A60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[10] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873AAC;
      }
      goto L_08873A70;
    }
L_08873A70:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[13] = (0u | 1u);
      if (branch_taken) {
          goto L_08873AAC;
      }
      goto L_08873A7C;
    }
L_08873A7C:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (aot_gpr[12] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08873AAC;
L_08873AAC:
    PSPRECOMP_AOT_STORE8(aot_gpr[12] + static_cast<std::uint32_t>(2308), static_cast<std::uint8_t>(aot_gpr[13]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873ABC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873AD0;
      }
      goto L_08873ACC;
    }
L_08873ACC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    goto L_08873AD0;
L_08873AD0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873AD8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 13000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08873B7C;
      }
      goto L_08873AFC;
    }
L_08873AFC:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 12000u);
      if (branch_taken) {
          goto L_08873B44;
      }
      goto L_08873B08;
    }
L_08873B08:
    aot_gpr[5] = (0u | 6000u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 5000u);
      if (branch_taken) {
          goto L_08873C04;
      }
      goto L_08873B14;
    }
L_08873B14:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 4000u);
      if (branch_taken) {
          goto L_08873C04;
      }
      goto L_08873B1C;
    }
L_08873B1C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 3000u);
      if (branch_taken) {
          goto L_08873C04;
      }
      goto L_08873B24;
    }
L_08873B24:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 2000u);
      if (branch_taken) {
          goto L_08873B3C;
      }
      goto L_08873B2C;
    }
L_08873B2C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 1000u);
      if (branch_taken) {
          goto L_08873B3C;
      }
      goto L_08873B34;
    }
L_08873B34:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08873C24;
      }
      goto L_08873B3C;
    }
L_08873B3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08873C24;
      }
      goto L_08873B44;
    }
L_08873B44:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 11000u);
      if (branch_taken) {
          goto L_08873C0C;
      }
      goto L_08873B4C;
    }
L_08873B4C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 10000u);
      if (branch_taken) {
          goto L_08873C0C;
      }
      goto L_08873B54;
    }
L_08873B54:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 9000u);
      if (branch_taken) {
          goto L_08873C0C;
      }
      goto L_08873B5C;
    }
L_08873B5C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 8000u);
      if (branch_taken) {
          goto L_08873B74;
      }
      goto L_08873B64;
    }
L_08873B64:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 7000u);
      if (branch_taken) {
          goto L_08873B74;
      }
      goto L_08873B6C;
    }
L_08873B6C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08873C24;
      }
      goto L_08873B74;
    }
L_08873B74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 7u);
      if (branch_taken) {
          goto L_08873C24;
      }
      goto L_08873B7C;
    }
L_08873B7C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 19001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 25000u);
      if (branch_taken) {
          goto L_08873BCC;
      }
      goto L_08873B88;
    }
L_08873B88:
    aot_gpr[5] = (0u | 19000u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 18000u);
      if (branch_taken) {
          goto L_08873BFC;
      }
      goto L_08873B94;
    }
L_08873B94:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 17000u);
      if (branch_taken) {
          goto L_08873C14;
      }
      goto L_08873B9C;
    }
L_08873B9C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 16000u);
      if (branch_taken) {
          goto L_08873C14;
      }
      goto L_08873BA4;
    }
L_08873BA4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 15000u);
      if (branch_taken) {
          goto L_08873C14;
      }
      goto L_08873BAC;
    }
L_08873BAC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 14000u);
      if (branch_taken) {
          goto L_08873BC4;
      }
      goto L_08873BB4;
    }
L_08873BB4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 13000u);
      if (branch_taken) {
          goto L_08873BC4;
      }
      goto L_08873BBC;
    }
L_08873BBC:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08873C24;
      }
      goto L_08873BC4;
    }
L_08873BC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_08873C24;
      }
      goto L_08873BCC;
    }
L_08873BCC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 24000u);
      if (branch_taken) {
          goto L_08873BC4;
      }
      goto L_08873BD4;
    }
L_08873BD4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 23000u);
      if (branch_taken) {
          goto L_08873C1C;
      }
      goto L_08873BDC;
    }
L_08873BDC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 22000u);
      if (branch_taken) {
          goto L_08873C1C;
      }
      goto L_08873BE4;
    }
L_08873BE4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 21000u);
      if (branch_taken) {
          goto L_08873C1C;
      }
      goto L_08873BEC;
    }
L_08873BEC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 20000u);
      if (branch_taken) {
          goto L_08873BFC;
      }
      goto L_08873BF4;
    }
L_08873BF4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08873C24;
      }
      goto L_08873BFC;
    }
L_08873BFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08873C24;
      }
      goto L_08873C04;
    }
L_08873C04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08873C24;
      }
      goto L_08873C0C;
    }
L_08873C0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08873C24;
      }
      goto L_08873C14;
    }
L_08873C14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_08873C24;
      }
      goto L_08873C1C;
    }
L_08873C1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_08873C24;
      }
      goto L_08873C24;
    }
L_08873C24:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873C2C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25488), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873C4C:
    aot_gpr[5] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873C64:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873CD8;
      }
      goto L_08873C70;
    }
L_08873C70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08873C84;
    }
    goto L_08873C7C;
L_08873C7C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08873CD8;
      }
      goto L_08873C84;
    }
L_08873C84:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[5] = (17530u << 16u);
    aot_fpr[14] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[6] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08873CC0;
      }
      goto L_08873CB4;
    }
L_08873CB4:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08873CD4;
      }
      goto L_08873CC0;
    }
L_08873CC0:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_08873CD4;
L_08873CD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_08873CD8;
L_08873CD8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873CE0:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08873CFC;
      }
      goto L_08873CF0;
    }
L_08873CF0:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08873CFC;
L_08873CFC:
    aot_gpr[5] = (14979u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 4719u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873D14:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25496), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873D34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(6408));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08873D54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08873C4C;
L_08873D54:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    aot_gpr[31] = (0x08873D64u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08873C4C;
L_08873D64:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873D80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(6408));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08873DA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08873C4C;
L_08873DA0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    aot_gpr[31] = (0x08873DB0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08873C4C;
L_08873DB0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873DCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08873EA4;
      }
      goto L_08873DE4;
    }
L_08873DE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08873E88;
      }
      goto L_08873E08;
    }
L_08873E08:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(228)));
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(90) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873E88;
      }
      goto L_08873E18;
    }
L_08873E18:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(228)));
    aot_gpr[7] = (15820u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 52429u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(45) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_08873E38;
      }
      goto L_08873E30;
    }
L_08873E30:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_08873E80;
      }
      goto L_08873E38;
    }
L_08873E38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(228)));
    aot_gpr[6] = (0u | 90u);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08873E5C;
      }
      goto L_08873E50;
    }
L_08873E50:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    goto L_08873E5C;
L_08873E5C:
    aot_gpr[5] = (16948u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[15];
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[16] - aot_fpr[12];
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    goto L_08873E80;
L_08873E80:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7264), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08873E8C;
      }
      goto L_08873E88;
    }
L_08873E88:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7264), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_08873E8C;
L_08873E8C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08873E98u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6408));
    goto L_08873C64;
L_08873E98:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08873EA4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    goto L_08873C64;
L_08873EA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873EB0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25504), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873ED0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25512), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873EF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2852)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873F88;
      }
      goto L_08873F20;
    }
L_08873F20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08873F2Cu);
    aot_gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x08873F2Cu) goto L_08873F2C;
    return;
L_08873F2C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(50));
    aot_gpr[31] = (0x08873F38u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08873F38u) goto L_08873F38;
    return;
L_08873F38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(178));
      if (branch_taken) {
          goto L_08873F78;
      }
      goto L_08873F50;
    }
L_08873F50:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08873F64u);
    aot_gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x08873F64u) goto L_08873F64;
    return;
L_08873F64:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08873F70u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08873F70u) goto L_08873F70;
    return;
L_08873F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08873F88;
      }
      goto L_08873F78;
    }
L_08873F78:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08873F88u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7400));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08873F88u) goto L_08873F88;
    return;
L_08873F88:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873F9C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25520), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873FBC:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08873FDC;
      }
      goto L_08873FCC;
    }
L_08873FCC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08873FF4;
      }
      goto L_08873FD4;
    }
L_08873FD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 1u, 0x08874000u>(ctx, &aot_mem); return;
      }
      goto L_08873FDC;
    }
L_08873FDC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08873FFC;
      }
      goto L_08873FE4;
    }
L_08873FE4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873FD4;
      }
      goto L_08873FEC;
    }
L_08873FEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 50u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 1u, 0x08874000u>(ctx, &aot_mem); return;
      }
      goto L_08873FF4;
    }
L_08873FF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 100u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 1u, 0x08874000u>(ctx, &aot_mem); return;
      }
      goto L_08873FFC;
    }
L_08873FFC:
    aot_gpr[2] = (0u | 75u);
    ctx.pc = 0x08874000u; return;
}

void recomp_unit_0111(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0111_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_111(Runtime &runtime) {
    runtime.register_generated_unit(111u, 0x08873000u, 4096u, &recomp_unit_0111, &recomp_unit_0111_entry);
    runtime.register_function(0x08873000u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873008u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873024u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873034u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887303Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873044u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887304Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873054u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887305Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873068u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873070u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873078u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873080u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873088u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873090u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887309Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088730A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088730B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088730C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088730E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873100u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873120u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887312Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887314Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873154u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873160u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873184u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873190u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873198u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088731A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088731A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088731C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088731E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873208u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873210u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873218u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873220u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873240u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873248u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873268u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873288u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873290u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873298u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088732A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088732ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088732B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088732BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088732C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088732E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873308u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873310u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873318u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873320u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873340u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887334Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873354u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873358u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873364u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887336Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873370u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887337Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873384u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873388u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873394u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887339Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088733B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088733C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088733C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088733D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088733E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873408u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873444u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088734CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088734D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088734F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088734F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873514u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887351Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873538u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873540u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873568u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873598u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887359Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088735A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088735BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088735CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088735D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088735F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873600u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873624u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873630u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873638u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873644u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887364Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887365Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887366Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873678u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873680u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088736ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088736B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088736BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088736D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088736E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088736E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873704u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887370Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887371Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873728u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873738u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873744u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873750u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873760u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873774u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873780u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873790u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088737A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088737A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088737B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088737C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088737CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088737DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088737ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088737F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873804u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873810u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873818u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873834u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873838u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873848u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873850u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873860u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873888u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873898u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088738A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088738B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088738C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088738CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088738D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088738F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088738F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873904u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887390Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x0887391Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873944u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873964u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873978u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873984u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873990u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088739A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088739A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088739B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088739B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088739BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088739D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088739E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088739F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x088739F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873A0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873A14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873A18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873A28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873A38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873A58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873A60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873A70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873A7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873AACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873ABCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873ACCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873AD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873AD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873AFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873B9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873BA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873BACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873BB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873BBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873BC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873BCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873BD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873BDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873BE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873BECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873BF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873BFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873C04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873C0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873C14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873C1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873C24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873C2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873C4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873C64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873C70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873C7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873C84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873CB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873CC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873CD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873CD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873CE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873CF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873CFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873D14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873D34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873D54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873D64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873D80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873DA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873DB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873DCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873DE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873E08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873E18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873E30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873E38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873E50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873E5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873E80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873E88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873E8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873E98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873EA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873EB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873ED0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873EF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873F20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873F2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873F38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873F50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873F64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873F70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873F78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873F88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873F9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873FBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873FCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873FD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873FDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873FE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873FECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873FF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x08873FFCu, &recomp_unit_0111, "recomp_unit_0111");
}
} // namespace psprecomp
