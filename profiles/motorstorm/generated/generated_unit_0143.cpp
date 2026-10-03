#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0143[1022] = {
    1, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 10,
    0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0,
    32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 39,
    0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 47,
    0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 99, 0, 0, 0,
    0, 100, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0,
    0, 108, 0, 109, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 123, 0, 0,
    124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 133, 0, 0, 0, 0, 0, 134,
    135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 142, 0, 0, 0,
    143, 0, 144, 0, 145, 0, 0, 0, 146, 0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0,
    158, 159, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 169, 0, 0,
    0, 0, 0, 170, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177,
    178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 193, 194,
    0, 0, 0, 0, 0, 0, 195, 0, 196, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 0, 207, 208, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 216, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0,
    0, 0, 221, 222, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0,
    0, 0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0,
    240, 0, 241, 0, 242, 0, 0, 243, 244, 0, 245, 0, 246, 0, 0, 247, 248, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 252,
};
void recomp_unit_0143_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08893000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0143[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08893000;
    case 2u: goto L_0889300C;
    case 3u: goto L_08893014;
    case 4u: goto L_08893020;
    case 5u: goto L_0889304C;
    case 6u: goto L_08893058;
    case 7u: goto L_08893064;
    case 8u: goto L_0889306C;
    case 9u: goto L_08893074;
    case 10u: goto L_0889307C;
    case 11u: goto L_08893088;
    case 12u: goto L_0889309C;
    case 13u: goto L_088930A8;
    case 14u: goto L_088930B0;
    case 15u: goto L_088930B8;
    case 16u: goto L_088930E0;
    case 17u: goto L_088930EC;
    case 18u: goto L_088930F8;
    case 19u: goto L_08893114;
    case 20u: goto L_0889311C;
    case 21u: goto L_08893124;
    case 22u: goto L_0889313C;
    case 23u: goto L_08893144;
    case 24u: goto L_08893154;
    case 25u: goto L_08893170;
    case 26u: goto L_08893190;
    case 27u: goto L_0889319C;
    case 28u: goto L_088931A8;
    case 29u: goto L_088931D4;
    case 30u: goto L_088931E0;
    case 31u: goto L_088931EC;
    case 32u: goto L_08893200;
    case 33u: goto L_0889320C;
    case 34u: goto L_0889323C;
    case 35u: goto L_08893248;
    case 36u: goto L_08893250;
    case 37u: goto L_08893268;
    case 38u: goto L_08893278;
    case 39u: goto L_0889327C;
    case 40u: goto L_08893284;
    case 41u: goto L_08893290;
    case 42u: goto L_088932B0;
    case 43u: goto L_088932C8;
    case 44u: goto L_088932E0;
    case 45u: goto L_088932E8;
    case 46u: goto L_088932F0;
    case 47u: goto L_088932FC;
    case 48u: goto L_08893304;
    case 49u: goto L_0889330C;
    case 50u: goto L_08893324;
    case 51u: goto L_0889333C;
    case 52u: goto L_08893368;
    case 53u: goto L_08893398;
    case 54u: goto L_088933B0;
    case 55u: goto L_088933C0;
    case 56u: goto L_088933F8;
    case 57u: goto L_08893400;
    case 58u: goto L_08893408;
    case 59u: goto L_08893410;
    case 60u: goto L_08893418;
    case 61u: goto L_08893420;
    case 62u: goto L_0889342C;
    case 63u: goto L_08893434;
    case 64u: goto L_0889343C;
    case 65u: goto L_08893454;
    case 66u: goto L_0889346C;
    case 67u: goto L_08893484;
    case 68u: goto L_088934B4;
    case 69u: goto L_088934C0;
    case 70u: goto L_088934FC;
    case 71u: goto L_08893508;
    case 72u: goto L_08893514;
    case 73u: goto L_08893550;
    case 74u: goto L_08893558;
    case 75u: goto L_08893560;
    case 76u: goto L_0889358C;
    case 77u: goto L_08893594;
    case 78u: goto L_0889359C;
    case 79u: goto L_088935D4;
    case 80u: goto L_088935FC;
    case 81u: goto L_08893648;
    case 82u: goto L_08893658;
    case 83u: goto L_0889366C;
    case 84u: goto L_08893684;
    case 85u: goto L_08893694;
    case 86u: goto L_088936A0;
    case 87u: goto L_088936AC;
    case 88u: goto L_088936C4;
    case 89u: goto L_088936D8;
    case 90u: goto L_0889370C;
    case 91u: goto L_08893714;
    case 92u: goto L_08893724;
    case 93u: goto L_0889372C;
    case 94u: goto L_08893738;
    case 95u: goto L_08893754;
    case 96u: goto L_0889375C;
    case 97u: goto L_08893764;
    case 98u: goto L_0889376C;
    case 99u: goto L_08893770;
    case 100u: goto L_08893784;
    case 101u: goto L_08893788;
    case 102u: goto L_08893798;
    case 103u: goto L_088937A0;
    case 104u: goto L_088937B0;
    case 105u: goto L_088937D4;
    case 106u: goto L_088937E8;
    case 107u: goto L_088937F8;
    case 108u: goto L_08893804;
    case 109u: goto L_0889380C;
    case 110u: goto L_08893810;
    case 111u: goto L_08893820;
    case 112u: goto L_08893840;
    case 113u: goto L_0889384C;
    case 114u: goto L_08893890;
    case 115u: goto L_08893898;
    case 116u: goto L_088938A8;
    case 117u: goto L_088938B0;
    case 118u: goto L_088938BC;
    case 119u: goto L_088938D8;
    case 120u: goto L_088938E0;
    case 121u: goto L_088938E8;
    case 122u: goto L_088938F0;
    case 123u: goto L_088938F4;
    case 124u: goto L_08893900;
    case 125u: goto L_08893908;
    case 126u: goto L_08893918;
    case 127u: goto L_08893920;
    case 128u: goto L_0889392C;
    case 129u: goto L_08893948;
    case 130u: goto L_08893950;
    case 131u: goto L_08893958;
    case 132u: goto L_08893960;
    case 133u: goto L_08893964;
    case 134u: goto L_0889397C;
    case 135u: goto L_08893980;
    case 136u: goto L_08893998;
    case 137u: goto L_088939AC;
    case 138u: goto L_088939B8;
    case 139u: goto L_088939C4;
    case 140u: goto L_088939D0;
    case 141u: goto L_088939EC;
    case 142u: goto L_088939F0;
    case 143u: goto L_08893A00;
    case 144u: goto L_08893A08;
    case 145u: goto L_08893A10;
    case 146u: goto L_08893A20;
    case 147u: goto L_08893A28;
    case 148u: goto L_08893A2C;
    case 149u: goto L_08893A5C;
    case 150u: goto L_08893AA0;
    case 151u: goto L_08893AA8;
    case 152u: goto L_08893AB8;
    case 153u: goto L_08893AC0;
    case 154u: goto L_08893ACC;
    case 155u: goto L_08893AE8;
    case 156u: goto L_08893AF0;
    case 157u: goto L_08893AF8;
    case 158u: goto L_08893B00;
    case 159u: goto L_08893B04;
    case 160u: goto L_08893B10;
    case 161u: goto L_08893B18;
    case 162u: goto L_08893B28;
    case 163u: goto L_08893B30;
    case 164u: goto L_08893B3C;
    case 165u: goto L_08893B58;
    case 166u: goto L_08893B60;
    case 167u: goto L_08893B68;
    case 168u: goto L_08893B70;
    case 169u: goto L_08893B74;
    case 170u: goto L_08893B8C;
    case 171u: goto L_08893B90;
    case 172u: goto L_08893BA8;
    case 173u: goto L_08893BBC;
    case 174u: goto L_08893BC8;
    case 175u: goto L_08893BD4;
    case 176u: goto L_08893BE0;
    case 177u: goto L_08893BFC;
    case 178u: goto L_08893C00;
    case 179u: goto L_08893C10;
    case 180u: goto L_08893C18;
    case 181u: goto L_08893C20;
    case 182u: goto L_08893C28;
    case 183u: goto L_08893C2C;
    case 184u: goto L_08893C5C;
    case 185u: goto L_08893C98;
    case 186u: goto L_08893CA0;
    case 187u: goto L_08893CB0;
    case 188u: goto L_08893CB8;
    case 189u: goto L_08893CC4;
    case 190u: goto L_08893CE0;
    case 191u: goto L_08893CE8;
    case 192u: goto L_08893CF0;
    case 193u: goto L_08893CF8;
    case 194u: goto L_08893CFC;
    case 195u: goto L_08893D18;
    case 196u: goto L_08893D20;
    case 197u: goto L_08893D24;
    case 198u: goto L_08893D4C;
    case 199u: goto L_08893D5C;
    case 200u: goto L_08893D68;
    case 201u: goto L_08893D88;
    case 202u: goto L_08893D90;
    case 203u: goto L_08893DA0;
    case 204u: goto L_08893DAC;
    case 205u: goto L_08893DB8;
    case 206u: goto L_08893DC0;
    case 207u: goto L_08893DD0;
    case 208u: goto L_08893DD4;
    case 209u: goto L_08893DDC;
    case 210u: goto L_08893DE8;
    case 211u: goto L_08893DF0;
    case 212u: goto L_08893E18;
    case 213u: goto L_08893E1C;
    case 214u: goto L_08893E40;
    case 215u: goto L_08893E48;
    case 216u: goto L_08893E4C;
    case 217u: goto L_08893E54;
    case 218u: goto L_08893E60;
    case 219u: goto L_08893E68;
    case 220u: goto L_08893E78;
    case 221u: goto L_08893E88;
    case 222u: goto L_08893E8C;
    case 223u: goto L_08893E94;
    case 224u: goto L_08893EA4;
    case 225u: goto L_08893EB0;
    case 226u: goto L_08893EBC;
    case 227u: goto L_08893EC8;
    case 228u: goto L_08893ED4;
    case 229u: goto L_08893EE8;
    case 230u: goto L_08893EF0;
    case 231u: goto L_08893EF8;
    case 232u: goto L_08893F10;
    case 233u: goto L_08893F18;
    case 234u: goto L_08893F24;
    case 235u: goto L_08893F30;
    case 236u: goto L_08893F54;
    case 237u: goto L_08893F60;
    case 238u: goto L_08893F6C;
    case 239u: goto L_08893F74;
    case 240u: goto L_08893F80;
    case 241u: goto L_08893F88;
    case 242u: goto L_08893F90;
    case 243u: goto L_08893F9C;
    case 244u: goto L_08893FA0;
    case 245u: goto L_08893FA8;
    case 246u: goto L_08893FB0;
    case 247u: goto L_08893FBC;
    case 248u: goto L_08893FC0;
    case 249u: goto L_08893FC8;
    case 250u: goto L_08893FD0;
    case 251u: goto L_08893FE0;
    case 252u: goto L_08893FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08893000:
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0889300Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 34u, 0x0893C204u>(ctx, &aot_mem) && ctx.pc == 0x0889300Cu) goto L_0889300C;
    return;
