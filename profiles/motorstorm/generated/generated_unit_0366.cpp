#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0366[1023] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0,
    0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0,
    0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0,
    45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0,
    55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0,
    81, 82, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0,
    92, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0,
    0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 110, 0,
    0, 111, 0, 112, 113, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0,
    129, 0, 130, 0, 131, 132, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 140, 141, 0, 142, 0, 0, 143, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    151, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162,
    0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0,
    172, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 200, 0, 0, 201, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0, 217, 0, 218, 0, 219, 0,
    0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 226, 227, 0, 228, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 244, 0, 0, 0, 245, 0,
    246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0, 0, 255, 0, 256, 0, 257, 0,
    258, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 266, 267, 0, 268,
};
void recomp_unit_0366_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08972004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0366[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08972004;
    case 2u: goto L_08972014;
    case 3u: goto L_08972024;
    case 4u: goto L_08972034;
    case 5u: goto L_08972044;
    case 6u: goto L_0897204C;
    case 7u: goto L_0897205C;
    case 8u: goto L_08972070;
    case 9u: goto L_08972084;
    case 10u: goto L_0897208C;
    case 11u: goto L_08972094;
    case 12u: goto L_0897209C;
    case 13u: goto L_089720A4;
    case 14u: goto L_089720AC;
    case 15u: goto L_089720B4;
    case 16u: goto L_089720BC;
    case 17u: goto L_089720D0;
    case 18u: goto L_089720E4;
    case 19u: goto L_089720F0;
    case 20u: goto L_089720FC;
    case 21u: goto L_08972110;
    case 22u: goto L_08972120;
    case 23u: goto L_08972130;
    case 24u: goto L_0897213C;
    case 25u: goto L_08972148;
    case 26u: goto L_08972158;
    case 27u: goto L_08972170;
    case 28u: goto L_08972178;
    case 29u: goto L_08972180;
    case 30u: goto L_0897218C;
    case 31u: goto L_089721A8;
    case 32u: goto L_089721B0;
    case 33u: goto L_089721C4;
    case 34u: goto L_089721EC;
    case 35u: goto L_089721FC;
    case 36u: goto L_0897220C;
    case 37u: goto L_08972214;
    case 38u: goto L_0897222C;
    case 39u: goto L_08972234;
    case 40u: goto L_0897223C;
    case 41u: goto L_08972244;
    case 42u: goto L_08972258;
    case 43u: goto L_08972268;
    case 44u: goto L_08972278;
    case 45u: goto L_08972284;
    case 46u: goto L_08972290;
    case 47u: goto L_089722A0;
    case 48u: goto L_089722B8;
    case 49u: goto L_089722C0;
    case 50u: goto L_089722C8;
    case 51u: goto L_089722D4;
    case 52u: goto L_089722E8;
    case 53u: goto L_089722F4;
    case 54u: goto L_089722FC;
    case 55u: goto L_08972304;
    case 56u: goto L_08972318;
    case 57u: goto L_08972324;
    case 58u: goto L_08972338;
    case 59u: goto L_08972348;
    case 60u: goto L_08972358;
    case 61u: goto L_08972364;
    case 62u: goto L_08972370;
    case 63u: goto L_08972380;
    case 64u: goto L_08972398;
    case 65u: goto L_089723A0;
    case 66u: goto L_089723A8;
    case 67u: goto L_089723B4;
    case 68u: goto L_089723D8;
    case 69u: goto L_089723E0;
    case 70u: goto L_089723F4;
    case 71u: goto L_089723FC;
    case 72u: goto L_08972424;
    case 73u: goto L_08972434;
    case 74u: goto L_089724A4;
    case 75u: goto L_089724B0;
    case 76u: goto L_089724C8;
    case 77u: goto L_089724D8;
    case 78u: goto L_089724E8;
    case 79u: goto L_089724F0;
    case 80u: goto L_089724F8;
    case 81u: goto L_08972504;
    case 82u: goto L_08972508;
    case 83u: goto L_08972510;
    case 84u: goto L_08972518;
    case 85u: goto L_08972524;
    case 86u: goto L_0897253C;
    case 87u: goto L_0897254C;
    case 88u: goto L_08972554;
    case 89u: goto L_08972564;
    case 90u: goto L_08972574;
    case 91u: goto L_0897257C;
    case 92u: goto L_08972584;
    case 93u: goto L_0897258C;
    case 94u: goto L_089725A8;
    case 95u: goto L_089725B0;
    case 96u: goto L_089725C0;
    case 97u: goto L_089725C8;
    case 98u: goto L_089725D8;
    case 99u: goto L_089725E4;
    case 100u: goto L_089725F0;
    case 101u: goto L_089725FC;
    case 102u: goto L_0897260C;
    case 103u: goto L_08972614;
    case 104u: goto L_08972620;
    case 105u: goto L_08972648;
    case 106u: goto L_08972650;
    case 107u: goto L_08972660;
    case 108u: goto L_08972668;
    case 109u: goto L_08972674;
    case 110u: goto L_0897267C;
    case 111u: goto L_08972688;
    case 112u: goto L_08972690;
    case 113u: goto L_08972694;
    case 114u: goto L_0897269C;
    case 115u: goto L_089726A8;
    case 116u: goto L_089726B4;
    case 117u: goto L_089726BC;
    case 118u: goto L_089726C8;
    case 119u: goto L_089726E0;
    case 120u: goto L_08972704;
    case 121u: goto L_08972710;
    case 122u: goto L_08972718;
    case 123u: goto L_08972728;
    case 124u: goto L_08972734;
    case 125u: goto L_08972740;
    case 126u: goto L_08972758;
    case 127u: goto L_08972768;
    case 128u: goto L_08972778;
    case 129u: goto L_08972784;
    case 130u: goto L_0897278C;
    case 131u: goto L_08972794;
    case 132u: goto L_08972798;
    case 133u: goto L_089727A0;
    case 134u: goto L_089727AC;
    case 135u: goto L_089727B4;
    case 136u: goto L_089727BC;
    case 137u: goto L_089727C8;
    case 138u: goto L_089727D0;
    case 139u: goto L_089727D8;
    case 140u: goto L_089727E0;
    case 141u: goto L_089727E4;
    case 142u: goto L_089727EC;
    case 143u: goto L_089727F8;
    case 144u: goto L_08972810;
    case 145u: goto L_08972824;
    case 146u: goto L_08972834;
    case 147u: goto L_08972844;
    case 148u: goto L_08972850;
    case 149u: goto L_0897285C;
    case 150u: goto L_0897286C;
    case 151u: goto L_08972884;
    case 152u: goto L_0897288C;
    case 153u: goto L_08972894;
    case 154u: goto L_089728A0;
    case 155u: goto L_089728B0;
    case 156u: goto L_089728B8;
    case 157u: goto L_089728C4;
    case 158u: goto L_089728CC;
    case 159u: goto L_089728D4;
    case 160u: goto L_089728DC;
    case 161u: goto L_089728F0;
    case 162u: goto L_08972900;
    case 163u: goto L_08972910;
    case 164u: goto L_0897291C;
    case 165u: goto L_08972928;
    case 166u: goto L_08972938;
    case 167u: goto L_08972950;
    case 168u: goto L_08972958;
    case 169u: goto L_08972960;
    case 170u: goto L_0897296C;
    case 171u: goto L_0897297C;
    case 172u: goto L_08972984;
    case 173u: goto L_08972990;
    case 174u: goto L_08972998;
    case 175u: goto L_089729A0;
    case 176u: goto L_089729A8;
    case 177u: goto L_089729BC;
    case 178u: goto L_089729CC;
    case 179u: goto L_089729DC;
    case 180u: goto L_089729E8;
    case 181u: goto L_089729F4;
    case 182u: goto L_08972A04;
    case 183u: goto L_08972A1C;
    case 184u: goto L_08972A24;
    case 185u: goto L_08972A2C;
    case 186u: goto L_08972A38;
    case 187u: goto L_08972A7C;
    case 188u: goto L_08972A90;
    case 189u: goto L_08972A9C;
    case 190u: goto L_08972AB8;
    case 191u: goto L_08972ABC;
    case 192u: goto L_08972ADC;
    case 193u: goto L_08972B10;
    case 194u: goto L_08972B24;
    case 195u: goto L_08972B30;
    case 196u: goto L_08972B3C;
    case 197u: goto L_08972B48;
    case 198u: goto L_08972B50;
    case 199u: goto L_08972B64;
    case 200u: goto L_08972B8C;
    case 201u: goto L_08972B98;
    case 202u: goto L_08972B9C;
    case 203u: goto L_08972BA4;
    case 204u: goto L_08972BAC;
    case 205u: goto L_08972BBC;
    case 206u: goto L_08972BC4;
    case 207u: goto L_08972BCC;
    case 208u: goto L_08972BD4;
    case 209u: goto L_08972BDC;
    case 210u: goto L_08972BE4;
    case 211u: goto L_08972BF0;
    case 212u: goto L_08972C30;
    case 213u: goto L_08972C3C;
    case 214u: goto L_08972C44;
    case 215u: goto L_08972C50;
    case 216u: goto L_08972C58;
    case 217u: goto L_08972C6C;
    case 218u: goto L_08972C74;
    case 219u: goto L_08972C7C;
    case 220u: goto L_08972C94;
    case 221u: goto L_08972C9C;
    case 222u: goto L_08972CB0;
    case 223u: goto L_08972CC4;
    case 224u: goto L_08972CCC;
    case 225u: goto L_08972CD8;
    case 226u: goto L_08972CE0;
    case 227u: goto L_08972CE4;
    case 228u: goto L_08972CEC;
    case 229u: goto L_08972D14;
    case 230u: goto L_08972D38;
    case 231u: goto L_08972D60;
    case 232u: goto L_08972D94;
    case 233u: goto L_08972DB0;
    case 234u: goto L_08972DD4;
    case 235u: goto L_08972DFC;
    case 236u: goto L_08972E18;
    case 237u: goto L_08972E34;
    case 238u: goto L_08972E58;
    case 239u: goto L_08972E80;
    case 240u: goto L_08972E9C;
    case 241u: goto L_08972EB8;
    case 242u: goto L_08972EDC;
    case 243u: goto L_08972EE8;
    case 244u: goto L_08972EEC;
    case 245u: goto L_08972EFC;
    case 246u: goto L_08972F04;
    case 247u: goto L_08972F18;
    case 248u: goto L_08972F28;
    case 249u: goto L_08972F34;
    case 250u: goto L_08972F3C;
    case 251u: goto L_08972F44;
    case 252u: goto L_08972F4C;
    case 253u: goto L_08972F54;
    case 254u: goto L_08972F5C;
    case 255u: goto L_08972F6C;
    case 256u: goto L_08972F74;
    case 257u: goto L_08972F7C;
    case 258u: goto L_08972F84;
    case 259u: goto L_08972F8C;
    case 260u: goto L_08972F9C;
    case 261u: goto L_08972FA8;
    case 262u: goto L_08972FB0;
    case 263u: goto L_08972FB8;
    case 264u: goto L_08972FDC;
    case 265u: goto L_08972FE8;
    case 266u: goto L_08972FF0;
    case 267u: goto L_08972FF4;
    case 268u: goto L_08972FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08972004:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(508));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08972014u);
    aot_gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 266u, 0x0895FFACu>(ctx, &aot_mem) && ctx.pc == 0x08972014u) goto L_08972014;
    return;
