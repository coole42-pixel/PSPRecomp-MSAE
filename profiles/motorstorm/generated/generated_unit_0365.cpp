#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0365[1022] = {
    1, 0, 2, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 8, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12,
    0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20,
    0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 36, 37,
    0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 44, 0, 45, 0, 46, 0, 0, 47, 0, 48,
    0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 53, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0,
    0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 79,
    0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 85, 86, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 93, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 100,
    0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0,
    108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0,
    0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128,
    0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134,
    0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 143, 0, 0, 0, 144, 0, 145,
    0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 166, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180,
    0, 181, 0, 182, 0, 183, 0, 184, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0,
    197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212,
    0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 223, 0, 0, 0, 224, 0,
    0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0,
    230, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0,
    244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261,
};
void recomp_unit_0365_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08971000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0365[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08971000;
    case 2u: goto L_08971008;
    case 3u: goto L_08971014;
    case 4u: goto L_08971020;
    case 5u: goto L_08971028;
    case 6u: goto L_0897103C;
    case 7u: goto L_08971048;
    case 8u: goto L_08971050;
    case 9u: goto L_08971054;
    case 10u: goto L_0897105C;
    case 11u: goto L_08971070;
    case 12u: goto L_0897107C;
    case 13u: goto L_08971088;
    case 14u: goto L_0897109C;
    case 15u: goto L_089710AC;
    case 16u: goto L_089710BC;
    case 17u: goto L_089710C8;
    case 18u: goto L_089710D4;
    case 19u: goto L_089710E4;
    case 20u: goto L_089710FC;
    case 21u: goto L_08971104;
    case 22u: goto L_0897110C;
    case 23u: goto L_08971118;
    case 24u: goto L_08971148;
    case 25u: goto L_08971164;
    case 26u: goto L_08971180;
    case 27u: goto L_08971190;
    case 28u: goto L_089711A0;
    case 29u: goto L_089711AC;
    case 30u: goto L_089711B4;
    case 31u: goto L_089711C4;
    case 32u: goto L_089711CC;
    case 33u: goto L_089711D4;
    case 34u: goto L_089711E0;
    case 35u: goto L_089711F0;
    case 36u: goto L_089711F8;
    case 37u: goto L_089711FC;
    case 38u: goto L_08971214;
    case 39u: goto L_0897121C;
    case 40u: goto L_08971224;
    case 41u: goto L_0897122C;
    case 42u: goto L_0897124C;
    case 43u: goto L_08971254;
    case 44u: goto L_08971258;
    case 45u: goto L_08971260;
    case 46u: goto L_08971268;
    case 47u: goto L_08971274;
    case 48u: goto L_0897127C;
    case 49u: goto L_08971284;
    case 50u: goto L_08971294;
    case 51u: goto L_089712C0;
    case 52u: goto L_089712C8;
    case 53u: goto L_089712CC;
    case 54u: goto L_089712D4;
    case 55u: goto L_089712E0;
    case 56u: goto L_089712F0;
    case 57u: goto L_08971310;
    case 58u: goto L_08971318;
    case 59u: goto L_08971324;
    case 60u: goto L_0897132C;
    case 61u: goto L_08971338;
    case 62u: goto L_08971350;
    case 63u: goto L_08971364;
    case 64u: goto L_08971374;
    case 65u: goto L_08971384;
    case 66u: goto L_08971390;
    case 67u: goto L_0897139C;
    case 68u: goto L_089713AC;
    case 69u: goto L_089713C4;
    case 70u: goto L_089713CC;
    case 71u: goto L_089713D4;
    case 72u: goto L_089713E0;
    case 73u: goto L_08971410;
    case 74u: goto L_0897142C;
    case 75u: goto L_08971448;
    case 76u: goto L_08971458;
    case 77u: goto L_08971468;
    case 78u: goto L_08971474;
    case 79u: goto L_0897147C;
    case 80u: goto L_0897148C;
    case 81u: goto L_08971494;
    case 82u: goto L_0897149C;
    case 83u: goto L_089714A8;
    case 84u: goto L_089714B8;
    case 85u: goto L_089714C0;
    case 86u: goto L_089714C4;
    case 87u: goto L_089714DC;
    case 88u: goto L_089714E4;
    case 89u: goto L_089714EC;
    case 90u: goto L_089714F4;
    case 91u: goto L_08971520;
    case 92u: goto L_08971528;
    case 93u: goto L_0897152C;
    case 94u: goto L_08971534;
    case 95u: goto L_08971540;
    case 96u: goto L_08971550;
    case 97u: goto L_08971560;
    case 98u: goto L_08971568;
    case 99u: goto L_08971574;
    case 100u: goto L_0897157C;
    case 101u: goto L_08971584;
    case 102u: goto L_08971590;
    case 103u: goto L_089715A8;
    case 104u: goto L_089715C4;
    case 105u: goto L_089715DC;
    case 106u: goto L_089715E8;
    case 107u: goto L_089715F4;
    case 108u: goto L_08971600;
    case 109u: goto L_08971610;
    case 110u: goto L_0897162C;
    case 111u: goto L_08971634;
    case 112u: goto L_0897163C;
    case 113u: goto L_08971650;
    case 114u: goto L_08971664;
    case 115u: goto L_08971674;
    case 116u: goto L_08971684;
    case 117u: goto L_08971694;
    case 118u: goto L_089716A8;
    case 119u: goto L_089716BC;
    case 120u: goto L_089716C4;
    case 121u: goto L_089716D8;
    case 122u: goto L_089716EC;
    case 123u: goto L_089716F8;
    case 124u: goto L_08971704;
    case 125u: goto L_0897173C;
    case 126u: goto L_08971758;
    case 127u: goto L_08971768;
    case 128u: goto L_0897177C;
    case 129u: goto L_0897178C;
    case 130u: goto L_089717A0;
    case 131u: goto L_089717AC;
    case 132u: goto L_089717E0;
    case 133u: goto L_089717EC;
    case 134u: goto L_089717FC;
    case 135u: goto L_08971804;
    case 136u: goto L_0897180C;
    case 137u: goto L_08971814;
    case 138u: goto L_0897181C;
    case 139u: goto L_08971834;
    case 140u: goto L_0897183C;
    case 141u: goto L_08971844;
    case 142u: goto L_08971860;
    case 143u: goto L_08971864;
    case 144u: goto L_08971874;
    case 145u: goto L_0897187C;
    case 146u: goto L_0897188C;
    case 147u: goto L_0897189C;
    case 148u: goto L_089718A4;
    case 149u: goto L_089718B8;
    case 150u: goto L_089718C0;
    case 151u: goto L_089718DC;
    case 152u: goto L_089718E8;
    case 153u: goto L_08971908;
    case 154u: goto L_08971928;
    case 155u: goto L_08971938;
    case 156u: goto L_08971944;
    case 157u: goto L_08971974;
    case 158u: goto L_089719B0;
    case 159u: goto L_089719B8;
    case 160u: goto L_089719CC;
    case 161u: goto L_089719D8;
    case 162u: goto L_089719EC;
    case 163u: goto L_089719FC;
    case 164u: goto L_08971A1C;
    case 165u: goto L_08971A28;
    case 166u: goto L_08971A2C;
    case 167u: goto L_08971A3C;
    case 168u: goto L_08971A44;
    case 169u: goto L_08971A50;
    case 170u: goto L_08971A58;
    case 171u: goto L_08971A60;
    case 172u: goto L_08971A68;
    case 173u: goto L_08971A94;
    case 174u: goto L_08971A9C;
    case 175u: goto L_08971AA4;
    case 176u: goto L_08971AAC;
    case 177u: goto L_08971AB4;
    case 178u: goto L_08971ABC;
    case 179u: goto L_08971AE4;
    case 180u: goto L_08971AFC;
    case 181u: goto L_08971B04;
    case 182u: goto L_08971B0C;
    case 183u: goto L_08971B14;
    case 184u: goto L_08971B1C;
    case 185u: goto L_08971B20;
    case 186u: goto L_08971B30;
    case 187u: goto L_08971B44;
    case 188u: goto L_08971B50;
    case 189u: goto L_08971B90;
    case 190u: goto L_08971BA8;
    case 191u: goto L_08971BB0;
    case 192u: goto L_08971BC0;
    case 193u: goto L_08971BC8;
    case 194u: goto L_08971BD4;
    case 195u: goto L_08971BDC;
    case 196u: goto L_08971BEC;
    case 197u: goto L_08971C00;
    case 198u: goto L_08971C08;
    case 199u: goto L_08971C10;
    case 200u: goto L_08971C28;
    case 201u: goto L_08971C38;
    case 202u: goto L_08971C48;
    case 203u: goto L_08971C54;
    case 204u: goto L_08971C80;
    case 205u: goto L_08971C94;
    case 206u: goto L_08971CA0;
    case 207u: goto L_08971CA8;
    case 208u: goto L_08971CB0;
    case 209u: goto L_08971CBC;
    case 210u: goto L_08971CC4;
    case 211u: goto L_08971CF4;
    case 212u: goto L_08971CFC;
    case 213u: goto L_08971D04;
    case 214u: goto L_08971D0C;
    case 215u: goto L_08971D14;
    case 216u: goto L_08971D1C;
    case 217u: goto L_08971D2C;
    case 218u: goto L_08971D44;
    case 219u: goto L_08971D4C;
    case 220u: goto L_08971D54;
    case 221u: goto L_08971D5C;
    case 222u: goto L_08971D64;
    case 223u: goto L_08971D68;
    case 224u: goto L_08971D78;
    case 225u: goto L_08971D88;
    case 226u: goto L_08971D94;
    case 227u: goto L_08971DCC;
    case 228u: goto L_08971DE0;
    case 229u: goto L_08971DF0;
    case 230u: goto L_08971E00;
    case 231u: goto L_08971E08;
    case 232u: goto L_08971E14;
    case 233u: goto L_08971E24;
    case 234u: goto L_08971E30;
    case 235u: goto L_08971E40;
    case 236u: goto L_08971E54;
    case 237u: goto L_08971E74;
    case 238u: goto L_08971E80;
    case 239u: goto L_08971E94;
    case 240u: goto L_08971EB4;
    case 241u: goto L_08971EC0;
    case 242u: goto L_08971EDC;
    case 243u: goto L_08971EF4;
    case 244u: goto L_08971F00;
    case 245u: goto L_08971F0C;
    case 246u: goto L_08971F18;
    case 247u: goto L_08971F24;
    case 248u: goto L_08971F30;
    case 249u: goto L_08971F3C;
    case 250u: goto L_08971F48;
    case 251u: goto L_08971F54;
    case 252u: goto L_08971F60;
    case 253u: goto L_08971F70;
    case 254u: goto L_08971F8C;
    case 255u: goto L_08971F94;
    case 256u: goto L_08971F9C;
    case 257u: goto L_08971FB0;
    case 258u: goto L_08971FC4;
    case 259u: goto L_08971FD4;
    case 260u: goto L_08971FE4;
    case 261u: goto L_08971FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08971000:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08971028;
      }
      goto L_08971008;
    }