L_0889300C:
    aot_gpr[31] = (0x08893014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 77u, 0x0893C590u>(ctx, &aot_mem) && ctx.pc == 0x08893014u) goto L_08893014;
    return;
L_08893014:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(0u));
    goto L_08893020;
L_08893020:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889304C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088930B0;
      }
      goto L_08893058;
    }
L_08893058:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0889307C;
      }
      goto L_08893064;
    }
L_08893064:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_0889307C;
      }
      goto L_0889306C;
    }
L_0889306C:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0889307C;
      }
      goto L_08893074;
    }
L_08893074:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088930B0;
      }
      goto L_0889307C;
    }
L_0889307C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088930B0;
      }
      goto L_08893088;
    }
L_08893088:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088930A8;
      }
      goto L_0889309C;
    }
L_0889309C:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088930B0;
      }
      goto L_088930A8;
    }
L_088930A8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088930B0;
L_088930B0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088930B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088930E0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 78u, 0x0888D508u>(ctx, &aot_mem) && ctx.pc == 0x088930E0u) goto L_088930E0;
    return;
L_088930E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889319C;
      }
      goto L_088930EC;
    }
L_088930EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889313C;
      }
      goto L_088930F8;
    }
L_088930F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(86)));
    aot_gpr[31] = (0x08893114u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(87)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 243u, 0x08889E88u>(ctx, &aot_mem) && ctx.pc == 0x08893114u) goto L_08893114;
    return;