L_08972014:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(496));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08972024u);
    aot_gpr[5] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 266u, 0x0895FFACu>(ctx, &aot_mem) && ctx.pc == 0x08972024u) goto L_08972024;
    return;
L_08972024:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(500));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08972034u);
    aot_gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 266u, 0x0895FFACu>(ctx, &aot_mem) && ctx.pc == 0x08972034u) goto L_08972034;
    return;
L_08972034:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(504));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08972044u);
    aot_gpr[5] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 266u, 0x0895FFACu>(ctx, &aot_mem) && ctx.pc == 0x08972044u) goto L_08972044;
    return;
L_08972044:
    aot_gpr[31] = (0x0897204Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 24u, 0x0896316Cu>(ctx, &aot_mem) && ctx.pc == 0x0897204Cu) goto L_0897204C;
    return;
L_0897204C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897205C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08972070u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 267u, 0x0895FFBCu>(ctx, &aot_mem) && ctx.pc == 0x08972070u) goto L_08972070;
    return;
L_08972070:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5960));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), aot_gpr[4]);
    aot_gpr[31] = (0x08972084u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 98u, 0x08973608u>(ctx, &aot_mem) && ctx.pc == 0x08972084u) goto L_08972084;
    return;
L_08972084:
    aot_gpr[31] = (0x0897208Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 117u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x0897208Cu) goto L_0897208C;
    return;