L_08971008:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08971014u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 129u, 0x089FB960u>(ctx, &aot_mem) && ctx.pc == 0x08971014u) goto L_08971014;
    return;
L_08971014:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971028;
      }
      goto L_08971020;
    }
L_08971020:
    aot_gpr[31] = (0x08971028u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0364_entry, 364u, 330u, 0x08970FA0u>(ctx, &aot_mem) && ctx.pc == 0x08971028u) goto L_08971028;
    return;
L_08971028:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897103C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971050;
      }
      goto L_08971048;
    }
L_08971048:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08971054;
      }
      goto L_08971050;
    }
L_08971050:
    aot_gpr[2] = (0u | 0u);
    goto L_08971054;
L_08971054:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897105C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08971070u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0364_entry, 364u, 332u, 0x08970FBCu>(ctx, &aot_mem) && ctx.pc == 0x08971070u) goto L_08971070;
    return;
L_08971070:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0897107Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26480));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0897107Cu) goto L_0897107C;
    return;
L_0897107C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971088:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5776));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897109C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897110C;
      }
      goto L_089710AC;
    }
L_089710AC:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5776));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089710C8;
      }
      goto L_089710BC;
    }
L_089710BC:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_089710C8;
L_089710C8:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897110C;
      }
      goto L_089710D4;
    }
