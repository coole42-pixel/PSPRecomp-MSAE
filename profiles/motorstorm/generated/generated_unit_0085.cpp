#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0085[1023] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12,
    0, 13, 14, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0,
    0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0,
    30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38,
    0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0,
    0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0,
    62, 0, 0, 63, 0, 0, 0, 64, 65, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 72, 0, 0, 73, 0,
    0, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 92,
    0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0,
    0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122,
    0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0,
    0, 133, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0,
    146, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 162, 163, 0, 164, 0, 165, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 171, 0, 0, 172, 0,
    173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186,
    0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 200, 201, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 0, 223, 0, 224, 0, 225, 0, 0,
    0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 239,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258,
};
void recomp_unit_0085_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08859004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0085[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08859004;
    case 2u: goto L_08859018;
    case 3u: goto L_0885902C;
    case 4u: goto L_08859040;
    case 5u: goto L_08859054;
    case 6u: goto L_08859068;
    case 7u: goto L_0885907C;
    case 8u: goto L_08859090;
    case 9u: goto L_088590A4;
    case 10u: goto L_088590B0;
    case 11u: goto L_088590EC;
    case 12u: goto L_08859100;
    case 13u: goto L_08859108;
    case 14u: goto L_0885910C;
    case 15u: goto L_08859118;
    case 16u: goto L_08859120;
    case 17u: goto L_08859128;
    case 18u: goto L_08859140;
    case 19u: goto L_08859158;
    case 20u: goto L_08859170;
    case 21u: goto L_08859188;
    case 22u: goto L_08859190;
    case 23u: goto L_08859198;
    case 24u: goto L_088591B0;
    case 25u: goto L_088591C0;
    case 26u: goto L_088591CC;
    case 27u: goto L_088591D4;
    case 28u: goto L_088591E0;
    case 29u: goto L_088591F4;
    case 30u: goto L_08859204;
    case 31u: goto L_08859214;
    case 32u: goto L_0885922C;
    case 33u: goto L_08859238;
    case 34u: goto L_08859248;
    case 35u: goto L_08859258;
    case 36u: goto L_08859264;
    case 37u: goto L_08859274;
    case 38u: goto L_08859280;
    case 39u: goto L_0885928C;
    case 40u: goto L_08859294;
    case 41u: goto L_088592AC;
    case 42u: goto L_088592C0;
    case 43u: goto L_088592D8;
    case 44u: goto L_088592EC;
    case 45u: goto L_088592F8;
    case 46u: goto L_08859310;
    case 47u: goto L_08859318;
    case 48u: goto L_0885933C;
    case 49u: goto L_08859350;
    case 50u: goto L_0885935C;
    case 51u: goto L_08859370;
    case 52u: goto L_08859388;
    case 53u: goto L_08859398;
    case 54u: goto L_088593A4;
    case 55u: goto L_088593B0;
    case 56u: goto L_088593B8;
    case 57u: goto L_088593C8;
    case 58u: goto L_088593D0;
    case 59u: goto L_088593DC;
    case 60u: goto L_088593EC;
    case 61u: goto L_088593F8;
    case 62u: goto L_08859404;
    case 63u: goto L_08859410;
    case 64u: goto L_08859420;
    case 65u: goto L_08859424;
    case 66u: goto L_0885942C;
    case 67u: goto L_08859438;
    case 68u: goto L_08859444;
    case 69u: goto L_08859454;
    case 70u: goto L_0885945C;
    case 71u: goto L_0885946C;
    case 72u: goto L_08859470;
    case 73u: goto L_0885947C;
    case 74u: goto L_0885948C;
    case 75u: goto L_08859494;
    case 76u: goto L_088594A0;
    case 77u: goto L_088594A8;
    case 78u: goto L_088594B0;
    case 79u: goto L_088594BC;
    case 80u: goto L_088594C4;
    case 81u: goto L_088594D0;
    case 82u: goto L_088594E0;
    case 83u: goto L_088594E8;
    case 84u: goto L_088594F4;
    case 85u: goto L_08859508;
    case 86u: goto L_08859520;
    case 87u: goto L_08859540;
    case 88u: goto L_08859550;
    case 89u: goto L_08859560;
    case 90u: goto L_08859568;
    case 91u: goto L_08859574;
    case 92u: goto L_08859580;
    case 93u: goto L_0885958C;
    case 94u: goto L_08859598;
    case 95u: goto L_088595A4;
    case 96u: goto L_088595AC;
    case 97u: goto L_088595B8;
    case 98u: goto L_088595C4;
    case 99u: goto L_088595F0;
    case 100u: goto L_088595FC;
    case 101u: goto L_08859608;
    case 102u: goto L_08859620;
    case 103u: goto L_08859628;
    case 104u: goto L_08859634;
    case 105u: goto L_08859650;
    case 106u: goto L_08859664;
    case 107u: goto L_08859680;
    case 108u: goto L_0885969C;
    case 109u: goto L_088596A8;
    case 110u: goto L_088596CC;
    case 111u: goto L_088596E8;
    case 112u: goto L_088596F0;
    case 113u: goto L_088596F8;
    case 114u: goto L_08859720;
    case 115u: goto L_08859730;
    case 116u: goto L_08859760;
    case 117u: goto L_088597A4;
    case 118u: goto L_088597BC;
    case 119u: goto L_088597D4;
    case 120u: goto L_088597E0;
    case 121u: goto L_088597F0;
    case 122u: goto L_08859800;
    case 123u: goto L_08859810;
    case 124u: goto L_08859818;
    case 125u: goto L_08859824;
    case 126u: goto L_08859834;
    case 127u: goto L_08859840;
    case 128u: goto L_0885984C;
    case 129u: goto L_08859858;
    case 130u: goto L_08859864;
    case 131u: goto L_0885986C;
    case 132u: goto L_08859878;
    case 133u: goto L_08859888;
    case 134u: goto L_0885988C;
    case 135u: goto L_08859894;
    case 136u: goto L_088598BC;
    case 137u: goto L_088598C8;
    case 138u: goto L_088598E4;
    case 139u: goto L_088598EC;
    case 140u: goto L_08859904;
    case 141u: goto L_08859924;
    case 142u: goto L_08859930;
    case 143u: goto L_08859948;
    case 144u: goto L_08859960;
    case 145u: goto L_08859974;
    case 146u: goto L_08859984;
    case 147u: goto L_08859994;
    case 148u: goto L_0885999C;
    case 149u: goto L_088599A4;
    case 150u: goto L_088599B0;
    case 151u: goto L_088599C4;
    case 152u: goto L_088599D4;
    case 153u: goto L_088599E4;
    case 154u: goto L_088599F4;
    case 155u: goto L_08859A00;
    case 156u: goto L_08859A20;
    case 157u: goto L_08859A2C;
    case 158u: goto L_08859A34;
    case 159u: goto L_08859A4C;
    case 160u: goto L_08859A54;
    case 161u: goto L_08859A5C;
    case 162u: goto L_08859A68;
    case 163u: goto L_08859A6C;
    case 164u: goto L_08859A74;
    case 165u: goto L_08859A7C;
    case 166u: goto L_08859A90;
    case 167u: goto L_08859AC4;
    case 168u: goto L_08859AD0;
    case 169u: goto L_08859AE0;
    case 170u: goto L_08859AEC;
    case 171u: goto L_08859AF0;
    case 172u: goto L_08859AFC;
    case 173u: goto L_08859B04;
    case 174u: goto L_08859B0C;
    case 175u: goto L_08859B14;
    case 176u: goto L_08859B1C;
    case 177u: goto L_08859B2C;
    case 178u: goto L_08859B38;
    case 179u: goto L_08859B40;
    case 180u: goto L_08859B50;
    case 181u: goto L_08859B58;
    case 182u: goto L_08859B60;
    case 183u: goto L_08859B68;
    case 184u: goto L_08859B70;
    case 185u: goto L_08859B78;
    case 186u: goto L_08859B80;
    case 187u: goto L_08859B90;
    case 188u: goto L_08859B98;
    case 189u: goto L_08859BA0;
    case 190u: goto L_08859BAC;
    case 191u: goto L_08859BB8;
    case 192u: goto L_08859BC0;
    case 193u: goto L_08859BF8;
    case 194u: goto L_08859C1C;
    case 195u: goto L_08859C28;
    case 196u: goto L_08859C34;
    case 197u: goto L_08859C50;
    case 198u: goto L_08859C60;
    case 199u: goto L_08859C70;
    case 200u: goto L_08859C78;
    case 201u: goto L_08859C7C;
    case 202u: goto L_08859C9C;
    case 203u: goto L_08859CAC;
    case 204u: goto L_08859CB4;
    case 205u: goto L_08859CC0;
    case 206u: goto L_08859CC8;
    case 207u: goto L_08859CD0;
    case 208u: goto L_08859CE8;
    case 209u: goto L_08859D0C;
    case 210u: goto L_08859D20;
    case 211u: goto L_08859D28;
    case 212u: goto L_08859D34;
    case 213u: goto L_08859D48;
    case 214u: goto L_08859D50;
    case 215u: goto L_08859D60;
    case 216u: goto L_08859D80;
    case 217u: goto L_08859D90;
    case 218u: goto L_08859DAC;
    case 219u: goto L_08859DC0;
    case 220u: goto L_08859DC8;
    case 221u: goto L_08859DD4;
    case 222u: goto L_08859DDC;
    case 223u: goto L_08859DE8;
    case 224u: goto L_08859DF0;
    case 225u: goto L_08859DF8;
    case 226u: goto L_08859E08;
    case 227u: goto L_08859E10;
    case 228u: goto L_08859E2C;
    case 229u: goto L_08859E34;
    case 230u: goto L_08859E4C;
    case 231u: goto L_08859E54;
    case 232u: goto L_08859E80;
    case 233u: goto L_08859E9C;
    case 234u: goto L_08859EB0;
    case 235u: goto L_08859EBC;
    case 236u: goto L_08859EDC;
    case 237u: goto L_08859EEC;
    case 238u: goto L_08859EF8;
    case 239u: goto L_08859F00;
    case 240u: goto L_08859F1C;
    case 241u: goto L_08859F2C;
    case 242u: goto L_08859F38;
    case 243u: goto L_08859F4C;
    case 244u: goto L_08859F5C;
    case 245u: goto L_08859F64;
    case 246u: goto L_08859F6C;
    case 247u: goto L_08859F74;
    case 248u: goto L_08859F84;
    case 249u: goto L_08859F9C;
    case 250u: goto L_08859FAC;
    case 251u: goto L_08859FC4;
    case 252u: goto L_08859FCC;
    case 253u: goto L_08859FD4;
    case 254u: goto L_08859FDC;
    case 255u: goto L_08859FE4;
    case 256u: goto L_08859FEC;
    case 257u: goto L_08859FF4;
    case 258u: goto L_08859FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08859004:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(580), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08859018u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3188));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08859018u) goto L_08859018;
    return;
