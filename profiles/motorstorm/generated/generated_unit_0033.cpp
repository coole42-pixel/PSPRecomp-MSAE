#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0033[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18,
    0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0,
    0, 0, 41, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47,
    0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 70, 0, 71, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 86, 0, 87, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0,
    0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112,
    0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0,
    158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166,
    0, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0,
    0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 183, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0,
    0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223,
    0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226,
};
void recomp_unit_0033_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08825000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0033[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08825000;
    case 2u: goto L_0882502C;
    case 3u: goto L_08825060;
    case 4u: goto L_08825094;
    case 5u: goto L_088250A4;
    case 6u: goto L_088250B0;
    case 7u: goto L_088250C0;
    case 8u: goto L_088250C4;
    case 9u: goto L_088250CC;
    case 10u: goto L_088250E0;
    case 11u: goto L_08825100;
    case 12u: goto L_0882511C;
    case 13u: goto L_08825134;
    case 14u: goto L_08825140;
    case 15u: goto L_08825150;
    case 16u: goto L_0882516C;
    case 17u: goto L_08825174;
    case 18u: goto L_0882517C;
    case 19u: goto L_08825190;
    case 20u: goto L_08825198;
    case 21u: goto L_088251A0;
    case 22u: goto L_088251A8;
    case 23u: goto L_088251B0;
    case 24u: goto L_088251BC;
    case 25u: goto L_088251D8;
    case 26u: goto L_088251F0;
    case 27u: goto L_088251FC;
    case 28u: goto L_0882521C;
    case 29u: goto L_08825230;
    case 30u: goto L_08825238;
    case 31u: goto L_08825244;
    case 32u: goto L_08825260;
    case 33u: goto L_08825278;
    case 34u: goto L_08825284;
    case 35u: goto L_088252A4;
    case 36u: goto L_088252B8;
    case 37u: goto L_088252C0;
    case 38u: goto L_088252CC;
    case 39u: goto L_088252EC;
    case 40u: goto L_088252F8;
    case 41u: goto L_08825308;
    case 42u: goto L_0882530C;
    case 43u: goto L_08825314;
    case 44u: goto L_08825328;
    case 45u: goto L_08825348;
    case 46u: goto L_08825364;
    case 47u: goto L_0882537C;
    case 48u: goto L_08825388;
    case 49u: goto L_08825398;
    case 50u: goto L_088253B4;
    case 51u: goto L_088253BC;
    case 52u: goto L_088253C4;
    case 53u: goto L_088253D8;
    case 54u: goto L_088253E0;
    case 55u: goto L_088253E8;
    case 56u: goto L_088253F0;
    case 57u: goto L_088253F8;
    case 58u: goto L_08825404;
    case 59u: goto L_08825420;
    case 60u: goto L_08825438;
    case 61u: goto L_08825444;
    case 62u: goto L_08825464;
    case 63u: goto L_08825478;
    case 64u: goto L_0882548C;
    case 65u: goto L_08825498;
    case 66u: goto L_088254A4;
    case 67u: goto L_088254C4;
    case 68u: goto L_088254D0;
    case 69u: goto L_088254E0;
    case 70u: goto L_088254E4;
    case 71u: goto L_088254EC;
    case 72u: goto L_08825500;
    case 73u: goto L_08825520;
    case 74u: goto L_0882553C;
    case 75u: goto L_08825554;
    case 76u: goto L_08825560;
    case 77u: goto L_08825570;
    case 78u: goto L_0882558C;
    case 79u: goto L_08825594;
    case 80u: goto L_0882559C;
    case 81u: goto L_088255B0;
    case 82u: goto L_088255C0;
    case 83u: goto L_088255CC;
    case 84u: goto L_088255DC;
    case 85u: goto L_088255E8;
    case 86u: goto L_088255F0;
    case 87u: goto L_088255F8;
    case 88u: goto L_08825604;
    case 89u: goto L_08825620;
    case 90u: goto L_08825638;
    case 91u: goto L_08825644;
    case 92u: goto L_08825664;
    case 93u: goto L_08825678;
    case 94u: goto L_08825688;
    case 95u: goto L_08825694;
    case 96u: goto L_088256A0;
    case 97u: goto L_088256BC;
    case 98u: goto L_088256D4;
    case 99u: goto L_088256E0;
    case 100u: goto L_08825700;
    case 101u: goto L_08825714;
    case 102u: goto L_08825724;
    case 103u: goto L_08825730;
    case 104u: goto L_0882573C;
    case 105u: goto L_0882575C;
    case 106u: goto L_08825770;
    case 107u: goto L_08825790;
    case 108u: goto L_088257AC;
    case 109u: goto L_088257C4;
    case 110u: goto L_088257D0;
    case 111u: goto L_088257E0;
    case 112u: goto L_088257FC;
    case 113u: goto L_08825804;
    case 114u: goto L_0882580C;
    case 115u: goto L_08825820;
    case 116u: goto L_08825828;
    case 117u: goto L_08825830;
    case 118u: goto L_08825838;
    case 119u: goto L_08825840;
    case 120u: goto L_0882584C;
    case 121u: goto L_0882586C;
    case 122u: goto L_08825880;
    case 123u: goto L_088258A0;
    case 124u: goto L_088258BC;
    case 125u: goto L_088258D4;
    case 126u: goto L_088258E0;
    case 127u: goto L_088258F0;
    case 128u: goto L_0882590C;
    case 129u: goto L_08825914;
    case 130u: goto L_0882591C;
    case 131u: goto L_08825930;
    case 132u: goto L_08825938;
    case 133u: goto L_08825940;
    case 134u: goto L_08825948;
    case 135u: goto L_08825950;
    case 136u: goto L_0882595C;
    case 137u: goto L_0882597C;
    case 138u: goto L_08825990;
    case 139u: goto L_088259B0;
    case 140u: goto L_088259CC;
    case 141u: goto L_088259E4;
    case 142u: goto L_088259F0;
    case 143u: goto L_08825A00;
    case 144u: goto L_08825A1C;
    case 145u: goto L_08825A24;
    case 146u: goto L_08825A2C;
    case 147u: goto L_08825A40;
    case 148u: goto L_08825A48;
    case 149u: goto L_08825A50;
    case 150u: goto L_08825A58;
    case 151u: goto L_08825A60;
    case 152u: goto L_08825A6C;
    case 153u: goto L_08825A8C;
    case 154u: goto L_08825AA0;
    case 155u: goto L_08825AC0;
    case 156u: goto L_08825ADC;
    case 157u: goto L_08825AF4;
    case 158u: goto L_08825B00;
    case 159u: goto L_08825B10;
    case 160u: goto L_08825B2C;
    case 161u: goto L_08825B34;
    case 162u: goto L_08825B3C;
    case 163u: goto L_08825B50;
    case 164u: goto L_08825B60;
    case 165u: goto L_08825B6C;
    case 166u: goto L_08825B7C;
    case 167u: goto L_08825B88;
    case 168u: goto L_08825B90;
    case 169u: goto L_08825B98;
    case 170u: goto L_08825BA4;
    case 171u: goto L_08825BC4;
    case 172u: goto L_08825C04;
    case 173u: goto L_08825C20;
    case 174u: goto L_08825C2C;
    case 175u: goto L_08825C3C;
    case 176u: goto L_08825C50;
    case 177u: goto L_08825C58;
    case 178u: goto L_08825C64;
    case 179u: goto L_08825C74;
    case 180u: goto L_08825C84;
    case 181u: goto L_08825C8C;
    case 182u: goto L_08825C9C;
    case 183u: goto L_08825CB0;
    case 184u: goto L_08825CB4;
    case 185u: goto L_08825CC4;
    case 186u: goto L_08825CD4;
    case 187u: goto L_08825CDC;
    case 188u: goto L_08825CE8;
    case 189u: goto L_08825CF8;
    case 190u: goto L_08825D08;
    case 191u: goto L_08825D10;
    case 192u: goto L_08825D20;
    case 193u: goto L_08825D34;
    case 194u: goto L_08825D38;
    case 195u: goto L_08825D48;
    case 196u: goto L_08825D58;
    case 197u: goto L_08825D88;
    case 198u: goto L_08825DA4;
    case 199u: goto L_08825DBC;
    case 200u: goto L_08825DC8;
    case 201u: goto L_08825DE8;
    case 202u: goto L_08825DFC;
    case 203u: goto L_08825E1C;
    case 204u: goto L_08825E24;
    case 205u: goto L_08825E34;
    case 206u: goto L_08825E44;
    case 207u: goto L_08825E54;
    case 208u: goto L_08825E60;
    case 209u: goto L_08825E70;
    case 210u: goto L_08825E7C;
    case 211u: goto L_08825EA4;
    case 212u: goto L_08825EAC;
    case 213u: goto L_08825ED4;
    case 214u: goto L_08825EE0;
    case 215u: goto L_08825EF0;
    case 216u: goto L_08825EF8;
    case 217u: goto L_08825F14;
    case 218u: goto L_08825F30;
    case 219u: goto L_08825F38;
    case 220u: goto L_08825F48;
    case 221u: goto L_08825F54;
    case 222u: goto L_08825F74;
    case 223u: goto L_08825F7C;
    case 224u: goto L_08825F84;
    case 225u: goto L_08825F8C;
    case 226u: goto L_08825FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08825000:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3280), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12824));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0882502Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22800));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0882502Cu) goto L_0882502C;
    return;