L_0897208C:
    aot_gpr[31] = (0x08972094u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(488));
    goto L_08972324;
L_08972094:
    aot_gpr[31] = (0x0897209Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(492));
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 28u, 0x089731ACu>(ctx, &aot_mem) && ctx.pc == 0x0897209Cu) goto L_0897209C;
    return;
L_0897209C:
    aot_gpr[31] = (0x089720A4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 135u, 0x089737F4u>(ctx, &aot_mem) && ctx.pc == 0x089720A4u) goto L_089720A4;
    return;
L_089720A4:
    aot_gpr[31] = (0x089720ACu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(500));
    goto L_089728DC;
L_089720AC:
    aot_gpr[31] = (0x089720B4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(504));
    goto L_08972810;
L_089720B4:
    aot_gpr[31] = (0x089720BCu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(508));
    goto L_089729A8;
L_089720BC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089720D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089720E4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28624));
    goto L_0897205C;
L_089720E4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x089720F0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26440));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089720F0u) goto L_089720F0;
    return;
L_089720F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089720FC:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5984));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972110:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972180;
      }
      goto L_08972120;
    }
L_08972120:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5984));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_0897213C;
      }
      goto L_08972130;
    }
L_08972130:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0897213C;
L_0897213C:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08972180;
      }
      goto L_08972148;
    }
L_08972148:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972178;
      }
      goto L_08972158;
    }
L_08972158:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08972170u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972170u) goto L_08972170;
    return;