L_08859018:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(584), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885902Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3212));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0885902Cu) goto L_0885902C;
    return;
L_0885902C:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(588), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08859040u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3228));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08859040u) goto L_08859040;
    return;
L_08859040:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(592), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08859054u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3248));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08859054u) goto L_08859054;
    return;
L_08859054:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(596), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08859068u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3264));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08859068u) goto L_08859068;
    return;
L_08859068:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(600), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885907Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3284));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0885907Cu) goto L_0885907C;
    return;
L_0885907C:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(604), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08859090u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08859090u) goto L_08859090;
    return;
L_08859090:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(608), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088590A4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3320));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088590A4u) goto L_088590A4;
    return;
L_088590A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(612), aot_gpr[2]);
    aot_gpr[31] = (0x088590B0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 81u, 0x0885A514u>(ctx, &aot_mem) && ctx.pc == 0x088590B0u) goto L_088590B0;
    return;
L_088590B0:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(564), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(552), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(556), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088590ECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088590ECu) goto L_088590EC;
    return;
L_088590EC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08859100u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3340));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08859100u) goto L_08859100;
    return;
L_08859100:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0885910C;
      }
      goto L_08859108;
    }
L_08859108:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    goto L_0885910C;
L_0885910C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088591F4;
      }
      goto L_08859118;
    }