L_0882502C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-3248));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3248), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12688));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08825060u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22812));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08825060u) goto L_08825060;
    return;
L_08825060:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-3312));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3312), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12920));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08825094u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22824));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08825094u) goto L_08825094;
    return;
L_08825094:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088250A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088250C4;
      }
      goto L_088250B0;
    }
L_088250B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088250C4;
      }
      goto L_088250C0;
    }
L_088250C0:
    aot_gpr[5] = (0u | 1u);
    goto L_088250C4;
L_088250C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088250CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088250E0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 32u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x088250E0u) goto L_088250E0;
    return;
L_088250E0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13016));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825100:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882517C;
      }
      goto L_0882511C;
    }
L_0882511C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13016));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08825134u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 41u, 0x0891842Cu>(ctx, &aot_mem) && ctx.pc == 0x08825134u) goto L_08825134;
    return;
L_08825134:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882517C;
      }
      goto L_08825140;
    }
L_08825140:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825174;
      }
      goto L_08825150;
    }
L_08825150:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0882516Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882516Cu) goto L_0882516C;
    return;
L_0882516C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882517C;
      }
      goto L_08825174;
    }
L_08825174:
    aot_gpr[31] = (0x0882517Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0882517Cu) goto L_0882517C;
    return;
L_0882517C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825190:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825198:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088251A0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088251A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088251B0:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14000));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088251BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882521C;
      }
      goto L_088251D8;
    }