L_089710D4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971104;
      }
      goto L_089710E4;
    }
L_089710E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089710FCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089710FCu) goto L_089710FC;
    return;
L_089710FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897110C;
      }
      goto L_08971104;
    }
L_08971104:
    aot_gpr[31] = (0x0897110Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0897110Cu) goto L_0897110C;
    return;
L_0897110C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971118:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[31] = (0x08971148u);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08971148u) goto L_08971148;
    return;
L_08971148:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089711AC;
      }
      goto L_08971164;
    }
L_08971164:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(4756));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08971180u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x08971180u) goto L_08971180;
    return;
L_08971180:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08971190u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 115u, 0x089ABAB0u>(ctx, &aot_mem) && ctx.pc == 0x08971190u) goto L_08971190;
    return;
L_08971190:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 26u);
    aot_gpr[31] = (0x089711A0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x089711A0u) goto L_089711A0;
    return;
L_089711A0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089711AC;
L_089711AC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089711CC;
      }
      goto L_089711B4;
    }
L_089711B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089711C4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x089711C4u) goto L_089711C4;
    return;
L_089711C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089711CC;
L_089711CC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089711FC;
      }
      goto L_089711D4;
    }
L_089711D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (2217u << 16u);
      if (branch_taken) {
          goto L_089711F8;
      }
      goto L_089711E0;
    }
L_089711E0:
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-5144));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089711F0u);
    aot_gpr[6] = (0u | 1535u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089711F0u) goto L_089711F0;
    return;
L_089711F0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1535), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089711FC;
      }
      goto L_089711F8;
    }
L_089711F8:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-5144), static_cast<std::uint8_t>(0u));
    goto L_089711FC;
L_089711FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971214:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897121C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971224:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897122C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4536));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08971258;
      }
      goto L_0897124C;
    }
L_0897124C:
    aot_gpr[31] = (0x08971254u);
    aot_gpr[5] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x08971254u) goto L_08971254;
    return;
L_08971254:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08971258;
L_08971258:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971284;
      }
      goto L_08971260;
    }
L_08971260:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897127C;
      }
      goto L_08971268;
    }
L_08971268:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08971274u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-985));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x08971274u) goto L_08971274;
    return;