L_08859118:
    aot_gpr[31] = (0x08859120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0884A60Cu>(ctx, &aot_mem) && ctx.pc == 0x08859120u) goto L_08859120;
    return;
L_08859120:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088591D4;
      }
      goto L_08859128;
    }
L_08859128:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[21]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2200), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08859140u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 117u, 0x088DBA88u>(ctx, &aot_mem) && ctx.pc == 0x08859140u) goto L_08859140;
    return;
L_08859140:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2178)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x08859158u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 57u, 0x088CD578u>(ctx, &aot_mem) && ctx.pc == 0x08859158u) goto L_08859158;
    return;
L_08859158:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[18] + static_cast<std::uint32_t>(41));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08859170u);
    aot_gpr[23] = (aot_gpr[6] + static_cast<std::uint32_t>(3360));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08859170u) goto L_08859170;
    return;
L_08859170:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08859188u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2820));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859188u) goto L_08859188;
    return;
L_08859188:
    aot_gpr[31] = (0x08859190u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 216u, 0x0888CF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08859190u) goto L_08859190;
    return;
L_08859190:
    aot_gpr[31] = (0x08859198u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 68u, 0x0884A5ECu>(ctx, &aot_mem) && ctx.pc == 0x08859198u) goto L_08859198;
    return;
L_08859198:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088591B0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088591B0u) goto L_088591B0;
    return;
L_088591B0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x088591C0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 134u, 0x088DBBACu>(ctx, &aot_mem) && ctx.pc == 0x088591C0u) goto L_088591C0;
    return;
L_088591C0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088591CCu);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x088591CCu) goto L_088591CC;
    return;
L_088591CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_088591E0;
      }
      goto L_088591D4;
    }
L_088591D4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088591E0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x088591E0u) goto L_088591E0;
    return;
L_088591E0:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0885928C;
      }
      goto L_088591F4;
    }
L_088591F4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08859204u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2884));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08859204u) goto L_08859204;
    return;
L_08859204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859274;
      }
      goto L_08859214;
    }
L_08859214:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2200)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859258;
      }
      goto L_0885922C;
    }
L_0885922C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2201)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859258;
      }
      goto L_08859238;
    }
L_08859238:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08859248u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08859248u) goto L_08859248;
    return;
L_08859248:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0885928C;
      }
      goto L_08859258;
    }
L_08859258:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08859264u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08859264u) goto L_08859264;
    return;
L_08859264:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0885928C;
      }
      goto L_08859274;
    }
L_08859274:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08859280u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08859280u) goto L_08859280;
    return;
L_08859280:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0885928C;
L_0885928C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859310;
      }
      goto L_08859294;
    }
L_08859294:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088592ACu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3372));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088592ACu) goto L_088592AC;
    return;
L_088592AC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088592C0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2996));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088592C0u) goto L_088592C0;
    return;