L_08972170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972180;
      }
      goto L_08972178;
    }
L_08972178:
    aot_gpr[31] = (0x08972180u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08972180u) goto L_08972180;
    return;
L_08972180:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897218C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-768));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(740), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(744), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(748), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(752), aot_gpr[31]);
    aot_gpr[31] = (0x089721A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x089721A8u) goto L_089721A8;
    return;
L_089721A8:
    aot_gpr[31] = (0x089721B0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x089721B0u) goto L_089721B0;
    return;
L_089721B0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089721C4u);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089721C4u) goto L_089721C4;
    return;
L_089721C4:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-24272));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(448));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089721ECu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089721ECu) goto L_089721EC;
    return;
L_089721EC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(300));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089721FCu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089721FCu) goto L_089721FC;
    return;
L_089721FC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0897220Cu);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0897220Cu) goto L_0897220C;
    return;
L_0897220C:
    aot_gpr[31] = (0x08972214u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 5u, 0x08966040u>(ctx, &aot_mem) && ctx.pc == 0x08972214u) goto L_08972214;
    return;
L_08972214:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(740)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(744)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(748)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(752)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(768));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897222C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972234:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897223C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972244:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6032));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972258:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089722C8;
      }
      goto L_08972268;
    }
L_08972268:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6032));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08972284;
      }
      goto L_08972278;
    }
L_08972278:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08972284;
L_08972284:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089722C8;
      }
      goto L_08972290;
    }
L_08972290:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089722C0;
      }
      goto L_089722A0;
    }
L_089722A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089722B8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089722B8u) goto L_089722B8;
    return;
L_089722B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089722C8;
      }
      goto L_089722C0;
    }
L_089722C0:
    aot_gpr[31] = (0x089722C8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x089722C8u) goto L_089722C8;
    return;
L_089722C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089722D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089722E8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24272));
    if (rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 8u, 0x08966074u>(ctx, &aot_mem) && ctx.pc == 0x089722E8u) goto L_089722E8;
    return;
L_089722E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089722F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089722FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972304:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08972318u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24272));
    if (rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 11u, 0x089660B0u>(ctx, &aot_mem) && ctx.pc == 0x08972318u) goto L_08972318;
    return;
L_08972318:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972324:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6080));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972338:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089723A8;
      }
      goto L_08972348;
    }
L_08972348:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6080));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08972364;
      }
      goto L_08972358;
    }
L_08972358:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08972364;
L_08972364:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089723A8;
      }
      goto L_08972370;
    }
L_08972370:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089723A0;
      }
      goto L_08972380;
    }
L_08972380:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08972398u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972398u) goto L_08972398;
    return;
L_08972398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089723A8;
      }
      goto L_089723A0;
    }
L_089723A0:
    aot_gpr[31] = (0x089723A8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x089723A8u) goto L_089723A8;
    return;
L_089723A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089723B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-416));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(388), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[31]);
    aot_gpr[31] = (0x089723D8u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x089723D8u) goto L_089723D8;
    return;
L_089723D8:
    aot_gpr[31] = (0x089723E0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x089723E0u) goto L_089723E0;
    return;
L_089723E0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(440)));
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08972518;
      }
      goto L_089723F4;
    }
L_089723F4:
    aot_gpr[31] = (0x089723FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 131u, 0x08899DC8u>(ctx, &aot_mem) && ctx.pc == 0x089723FCu) goto L_089723FC;
    return;
L_089723FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(440)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(300));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[6]);
    aot_gpr[31] = (0x08972424u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08972424u) goto L_08972424;
    return;
L_08972424:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(120));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(364));
    aot_gpr[31] = (0x08972434u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08972434u) goto L_08972434;
    return;
L_08972434:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(428)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(152));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(396));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[6]);
    aot_gpr[31] = (0x089724A4u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089724A4u) goto L_089724A4;
    return;
L_089724A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089724F0;
      }
      goto L_089724B0;
    }
L_089724B0:
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(9952));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089724C8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x089724C8u) goto L_089724C8;
    return;
L_089724C8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089724D8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 112u, 0x089AAF04u>(ctx, &aot_mem) && ctx.pc == 0x089724D8u) goto L_089724D8;
    return;
L_089724D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 29u);
    aot_gpr[31] = (0x089724E8u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x089724E8u) goto L_089724E8;
    return;
L_089724E8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089724F0;
L_089724F0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972508;
      }
      goto L_089724F8;
    }
L_089724F8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08972504u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x08972504u) goto L_08972504;
    return;
L_08972504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08972508;
L_08972508:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897258C;
      }
      goto L_08972510;
    }
L_08972510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897258C;
      }
      goto L_08972518;
    }
L_08972518:
    aot_gpr[18] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0897258C;
      }
      goto L_08972524;
    }