L_08971274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971284;
      }
      goto L_0897127C;
    }
L_0897127C:
    aot_gpr[31] = (0x08971284u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 116u, 0x0895F700u>(ctx, &aot_mem) && ctx.pc == 0x08971284u) goto L_08971284;
    return;
L_08971284:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971294:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4536));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089712CC;
      }
      goto L_089712C0;
    }
L_089712C0:
    aot_gpr[31] = (0x089712C8u);
    aot_gpr[5] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x089712C8u) goto L_089712C8;
    return;
L_089712C8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_089712CC;
L_089712CC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971338;
      }
      goto L_089712D4;
    }
L_089712D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897132C;
      }
      goto L_089712E0;
    }
L_089712E0:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089712F0u);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089712F0u) goto L_089712F0;
    return;
L_089712F0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[7] = (2199u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5144));
    aot_gpr[31] = (0x08971310u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4652));
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 109u, 0x0896F548u>(ctx, &aot_mem) && ctx.pc == 0x08971310u) goto L_08971310;
    return;
L_08971310:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971324;
      }
      goto L_08971318;
    }
L_08971318:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08971324u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-985));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x08971324u) goto L_08971324;
    return;
L_08971324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971338;
      }
      goto L_0897132C;
    }
L_0897132C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08971338u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x08971338u) goto L_08971338;
    return;
L_08971338:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971350:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5824));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971364:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089713D4;
      }
      goto L_08971374;
    }
L_08971374:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08971390;
      }
      goto L_08971384;
    }
L_08971384:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08971390;
L_08971390:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089713D4;
      }
      goto L_0897139C;
    }
L_0897139C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089713CC;
      }
      goto L_089713AC;
    }
L_089713AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089713C4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089713C4u) goto L_089713C4;
    return;
L_089713C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089713D4;
      }
      goto L_089713CC;
    }
L_089713CC:
    aot_gpr[31] = (0x089713D4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x089713D4u) goto L_089713D4;
    return;
L_089713D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089713E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[31] = (0x08971410u);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08971410u) goto L_08971410;
    return;
L_08971410:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971474;
      }
      goto L_0897142C;
    }
L_0897142C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(5364));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08971448u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x08971448u) goto L_08971448;
    return;
L_08971448:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08971458u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 115u, 0x089ABAB0u>(ctx, &aot_mem) && ctx.pc == 0x08971458u) goto L_08971458;
    return;
L_08971458:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 28u);
    aot_gpr[31] = (0x08971468u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08971468u) goto L_08971468;
    return;
L_08971468:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08971474;
L_08971474:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971494;
      }
      goto L_0897147C;
    }
L_0897147C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897148Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x0897148Cu) goto L_0897148C;
    return;
L_0897148C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08971494;
L_08971494:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089714C4;
      }
      goto L_0897149C;
    }
L_0897149C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (2217u << 16u);
      if (branch_taken) {
          goto L_089714C0;
      }
      goto L_089714A8;
    }
L_089714A8:
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-3608));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089714B8u);
    aot_gpr[6] = (0u | 1535u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089714B8u) goto L_089714B8;
    return;
L_089714B8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1535), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089714C4;
      }
      goto L_089714C0;
    }
L_089714C0:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3608), static_cast<std::uint8_t>(0u));
    goto L_089714C4;
L_089714C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089714DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089714E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089714EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089714F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4536));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0897152C;
      }
      goto L_08971520;
    }
L_08971520:
    aot_gpr[31] = (0x08971528u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x08971528u) goto L_08971528;
    return;
L_08971528:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_0897152C;
L_0897152C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971590;
      }
      goto L_08971534;
    }
L_08971534:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971584;
      }
      goto L_08971540;
    }
L_08971540:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08971550u);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08971550u) goto L_08971550;
    return;
L_08971550:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[31] = (0x08971560u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 129u, 0x0896F674u>(ctx, &aot_mem) && ctx.pc == 0x08971560u) goto L_08971560;
    return;
L_08971560:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971574;
      }
      goto L_08971568;
    }
L_08971568:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08971574u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-985));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x08971574u) goto L_08971574;
    return;
L_08971574:
    aot_gpr[31] = (0x0897157Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 116u, 0x0895F700u>(ctx, &aot_mem) && ctx.pc == 0x0897157Cu) goto L_0897157C;
    return;
L_0897157C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971590;
      }
      goto L_08971584;
    }
L_08971584:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08971590u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x08971590u) goto L_08971590;
    return;
L_08971590:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089715A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897163C;
      }
      goto L_089715C4;
    }
L_089715C4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5872));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    aot_gpr[31] = (0x089715DCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0366_entry, 366u, 42u, 0x08972258u>(ctx, &aot_mem) && ctx.pc == 0x089715DCu) goto L_089715DC;
    return;
L_089715DC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(480));
    aot_gpr[31] = (0x089715E8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0366_entry, 366u, 21u, 0x08972110u>(ctx, &aot_mem) && ctx.pc == 0x089715E8u) goto L_089715E8;
    return;