L_088592C0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088592D8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3020));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088592D8u) goto L_088592D8;
    return;
L_088592D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[21]);
    aot_gpr[31] = (0x088592ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x088592ECu) goto L_088592EC;
    return;
L_088592EC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088592F8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x088592F8u) goto L_088592F8;
    return;
L_088592F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08859318;
      }
      goto L_08859310;
    }
L_08859310:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    goto L_08859318;
L_08859318:
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(173), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0885933Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3392));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885933Cu) goto L_0885933C;
    return;
L_0885933C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[21]);
    aot_gpr[31] = (0x08859350u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 138u, 0x08858868u>(ctx, &aot_mem) && ctx.pc == 0x08859350u) goto L_08859350;
    return;
L_08859350:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(5)));
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_088595C4;
    }
    goto L_0885935C;
L_0885935C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08859370u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2832));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859370u) goto L_08859370;
    return;
L_08859370:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08859388u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2852));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859388u) goto L_08859388;
    return;
L_08859388:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08859398u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08859398u) goto L_08859398;
    return;
L_08859398:
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[31] = (0x088593A4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 236u, 0x088B7F88u>(ctx, &aot_mem) && ctx.pc == 0x088593A4u) goto L_088593A4;
    return;
L_088593A4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088593B0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088593B0u) goto L_088593B0;
    return;
L_088593B0:
    aot_gpr[31] = (0x088593B8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088593B8u) goto L_088593B8;
    return;
L_088593B8:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859410;
      }
      goto L_088593C8;
    }
L_088593C8:
    aot_gpr[31] = (0x088593D0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088593D0u) goto L_088593D0;
    return;
L_088593D0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088593DCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 8u, 0x088570C0u>(ctx, &aot_mem) && ctx.pc == 0x088593DCu) goto L_088593DC;
    return;
L_088593DC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x088593ECu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088593ECu) goto L_088593EC;
    return;
L_088593EC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088593F8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 223u, 0x088B7EE8u>(ctx, &aot_mem) && ctx.pc == 0x088593F8u) goto L_088593F8;
    return;
L_088593F8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08859404u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08859404u) goto L_08859404;
    return;
L_08859404:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (static_cast<std::int32_t>(aot_gpr[19]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088594E8;
      }
      goto L_08859410;
    }
L_08859410:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08859420u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08859420u) goto L_08859420;
    return;
L_08859420:
    aot_gpr[16] = (0u | 0u);
    goto L_08859424;
L_08859424:
    aot_gpr[31] = (0x0885942Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0885942Cu) goto L_0885942C;
    return;
L_0885942C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08859438u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 8u, 0x088570C0u>(ctx, &aot_mem) && ctx.pc == 0x08859438u) goto L_08859438;
    return;
L_08859438:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08859444u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08859444u) goto L_08859444;
    return;
L_08859444:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859494;
      }
      goto L_08859454;
    }
L_08859454:
    aot_gpr[31] = (0x0885945Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0885945Cu) goto L_0885945C;
    return;
L_0885945C:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859470;
      }
      goto L_0885946C;
    }
L_0885946C:
    aot_gpr[4] = (0u | 0u);
    goto L_08859470;
L_08859470:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0885947Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0885947Cu) goto L_0885947C;
    return;
L_0885947C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859424;
      }
      goto L_0885948C;
    }
L_0885948C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088594A8;
      }
      goto L_08859494;
    }
L_08859494:
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088594A0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x088594A0u) goto L_088594A0;
    return;
L_088594A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088594A8;
      }
      goto L_088594A8;
    }
L_088594A8:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088594E0;
      }
      goto L_088594B0;
    }
L_088594B0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088594BCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088594BCu) goto L_088594BC;
    return;
L_088594BC:
    aot_gpr[31] = (0x088594C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088594C4u) goto L_088594C4;
    return;
L_088594C4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088594D0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 8u, 0x088570C0u>(ctx, &aot_mem) && ctx.pc == 0x088594D0u) goto L_088594D0;
    return;
L_088594D0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088594E0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x088594E0u) goto L_088594E0;
    return;
L_088594E0:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (static_cast<std::int32_t>(aot_gpr[19]) < 2 ? 1u : 0u);
    goto L_088594E8;
L_088594E8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088594F4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x088594F4u) goto L_088594F4;
    return;
L_088594F4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08859508u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2804));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859508u) goto L_08859508;
    return;
L_08859508:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08859520u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2820));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859520u) goto L_08859520;
    return;
L_08859520:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (61440u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08859550;
      }
      goto L_08859540;
    }
L_08859540:
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
      if (branch_taken) {
          goto L_08859560;
      }
      goto L_08859550;
    }
L_08859550:
    aot_gpr[6] = (4096u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
    goto L_08859560;
L_08859560:
    aot_gpr[31] = (0x08859568u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08859568u) goto L_08859568;
    return;
L_08859568:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08859574u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 223u, 0x088B7EE8u>(ctx, &aot_mem) && ctx.pc == 0x08859574u) goto L_08859574;
    return;