L_08972524:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(232));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0897253Cu);
    aot_gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0897253Cu) goto L_0897253C;
    return;
L_0897253C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897257C;
      }
      goto L_0897254C;
    }
L_0897254C:
    aot_gpr[31] = (0x08972554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x08972554u) goto L_08972554;
    return;
L_08972554:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08972564u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 116u, 0x0896A6ACu>(ctx, &aot_mem) && ctx.pc == 0x08972564u) goto L_08972564;
    return;
L_08972564:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 29u);
    aot_gpr[31] = (0x08972574u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 176u, 0x08962C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08972574u) goto L_08972574;
    return;
L_08972574:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0897257C;
L_0897257C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897258C;
      }
      goto L_08972584;
    }
L_08972584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897258C;
      }
      goto L_0897258C;
    }
L_0897258C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(388)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089725A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089725B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-464));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(448), aot_gpr[31]);
    aot_gpr[31] = (0x089725C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x089725C0u) goto L_089725C0;
    return;
L_089725C0:
    aot_gpr[31] = (0x089725C8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x089725C8u) goto L_089725C8;
    return;
L_089725C8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089725D8u);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089725D8u) goto L_089725D8;
    return;
L_089725D8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x089725E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(436), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x089725E4u) goto L_089725E4;
    return;
L_089725E4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089725F0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 201u, 0x08964E40u>(ctx, &aot_mem) && ctx.pc == 0x089725F0u) goto L_089725F0;
    return;
L_089725F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(448)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(464));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089725FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897260Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x0897260Cu) goto L_0897260C;
    return;
L_0897260C:
    aot_gpr[31] = (0x08972614u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 122u, 0x0896A758u>(ctx, &aot_mem) && ctx.pc == 0x08972614u) goto L_08972614;
    return;
L_08972614:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972620:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08972668;
      }
      goto L_08972648;
    }
L_08972648:
    aot_gpr[31] = (0x08972650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x08972650u) goto L_08972650;
    return;
L_08972650:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08972660u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 116u, 0x0896A6ACu>(ctx, &aot_mem) && ctx.pc == 0x08972660u) goto L_08972660;
    return;
L_08972660:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08972668;
L_08972668:
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089726C8;
      }
      goto L_08972674;
    }
L_08972674:
    aot_gpr[31] = (0x0897267Cu);
    aot_gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0897267Cu) goto L_0897267C;
    return;
L_0897267C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972694;
      }
      goto L_08972688;
    }
L_08972688:
    aot_gpr[31] = (0x08972690u);
    aot_gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x08972690u) goto L_08972690;
    return;
L_08972690:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08972694;
L_08972694:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089726C8;
      }
      goto L_0897269C;
    }
L_0897269C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089726BC;
      }
      goto L_089726A8;
    }
L_089726A8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x089726B4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x089726B4u) goto L_089726B4;
    return;
L_089726B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089726C8;
      }
      goto L_089726BC;
    }
L_089726BC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089726C8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 135u, 0x0895F84Cu>(ctx, &aot_mem) && ctx.pc == 0x089726C8u) goto L_089726C8;
    return;
L_089726C8:
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
L_089726E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[31]);
    aot_gpr[31] = (0x08972704u);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08972704u) goto L_08972704;
    return;
L_08972704:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089727D0;
      }
      goto L_08972710;
    }
L_08972710:
    aot_gpr[31] = (0x08972718u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x08972718u) goto L_08972718;
    return;
L_08972718:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x08972728u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 141u, 0x0896A83Cu>(ctx, &aot_mem) && ctx.pc == 0x08972728u) goto L_08972728;
    return;
L_08972728:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08972734u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 149u, 0x0896A8C4u>(ctx, &aot_mem) && ctx.pc == 0x08972734u) goto L_08972734;
    return;
L_08972734:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(196));
    aot_gpr[31] = (0x08972740u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08972740u) goto L_08972740;
    return;
L_08972740:
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(9760));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08972758u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x08972758u) goto L_08972758;
    return;
L_08972758:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08972768u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 122u, 0x089AAFC0u>(ctx, &aot_mem) && ctx.pc == 0x08972768u) goto L_08972768;
    return;
L_08972768:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 30u);
    aot_gpr[31] = (0x08972778u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08972778u) goto L_08972778;
    return;
L_08972778:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_089727AC;
      }
      goto L_08972784;
    }
L_08972784:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972798;
      }
      goto L_0897278C;
    }
L_0897278C:
    aot_gpr[31] = (0x08972794u);
    aot_gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x08972794u) goto L_08972794;
    return;
L_08972794:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08972798;
L_08972798:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089727AC;
      }
      goto L_089727A0;
    }
L_089727A0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089727ACu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 120u, 0x0895F728u>(ctx, &aot_mem) && ctx.pc == 0x089727ACu) goto L_089727AC;
    return;