L_089715E8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089715F4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 143u, 0x0895F8D4u>(ctx, &aot_mem) && ctx.pc == 0x089715F4u) goto L_089715F4;
    return;
L_089715F4:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0897163C;
      }
      goto L_08971600;
    }
L_08971600:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971634;
      }
      goto L_08971610;
    }
L_08971610:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897162Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897162Cu) goto L_0897162C;
    return;
L_0897162C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897163C;
      }
      goto L_08971634;
    }
L_08971634:
    aot_gpr[31] = (0x0897163Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0897163Cu) goto L_0897163C;
    return;
L_0897163C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971650:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08971664u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 151u, 0x0895F948u>(ctx, &aot_mem) && ctx.pc == 0x08971664u) goto L_08971664;
    return;
L_08971664:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(480));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08971674u);
    aot_gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 266u, 0x0895FFACu>(ctx, &aot_mem) && ctx.pc == 0x08971674u) goto L_08971674;
    return;
L_08971674:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08971684u);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 266u, 0x0895FFACu>(ctx, &aot_mem) && ctx.pc == 0x08971684u) goto L_08971684;
    return;
L_08971684:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971694:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089716A8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 267u, 0x0895FFBCu>(ctx, &aot_mem) && ctx.pc == 0x089716A8u) goto L_089716A8;
    return;
L_089716A8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5872));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), aot_gpr[4]);
    aot_gpr[31] = (0x089716BCu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0366_entry, 366u, 20u, 0x089720FCu>(ctx, &aot_mem) && ctx.pc == 0x089716BCu) goto L_089716BC;
    return;
L_089716BC:
    aot_gpr[31] = (0x089716C4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    if (rt.invoke_chained_direct<&recomp_unit_0366_entry, 366u, 41u, 0x08972244u>(ctx, &aot_mem) && ctx.pc == 0x089716C4u) goto L_089716C4;
    return;
L_089716C4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089716D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089716ECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29136));
    goto L_08971694;
L_089716EC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x089716F8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26464));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089716F8u) goto L_089716F8;
    return;
L_089716F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971704:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] << 9u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897173Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-26448), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 203u, 0x08960BA8u>(ctx, &aot_mem) && ctx.pc == 0x0897173Cu) goto L_0897173C;
    return;
L_0897173C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-2072));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08971758u);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08971758u) goto L_08971758;
    return;
L_08971758:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971768:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089717A0;
      }
      goto L_0897177C;
    }
L_0897177C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(172)));
    aot_gpr[7] = (0u | 300u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_089717A0;
      }
      goto L_0897178C;
    }
L_0897178C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x089717A0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089717A0u) goto L_089717A0;
    return;
L_089717A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089717AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x089717E0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x089717E0u) goto L_089717E0;
    return;
L_089717E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[30] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08971804;
      }
      goto L_089717EC;
    }
L_089717EC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26976)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897180C;
      }
      goto L_089717FC;
    }
L_089717FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897181C;
      }
      goto L_08971804;
    }
L_08971804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971944;
      }
      goto L_0897180C;
    }
L_0897180C:
    aot_gpr[31] = (0x08971814u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 131u, 0x08899DC8u>(ctx, &aot_mem) && ctx.pc == 0x08971814u) goto L_08971814;
    return;
L_08971814:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897183C;
      }
      goto L_0897181C;
    }
L_0897181C:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971844;
      }
      goto L_08971834;
    }
L_08971834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971944;
      }
      goto L_0897183C;
    }
L_0897183C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971944;
      }
      goto L_08971844;
    }
L_08971844:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    aot_gpr[18] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-2072));
      if (branch_taken) {
          goto L_089718C0;
      }
      goto L_08971860;
    }
L_08971860:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    goto L_08971864;
L_08971864:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(348));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08971874u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08971874u) goto L_08971874;
    return;
L_08971874:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897188C;
      }
      goto L_0897187C;
    }
L_0897187C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(364)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089718A4;
      }
      goto L_0897188C;
    }
L_0897188C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(500));
      if (branch_taken) {
          goto L_08971864;
      }
      goto L_0897189C;
    }
L_0897189C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089718C0;
      }
      goto L_089718A4;
    }
L_089718A4:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089718B8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_08971768;
L_089718B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971944;
      }
      goto L_089718C0;
    }
L_089718C0:
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(308));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(140));
    aot_gpr[31] = (0x089718DCu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089718DCu) goto L_089718DC;
    return;
L_089718DC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089718E8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_08971768;
L_089718E8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(340));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[31] = (0x08971908u);
    aot_gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08971908u) goto L_08971908;
    return;
L_08971908:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(340), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(344));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(392), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x08971928u);
    aot_gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08971928u) goto L_08971928;
    return;
L_08971928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[30] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_08971944;
      }
      goto L_08971938;
    }
L_08971938:
    aot_gpr[5] = (aot_gpr[23] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08971944u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x08971944u) goto L_08971944;
    return;