L_088251D8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12960));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088251F0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x088251F0u) goto L_088251F0;
    return;
L_088251F0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0882521C;
      }
      goto L_088251FC;
    }
L_088251FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0882521Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882521Cu) goto L_0882521C;
    return;
L_0882521C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825230:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825238:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13976));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825244:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088252A4;
      }
      goto L_08825260;
    }
L_08825260:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12920));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08825278u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x08825278u) goto L_08825278;
    return;
L_08825278:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088252A4;
      }
      goto L_08825284;
    }
L_08825284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088252A4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088252A4u) goto L_088252A4;
    return;
L_088252A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088252B8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088252C0:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13940));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088252CC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22840), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088252EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882530C;
      }
      goto L_088252F8;
    }
L_088252F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882530C;
      }
      goto L_08825308;
    }
L_08825308:
    aot_gpr[5] = (0u | 1u);
    goto L_0882530C;
L_0882530C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825314:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08825328u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 32u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x08825328u) goto L_08825328;
    return;
L_08825328:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12880));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825348:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088253C4;
      }
      goto L_08825364;
    }
L_08825364:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12880));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882537Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 41u, 0x0891842Cu>(ctx, &aot_mem) && ctx.pc == 0x0882537Cu) goto L_0882537C;
    return;
L_0882537C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088253C4;
      }
      goto L_08825388;
    }
L_08825388:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088253BC;
      }
      goto L_08825398;
    }
L_08825398:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088253B4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088253B4u) goto L_088253B4;
    return;
L_088253B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088253C4;
      }
      goto L_088253BC;
    }
L_088253BC:
    aot_gpr[31] = (0x088253C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088253C4u) goto L_088253C4;
    return;
L_088253C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088253D8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088253E0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088253E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088253F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088253F8:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13896));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825404:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08825464;
      }
      goto L_08825420;
    }
L_08825420:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12824));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08825438u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x08825438u) goto L_08825438;
    return;
L_08825438:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08825464;
      }
      goto L_08825444;
    }
L_08825444:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08825464u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08825464u) goto L_08825464;
    return;
L_08825464:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825478:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882548Cu);
    aot_gpr[5] = (0u < aot_gpr[6] ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 101u, 0x08821AA4u>(ctx, &aot_mem) && ctx.pc == 0x0882548Cu) goto L_0882548C;
    return;