L_089727AC:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089727F8;
      }
      goto L_089727B4;
    }
L_089727B4:
    aot_gpr[31] = (0x089727BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x089727BCu) goto L_089727BC;
    return;
L_089727BC:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x089727C8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 141u, 0x0896A83Cu>(ctx, &aot_mem) && ctx.pc == 0x089727C8u) goto L_089727C8;
    return;
L_089727C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089727F8;
      }
      goto L_089727D0;
    }
L_089727D0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089727E4;
      }
      goto L_089727D8;
    }
L_089727D8:
    aot_gpr[31] = (0x089727E0u);
    aot_gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x089727E0u) goto L_089727E0;
    return;
L_089727E0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_089727E4;
L_089727E4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089727F8;
      }
      goto L_089727EC;
    }
L_089727EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x089727F8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x089727F8u) goto L_089727F8;
    return;
L_089727F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972810:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6128));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972824:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972894;
      }
      goto L_08972834;
    }
L_08972834:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6128));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08972850;
      }
      goto L_08972844;
    }
L_08972844:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08972850;
L_08972850:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08972894;
      }
      goto L_0897285C;
    }
L_0897285C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897288C;
      }
      goto L_0897286C;
    }
L_0897286C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08972884u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972884u) goto L_08972884;
    return;
L_08972884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972894;
      }
      goto L_0897288C;
    }
L_0897288C:
    aot_gpr[31] = (0x08972894u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08972894u) goto L_08972894;
    return;
L_08972894:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089728A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089728B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x089728B0u) goto L_089728B0;
    return;
L_089728B0:
    aot_gpr[31] = (0x089728B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 102u, 0x0896A60Cu>(ctx, &aot_mem) && ctx.pc == 0x089728B8u) goto L_089728B8;
    return;
L_089728B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089728C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089728CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089728D4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089728DC:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6176));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089728F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972960;
      }
      goto L_08972900;
    }
L_08972900:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6176));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_0897291C;
      }
      goto L_08972910;
    }
L_08972910:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0897291C;
L_0897291C:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08972960;
      }
      goto L_08972928;
    }
L_08972928:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972958;
      }
      goto L_08972938;
    }
L_08972938:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08972950u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972950u) goto L_08972950;
    return;
L_08972950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972960;
      }
      goto L_08972958;
    }
L_08972958:
    aot_gpr[31] = (0x08972960u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08972960u) goto L_08972960;
    return;
L_08972960:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897296C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897297Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x0897297Cu) goto L_0897297C;
    return;
L_0897297C:
    aot_gpr[31] = (0x08972984u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 115u, 0x0896A6A0u>(ctx, &aot_mem) && ctx.pc == 0x08972984u) goto L_08972984;
    return;
L_08972984:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972990:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972998:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089729A0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089729A8:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6224));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089729BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972A2C;
      }
      goto L_089729CC;
    }
L_089729CC:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6224));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089729E8;
      }
      goto L_089729DC;
    }
L_089729DC:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_089729E8;
L_089729E8:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08972A2C;
      }
      goto L_089729F4;
    }
L_089729F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972A24;
      }
      goto L_08972A04;
    }
L_08972A04:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08972A1Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972A1Cu) goto L_08972A1C;
    return;
L_08972A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972A2C;
      }
      goto L_08972A24;
    }
L_08972A24:
    aot_gpr[31] = (0x08972A2Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08972A2Cu) goto L_08972A2C;
    return;
L_08972A2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972A38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] << 5u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-26420));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[20] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[9];
    aot_gpr[16] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08972A90;
      }
      goto L_08972A7C;
    }
L_08972A7C:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 34u);
    aot_gpr[31] = (0x08972A90u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-979));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 142u, 0x089629F0u>(ctx, &aot_mem) && ctx.pc == 0x08972A90u) goto L_08972A90;
    return;
L_08972A90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972ABC;
      }
      goto L_08972A9C;
    }
L_08972A9C:
    aot_gpr[16] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08972AB8u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08972AB8u) goto L_08972AB8;
    return;
L_08972AB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    goto L_08972ABC;
L_08972ABC:
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
L_08972ADC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26420));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[8];
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08972B24;
      }
      goto L_08972B10;
    }
L_08972B10:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 34u);
    aot_gpr[31] = (0x08972B24u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-979));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 142u, 0x089629F0u>(ctx, &aot_mem) && ctx.pc == 0x08972B24u) goto L_08972B24;
    return;
L_08972B24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972B48;
      }
      goto L_08972B30;
    }
L_08972B30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972B50;
      }
      goto L_08972B3C;
    }
L_08972B3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08972B48;
L_08972B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972B50;
      }
      goto L_08972B50;
    }
L_08972B50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972B64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-26420));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[11] = (aot_gpr[5] | 0u);
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (0u | 4u);
    goto L_08972B8C;