L_08893114:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893124;
      }
      goto L_0889311C;
    }
L_0889311C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0889313C;
      }
      goto L_08893124;
    }
L_08893124:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x0889313Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 25u, 0x0888A1C8u>(ctx, &aot_mem) && ctx.pc == 0x0889313Cu) goto L_0889313C;
    return;
L_0889313C:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889319C;
      }
      goto L_08893144;
    }
L_08893144:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(86)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08893170;
      }
      goto L_08893154;
    }
L_08893154:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08893170;
L_08893170:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08893190u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 256u, 0x08889F54u>(ctx, &aot_mem) && ctx.pc == 0x08893190u) goto L_08893190;
    return;
L_08893190:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0889319Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 176u, 0x08892EA0u>(ctx, &aot_mem) && ctx.pc == 0x0889319Cu) goto L_0889319C;
    return;
L_0889319C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088932B0;
      }
      goto L_088931A8;
    }
L_088931A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088931D4u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 192u, 0x08889A98u>(ctx, &aot_mem) && ctx.pc == 0x088931D4u) goto L_088931D4;
    return;
L_088931D4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088931E0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0889304C;
L_088931E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08893200;
      }
      goto L_088931EC;
    }
L_088931EC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[17]);
      if (branch_taken) {
          goto L_0889327C;
      }
      goto L_08893200;
    }
L_08893200:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889323C;
      }
      goto L_0889320C;
    }