L_08859574:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08859580u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08859580u) goto L_08859580;
    return;
L_08859580:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x0885958Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0885958Cu) goto L_0885958C;
    return;
L_0885958C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08859598u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 223u, 0x088B7EE8u>(ctx, &aot_mem) && ctx.pc == 0x08859598u) goto L_08859598;
    return;
L_08859598:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088595A4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088595A4u) goto L_088595A4;
    return;
L_088595A4:
    aot_gpr[31] = (0x088595ACu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088595ACu) goto L_088595AC;
    return;
L_088595AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[31] = (0x088595B8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088595B8u) goto L_088595B8;
    return;
L_088595B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(5)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_088595C4;
L_088595C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(512), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08859608;
      }
      goto L_088595F0;
    }
L_088595F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859608;
      }
      goto L_088595FC;
    }
L_088595FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859620;
      }
      goto L_08859608;
    }
L_08859608:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(520), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(516), 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    goto L_08859620;
L_08859620:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859650;
      }
      goto L_08859628;
    }
L_08859628:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08859634u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 156u, 0x08858A24u>(ctx, &aot_mem) && ctx.pc == 0x08859634u) goto L_08859634;
    return;
L_08859634:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[31] = (0x08859650u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 3u, 0x088D6058u>(ctx, &aot_mem) && ctx.pc == 0x08859650u) goto L_08859650;
    return;
L_08859650:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08859664u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3400));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859664u) goto L_08859664;
    return;
L_08859664:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 7u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[30] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088596CC;
      }
      goto L_08859680;
    }
L_08859680:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(27980)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0885969Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3408));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0885969Cu) goto L_0885969C;
    return;
L_0885969C:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088596A8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x088596A8u) goto L_088596A8;
    return;
L_088596A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(620)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (aot_gpr[30] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088596E8;
      }
      goto L_088596CC;
    }
L_088596CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(620)));
    aot_gpr[30] = (aot_gpr[30] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_088596E8;
L_088596E8:
    aot_gpr[31] = (0x088596F0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 92u, 0x08827C14u>(ctx, &aot_mem) && ctx.pc == 0x088596F0u) goto L_088596F0;
    return;
L_088596F0:
    aot_gpr[31] = (0x088596F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(624)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 92u, 0x08827C14u>(ctx, &aot_mem) && ctx.pc == 0x088596F8u) goto L_088596F8;
    return;
L_088596F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(5)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26492)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x08859720u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 62u, 0x088574E8u>(ctx, &aot_mem) && ctx.pc == 0x08859720u) goto L_08859720;
    return;
L_08859720:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(512)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08859730u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 173u, 0x08858B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08859730u) goto L_08859730;
    return;
L_08859730:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859760:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(2792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088597A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2832));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088597A4u) goto L_088597A4;
    return;
L_088597A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088597BCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2852));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088597BCu) goto L_088597BC;
    return;
L_088597BC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088597D4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2996));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088597D4u) goto L_088597D4;
    return;
L_088597D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088597E0u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088597E0u) goto L_088597E0;
    return;
L_088597E0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08859800;
      }
      goto L_088597F0;
    }
L_088597F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (0u | 25u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08859810;
      }
      goto L_08859800;
    }
L_08859800:
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (0u | 42u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_08859810;
L_08859810:
    aot_gpr[31] = (0x08859818u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08859818u) goto L_08859818;
    return;
L_08859818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_08859894;
      }
      goto L_08859824;
    }
L_08859824:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08859834u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(552), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08859834u) goto L_08859834;
    return;
L_08859834:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08859840u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 8u, 0x088570C0u>(ctx, &aot_mem) && ctx.pc == 0x08859840u) goto L_08859840;
    return;
L_08859840:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0885984Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x0885984Cu) goto L_0885984C;
    return;
L_0885984C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859864;
      }
      goto L_08859858;
    }
L_08859858:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08859864u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08859864u) goto L_08859864;
    return;
L_08859864:
    aot_gpr[31] = (0x0885986Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0885986Cu) goto L_0885986C;
    return;
L_0885986C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885988C;
      }
      goto L_08859878;
    }
L_08859878:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08859888u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08859888u) goto L_08859888;
    return;
L_08859888:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    goto L_0885988C;
L_0885988C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088598C8;
      }
      goto L_08859894;
    }
L_08859894:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(552)));
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(552), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088598C8;
      }
      goto L_088598BC;
    }
L_088598BC:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(552), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088598C8;
L_088598C8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(552)));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(552)));
        goto L_088598EC;
    }
    goto L_088598E4;
L_088598E4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08859904;
      }
      goto L_088598EC;
    }
L_088598EC:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_08859904;
L_08859904:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(552)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(556), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16192u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08859930;
      }
      goto L_08859924;
    }
L_08859924:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08859930u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08859930u) goto L_08859930;
    return;
L_08859930:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(556)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(588)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x08859948u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x08859948u) goto L_08859948;
    return;
L_08859948:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(592)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(556)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08859960u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x08859960u) goto L_08859960;
    return;
L_08859960:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08859974u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08859974u) goto L_08859974;
    return;