L_08971944:
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
L_08971974:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08971A3C;
      }
      goto L_089719B0;
    }
L_089719B0:
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-2072));
    goto L_089719B8;
L_089719B8:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(500));
      if (branch_taken) {
          goto L_089719D8;
      }
      goto L_089719CC;
    }
L_089719CC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08971A28;
      }
      goto L_089719D8;
    }
L_089719D8:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[18]);
      if (branch_taken) {
          goto L_08971A28;
      }
      goto L_089719EC;
    }
L_089719EC:
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[20]);
    aot_gpr[22] = (aot_gpr[18] - aot_gpr[19]);
    aot_gpr[31] = (0x089719FCu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089719FCu) goto L_089719FC;
    return;
L_089719FC:
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[22] << 9u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08971A1Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08971A1Cu) goto L_08971A1C;
    return;
L_08971A1C:
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08971A2C;
      }
      goto L_08971A28;
    }
L_08971A28:
    aot_gpr[17] = (aot_gpr[21] | 0u);
    goto L_08971A2C;
L_08971A2C:
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089719B8;
      }
      goto L_08971A3C;
    }
L_08971A3C:
    aot_gpr[31] = (0x08971A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x08971A44u) goto L_08971A44;
    return;
L_08971A44:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971A58;
      }
      goto L_08971A50;
    }
L_08971A50:
    aot_gpr[31] = (0x08971A58u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x08971A58u) goto L_08971A58;
    return;
L_08971A58:
    aot_gpr[31] = (0x08971A60u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 208u, 0x08983BF0u>(ctx, &aot_mem) && ctx.pc == 0x08971A60u) goto L_08971A60;
    return;
L_08971A60:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971AA4;
      }
      goto L_08971A68;
    }
L_08971A68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6060));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x08971A94u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0384_entry, 384u, 5u, 0x08984044u>(ctx, &aot_mem) && ctx.pc == 0x08971A94u) goto L_08971A94;
    return;
L_08971A94:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971AAC;
      }
      goto L_08971A9C;
    }
L_08971A9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971ABC;
      }
      goto L_08971AA4;
    }
L_08971AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971ABC;
      }
      goto L_08971AAC;
    }
L_08971AAC:
    aot_gpr[31] = (0x08971AB4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x08971AB4u) goto L_08971AB4;
    return;
L_08971AB4:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08971ABC;
L_08971ABC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971AE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08971B1C;
      }
      goto L_08971AFC;
    }
L_08971AFC:
    aot_gpr[31] = (0x08971B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 211u, 0x08983C38u>(ctx, &aot_mem) && ctx.pc == 0x08971B04u) goto L_08971B04;
    return;
L_08971B04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971B14;
      }
      goto L_08971B0C;
    }
L_08971B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971B20;
      }
      goto L_08971B14;
    }
L_08971B14:
    aot_gpr[31] = (0x08971B1Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 211u, 0x08960C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08971B1Cu) goto L_08971B1C;
    return;
L_08971B1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_08971B20;
L_08971B20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971B30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08971B44u);
    aot_gpr[5] = (aot_gpr[5] << 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 203u, 0x08960BA8u>(ctx, &aot_mem) && ctx.pc == 0x08971B44u) goto L_08971B44;
    return;
L_08971B44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971B50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(180)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08971C54;
      }
      goto L_08971B90;
    }
L_08971B90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(140));
      if (branch_taken) {
          goto L_08971C10;
      }
      goto L_08971BA8;
    }
L_08971BA8:
    aot_gpr[23] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr[22] = (0u | 0u);
    goto L_08971BB0;
L_08971BB0:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08971BC0u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08971BC0u) goto L_08971BC0;
    return;
L_08971BC0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08971BEC;
      }
      goto L_08971BC8;
    }
L_08971BC8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08971BD4u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08971BD4u) goto L_08971BD4;
    return;
L_08971BD4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971BEC;
      }
      goto L_08971BDC;
    }
L_08971BDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08971C08;
      }
      goto L_08971BEC;
    }
L_08971BEC:
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[22]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08971BB0;
      }
      goto L_08971C00;
    }
L_08971C00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08971C10;
      }
      goto L_08971C08;
    }
L_08971C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971C54;
      }
      goto L_08971C10;
    }
L_08971C10:
    aot_gpr[5] = (aot_gpr[20] << 7u);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08971C28u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08971C28u) goto L_08971C28;
    return;
L_08971C28:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    aot_gpr[31] = (0x08971C38u);
    aot_gpr[6] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08971C38u) goto L_08971C38;
    return;
L_08971C38:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08971C48u);
    aot_gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08971C48u) goto L_08971C48;
    return;
L_08971C48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    goto L_08971C54;
L_08971C54:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971C80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08971C94u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x08971C94u) goto L_08971C94;
    return;
L_08971C94:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971CA8;
      }
      goto L_08971CA0;
    }