L_0889320C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889327C;
      }
      goto L_0889323C;
    }
L_0889323C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08893250;
      }
      goto L_08893248;
    }
L_08893248:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08893278;
      }
      goto L_08893250;
    }
L_08893250:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x08893268u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 25u, 0x0888A1C8u>(ctx, &aot_mem) && ctx.pc == 0x08893268u) goto L_08893268;
    return;
L_08893268:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889327C;
      }
      goto L_08893278;
    }
L_08893278:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    goto L_0889327C;
L_0889327C:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088932B0;
      }
      goto L_08893284;
    }
L_08893284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088932B0;
      }
      goto L_08893290;
    }
L_08893290:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x088932B0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 169u, 0x08889954u>(ctx, &aot_mem) && ctx.pc == 0x088932B0u) goto L_088932B0;
    return;
L_088932B0:
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
L_088932C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08893398;
      }
      goto L_088932E0;
    }
L_088932E0:
    aot_gpr[31] = (0x088932E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 155u, 0x0893CC3Cu>(ctx, &aot_mem) && ctx.pc == 0x088932E8u) goto L_088932E8;
    return;
L_088932E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893398;
      }
      goto L_088932F0;
    }
L_088932F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(173)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893398;
      }
      goto L_088932FC;
    }
L_088932FC:
    aot_gpr[31] = (0x08893304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 83u, 0x0893C5ECu>(ctx, &aot_mem) && ctx.pc == 0x08893304u) goto L_08893304;
    return;
L_08893304:
    aot_gpr[31] = (0x0889330Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 84u, 0x0893C5F4u>(ctx, &aot_mem) && ctx.pc == 0x0889330Cu) goto L_0889330C;
    return;
L_0889330C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[31] = (0x08893324u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(9156)));
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 176u, 0x08978928u>(ctx, &aot_mem) && ctx.pc == 0x08893324u) goto L_08893324;
    return;
L_08893324:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(13236)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(13232)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x0889333Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 74u, 0x08A3E640u>(ctx, &aot_mem) && ctx.pc == 0x0889333Cu) goto L_0889333C;
    return;
L_0889333C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(13244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(13240)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[3] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[8] - aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(13252)));
    aot_gpr[4] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[31] = (0x08893368u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(13248)));
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 75u, 0x08A3E668u>(ctx, &aot_mem) && ctx.pc == 0x08893368u) goto L_08893368;
    return;
L_08893368:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29212), aot_gpr[4]);
    aot_gpr[4] = (17280u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (17224u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08893398u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29216), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 121u, 0x08928B24u>(ctx, &aot_mem) && ctx.pc == 0x08893398u) goto L_08893398;
    return;
L_08893398:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x088933B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 210u, 0x08889C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088933B0u) goto L_088933B0;
    return;
L_088933B0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088933C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(85)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08893408;
      }
      goto L_088933F8;
    }
L_088933F8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08893410;
      }
      goto L_08893400;
    }
L_08893400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088934B4;
      }
      goto L_08893408;
    }
L_08893408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088935D4;
      }
      goto L_08893410;
    }
L_08893410:
    aot_gpr[31] = (0x08893418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 155u, 0x0893CC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08893418u) goto L_08893418;
    return;
L_08893418:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088934B4;
      }
      goto L_08893420;
    }
L_08893420:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(173)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088934B4;
      }
      goto L_0889342C;
    }
L_0889342C:
    aot_gpr[31] = (0x08893434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 83u, 0x0893C5ECu>(ctx, &aot_mem) && ctx.pc == 0x08893434u) goto L_08893434;
    return;
L_08893434:
    aot_gpr[31] = (0x0889343Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 84u, 0x0893C5F4u>(ctx, &aot_mem) && ctx.pc == 0x0889343Cu) goto L_0889343C;
    return;
L_0889343C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[31] = (0x08893454u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(9156)));
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 176u, 0x08978928u>(ctx, &aot_mem) && ctx.pc == 0x08893454u) goto L_08893454;
    return;
L_08893454:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(13236)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(13232)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x0889346Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 74u, 0x08A3E640u>(ctx, &aot_mem) && ctx.pc == 0x0889346Cu) goto L_0889346C;
    return;
L_0889346C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(13252)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(13248)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08893484u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 75u, 0x08A3E668u>(ctx, &aot_mem) && ctx.pc == 0x08893484u) goto L_08893484;
    return;
L_08893484:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29212), aot_gpr[4]);
    aot_gpr[4] = (17280u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (17224u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x088934B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29216), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 121u, 0x08928B24u>(ctx, &aot_mem) && ctx.pc == 0x088934B4u) goto L_088934B4;
    return;
L_088934B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_088935D4;
      }
      goto L_088934C0;
    }