L_08972B8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08972B9C;
      }
      goto L_08972B98;
    }
L_08972B98:
    aot_gpr[11] = (0u | 0u);
    goto L_08972B9C;
L_08972B9C:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08972BAC;
      }
      goto L_08972BA4;
    }
L_08972BA4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (0u | 0u);
    goto L_08972BAC;
L_08972BAC:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08972B8C;
      }
      goto L_08972BBC;
    }
L_08972BBC:
    { const bool branch_taken = aot_gpr[11] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08972BE4;
      }
      goto L_08972BC4;
    }
L_08972BC4:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08972BDC;
      }
      goto L_08972BCC;
    }
L_08972BCC:
    aot_gpr[31] = (0x08972BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 116u, 0x0895F700u>(ctx, &aot_mem) && ctx.pc == 0x08972BD4u) goto L_08972BD4;
    return;
L_08972BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972BE4;
      }
      goto L_08972BDC;
    }
L_08972BDC:
    aot_gpr[31] = (0x08972BE4u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x08972BE4u) goto L_08972BE4;
    return;
L_08972BE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972BF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[19] = (0u | 1u);
    aot_gpr[20] = (aot_gpr[21] + static_cast<std::uint32_t>(12));
    goto L_08972C30;
L_08972C30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972C44;
      }
      goto L_08972C3C;
    }
L_08972C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972CB0;
      }
      goto L_08972C44;
    }
L_08972C44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08972C74;
    }
    goto L_08972C50;
L_08972C50:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08972C9C;
      }
      goto L_08972C58;
    }
L_08972C58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08972C6Cu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08972ADC;
L_08972C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972CB0;
      }
      goto L_08972C74;
    }
L_08972C74:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972C9C;
      }
      goto L_08972C7C;
    }
L_08972C7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08972C94u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08972A38;
L_08972C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972CB0;
      }
      goto L_08972C9C;
    }
L_08972C9C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 34u);
    aot_gpr[31] = (0x08972CB0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-979));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 142u, 0x089629F0u>(ctx, &aot_mem) && ctx.pc == 0x08972CB0u) goto L_08972CB0;
    return;
L_08972CB0:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08972C30;
      }
      goto L_08972CC4;
    }
L_08972CC4:
    aot_gpr[31] = (0x08972CCCu);
    aot_gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08972CCCu) goto L_08972CCC;
    return;
L_08972CCC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972CE4;
      }
      goto L_08972CD8;
    }
L_08972CD8:
    aot_gpr[31] = (0x08972CE0u);
    aot_gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x08972CE0u) goto L_08972CE0;
    return;
L_08972CE0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_08972CE4;
L_08972CE4:
    aot_gpr[31] = (0x08972CECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08972B64;
L_08972CEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972D14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x08972D38u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x08972D38u) goto L_08972D38;
    return;
L_08972D38:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[16] << 5u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26420));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08972D60u);
    aot_gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08972D60u) goto L_08972D60;
    return;
L_08972D60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08972D94u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12364));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 66u, 0x089AB570u>(ctx, &aot_mem) && ctx.pc == 0x08972D94u) goto L_08972D94;
    return;
L_08972D94:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972DB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08972DD4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x08972DD4u) goto L_08972DD4;
    return;
L_08972DD4:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[16] << 5u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26420));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08972DFCu);
    aot_gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08972DFCu) goto L_08972DFC;
    return;
L_08972DFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08972E18u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12216));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 68u, 0x089AB5B4u>(ctx, &aot_mem) && ctx.pc == 0x08972E18u) goto L_08972E18;
    return;
L_08972E18:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972E34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08972E58u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x08972E58u) goto L_08972E58;
    return;
L_08972E58:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[16] << 5u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26420));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08972E80u);
    aot_gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08972E80u) goto L_08972E80;
    return;
L_08972E80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08972E9Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12524));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 68u, 0x089AB5B4u>(ctx, &aot_mem) && ctx.pc == 0x08972E9Cu) goto L_08972E9C;
    return;
L_08972E9C:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972EB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-26420));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    goto L_08972EDC;
L_08972EDC:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08972EEC;
      }
      goto L_08972EE8;
    }
L_08972EE8:
    aot_gpr[9] = (0u | 1u);
    goto L_08972EEC;
L_08972EEC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08972EDC;
      }
      goto L_08972EFC;
    }
L_08972EFC:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972F9C;
      }
      goto L_08972F04;
    }
L_08972F04:
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[5]);
    goto L_08972F18;
L_08972F18:
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08972F8C;
      }
      goto L_08972F28;
    }
L_08972F28:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr[8]) > 0) {
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[8]) < 2 ? 1u : 0u);
        goto L_08972F54;
    }
    goto L_08972F34;
L_08972F34:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08972F44;
      }
      goto L_08972F3C;
    }