L_08971CA0:
    aot_gpr[31] = (0x08971CA8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x08971CA8u) goto L_08971CA8;
    return;
L_08971CA8:
    aot_gpr[31] = (0x08971CB0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 218u, 0x08960C84u>(ctx, &aot_mem) && ctx.pc == 0x08971CB0u) goto L_08971CB0;
    return;
L_08971CB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[31] = (0x08971CBCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 208u, 0x08983BF0u>(ctx, &aot_mem) && ctx.pc == 0x08971CBCu) goto L_08971CBC;
    return;
L_08971CBC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971D04;
      }
      goto L_08971CC4;
    }
L_08971CC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6992));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08971CF4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0384_entry, 384u, 5u, 0x08984044u>(ctx, &aot_mem) && ctx.pc == 0x08971CF4u) goto L_08971CF4;
    return;
L_08971CF4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971D0C;
      }
      goto L_08971CFC;
    }
L_08971CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971D1C;
      }
      goto L_08971D04;
    }
L_08971D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971D1C;
      }
      goto L_08971D0C;
    }
L_08971D0C:
    aot_gpr[31] = (0x08971D14u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x08971D14u) goto L_08971D14;
    return;
L_08971D14:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08971D1C;
L_08971D1C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971D2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08971D64;
      }
      goto L_08971D44;
    }
L_08971D44:
    aot_gpr[31] = (0x08971D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 211u, 0x08983C38u>(ctx, &aot_mem) && ctx.pc == 0x08971D4Cu) goto L_08971D4C;
    return;
L_08971D4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971D5C;
      }
      goto L_08971D54;
    }
L_08971D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971D68;
      }
      goto L_08971D5C;
    }
L_08971D5C:
    aot_gpr[31] = (0x08971D64u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 211u, 0x08960C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08971D64u) goto L_08971D64;
    return;
L_08971D64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_08971D68;
L_08971D68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971D78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08971D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x08971D88u) goto L_08971D88;
    return;
L_08971D88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971D94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5896));
    aot_gpr[5] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08971DCCu);
    aot_gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08971DCCu) goto L_08971DCC;
    return;
L_08971DCC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971DE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08971E08;
      }
      goto L_08971DF0;
    }
L_08971DF0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5896));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(168), aot_gpr[6]);
      if (branch_taken) {
          goto L_08971E08;
      }
      goto L_08971E00;
    }
L_08971E00:
    aot_gpr[31] = (0x08971E08u);
    // nop
    goto L_08971D78;
L_08971E08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971E14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08971E24u);
    aot_gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08971E24u) goto L_08971E24;
    return;
L_08971E24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971E30:
    aot_gpr[5] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971E40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971E74;
      }
      goto L_08971E54;
    }
L_08971E54:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(168)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08971E74u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971E74u) goto L_08971E74;
    return;
L_08971E74:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971E80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971EB4;
      }
      goto L_08971E94;
    }
L_08971E94:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(168)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08971EB4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971EB4u) goto L_08971EB4;
    return;
L_08971EB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971EC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08971F9C;
      }
      goto L_08971EDC;
    }
L_08971EDC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5960));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(508));
    aot_gpr[31] = (0x08971EF4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0366_entry, 366u, 177u, 0x089729BCu>(ctx, &aot_mem) && ctx.pc == 0x08971EF4u) goto L_08971EF4;
    return;
L_08971EF4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(504));
    aot_gpr[31] = (0x08971F00u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0366_entry, 366u, 145u, 0x08972824u>(ctx, &aot_mem) && ctx.pc == 0x08971F00u) goto L_08971F00;
    return;
L_08971F00:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(500));
    aot_gpr[31] = (0x08971F0Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0366_entry, 366u, 161u, 0x089728F0u>(ctx, &aot_mem) && ctx.pc == 0x08971F0Cu) goto L_08971F0C;
    return;
L_08971F0C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(496));
    aot_gpr[31] = (0x08971F18u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 136u, 0x08973808u>(ctx, &aot_mem) && ctx.pc == 0x08971F18u) goto L_08971F18;
    return;
L_08971F18:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(492));
    aot_gpr[31] = (0x08971F24u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 29u, 0x089731C0u>(ctx, &aot_mem) && ctx.pc == 0x08971F24u) goto L_08971F24;
    return;
L_08971F24:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(488));
    aot_gpr[31] = (0x08971F30u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0366_entry, 366u, 58u, 0x08972338u>(ctx, &aot_mem) && ctx.pc == 0x08971F30u) goto L_08971F30;
    return;
L_08971F30:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    aot_gpr[31] = (0x08971F3Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 118u, 0x08973718u>(ctx, &aot_mem) && ctx.pc == 0x08971F3Cu) goto L_08971F3C;
    return;
L_08971F3C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(480));
    aot_gpr[31] = (0x08971F48u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 99u, 0x0897361Cu>(ctx, &aot_mem) && ctx.pc == 0x08971F48u) goto L_08971F48;
    return;