L_088934C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (~(aot_gpr[4] | 0u));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[20] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088934FCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088934FCu) goto L_088934FC;
    return;
L_088934FC:
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[31] = (0x08893508u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x08893508u) goto L_08893508;
    return;
L_08893508:
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[31] = (0x08893514u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x08893514u) goto L_08893514;
    return;
L_08893514:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28760)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-28764)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08893550u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 213u, 0x08889C74u>(ctx, &aot_mem) && ctx.pc == 0x08893550u) goto L_08893550;
    return;
L_08893550:
    aot_gpr[31] = (0x08893558u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x08893558u) goto L_08893558;
    return;
L_08893558:
    aot_gpr[31] = (0x08893560u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x08893560u) goto L_08893560;
    return;
L_08893560:
    aot_gpr[4] = (0u | 6u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x0889358Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0889358Cu) goto L_0889358C;
    return;
L_0889358C:
    aot_gpr[31] = (0x08893594u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 15u, 0x08928174u>(ctx, &aot_mem) && ctx.pc == 0x08893594u) goto L_08893594;
    return;
L_08893594:
    aot_gpr[31] = (0x0889359Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0889359Cu) goto L_0889359C;
    return;
L_0889359C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[4] = (aot_gpr[20] & 65535u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088935D4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088935D4u) goto L_088935D4;
    return;
L_088935D4:
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
L_088935FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0889366C;
      }
      goto L_08893648;
    }
L_08893648:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x08893658u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 225u, 0x08889D90u>(ctx, &aot_mem) && ctx.pc == 0x08893658u) goto L_08893658;
    return;
L_08893658:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08893648;
      }
      goto L_0889366C;
    }
L_0889366C:
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
L_08893684:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08893694:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088936A0:
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26068)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088936AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088936C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088936D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0889370Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0889370Cu) goto L_0889370C;
    return;
L_0889370C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893770;
      }
      goto L_08893714;
    }
L_08893714:
    aot_gpr[21] = (4096u << 16u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (61440u << 16u);
    goto L_08893724;
L_08893724:
    aot_gpr[31] = (0x0889372Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0889372Cu) goto L_0889372C;
    return;
L_0889372C:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893764;
      }
      goto L_08893738;
    }
L_08893738:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[18] = (aot_gpr[18] << 4u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] & aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_0889375C;
      }
      goto L_08893754;
    }
L_08893754:
    aot_gpr[18] = (aot_gpr[18] ^ aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] & aot_gpr[21]);
    goto L_0889375C;
L_0889375C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08893724;
      }
      goto L_08893764;
    }
L_08893764:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08893770;
      }
      goto L_0889376C;
    }
L_0889376C:
    aot_gpr[18] = (0u | 1u);
    goto L_08893770;
L_08893770:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088937B0;
      }
      goto L_08893784;
    }
L_08893784:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08893788;
L_08893788:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088937A0;
      }
      goto L_08893798;
    }
L_08893798:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088937B0;
      }
      goto L_088937A0;
    }
L_088937A0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08893788;
      }
      goto L_088937B0;
    }
L_088937B0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088937D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088937E8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088936D8;
L_088937E8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889380C;
      }
      goto L_088937F8;
    }
L_088937F8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08893804u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088936C4;
L_08893804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08893810;
      }
      goto L_0889380C;
    }
L_0889380C:
    aot_gpr[2] = (0u | 0u);
    goto L_08893810;
L_08893810:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08893820:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08893840u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x08893840u) goto L_08893840;
    return;
L_08893840:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889384C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08893890u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08893890u) goto L_08893890;
    return;
L_08893890:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088938F4;
      }
      goto L_08893898;
    }
L_08893898:
    aot_gpr[21] = (4096u << 16u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr[22] = (61440u << 16u);
    goto L_088938A8;
L_088938A8:
    aot_gpr[31] = (0x088938B0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088938B0u) goto L_088938B0;
    return;
L_088938B0:
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088938E8;
      }
      goto L_088938BC;
    }
L_088938BC:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[17] = (aot_gpr[17] << 4u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] & aot_gpr[22]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_088938E0;
      }
      goto L_088938D8;
    }
L_088938D8:
    aot_gpr[17] = (aot_gpr[17] ^ aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[17] & aot_gpr[21]);
    goto L_088938E0;
L_088938E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088938A8;
      }
      goto L_088938E8;
    }
L_088938E8:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088938F4;
      }
      goto L_088938F0;
    }
L_088938F0:
    aot_gpr[17] = (0u | 1u);
    goto L_088938F4;
L_088938F4:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x08893900u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08893900u) goto L_08893900;
    return;
L_08893900:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893964;
      }
      goto L_08893908;
    }