L_0882548C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825498:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13872));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088254A4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22848), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088254C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088254E4;
      }
      goto L_088254D0;
    }
L_088254D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088254E4;
      }
      goto L_088254E0;
    }
L_088254E0:
    aot_gpr[5] = (0u | 1u);
    goto L_088254E4;
L_088254E4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088254EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08825500u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 32u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x08825500u) goto L_08825500;
    return;
L_08825500:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12784));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825520:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882559C;
      }
      goto L_0882553C;
    }
L_0882553C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12784));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08825554u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 41u, 0x0891842Cu>(ctx, &aot_mem) && ctx.pc == 0x08825554u) goto L_08825554;
    return;
L_08825554:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882559C;
      }
      goto L_08825560;
    }
L_08825560:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825594;
      }
      goto L_08825570;
    }
L_08825570:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0882558Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882558Cu) goto L_0882558C;
    return;
L_0882558C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882559C;
      }
      goto L_08825594;
    }
L_08825594:
    aot_gpr[31] = (0x0882559Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0882559Cu) goto L_0882559C;
    return;
L_0882559C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088255B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088255C0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 220u, 0x08820FACu>(ctx, &aot_mem) && ctx.pc == 0x088255C0u) goto L_088255C0;
    return;
L_088255C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088255CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088255DCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 16u, 0x088210D0u>(ctx, &aot_mem) && ctx.pc == 0x088255DCu) goto L_088255DC;
    return;
L_088255DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088255E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088255F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088255F8:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13832));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825604:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08825664;
      }
      goto L_08825620;
    }
L_08825620:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12728));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08825638u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x08825638u) goto L_08825638;
    return;
L_08825638:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08825664;
      }
      goto L_08825644;
    }
L_08825644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08825664u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08825664u) goto L_08825664;
    return;
L_08825664:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825678:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08825688u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 18u, 0x088210ECu>(ctx, &aot_mem) && ctx.pc == 0x08825688u) goto L_08825688;
    return;
L_08825688:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825694:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13804));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088256A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08825700;
      }
      goto L_088256BC;
    }
L_088256BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12688));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088256D4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x088256D4u) goto L_088256D4;
    return;
L_088256D4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08825700;
      }
      goto L_088256E0;
    }
L_088256E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08825700u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08825700u) goto L_08825700;
    return;
L_08825700:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825714:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08825724u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 28u, 0x08821230u>(ctx, &aot_mem) && ctx.pc == 0x08825724u) goto L_08825724;
    return;
L_08825724:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825730:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13756));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882573C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22856), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882575C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08825770u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 32u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x08825770u) goto L_08825770;
    return;
L_08825770:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12648));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825790:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882580C;
      }
      goto L_088257AC;
    }
L_088257AC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12648));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088257C4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 41u, 0x0891842Cu>(ctx, &aot_mem) && ctx.pc == 0x088257C4u) goto L_088257C4;
    return;
L_088257C4:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882580C;
      }
      goto L_088257D0;
    }
L_088257D0:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825804;
      }
      goto L_088257E0;
    }
L_088257E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088257FCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088257FCu) goto L_088257FC;
    return;
L_088257FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882580C;
      }
      goto L_08825804;
    }
L_08825804:
    aot_gpr[31] = (0x0882580Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0882580Cu) goto L_0882580C;
    return;
L_0882580C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825820:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825828:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825830:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825838:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825840:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13712));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882584C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22864), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882586C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08825880u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 32u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x08825880u) goto L_08825880;
    return;
L_08825880:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12592));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088258A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882591C;
      }
      goto L_088258BC;
    }
L_088258BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12592));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088258D4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 41u, 0x0891842Cu>(ctx, &aot_mem) && ctx.pc == 0x088258D4u) goto L_088258D4;
    return;
L_088258D4:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882591C;
      }
      goto L_088258E0;
    }
L_088258E0:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825914;
      }
      goto L_088258F0;
    }
L_088258F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0882590Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882590Cu) goto L_0882590C;
    return;
L_0882590C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882591C;
      }
      goto L_08825914;
    }
L_08825914:
    aot_gpr[31] = (0x0882591Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0882591Cu) goto L_0882591C;
    return;
L_0882591C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825930:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825938:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825940:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825948:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825950:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13680));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882595C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22872), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882597C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08825990u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 32u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x08825990u) goto L_08825990;
    return;