L_08971F48:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08971F54u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 143u, 0x0895F8D4u>(ctx, &aot_mem) && ctx.pc == 0x08971F54u) goto L_08971F54;
    return;
L_08971F54:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08971F9C;
      }
      goto L_08971F60;
    }
L_08971F60:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971F94;
      }
      goto L_08971F70;
    }
L_08971F70:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08971F8Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971F8Cu) goto L_08971F8C;
    return;
L_08971F8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971F9C;
      }
      goto L_08971F94;
    }
L_08971F94:
    aot_gpr[31] = (0x08971F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08971F9Cu) goto L_08971F9C;
    return;
L_08971F9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971FB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08971FC4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 151u, 0x0895F948u>(ctx, &aot_mem) && ctx.pc == 0x08971FC4u) goto L_08971FC4;
    return;
L_08971FC4:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(480));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08971FD4u);
    aot_gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 266u, 0x0895FFACu>(ctx, &aot_mem) && ctx.pc == 0x08971FD4u) goto L_08971FD4;
    return;
L_08971FD4:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08971FE4u);
    aot_gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 266u, 0x0895FFACu>(ctx, &aot_mem) && ctx.pc == 0x08971FE4u) goto L_08971FE4;
    return;
L_08971FE4:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(488));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08971FF4u);
    aot_gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 266u, 0x0895FFACu>(ctx, &aot_mem) && ctx.pc == 0x08971FF4u) goto L_08971FF4;
    return;
L_08971FF4:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(492));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08972004u);
    aot_gpr[5] = (0u | 30u);
    (void)rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 266u, 0x0895FFACu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0365(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0365_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_365(Runtime &runtime) {
    runtime.register_generated_unit(365u, 0x08971000u, 4096u, &recomp_unit_0365, &recomp_unit_0365_entry);
    runtime.register_function(0x08971000u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971008u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971014u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971020u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971028u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897103Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971048u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971050u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971054u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897105Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971070u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897107Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971088u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897109Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089710ACu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089710BCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089710C8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089710D4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089710E4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089710FCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971104u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897110Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971118u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971148u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971164u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971180u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971190u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089711A0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089711ACu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089711B4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089711C4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089711CCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089711D4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089711E0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089711F0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089711F8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089711FCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971214u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897121Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971224u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897122Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897124Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971254u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971258u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971260u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971268u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971274u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897127Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971284u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971294u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089712C0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089712C8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089712CCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089712D4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089712E0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089712F0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971310u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971318u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971324u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897132Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971338u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971350u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971364u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971374u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971384u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971390u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897139Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089713ACu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089713C4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089713CCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089713D4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089713E0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971410u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897142Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971448u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971458u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971468u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971474u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897147Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897148Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971494u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897149Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089714A8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089714B8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089714C0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089714C4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089714DCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089714E4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089714ECu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089714F4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971520u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971528u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897152Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971534u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971540u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971550u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971560u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971568u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971574u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897157Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971584u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971590u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089715A8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089715C4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089715DCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089715E8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089715F4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971600u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971610u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897162Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971634u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897163Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971650u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971664u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971674u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971684u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971694u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089716A8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089716BCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089716C4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089716D8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089716ECu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089716F8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971704u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897173Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971758u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971768u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897177Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897178Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089717A0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089717ACu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089717E0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089717ECu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089717FCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971804u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897180Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971814u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897181Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971834u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897183Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971844u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971860u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971864u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971874u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897187Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897188Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x0897189Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089718A4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089718B8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089718C0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089718DCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089718E8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971908u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971928u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971938u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971944u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971974u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089719B0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089719B8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089719CCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089719D8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089719ECu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x089719FCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971A1Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971A28u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971A2Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971A3Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971A44u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971A50u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971A58u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971A60u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971A68u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971A94u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971A9Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971AA4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971AACu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971AB4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971ABCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971AE4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971AFCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971B04u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971B0Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971B14u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971B1Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971B20u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971B30u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971B44u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971B50u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971B90u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971BA8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971BB0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971BC0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971BC8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971BD4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971BDCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971BECu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971C00u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971C08u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971C10u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971C28u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971C38u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971C48u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971C54u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971C80u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971C94u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971CA0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971CA8u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971CB0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971CBCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971CC4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971CF4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971CFCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D04u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D0Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D14u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D1Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D2Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D44u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D4Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D54u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D5Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D64u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D68u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D78u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D88u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971D94u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971DCCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971DE0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971DF0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971E00u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971E08u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971E14u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971E24u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971E30u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971E40u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971E54u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971E74u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971E80u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971E94u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971EB4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971EC0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971EDCu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971EF4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F00u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F0Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F18u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F24u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F30u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F3Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F48u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F54u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F60u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F70u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F8Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F94u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971F9Cu, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971FB0u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971FC4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971FD4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971FE4u, &recomp_unit_0365, "recomp_unit_0365");
    runtime.register_function(0x08971FF4u, &recomp_unit_0365, "recomp_unit_0365");
}
} // namespace psprecomp