L_08893908:
    aot_gpr[21] = (4096u << 16u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (61440u << 16u);
    goto L_08893918;
L_08893918:
    aot_gpr[31] = (0x08893920u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08893920u) goto L_08893920;
    return;
L_08893920:
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893958;
      }
      goto L_0889392C;
    }
L_0889392C:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[22]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[18] = (aot_gpr[18] << 4u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] & aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_08893950;
      }
      goto L_08893948;
    }
L_08893948:
    aot_gpr[18] = (aot_gpr[18] ^ aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] & aot_gpr[21]);
    goto L_08893950;
L_08893950:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08893918;
      }
      goto L_08893958;
    }
L_08893958:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08893964;
      }
      goto L_08893960;
    }
L_08893960:
    aot_gpr[18] = (0u | 1u);
    goto L_08893964;
L_08893964:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08893A00;
      }
      goto L_0889397C;
    }
L_0889397C:
    aot_gpr[22] = (0u | 0u);
    goto L_08893980;
L_08893980:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088939F0;
      }
      goto L_08893998;
    }
L_08893998:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[23] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[19] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_088939F0;
      }
      goto L_088939AC;
    }
L_088939AC:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088939B8u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x088939B8u) goto L_088939B8;
    return;
L_088939B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[4] != aot_gpr[18]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_088939D0;
    }
    goto L_088939C4;
L_088939C4:
    aot_gpr[20] = (aot_gpr[23] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088939F0;
      }
      goto L_088939D0;
    }
L_088939D0:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088939AC;
      }
      goto L_088939EC;
    }
L_088939EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_088939F0;
L_088939F0:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08893980;
      }
      goto L_08893A00;
    }
L_08893A00:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_08893A28;
      }
      goto L_08893A08;
    }
L_08893A08:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_08893A28;
      }
      goto L_08893A10;
    }
L_08893A10:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08893A20u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    goto L_08893820;
L_08893A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08893A2C;
      }
      goto L_08893A28;
    }
L_08893A28:
    aot_gpr[2] = (0u | 0u);
    goto L_08893A2C;
L_08893A2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08893A5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08893AA0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08893AA0u) goto L_08893AA0;
    return;
L_08893AA0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08893B04;
      }
      goto L_08893AA8;
    }
L_08893AA8:
    aot_gpr[21] = (4096u << 16u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr[22] = (61440u << 16u);
    goto L_08893AB8;
L_08893AB8:
    aot_gpr[31] = (0x08893AC0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08893AC0u) goto L_08893AC0;
    return;
L_08893AC0:
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893AF8;
      }
      goto L_08893ACC;
    }
L_08893ACC:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[17] = (aot_gpr[17] << 4u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] & aot_gpr[22]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_08893AF0;
      }
      goto L_08893AE8;
    }
L_08893AE8:
    aot_gpr[17] = (aot_gpr[17] ^ aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[17] & aot_gpr[21]);
    goto L_08893AF0;
L_08893AF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08893AB8;
      }
      goto L_08893AF8;
    }
L_08893AF8:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08893B04;
      }
      goto L_08893B00;
    }
L_08893B00:
    aot_gpr[17] = (0u | 1u);
    goto L_08893B04;
L_08893B04:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x08893B10u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08893B10u) goto L_08893B10;
    return;
L_08893B10:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893B74;
      }
      goto L_08893B18;
    }
L_08893B18:
    aot_gpr[21] = (4096u << 16u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (61440u << 16u);
    goto L_08893B28;
L_08893B28:
    aot_gpr[31] = (0x08893B30u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08893B30u) goto L_08893B30;
    return;
L_08893B30:
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893B68;
      }
      goto L_08893B3C;
    }
L_08893B3C:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[22]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[18] = (aot_gpr[18] << 4u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] & aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_08893B60;
      }
      goto L_08893B58;
    }
L_08893B58:
    aot_gpr[18] = (aot_gpr[18] ^ aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] & aot_gpr[21]);
    goto L_08893B60;
L_08893B60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08893B28;
      }
      goto L_08893B68;
    }
L_08893B68:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08893B74;
      }
      goto L_08893B70;
    }
L_08893B70:
    aot_gpr[18] = (0u | 1u);
    goto L_08893B74;
L_08893B74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08893C10;
      }
      goto L_08893B8C;
    }
L_08893B8C:
    aot_gpr[22] = (0u | 0u);
    goto L_08893B90;
L_08893B90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08893C00;
      }
      goto L_08893BA8;
    }
L_08893BA8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[23] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[19] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08893C00;
      }
      goto L_08893BBC;
    }
L_08893BBC:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08893BC8u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x08893BC8u) goto L_08893BC8;
    return;