L_08825990:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12536));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088259B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08825A2C;
      }
      goto L_088259CC;
    }
L_088259CC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12536));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088259E4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 41u, 0x0891842Cu>(ctx, &aot_mem) && ctx.pc == 0x088259E4u) goto L_088259E4;
    return;
L_088259E4:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08825A2C;
      }
      goto L_088259F0;
    }
L_088259F0:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825A24;
      }
      goto L_08825A00;
    }
L_08825A00:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08825A1Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08825A1Cu) goto L_08825A1C;
    return;
L_08825A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825A2C;
      }
      goto L_08825A24;
    }
L_08825A24:
    aot_gpr[31] = (0x08825A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08825A2Cu) goto L_08825A2C;
    return;
L_08825A2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825A40:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825A48:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825A50:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825A58:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825A60:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13648));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825A6C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22880), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825A8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08825AA0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 32u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x08825AA0u) goto L_08825AA0;
    return;
L_08825AA0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12480));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825AC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08825B3C;
      }
      goto L_08825ADC;
    }
L_08825ADC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12480));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08825AF4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 41u, 0x0891842Cu>(ctx, &aot_mem) && ctx.pc == 0x08825AF4u) goto L_08825AF4;
    return;
L_08825AF4:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08825B3C;
      }
      goto L_08825B00;
    }
L_08825B00:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825B34;
      }
      goto L_08825B10;
    }
L_08825B10:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08825B2Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08825B2Cu) goto L_08825B2C;
    return;
L_08825B2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825B3C;
      }
      goto L_08825B34;
    }
L_08825B34:
    aot_gpr[31] = (0x08825B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08825B3Cu) goto L_08825B3C;
    return;
L_08825B3C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825B50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08825B60u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 156u, 0x0881EC50u>(ctx, &aot_mem) && ctx.pc == 0x08825B60u) goto L_08825B60;
    return;
L_08825B60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825B6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08825B7Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 171u, 0x0881ED90u>(ctx, &aot_mem) && ctx.pc == 0x08825B7Cu) goto L_08825B7C;
    return;
L_08825B7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825B88:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825B90:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825B98:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13616));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825BA4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22888), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825BC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08825C04u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08825C04u) goto L_08825C04;
    return;
L_08825C04:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[16] | 0u);
    aot_gpr[22] = (aot_gpr[29] | 0u);
    goto L_08825C20;
L_08825C20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08825C2Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 73u, 0x08A4B414u>(ctx, &aot_mem) && ctx.pc == 0x08825C2Cu) goto L_08825C2C;
    return;
L_08825C2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[31] = (0x08825C3Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 73u, 0x08A4B414u>(ctx, &aot_mem) && ctx.pc == 0x08825C3Cu) goto L_08825C3C;
    return;
L_08825C3C:
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08825C84;
      }
      goto L_08825C50;
    }
L_08825C50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_08825C58;
L_08825C58:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08825C74;
      }
      goto L_08825C64;
    }
L_08825C64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_08825C84;
      }
      goto L_08825C74;
    }
L_08825C74:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08825C58;
      }
      goto L_08825C84;
    }
L_08825C84:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825CC4;
      }
      goto L_08825C8C;
    }
L_08825C8C:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[23]);
      if (branch_taken) {
          goto L_08825CB4;
      }
      goto L_08825C9C;
    }
L_08825C9C:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08825CB0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 203u, 0x08943F50u>(ctx, &aot_mem) && ctx.pc == 0x08825CB0u) goto L_08825CB0;
    return;
L_08825CB0:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    goto L_08825CB4;
L_08825CB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    goto L_08825CC4;
L_08825CC4:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08825D08;
      }
      goto L_08825CD4;
    }
L_08825CD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_08825CDC;
L_08825CDC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08825CF8;
      }
      goto L_08825CE8;
    }
L_08825CE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), aot_gpr[4]);
      if (branch_taken) {
          goto L_08825D08;
      }
      goto L_08825CF8;
    }
L_08825CF8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08825CDC;
      }
      goto L_08825D08;
    }
L_08825D08:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825D48;
      }
      goto L_08825D10;
    }
L_08825D10:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[23]);
      if (branch_taken) {
          goto L_08825D38;
      }
      goto L_08825D20;
    }
L_08825D20:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08825D34u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 203u, 0x08943F50u>(ctx, &aot_mem) && ctx.pc == 0x08825D34u) goto L_08825D34;
    return;