L_08972F3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972F8C;
      }
      goto L_08972F44;
    }
L_08972F44:
    aot_gpr[31] = (0x08972F4Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08972E34;
L_08972F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972F9C;
      }
      goto L_08972F54;
    }
L_08972F54:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972F3C;
      }
      goto L_08972F5C;
    }
L_08972F5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08972F7C;
      }
      goto L_08972F6C;
    }
L_08972F6C:
    aot_gpr[31] = (0x08972F74u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08972D14;
L_08972F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972F84;
      }
      goto L_08972F7C;
    }
L_08972F7C:
    aot_gpr[31] = (0x08972F84u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08972DB0;
L_08972F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972F9C;
      }
      goto L_08972F8C;
    }
L_08972F8C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08972F18;
      }
      goto L_08972F9C;
    }
L_08972F9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972FA8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972FB0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972FB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08972FDCu);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08972FDCu) goto L_08972FDC;
    return;
L_08972FDC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972FF4;
      }
      goto L_08972FE8;
    }
L_08972FE8:
    aot_gpr[31] = (0x08972FF0u);
    aot_gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x08972FF0u) goto L_08972FF0;
    return;
L_08972FF0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08972FF4;
L_08972FF4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 5u, 0x08973034u>(ctx, &aot_mem); return;
      }
      goto L_08972FFC;
    }
L_08972FFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.pc = 0x08973000u; return;
}

void recomp_unit_0366(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0366_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_366(Runtime &runtime) {
    runtime.register_generated_unit(366u, 0x08972000u, 4096u, &recomp_unit_0366, &recomp_unit_0366_entry);
    runtime.register_function(0x08972004u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972014u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972024u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972034u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972044u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897204Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897205Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972070u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972084u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897208Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972094u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897209Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089720A4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089720ACu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089720B4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089720BCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089720D0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089720E4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089720F0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089720FCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972110u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972120u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972130u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897213Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972148u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972158u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972170u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972178u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972180u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897218Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089721A8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089721B0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089721C4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089721ECu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089721FCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897220Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972214u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897222Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972234u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897223Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972244u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972258u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972268u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972278u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972284u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972290u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089722A0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089722B8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089722C0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089722C8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089722D4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089722E8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089722F4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089722FCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972304u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972318u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972324u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972338u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972348u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972358u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972364u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972370u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972380u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972398u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089723A0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089723A8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089723B4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089723D8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089723E0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089723F4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089723FCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972424u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972434u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089724A4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089724B0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089724C8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089724D8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089724E8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089724F0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089724F8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972504u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972508u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972510u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972518u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972524u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897253Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897254Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972554u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972564u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972574u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897257Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972584u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897258Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089725A8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089725B0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089725C0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089725C8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089725D8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089725E4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089725F0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089725FCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897260Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972614u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972620u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972648u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972650u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972660u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972668u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972674u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897267Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972688u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972690u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972694u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897269Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089726A8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089726B4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089726BCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089726C8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089726E0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972704u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972710u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972718u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972728u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972734u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972740u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972758u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972768u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972778u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972784u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897278Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972794u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972798u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089727A0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089727ACu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089727B4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089727BCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089727C8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089727D0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089727D8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089727E0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089727E4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089727ECu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089727F8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972810u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972824u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972834u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972844u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972850u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897285Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897286Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972884u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897288Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972894u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089728A0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089728B0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089728B8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089728C4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089728CCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089728D4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089728DCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089728F0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972900u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972910u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897291Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972928u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972938u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972950u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972958u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972960u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897296Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x0897297Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972984u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972990u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972998u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089729A0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089729A8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089729BCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089729CCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089729DCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089729E8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x089729F4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972A04u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972A1Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972A24u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972A2Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972A38u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972A7Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972A90u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972A9Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972AB8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972ABCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972ADCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972B10u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972B24u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972B30u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972B3Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972B48u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972B50u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972B64u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972B8Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972B98u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972B9Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972BA4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972BACu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972BBCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972BC4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972BCCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972BD4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972BDCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972BE4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972BF0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972C30u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972C3Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972C44u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972C50u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972C58u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972C6Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972C74u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972C7Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972C94u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972C9Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972CB0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972CC4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972CCCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972CD8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972CE0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972CE4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972CECu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972D14u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972D38u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972D60u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972D94u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972DB0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972DD4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972DFCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972E18u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972E34u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972E58u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972E80u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972E9Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972EB8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972EDCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972EE8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972EECu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972EFCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F04u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F18u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F28u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F34u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F3Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F44u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F4Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F54u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F5Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F6Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F74u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F7Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F84u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F8Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972F9Cu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972FA8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972FB0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972FB8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972FDCu, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972FE8u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972FF0u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972FF4u, &recomp_unit_0366, "recomp_unit_0366");
    runtime.register_function(0x08972FFCu, &recomp_unit_0366, "recomp_unit_0366");
}
} // namespace psprecomp