L_08893BC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[4] != aot_gpr[18]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08893BE0;
    }
    goto L_08893BD4;
L_08893BD4:
    aot_gpr[20] = (aot_gpr[23] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08893C00;
      }
      goto L_08893BE0;
    }
L_08893BE0:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08893BBC;
      }
      goto L_08893BFC;
    }
L_08893BFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_08893C00;
L_08893C00:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08893B90;
      }
      goto L_08893C10;
    }
L_08893C10:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_08893C28;
      }
      goto L_08893C18;
    }
L_08893C18:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_08893C28;
      }
      goto L_08893C20;
    }
L_08893C20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08893C2C;
      }
      goto L_08893C28;
    }
L_08893C28:
    aot_gpr[2] = (0u | 0u);
    goto L_08893C2C;
L_08893C2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08893C5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[22] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08893C98u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08893C98u) goto L_08893C98;
    return;
L_08893C98:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893CFC;
      }
      goto L_08893CA0;
    }
L_08893CA0:
    aot_gpr[19] = (4096u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (61440u << 16u);
    goto L_08893CB0;
L_08893CB0:
    aot_gpr[31] = (0x08893CB8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08893CB8u) goto L_08893CB8;
    return;
L_08893CB8:
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893CF0;
      }
      goto L_08893CC4;
    }
L_08893CC4:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[21]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[22] = (aot_gpr[22] << 4u);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[22] & aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_08893CE8;
      }
      goto L_08893CE0;
    }
L_08893CE0:
    aot_gpr[22] = (aot_gpr[22] ^ aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] & aot_gpr[19]);
    goto L_08893CE8;
L_08893CE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08893CB0;
      }
      goto L_08893CF0;
    }
L_08893CF0:
    { const bool branch_taken = aot_gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08893CFC;
      }
      goto L_08893CF8;
    }
L_08893CF8:
    aot_gpr[22] = (0u | 1u);
    goto L_08893CFC;
L_08893CFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08893D20;
      }
      goto L_08893D18;
    }
L_08893D18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08893D24;
      }
      goto L_08893D20;
    }
L_08893D20:
    aot_gpr[2] = (0u | 0u);
    goto L_08893D24;
L_08893D24:
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
L_08893D4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08893D5Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08893C5C;
L_08893D5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08893D68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08893D90;
      }
      goto L_08893D88;
    }
L_08893D88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08893DA0;
      }
      goto L_08893D90;
    }
L_08893D90:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08893DA0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    goto L_08893C5C;
L_08893DA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08893DAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08893DD0;
      }
      goto L_08893DB8;
    }
L_08893DB8:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08893DD0;
      }
      goto L_08893DC0;
    }
L_08893DC0:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08893DD4;
      }
      goto L_08893DD0;
    }
L_08893DD0:
    aot_gpr[2] = (0u | 0u);
    goto L_08893DD4;
L_08893DD4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08893DDC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08893E48;
      }
      goto L_08893DE8;
    }
L_08893DE8:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08893E48;
      }
      goto L_08893DF0;
    }
L_08893DF0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08893E40;
      }
      goto L_08893E18;
    }
L_08893E18:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_08893E1C;
L_08893E1C:
    aot_gpr[8] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(aot_gpr[7]) >= 0) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08893E1C;
    }
    goto L_08893E40;
L_08893E40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08893E4C;
      }
      goto L_08893E48;
    }
L_08893E48:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08893E4C;
L_08893E4C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08893E54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893E88;
      }
      goto L_08893E60;
    }
L_08893E60:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08893E88;
      }
      goto L_08893E68;
    }
L_08893E68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893E88;
      }
      goto L_08893E78;
    }
L_08893E78:
    aot_gpr[4] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08893E8C;
      }
      goto L_08893E88;
    }
L_08893E88:
    aot_gpr[2] = (0u | 0u);
    goto L_08893E8C;
L_08893E8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08893E94:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(120))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08893EA4:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893EBC;
      }
      goto L_08893EB0;
    }
L_08893EB0:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08893EF0;
      }
      goto L_08893EBC;
    }
L_08893EBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893EF0;
      }
      goto L_08893EC8;
    }
L_08893EC8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893EF0;
      }
      goto L_08893ED4;
    }
L_08893ED4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893EF0;
      }
      goto L_08893EE8;
    }
L_08893EE8:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_08893EF0;
L_08893EF0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08893EF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08893F10u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 155u, 0x0893CC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08893F10u) goto L_08893F10;
    return;
L_08893F10:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 5u, 0x08894030u>(ctx, &aot_mem); return;
      }
      goto L_08893F18;
    }
L_08893F18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(173)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08893F30;
      }
      goto L_08893F24;
    }