L_08825D34:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    goto L_08825D38;
L_08825D38:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    goto L_08825D48;
L_08825D48:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08825C20;
      }
      goto L_08825D58;
    }
L_08825D58:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825D88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08825DE8;
      }
      goto L_08825DA4;
    }
L_08825DA4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08825DBCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08825DBCu) goto L_08825DBC;
    return;
L_08825DBC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08825DE8;
      }
      goto L_08825DC8;
    }
L_08825DC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08825DE8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08825DE8u) goto L_08825DE8;
    return;
L_08825DE8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825DFC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22896), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825E1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825E24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08825E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08825E34u) goto L_08825E34;
    return;
L_08825E34:
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825E44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08825E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 91u, 0x088C0738u>(ctx, &aot_mem) && ctx.pc == 0x08825E54u) goto L_08825E54;
    return;
L_08825E54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825E60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08825E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 95u, 0x088C07A4u>(ctx, &aot_mem) && ctx.pc == 0x08825E70u) goto L_08825E70;
    return;
L_08825E70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825E7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08825EA4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08825EA4u) goto L_08825EA4;
    return;
L_08825EA4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825EAC;
    }
L_08825EAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08825ED4u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08825ED4u) goto L_08825ED4;
    return;
L_08825ED4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08825EF8;
      }
      goto L_08825EE0;
    }
L_08825EE0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08825EF0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08825F8C;
L_08825EF0:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08825EF8;
L_08825EF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08825F14;
L_08825F14:
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
L_08825F30:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825F38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08825F48u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x08825F48u) goto L_08825F48;
    return;
L_08825F48:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825F54:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22904), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825F74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825F7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825F84:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825F8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-12288));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08825FFCu);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 255u, 0x08876EA0u>(ctx, &aot_mem) && ctx.pc == 0x08825FFCu) goto L_08825FFC;
    return;
L_08825FFC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08826000u; return;
}

void recomp_unit_0033(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0033_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_33(Runtime &runtime) {
    runtime.register_generated_unit(33u, 0x08825000u, 4096u, &recomp_unit_0033, &recomp_unit_0033_entry);
    runtime.register_function(0x08825000u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882502Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825060u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825094u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088250A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088250B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088250C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088250C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088250CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088250E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825100u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882511Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825134u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825140u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825150u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882516Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825174u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882517Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825190u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825198u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088251A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088251A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088251B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088251BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088251D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088251F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088251FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882521Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825230u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825238u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825244u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825260u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825278u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825284u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088252A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088252B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088252C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088252CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088252ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088252F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825308u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882530Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825314u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825328u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825348u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825364u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882537Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825388u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825398u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088253B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088253BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088253C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088253D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088253E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088253E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088253F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088253F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825404u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825420u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825438u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825444u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825464u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825478u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882548Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825498u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088254A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088254C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088254D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088254E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088254E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088254ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825500u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825520u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882553Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825554u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825560u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825570u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882558Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825594u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882559Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088255B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088255C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088255CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088255DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088255E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088255F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088255F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825604u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825620u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825638u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825644u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825664u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825678u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825688u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825694u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088256A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088256BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088256D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088256E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825700u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825714u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825724u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825730u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882573Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882575Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825770u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825790u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088257ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088257C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088257D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088257E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088257FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825804u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882580Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825820u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825828u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825830u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825838u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825840u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882584Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882586Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825880u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088258A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088258BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088258D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088258E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088258F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882590Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825914u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882591Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825930u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825938u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825940u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825948u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825950u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882595Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0882597Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825990u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088259B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088259CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088259E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088259F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825A00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825A1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825A24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825A2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825A40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825A48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825A50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825A58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825A60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825A6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825A8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825AA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825AC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825ADCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825AF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825B00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825B10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825B2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825B34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825B3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825B50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825B60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825B6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825B7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825B88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825B90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825B98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825BA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825BC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825C04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825C20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825C2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825C3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825C50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825C58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825C64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825C74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825C84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825C8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825C9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825CB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825CB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825CC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825CD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825CDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825CE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825CF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825D08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825D10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825D20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825D34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825D38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825D48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825D58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825D88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825DA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825DBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825DC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825DE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825DFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825E1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825E24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825E34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825E44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825E54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825E60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825E70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825E7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825EA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825EACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825ED4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825EE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825EF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825EF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825F14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825F30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825F38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825F48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825F54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825F74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825F7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825F84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825F8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08825FFCu, &recomp_unit_0033, "recomp_unit_0033");
}
} // namespace psprecomp