L_08859974:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885999C;
      }
      goto L_08859984;
    }
L_08859984:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(5)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088599A4;
      }
      goto L_08859994;
    }
L_08859994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859F9C;
      }
      goto L_0885999C;
    }
L_0885999C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 36u, 0x0885A1F8u>(ctx, &aot_mem); return;
      }
      goto L_088599A4;
    }
L_088599A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859A4C;
      }
      goto L_088599B0;
    }
L_088599B0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25564)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08859A4C;
      }
      goto L_088599C4;
    }
L_088599C4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5112));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859A4C;
      }
      goto L_088599D4;
    }
L_088599D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(620)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088599F4;
      }
      goto L_088599E4;
    }
L_088599E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(624)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(29)));
    if (aot_gpr[4] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08859A00;
    }
    goto L_088599F4;
L_088599F4:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08859A4C;
      }
      goto L_08859A00;
    }
L_08859A00:
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08859A4C;
      }
      goto L_08859A20;
    }
L_08859A20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859A4C;
      }
      goto L_08859A2C;
    }
L_08859A2C:
    aot_gpr[31] = (0x08859A34u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 98u, 0x088579CCu>(ctx, &aot_mem) && ctx.pc == 0x08859A34u) goto L_08859A34;
    return;
L_08859A34:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08859A4Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 156u, 0x08858A24u>(ctx, &aot_mem) && ctx.pc == 0x08859A4Cu) goto L_08859A4C;
    return;
L_08859A4C:
    aot_gpr[31] = (0x08859A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 167u, 0x0885AA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08859A54u) goto L_08859A54;
    return;
L_08859A54:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
        goto L_08859A6C;
    }
    goto L_08859A5C;
L_08859A5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859A74;
      }
      goto L_08859A68;
    }
L_08859A68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
    goto L_08859A6C;
L_08859A6C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859AF0;
      }
      goto L_08859A74;
    }
L_08859A74:
    aot_gpr[31] = (0x08859A7Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 168u, 0x08858AE4u>(ctx, &aot_mem) && ctx.pc == 0x08859A7Cu) goto L_08859A7C;
    return;
L_08859A7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(512)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08859A90u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 86u, 0x0885A568u>(ctx, &aot_mem) && ctx.pc == 0x08859A90u) goto L_08859A90;
    return;
L_08859A90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(520)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(516), aot_gpr[4]);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] << 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08859AD0;
      }
      goto L_08859AC4;
    }
L_08859AC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859AEC;
      }
      goto L_08859AD0;
    }
L_08859AD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(5)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08859AEC;
      }
      goto L_08859AE0;
    }
L_08859AE0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08859AECu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08859AECu) goto L_08859AEC;
    return;
L_08859AEC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    goto L_08859AF0;
L_08859AF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08859B0C;
    }
    goto L_08859AFC;
L_08859AFC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08859F9C;
      }
      goto L_08859B04;
    }
L_08859B04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859B1C;
      }
      goto L_08859B0C;
    }
L_08859B0C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859F64;
      }
      goto L_08859B14;
    }
L_08859B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859F9C;
      }
      goto L_08859B1C;
    }
L_08859B1C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859CD0;
      }
      goto L_08859B2C;
    }
L_08859B2C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08859B38u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 62u, 0x088574E8u>(ctx, &aot_mem) && ctx.pc == 0x08859B38u) goto L_08859B38;
    return;
L_08859B38:
    aot_gpr[31] = (0x08859B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x08859B40u) goto L_08859B40;
    return;
L_08859B40:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 67u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 66u);
      if (branch_taken) {
          goto L_08859CC0;
      }
      goto L_08859B50;
    }
L_08859B50:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 47u);
      if (branch_taken) {
          goto L_08859B78;
      }
      goto L_08859B58;
    }
L_08859B58:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08859CC0;
      }
      goto L_08859B60;
    }
L_08859B60:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08859B78;
      }
      goto L_08859B68;
    }
L_08859B68:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859CD0;
      }
      goto L_08859B70;
    }
L_08859B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859CD0;
      }
      goto L_08859B78;
    }
L_08859B78:
    aot_gpr[31] = (0x08859B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 183u, 0x0889AB08u>(ctx, &aot_mem) && ctx.pc == 0x08859B80u) goto L_08859B80;
    return;
L_08859B80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08859BA0;
      }
      goto L_08859B90;
    }
L_08859B90:
    aot_gpr[31] = (0x08859B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 215u, 0x0889ACA0u>(ctx, &aot_mem) && ctx.pc == 0x08859B98u) goto L_08859B98;
    return;
L_08859B98:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08859BA0;
L_08859BA0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08859BACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 19u, 0x088A2134u>(ctx, &aot_mem) && ctx.pc == 0x08859BACu) goto L_08859BAC;
    return;
L_08859BAC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(15001) ? 1u : 0u);
      if (branch_taken) {
          goto L_08859C34;
      }
      goto L_08859BB8;
    }
L_08859BB8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 15000u);
      if (branch_taken) {
          goto L_08859C34;
      }
      goto L_08859BC0;
    }