L_08893F24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 5u, 0x08894030u>(ctx, &aot_mem); return;
      }
      goto L_08893F30;
    }
L_08893F30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08893F54u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 77u, 0x0888A4F0u>(ctx, &aot_mem) && ctx.pc == 0x08893F54u) goto L_08893F54;
    return;
L_08893F54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893F74;
      }
      goto L_08893F60;
    }
L_08893F60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(126)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893F74;
      }
      goto L_08893F6C;
    }
L_08893F6C:
    aot_gpr[31] = (0x08893F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 164u, 0x08943B64u>(ctx, &aot_mem) && ctx.pc == 0x08893F74u) goto L_08893F74;
    return;
L_08893F74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_08893FC0;
      }
      goto L_08893F80;
    }
L_08893F80:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893FA8;
      }
      goto L_08893F88;
    }
L_08893F88:
    aot_gpr[31] = (0x08893F90u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08893F90u) goto L_08893F90;
    return;
L_08893F90:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_08893FA0;
      }
      goto L_08893F9C;
    }
L_08893F9C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08893FA0;
L_08893FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08893FC0;
      }
      goto L_08893FA8;
    }
L_08893FA8:
    aot_gpr[31] = (0x08893FB0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08893FB0u) goto L_08893FB0;
    return;
L_08893FB0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_08893FC0;
      }
      goto L_08893FBC;
    }
L_08893FBC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08893FC0;
L_08893FC0:
    aot_gpr[31] = (0x08893FC8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 104u, 0x0893C990u>(ctx, &aot_mem) && ctx.pc == 0x08893FC8u) goto L_08893FC8;
    return;
L_08893FC8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 5u, 0x08894030u>(ctx, &aot_mem); return;
      }
      goto L_08893FD0;
    }
L_08893FD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08893FF4;
      }
      goto L_08893FE0;
    }
L_08893FE0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 2u, 0x0889401Cu>(ctx, &aot_mem); return;
      }
      goto L_08893FF4;
    }
L_08893FF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 2u, 0x0889401Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 1u, 0x08894000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0143(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0143_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_143(Runtime &runtime) {
    runtime.register_generated_unit(143u, 0x08893000u, 4096u, &recomp_unit_0143, &recomp_unit_0143_entry);
    runtime.register_function(0x08893000u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889300Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893014u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893020u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889304Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893058u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893064u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889306Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893074u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889307Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893088u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889309Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088930A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088930B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088930B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088930E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088930ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088930F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893114u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889311Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893124u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889313Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893144u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893154u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893170u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893190u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889319Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088931A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088931D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088931E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088931ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893200u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889320Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889323Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893248u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893250u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893268u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893278u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889327Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893284u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893290u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088932B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088932C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088932E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088932E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088932F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088932FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893304u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889330Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893324u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889333Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893368u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893398u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088933B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088933C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088933F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893400u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893408u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893410u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893418u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893420u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889342Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893434u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889343Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893454u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889346Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893484u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088934B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088934C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088934FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893508u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893514u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893550u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893558u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893560u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889358Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893594u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889359Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088935D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088935FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893648u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893658u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889366Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893684u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893694u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088936A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088936ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088936C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088936D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889370Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893714u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893724u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889372Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893738u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893754u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889375Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893764u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889376Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893770u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893784u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893788u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893798u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088937A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088937B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088937D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088937E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088937F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893804u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889380Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893810u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893820u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893840u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889384Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893890u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893898u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088938A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088938B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088938BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088938D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088938E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088938E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088938F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088938F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893900u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893908u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893918u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893920u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889392Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893948u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893950u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893958u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893960u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893964u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x0889397Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893980u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893998u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088939ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088939B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088939C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088939D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088939ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x088939F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893A00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893A08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893A10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893A20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893A28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893A2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893A5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893AA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893AA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893AB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893AC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893ACCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893AE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893AF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893AF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B60u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893B90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893BA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893BBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893BC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893BD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893BE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893BFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893C00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893C10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893C18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893C20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893C28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893C2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893C5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893C98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893CA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893CB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893CB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893CC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893CE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893CE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893CF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893CF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893CFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893D18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893D20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893D24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893D4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893D5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893D68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893D88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893D90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893DA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893DACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893DB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893DC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893DD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893DD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893DDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893DE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893DF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893E18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893E1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893E40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893E48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893E4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893E54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893E60u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893E68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893E78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893E88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893E8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893E94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893EA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893EB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893EBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893EC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893ED4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893EE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893EF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893EF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893F10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893F18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893F24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893F30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893F54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893F60u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893F6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893F74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893F80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893F88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893F90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893F9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893FA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893FA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893FB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893FBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893FC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893FC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893FD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893FE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08893FF4u, &recomp_unit_0143, "recomp_unit_0143");
}
} // namespace psprecomp