L_08859BC0:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(2792));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(3392));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (ctx.lo);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08859BF8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859BF8u) goto L_08859BF8;
    return;
L_08859BF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08859C1Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859C1Cu) goto L_08859C1C;
    return;
L_08859C1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08859C28u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08859C28u) goto L_08859C28;
    return;
L_08859C28:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08859C60;
      }
      goto L_08859C34;
    }
L_08859C34:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    aot_gpr[31] = (0x08859C50u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3392));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859C50u) goto L_08859C50;
    return;
L_08859C50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08859C60;
L_08859C60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(512)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(524)));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08859C7C;
    }
    goto L_08859C70;
L_08859C70:
    aot_gpr[31] = (0x08859C78u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 173u, 0x08858B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08859C78u) goto L_08859C78;
    return;
L_08859C78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08859C7C;
L_08859C7C:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08859CB4;
      }
      goto L_08859C9C;
    }
L_08859C9C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(35))))));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08859CB4;
      }
      goto L_08859CAC;
    }
L_08859CAC:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08859CB4;
L_08859CB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(524), aot_gpr[4]);
      if (branch_taken) {
          goto L_08859CD0;
      }
      goto L_08859CC0;
    }
L_08859CC0:
    aot_gpr[31] = (0x08859CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 96u, 0x08887C58u>(ctx, &aot_mem) && ctx.pc == 0x08859CC8u) goto L_08859CC8;
    return;
L_08859CC8:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08859CD0;
L_08859CD0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    aot_gpr[31] = (0x08859CE8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3440));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859CE8u) goto L_08859CE8;
    return;
L_08859CE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859DAC;
      }
      goto L_08859D0C;
    }
L_08859D0C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_08859D50;
      }
      goto L_08859D20;
    }
L_08859D20:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859D50;
      }
      goto L_08859D28;
    }
L_08859D28:
    aot_gpr[4] = (0u | 12u);
    aot_gpr[31] = (0x08859D34u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08859D34u) goto L_08859D34;
    return;
L_08859D34:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08859D48u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08859D48u) goto L_08859D48;
    return;
L_08859D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859DAC;
      }
      goto L_08859D50;
    }
L_08859D50:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(27980)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859D80;
      }
      goto L_08859D60;
    }
L_08859D60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08859DAC;
      }
      goto L_08859D80;
    }
L_08859D80:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08859D90u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08859D90u) goto L_08859D90;
    return;
L_08859D90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08859DAC;
L_08859DAC:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08859E08;
      }
      goto L_08859DC0;
    }
L_08859DC0:
    aot_gpr[31] = (0x08859DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08859DC8u) goto L_08859DC8;
    return;
L_08859DC8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08859DE8;
    }
    goto L_08859DD4;
L_08859DD4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08859E08;
      }
      goto L_08859DDC;
    }
L_08859DDC:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
      if (branch_taken) {
          goto L_08859E08;
      }
      goto L_08859DE8;
    }
L_08859DE8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859E08;
      }
      goto L_08859DF0;
    }
L_08859DF0:
    aot_gpr[31] = (0x08859DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 215u, 0x0889ACA0u>(ctx, &aot_mem) && ctx.pc == 0x08859DF8u) goto L_08859DF8;
    return;
L_08859DF8:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08859E08;
L_08859E08:
    aot_gpr[31] = (0x08859E10u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 105u, 0x08857A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08859E10u) goto L_08859E10;
    return;
L_08859E10:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(2792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08859E2Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2832));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859E2Cu) goto L_08859E2C;
    return;
L_08859E2C:
    aot_gpr[31] = (0x08859E34u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08859E34u) goto L_08859E34;
    return;
L_08859E34:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08859E4Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2852));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859E4Cu) goto L_08859E4C;
    return;
L_08859E4C:
    aot_gpr[31] = (0x08859E54u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08859E54u) goto L_08859E54;
    return;
L_08859E54:
    aot_gpr[4] = (aot_gpr[19] << 5u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (aot_gpr[19] << 3u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08859F00;
      }
      goto L_08859E80;
    }
L_08859E80:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(2792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08859E9Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2804));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859E9Cu) goto L_08859E9C;
    return;
L_08859E9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[31] = (0x08859EB0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08859EB0u) goto L_08859EB0;
    return;
L_08859EB0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08859EBCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x08859EBCu) goto L_08859EBC;
    return;
L_08859EBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08859EDCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2820));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859EDCu) goto L_08859EDC;
    return;
L_08859EDC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(52))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(54))))));
    aot_gpr[31] = (0x08859EECu);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08859EECu) goto L_08859EEC;
    return;
L_08859EEC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08859EF8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x08859EF8u) goto L_08859EF8;
    return;
L_08859EF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859F5C;
      }
      goto L_08859F00;
    }
L_08859F00:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(2792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08859F1Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2804));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859F1Cu) goto L_08859F1C;
    return;
L_08859F1C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 140u);
    aot_gpr[31] = (0x08859F2Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08859F2Cu) goto L_08859F2C;
    return;
L_08859F2C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08859F38u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x08859F38u) goto L_08859F38;
    return;
L_08859F38:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08859F4Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2820));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08859F4Cu) goto L_08859F4C;
    return;
L_08859F4C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08859F5Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3452));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x08859F5Cu) goto L_08859F5C;
    return;
L_08859F5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08859F9C;
      }
      goto L_08859F64;
    }
L_08859F64:
    aot_gpr[31] = (0x08859F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 11u, 0x0889A0BCu>(ctx, &aot_mem) && ctx.pc == 0x08859F6Cu) goto L_08859F6C;
    return;
L_08859F6C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08859F9C;
      }
      goto L_08859F74;
    }
L_08859F74:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08859F84u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3456));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08859F84u) goto L_08859F84;
    return;
L_08859F84:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08859F9C;
L_08859F9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(5)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 17u, 0x0885A09Cu>(ctx, &aot_mem); return;
      }
      goto L_08859FAC;
    }
L_08859FAC:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(3568)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08859FC4:
    aot_gpr[31] = (0x08859FCCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 23u, 0x08857200u>(ctx, &aot_mem) && ctx.pc == 0x08859FCCu) goto L_08859FCC;
    return;
L_08859FCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 17u, 0x0885A09Cu>(ctx, &aot_mem); return;
      }
      goto L_08859FD4;
    }
L_08859FD4:
    aot_gpr[31] = (0x08859FDCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 123u, 0x08857B78u>(ctx, &aot_mem) && ctx.pc == 0x08859FDCu) goto L_08859FDC;
    return;
L_08859FDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 17u, 0x0885A09Cu>(ctx, &aot_mem); return;
      }
      goto L_08859FE4;
    }
L_08859FE4:
    aot_gpr[31] = (0x08859FECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 159u, 0x08857DDCu>(ctx, &aot_mem) && ctx.pc == 0x08859FECu) goto L_08859FEC;
    return;
L_08859FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 17u, 0x0885A09Cu>(ctx, &aot_mem); return;
      }
      goto L_08859FF4;
    }
L_08859FF4:
    aot_gpr[31] = (0x08859FFCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 20u, 0x08858134u>(ctx, &aot_mem) && ctx.pc == 0x08859FFCu) goto L_08859FFC;
    return;
L_08859FFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 17u, 0x0885A09Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 1u, 0x0885A004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0085(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0085_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_85(Runtime &runtime) {
    runtime.register_generated_unit(85u, 0x08859000u, 4096u, &recomp_unit_0085, &recomp_unit_0085_entry);
    runtime.register_function(0x08859004u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859018u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885902Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859040u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859054u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859068u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885907Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859090u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088590A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088590B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088590ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859100u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859108u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885910Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859118u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859120u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859128u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859140u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859158u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859170u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859188u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859190u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859198u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088591B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088591C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088591CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088591D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088591E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088591F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859204u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859214u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885922Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859238u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859248u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859258u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859264u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859274u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859280u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885928Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859294u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088592ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088592C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088592D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088592ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088592F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859310u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859318u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885933Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859350u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885935Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859370u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859388u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859398u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088593A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088593B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088593B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088593C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088593D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088593DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088593ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088593F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859404u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859410u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859420u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859424u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885942Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859438u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859444u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859454u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885945Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885946Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859470u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885947Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885948Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859494u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088594A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088594A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088594B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088594BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088594C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088594D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088594E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088594E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088594F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859508u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859520u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859540u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859550u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859560u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859568u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859574u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859580u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885958Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859598u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088595A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088595ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088595B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088595C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088595F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088595FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859608u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859620u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859628u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859634u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859650u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859664u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859680u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885969Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088596A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088596CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088596E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088596F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088596F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859720u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859730u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859760u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088597A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088597BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088597D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088597E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088597F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859800u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859810u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859818u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859824u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859834u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859840u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885984Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859858u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859864u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885986Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859878u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859888u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885988Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859894u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088598BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088598C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088598E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088598ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859904u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859924u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859930u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859948u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859960u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859974u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859984u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859994u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0885999Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088599A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088599B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088599C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088599D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088599E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x088599F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859A00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859A20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859A2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859A34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859A4Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859A54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859A5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859A68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859A6Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859A74u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859A7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859A90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859AC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859AD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859AE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859AECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859AF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859AFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B04u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B14u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B40u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B58u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859B98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859BA0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859BACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859BB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859BC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859BF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859C1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859C28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859C34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859C50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859C60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859C70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859C78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859C7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859C9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859CACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859CB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859CC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859CC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859CD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859CE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859D0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859D20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859D28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859D34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859D48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859D50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859D60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859D80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859D90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859DACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859DC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859DC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859DD4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859DDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859DE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859DF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859DF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859E08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859E10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859E2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859E34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859E4Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859E54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859E80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859E9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859EB0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859EBCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859EDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859EECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859EF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859F00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859F1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859F2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859F38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859F4Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859F5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859F64u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859F6Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859F74u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859F84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859F9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859FACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859FC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859FCCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859FD4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859FDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859FE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859FECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859FF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08859FFCu, &recomp_unit_0085, "recomp_unit_0085");
}
} // namespace psprecomp
