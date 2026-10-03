#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0367[1020] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 8, 0, 9, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 18, 0, 19, 20, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49,
    0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 57, 0, 58,
    0, 0, 59, 0, 60, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0,
    76, 0, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0,
    84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 90, 91, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105,
    0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 116, 0,
    0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0,
    125, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0,
    0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0,
    0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0,
    0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 167, 168, 0, 0, 169, 0, 170, 0,
    0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 176, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 206, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0,
    0, 0, 0, 212, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 218, 219, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0,
    230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 240, 241, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 248, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0,
    0, 265, 0, 0, 266, 0, 0, 267, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271,
};
void recomp_unit_0367_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08973000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0367[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08973000;
    case 2u: goto L_08973008;
    case 3u: goto L_0897301C;
    case 4u: goto L_0897302C;
    case 5u: goto L_08973034;
    case 6u: goto L_0897304C;
    case 7u: goto L_08973078;
    case 8u: goto L_08973084;
    case 9u: goto L_0897308C;
    case 10u: goto L_08973090;
    case 11u: goto L_08973098;
    case 12u: goto L_089730A4;
    case 13u: goto L_089730B8;
    case 14u: goto L_089730C8;
    case 15u: goto L_089730D0;
    case 16u: goto L_089730EC;
    case 17u: goto L_08973110;
    case 18u: goto L_0897311C;
    case 19u: goto L_08973124;
    case 20u: goto L_08973128;
    case 21u: goto L_08973130;
    case 22u: goto L_0897313C;
    case 23u: goto L_0897314C;
    case 24u: goto L_0897315C;
    case 25u: goto L_08973164;
    case 26u: goto L_0897317C;
    case 27u: goto L_089731A0;
    case 28u: goto L_089731AC;
    case 29u: goto L_089731C0;
    case 30u: goto L_089731D0;
    case 31u: goto L_089731E0;
    case 32u: goto L_089731EC;
    case 33u: goto L_089731F8;
    case 34u: goto L_08973208;
    case 35u: goto L_08973220;
    case 36u: goto L_08973228;
    case 37u: goto L_08973230;
    case 38u: goto L_0897323C;
    case 39u: goto L_08973274;
    case 40u: goto L_0897328C;
    case 41u: goto L_08973298;
    case 42u: goto L_089732AC;
    case 43u: goto L_089732BC;
    case 44u: goto L_089732C4;
    case 45u: goto L_089732CC;
    case 46u: goto L_089732D4;
    case 47u: goto L_089732EC;
    case 48u: goto L_089732F4;
    case 49u: goto L_089732FC;
    case 50u: goto L_0897330C;
    case 51u: goto L_08973314;
    case 52u: goto L_08973320;
    case 53u: goto L_08973348;
    case 54u: goto L_08973350;
    case 55u: goto L_08973360;
    case 56u: goto L_08973368;
    case 57u: goto L_08973374;
    case 58u: goto L_0897337C;
    case 59u: goto L_08973388;
    case 60u: goto L_08973390;
    case 61u: goto L_08973394;
    case 62u: goto L_0897339C;
    case 63u: goto L_089733A8;
    case 64u: goto L_089733B4;
    case 65u: goto L_089733BC;
    case 66u: goto L_089733C8;
    case 67u: goto L_089733E0;
    case 68u: goto L_08973400;
    case 69u: goto L_0897340C;
    case 70u: goto L_0897341C;
    case 71u: goto L_08973494;
    case 72u: goto L_089734D0;
    case 73u: goto L_089734DC;
    case 74u: goto L_089734EC;
    case 75u: goto L_089734F4;
    case 76u: goto L_08973500;
    case 77u: goto L_08973510;
    case 78u: goto L_08973514;
    case 79u: goto L_08973538;
    case 80u: goto L_08973540;
    case 81u: goto L_08973550;
    case 82u: goto L_08973564;
    case 83u: goto L_08973574;
    case 84u: goto L_08973580;
    case 85u: goto L_08973588;
    case 86u: goto L_08973590;
    case 87u: goto L_08973598;
    case 88u: goto L_089735A0;
    case 89u: goto L_089735AC;
    case 90u: goto L_089735B4;
    case 91u: goto L_089735B8;
    case 92u: goto L_089735C0;
    case 93u: goto L_089735C8;
    case 94u: goto L_089735D4;
    case 95u: goto L_089735DC;
    case 96u: goto L_089735E4;
    case 97u: goto L_089735F0;
    case 98u: goto L_08973608;
    case 99u: goto L_0897361C;
    case 100u: goto L_0897362C;
    case 101u: goto L_0897363C;
    case 102u: goto L_08973648;
    case 103u: goto L_08973654;
    case 104u: goto L_08973664;
    case 105u: goto L_0897367C;
    case 106u: goto L_08973684;
    case 107u: goto L_0897368C;
    case 108u: goto L_08973698;
    case 109u: goto L_089736AC;
    case 110u: goto L_089736B8;
    case 111u: goto L_089736C0;
    case 112u: goto L_089736C8;
    case 113u: goto L_089736E0;
    case 114u: goto L_089736E8;
    case 115u: goto L_089736F0;
    case 116u: goto L_089736F8;
    case 117u: goto L_08973704;
    case 118u: goto L_08973718;
    case 119u: goto L_08973728;
    case 120u: goto L_08973738;
    case 121u: goto L_08973744;
    case 122u: goto L_08973750;
    case 123u: goto L_08973760;
    case 124u: goto L_08973778;
    case 125u: goto L_08973780;
    case 126u: goto L_08973788;
    case 127u: goto L_08973794;
    case 128u: goto L_089737AC;
    case 129u: goto L_089737BC;
    case 130u: goto L_089737C4;
    case 131u: goto L_089737D0;
    case 132u: goto L_089737DC;
    case 133u: goto L_089737E4;
    case 134u: goto L_089737EC;
    case 135u: goto L_089737F4;
    case 136u: goto L_08973808;
    case 137u: goto L_08973818;
    case 138u: goto L_08973828;
    case 139u: goto L_08973834;
    case 140u: goto L_08973840;
    case 141u: goto L_08973850;
    case 142u: goto L_08973868;
    case 143u: goto L_08973870;
    case 144u: goto L_08973878;
    case 145u: goto L_08973884;
    case 146u: goto L_08973898;
    case 147u: goto L_089738A4;
    case 148u: goto L_089738B4;
    case 149u: goto L_089738BC;
    case 150u: goto L_089738C4;
    case 151u: goto L_089738CC;
    case 152u: goto L_089738EC;
    case 153u: goto L_089738F8;
    case 154u: goto L_08973904;
    case 155u: goto L_0897390C;
    case 156u: goto L_0897391C;
    case 157u: goto L_0897392C;
    case 158u: goto L_0897394C;
    case 159u: goto L_0897395C;
    case 160u: goto L_08973968;
    case 161u: goto L_08973980;
    case 162u: goto L_089739A4;
    case 163u: goto L_089739AC;
    case 164u: goto L_089739BC;
    case 165u: goto L_089739D0;
    case 166u: goto L_089739D8;
    case 167u: goto L_089739E0;
    case 168u: goto L_089739E4;
    case 169u: goto L_089739F0;
    case 170u: goto L_089739F8;
    case 171u: goto L_08973A08;
    case 172u: goto L_08973A1C;
    case 173u: goto L_08973A28;
    case 174u: goto L_08973A38;
    case 175u: goto L_08973A58;
    case 176u: goto L_08973A5C;
    case 177u: goto L_08973A6C;
    case 178u: goto L_08973A88;
    case 179u: goto L_08973A90;
    case 180u: goto L_08973A98;
    case 181u: goto L_08973AA4;
    case 182u: goto L_08973ABC;
    case 183u: goto L_08973AC8;
    case 184u: goto L_08973AD4;
    case 185u: goto L_08973AD8;
    case 186u: goto L_08973AF4;
    case 187u: goto L_08973B18;
    case 188u: goto L_08973B28;
    case 189u: goto L_08973B34;
    case 190u: goto L_08973B3C;
    case 191u: goto L_08973B60;
    case 192u: goto L_08973B64;
    case 193u: goto L_08973B78;
    case 194u: goto L_08973B98;
    case 195u: goto L_08973BA4;
    case 196u: goto L_08973BAC;
    case 197u: goto L_08973BB8;
    case 198u: goto L_08973BC0;
    case 199u: goto L_08973BC8;
    case 200u: goto L_08973BD4;
    case 201u: goto L_08973BEC;
    case 202u: goto L_08973C04;
    case 203u: goto L_08973C14;
    case 204u: goto L_08973C20;
    case 205u: goto L_08973C28;
    case 206u: goto L_08973C40;
    case 207u: goto L_08973C44;
    case 208u: goto L_08973C50;
    case 209u: goto L_08973C60;
    case 210u: goto L_08973C6C;
    case 211u: goto L_08973C74;
    case 212u: goto L_08973C8C;
    case 213u: goto L_08973C90;
    case 214u: goto L_08973C9C;
    case 215u: goto L_08973CB4;
    case 216u: goto L_08973CC8;
    case 217u: goto L_08973CD4;
    case 218u: goto L_08973CDC;
    case 219u: goto L_08973CE0;
    case 220u: goto L_08973CF0;
    case 221u: goto L_08973D08;
    case 222u: goto L_08973D1C;
    case 223u: goto L_08973D28;
    case 224u: goto L_08973D30;
    case 225u: goto L_08973D34;
    case 226u: goto L_08973D44;
    case 227u: goto L_08973D5C;
    case 228u: goto L_08973D70;
    case 229u: goto L_08973D78;
    case 230u: goto L_08973D80;
    case 231u: goto L_08973D88;
    case 232u: goto L_08973D90;
    case 233u: goto L_08973D98;
    case 234u: goto L_08973DA0;
    case 235u: goto L_08973DA8;
    case 236u: goto L_08973DB0;
    case 237u: goto L_08973DB8;
    case 238u: goto L_08973DC0;
    case 239u: goto L_08973DC8;
    case 240u: goto L_08973DCC;
    case 241u: goto L_08973DD0;
    case 242u: goto L_08973DD4;
    case 243u: goto L_08973DE4;
    case 244u: goto L_08973E18;
    case 245u: goto L_08973E20;
    case 246u: goto L_08973E38;
    case 247u: goto L_08973E40;
    case 248u: goto L_08973E54;
    case 249u: goto L_08973E58;
    case 250u: goto L_08973E6C;
    case 251u: goto L_08973E78;
    case 252u: goto L_08973E98;
    case 253u: goto L_08973EA4;
    case 254u: goto L_08973EB0;
    case 255u: goto L_08973EB4;
    case 256u: goto L_08973ED0;
    case 257u: goto L_08973F04;
    case 258u: goto L_08973F0C;
    case 259u: goto L_08973F24;
    case 260u: goto L_08973F2C;
    case 261u: goto L_08973F40;
    case 262u: goto L_08973F44;
    case 263u: goto L_08973F58;
    case 264u: goto L_08973F64;
    case 265u: goto L_08973F84;
    case 266u: goto L_08973F90;
    case 267u: goto L_08973F9C;
    case 268u: goto L_08973FA0;
    case 269u: goto L_08973FBC;
    case 270u: goto L_08973FE4;
    case 271u: goto L_08973FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08973000:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897301C;
      }
      goto L_08973008;
    }
L_08973008:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_0897302C;
      }
      goto L_0897301C;
    }
L_0897301C:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0897302C;
L_0897302C:
    aot_gpr[31] = (0x08973034u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0366_entry, 366u, 199u, 0x08972B64u>(ctx, &aot_mem) && ctx.pc == 0x08973034u) goto L_08973034;
    return;
L_08973034:
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
L_0897304C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08973078u);
    aot_gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08973078u) goto L_08973078;
    return;
L_08973078:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973090;
      }
      goto L_08973084;
    }
L_08973084:
    aot_gpr[31] = (0x0897308Cu);
    aot_gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0897308Cu) goto L_0897308C;
    return;
L_0897308C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08973090;
L_08973090:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089730D0;
      }
      goto L_08973098;
    }
L_08973098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089730B8;
      }
      goto L_089730A4;
    }
L_089730A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_089730C8;
      }
      goto L_089730B8;
    }
L_089730B8:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089730C8;
L_089730C8:
    aot_gpr[31] = (0x089730D0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0366_entry, 366u, 199u, 0x08972B64u>(ctx, &aot_mem) && ctx.pc == 0x089730D0u) goto L_089730D0;
    return;
L_089730D0:
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
L_089730EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08973110u);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08973110u) goto L_08973110;
    return;
L_08973110:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973128;
      }
      goto L_0897311C;
    }
L_0897311C:
    aot_gpr[31] = (0x08973124u);
    aot_gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x08973124u) goto L_08973124;
    return;
L_08973124:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08973128;
L_08973128:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973164;
      }
      goto L_08973130;
    }
L_08973130:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897314C;
      }
      goto L_0897313C;
    }
L_0897313C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_0897315C;
      }
      goto L_0897314C;
    }
L_0897314C:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0897315C;
L_0897315C:
    aot_gpr[31] = (0x08973164u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0366_entry, 366u, 199u, 0x08972B64u>(ctx, &aot_mem) && ctx.pc == 0x08973164u) goto L_08973164;
    return;
L_08973164:
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
L_0897317C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (0u | 32u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26420));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089731A0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-27440));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x089731A0u) goto L_089731A0;
    return;
L_089731A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089731AC:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6272));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089731C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973230;
      }
      goto L_089731D0;
    }
L_089731D0:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6272));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089731EC;
      }
      goto L_089731E0;
    }
L_089731E0:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_089731EC;
L_089731EC:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08973230;
      }
      goto L_089731F8;
    }
L_089731F8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973228;
      }
      goto L_08973208;
    }
L_08973208:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973220u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973220u) goto L_08973220;
    return;
L_08973220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973230;
      }
      goto L_08973228;
    }
L_08973228:
    aot_gpr[31] = (0x08973230u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08973230u) goto L_08973230;
    return;
L_08973230:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897323C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-1816));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08973274u);
    aot_gpr[6] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08973274u) goto L_08973274;
    return;
L_08973274:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0897328Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x0897328Cu) goto L_0897328C;
    return;
L_0897328C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089732C4;
      }
      goto L_08973298;
    }
L_08973298:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089732ACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(13280));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 22u, 0x089AB178u>(ctx, &aot_mem) && ctx.pc == 0x089732ACu) goto L_089732AC;
    return;
L_089732AC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 30u);
    aot_gpr[31] = (0x089732BCu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x089732BCu) goto L_089732BC;
    return;
L_089732BC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089732C4;
L_089732C4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089732D4;
      }
      goto L_089732CC;
    }
L_089732CC:
    aot_gpr[31] = (0x089732D4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x089732D4u) goto L_089732D4;
    return;
L_089732D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089732EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089732F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089732FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897330Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x0897330Cu) goto L_0897330C;
    return;
L_0897330C:
    aot_gpr[31] = (0x08973314u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 122u, 0x0896A758u>(ctx, &aot_mem) && ctx.pc == 0x08973314u) goto L_08973314;
    return;
L_08973314:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973320:
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
          goto L_08973368;
      }
      goto L_08973348;
    }
L_08973348:
    aot_gpr[31] = (0x08973350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x08973350u) goto L_08973350;
    return;
L_08973350:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08973360u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 116u, 0x0896A6ACu>(ctx, &aot_mem) && ctx.pc == 0x08973360u) goto L_08973360;
    return;
L_08973360:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08973368;
L_08973368:
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089733C8;
      }
      goto L_08973374;
    }
L_08973374:
    aot_gpr[31] = (0x0897337Cu);
    aot_gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0897337Cu) goto L_0897337C;
    return;
L_0897337C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973394;
      }
      goto L_08973388;
    }
L_08973388:
    aot_gpr[31] = (0x08973390u);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x08973390u) goto L_08973390;
    return;
L_08973390:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08973394;
L_08973394:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089733C8;
      }
      goto L_0897339C;
    }
L_0897339C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089733BC;
      }
      goto L_089733A8;
    }
L_089733A8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x089733B4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x089733B4u) goto L_089733B4;
    return;
L_089733B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089733C8;
      }
      goto L_089733BC;
    }
L_089733BC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089733C8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 135u, 0x0895F84Cu>(ctx, &aot_mem) && ctx.pc == 0x089733C8u) goto L_089733C8;
    return;
L_089733C8:
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
L_089733E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-480));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(460), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(464), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(468), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(472), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08973598;
      }
      goto L_08973400;
    }
L_08973400:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973598;
      }
      goto L_0897340C;
    }
L_0897340C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0897341Cu);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0897341Cu) goto L_0897341C;
    return;
L_0897341C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(372)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(388)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(392)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(396)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(400)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x08973494u);
    aot_gpr[6] = (0u | 248u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08973494u) goto L_08973494;
    return;
L_08973494:
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1816));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(440), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(444), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(428), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(436), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(300));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(308));
    aot_gpr[31] = (0x089734D0u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089734D0u) goto L_089734D0;
    return;
L_089734D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(444)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(448));
      if (branch_taken) {
          goto L_089734F4;
      }
      goto L_089734DC;
    }
L_089734DC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(364));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x089734ECu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089734ECu) goto L_089734EC;
    return;
L_089734EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08973514;
      }
      goto L_089734F4;
    }
L_089734F4:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08973514;
      }
      goto L_08973500;
    }
L_08973500:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(396));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x08973510u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08973510u) goto L_08973510;
    return;
L_08973510:
    aot_gpr[4] = (2216u << 16u);
    goto L_08973514;
L_08973514:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08973538u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973538u) goto L_08973538;
    return;
L_08973538:
    aot_gpr[31] = (0x08973540u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08973540u) goto L_08973540;
    return;
L_08973540:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08973550u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x08973550u) goto L_08973550;
    return;
L_08973550:
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08973564u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(13088));
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 122u, 0x089AAFC0u>(ctx, &aot_mem) && ctx.pc == 0x08973564u) goto L_08973564;
    return;
L_08973564:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 30u);
    aot_gpr[31] = (0x08973574u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08973574u) goto L_08973574;
    return;
L_08973574:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08973588;
      }
      goto L_08973580;
    }
L_08973580:
    aot_gpr[31] = (0x08973588u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x08973588u) goto L_08973588;
    return;
L_08973588:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089735F0;
      }
      goto L_08973590;
    }
L_08973590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089735F0;
      }
      goto L_08973598;
    }
L_08973598:
    aot_gpr[31] = (0x089735A0u);
    aot_gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x089735A0u) goto L_089735A0;
    return;
L_089735A0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089735B8;
      }
      goto L_089735AC;
    }
L_089735AC:
    aot_gpr[31] = (0x089735B4u);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x089735B4u) goto L_089735B4;
    return;
L_089735B4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_089735B8;
L_089735B8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089735F0;
      }
      goto L_089735C0;
    }
L_089735C0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089735DC;
      }
      goto L_089735C8;
    }
L_089735C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x089735D4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x089735D4u) goto L_089735D4;
    return;
L_089735D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089735F0;
      }
      goto L_089735DC;
    }
L_089735DC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089735F0;
      }
      goto L_089735E4;
    }
L_089735E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x089735F0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x089735F0u) goto L_089735F0;
    return;
L_089735F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(460)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(464)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(468)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(472)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973608:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6320));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897361C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897368C;
      }
      goto L_0897362C;
    }
L_0897362C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6320));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08973648;
      }
      goto L_0897363C;
    }
L_0897363C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08973648;
L_08973648:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897368C;
      }
      goto L_08973654;
    }
L_08973654:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973684;
      }
      goto L_08973664;
    }
L_08973664:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897367Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897367Cu) goto L_0897367C;
    return;
L_0897367C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897368C;
      }
      goto L_08973684;
    }
L_08973684:
    aot_gpr[31] = (0x0897368Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0897368Cu) goto L_0897368C;
    return;
L_0897368C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973698:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089736ACu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 24u, 0x0896D120u>(ctx, &aot_mem) && ctx.pc == 0x089736ACu) goto L_089736AC;
    return;
L_089736AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089736B8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089736C0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089736C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (0u | 13u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
      if (branch_taken) {
          goto L_089736F0;
      }
      goto L_089736E0;
    }
L_089736E0:
    aot_gpr[31] = (0x089736E8u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 25u, 0x0896D13Cu>(ctx, &aot_mem) && ctx.pc == 0x089736E8u) goto L_089736E8;
    return;
L_089736E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089736F8;
      }
      goto L_089736F0;
    }
L_089736F0:
    aot_gpr[31] = (0x089736F8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 25u, 0x0896D13Cu>(ctx, &aot_mem) && ctx.pc == 0x089736F8u) goto L_089736F8;
    return;
L_089736F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973704:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6368));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973718:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973788;
      }
      goto L_08973728;
    }
L_08973728:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6368));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08973744;
      }
      goto L_08973738;
    }
L_08973738:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08973744;
L_08973744:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08973788;
      }
      goto L_08973750;
    }
L_08973750:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973780;
      }
      goto L_08973760;
    }
L_08973760:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973778u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973778u) goto L_08973778;
    return;
L_08973778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973788;
      }
      goto L_08973780;
    }
L_08973780:
    aot_gpr[31] = (0x08973788u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08973788u) goto L_08973788;
    return;
L_08973788:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973794:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10240));
      if (branch_taken) {
          goto L_089737C4;
      }
      goto L_089737AC;
    }
L_089737AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089737BCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 25u, 0x0896D13Cu>(ctx, &aot_mem) && ctx.pc == 0x089737BCu) goto L_089737BC;
    return;
L_089737BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089737D0;
      }
      goto L_089737C4;
    }
L_089737C4:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089737D0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 25u, 0x0896D13Cu>(ctx, &aot_mem) && ctx.pc == 0x089737D0u) goto L_089737D0;
    return;
L_089737D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089737DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089737E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089737EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089737F4:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6416));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973808:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973878;
      }
      goto L_08973818;
    }
L_08973818:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6416));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08973834;
      }
      goto L_08973828;
    }
L_08973828:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08973834;
L_08973834:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08973878;
      }
      goto L_08973840;
    }
L_08973840:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973870;
      }
      goto L_08973850;
    }
L_08973850:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973868u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973868u) goto L_08973868;
    return;
L_08973868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973878;
      }
      goto L_08973870;
    }
L_08973870:
    aot_gpr[31] = (0x08973878u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08973878u) goto L_08973878;
    return;
L_08973878:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973884:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08973898u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x08973898u) goto L_08973898;
    return;
L_08973898:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089738A4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 101u, 0x0896A5FCu>(ctx, &aot_mem) && ctx.pc == 0x089738A4u) goto L_089738A4;
    return;
L_089738A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089738B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089738BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089738C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089738CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089738ECu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089738ECu) goto L_089738EC;
    return;
L_089738EC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089738F8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 242u, 0x0897AEA0u>(ctx, &aot_mem) && ctx.pc == 0x089738F8u) goto L_089738F8;
    return;
L_089738F8:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897390C;
      }
      goto L_08973904;
    }
L_08973904:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_0897391C;
      }
      goto L_0897390C;
    }
L_0897390C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0897391Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 100u, 0x089745C8u>(ctx, &aot_mem) && ctx.pc == 0x0897391Cu) goto L_0897391C;
    return;
L_0897391C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897392C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0897394Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x0897394Cu) goto L_0897394C;
    return;
L_0897394C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_0897395C;
    }
    goto L_0897395C;
L_0897395C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08973968u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08973968u) goto L_08973968;
    return;
L_08973968:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973980:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089739D8;
      }
      goto L_089739A4;
    }
L_089739A4:
    aot_gpr[31] = (0x089739ACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0897392C;
L_089739AC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x089739BCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x089739BCu) goto L_089739BC;
    return;
L_089739BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089739E0;
      }
      goto L_089739D0;
    }
L_089739D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973A08;
      }
      goto L_089739D8;
    }
L_089739D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_08973AD8;
      }
      goto L_089739E0;
    }
L_089739E0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089739E4;
L_089739E4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_089739F8;
      }
      goto L_089739F0;
    }
L_089739F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089739F8;
L_089739F8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089739E4;
      }
      goto L_08973A08;
    }
L_08973A08:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08973A6C;
      }
      goto L_08973A1C;
    }
L_08973A1C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973A5C;
      }
      goto L_08973A28;
    }
L_08973A28:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08973A58;
      }
      goto L_08973A38;
    }
L_08973A38:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[8] << 2u);
    aot_gpr[10] = (aot_gpr[16] + aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08973A38;
      }
      goto L_08973A58;
    }
L_08973A58:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08973A5C;
L_08973A5C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08973A1C;
      }
      goto L_08973A6C;
    }
L_08973A6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973A88u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973A88u) goto L_08973A88;
    return;
L_08973A88:
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08973AC8;
      }
      goto L_08973A90;
    }
L_08973A90:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08973AC8;
      }
      goto L_08973A98;
    }
L_08973A98:
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x08973AA4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 123u, 0x08979824u>(ctx, &aot_mem) && ctx.pc == 0x08973AA4u) goto L_08973AA4;
    return;
L_08973AA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(152));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973ABCu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973ABCu) goto L_08973ABC;
    return;
L_08973ABC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08973AC8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x08973AC8u) goto L_08973AC8;
    return;
L_08973AC8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08973AD4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08973AD4u) goto L_08973AD4;
    return;
L_08973AD4:
    aot_gpr[2] = (0u | 0u);
    goto L_08973AD8;
L_08973AD8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973AF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08973B18u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x08973B18u) goto L_08973B18;
    return;
L_08973B18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08973B3C;
      }
      goto L_08973B28;
    }
L_08973B28:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08973B34u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08973B34u) goto L_08973B34;
    return;
L_08973B34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 80u);
      if (branch_taken) {
          goto L_08973B64;
      }
      goto L_08973B3C;
    }
L_08973B3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08973B60u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08973B60u) goto L_08973B60;
    return;
L_08973B60:
    aot_gpr[2] = (0u | 0u);
    goto L_08973B64;
L_08973B64:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973B78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08973B98u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    goto L_0897392C;
L_08973B98:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973BB8;
      }
      goto L_08973BA4;
    }
L_08973BA4:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08973BB8;
      }
      goto L_08973BAC;
    }
L_08973BAC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08973BB8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08973980;
L_08973BB8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973BC8;
      }
      goto L_08973BC0;
    }
L_08973BC0:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08973BD4;
      }
      goto L_08973BC8;
    }
L_08973BC8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08973BD4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08973AF4;
L_08973BD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973BECu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973BECu) goto L_08973BEC;
    return;
L_08973BEC:
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
L_08973C04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08973C14u);
    // nop
    goto L_0897392C;
L_08973C14:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973C28;
      }
      goto L_08973C20;
    }
L_08973C20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_08973C44;
      }
      goto L_08973C28;
    }
L_08973C28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(160));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08973C40u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973C40u) goto L_08973C40;
    return;
L_08973C40:
    aot_gpr[2] = (0u | 0u);
    goto L_08973C44;
L_08973C44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973C50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08973C60u);
    // nop
    goto L_0897392C;
L_08973C60:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973C74;
      }
      goto L_08973C6C;
    }
L_08973C6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_08973C90;
      }
      goto L_08973C74;
    }
L_08973C74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(168));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08973C8Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973C8Cu) goto L_08973C8C;
    return;
L_08973C8C:
    aot_gpr[2] = (0u | 0u);
    goto L_08973C90;
L_08973C90:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973C9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08973CB4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08973CB4u) goto L_08973CB4;
    return;
L_08973CB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08973CC8u);
    aot_gpr[4] = (0u | 1664u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x08973CC8u) goto L_08973CC8;
    return;
L_08973CC8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08973CE0;
      }
      goto L_08973CD4;
    }
L_08973CD4:
    aot_gpr[31] = (0x08973CDCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0376_entry, 376u, 54u, 0x0897C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08973CDCu) goto L_08973CDC;
    return;
L_08973CDC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_08973CE0;
L_08973CE0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973CF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08973D08u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08973D08u) goto L_08973D08;
    return;
L_08973D08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08973D1Cu);
    aot_gpr[4] = (0u | 1456u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x08973D1Cu) goto L_08973D1C;
    return;
L_08973D1C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08973D34;
      }
      goto L_08973D28;
    }
L_08973D28:
    aot_gpr[31] = (0x08973D30u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0376_entry, 376u, 148u, 0x0897C978u>(ctx, &aot_mem) && ctx.pc == 0x08973D30u) goto L_08973D30;
    return;
L_08973D30:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_08973D34;
L_08973D34:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973D44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973D78;
      }
      goto L_08973D5C;
    }
L_08973D5C:
    aot_gpr[16] = (aot_gpr[5] << 2u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973D80;
      }
      goto L_08973D70;
    }
L_08973D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973DD0;
      }
      goto L_08973D78;
    }
L_08973D78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08973DD4;
      }
      goto L_08973D80;
    }
L_08973D80:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973DA8;
      }
      goto L_08973D88;
    }
L_08973D88:
    if (static_cast<std::int32_t>(aot_gpr[5]) > 0) {
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
        goto L_08973DB0;
    }
    goto L_08973D90;
L_08973D90:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08973DC8;
      }
      goto L_08973D98;
    }
L_08973D98:
    aot_gpr[31] = (0x08973DA0u);
    // nop
    goto L_08973C9C;
L_08973DA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08973DCC;
      }
      goto L_08973DA8;
    }
L_08973DA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08973DD4;
      }
      goto L_08973DB0;
    }
L_08973DB0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973DC8;
      }
      goto L_08973DB8;
    }
L_08973DB8:
    aot_gpr[31] = (0x08973DC0u);
    // nop
    goto L_08973CF0;
L_08973DC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08973DCC;
      }
      goto L_08973DC8;
    }
L_08973DC8:
    aot_gpr[4] = (0u | 0u);
    goto L_08973DCC;
L_08973DCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    goto L_08973DD0;
L_08973DD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08973DD4;
L_08973DD4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973DE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973E18u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973E18u) goto L_08973E18;
    return;
L_08973E18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973E6C;
      }
      goto L_08973E20;
    }
L_08973E20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973E38u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973E38u) goto L_08973E38;
    return;
L_08973E38:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
      if (branch_taken) {
          goto L_08973E58;
      }
      goto L_08973E40;
    }
L_08973E40:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973E54u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973E54u) goto L_08973E54;
    return;
L_08973E54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    goto L_08973E58;
L_08973E58:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973E6Cu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973E6Cu) goto L_08973E6C;
    return;
L_08973E6C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08973E78u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08973E78u) goto L_08973E78;
    return;
L_08973E78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973E98u);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973E98u) goto L_08973E98;
    return;
L_08973E98:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08973EA4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08973EA4u) goto L_08973EA4;
    return;
L_08973EA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08973EB4;
      }
      goto L_08973EB0;
    }
L_08973EB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    goto L_08973EB4;
L_08973EB4:
    aot_gpr[2] = (0u | 0u);
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
L_08973ED0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973F04u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973F04u) goto L_08973F04;
    return;
L_08973F04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973F58;
      }
      goto L_08973F0C;
    }
L_08973F0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973F24u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973F24u) goto L_08973F24;
    return;
L_08973F24:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
      if (branch_taken) {
          goto L_08973F44;
      }
      goto L_08973F2C;
    }
L_08973F2C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973F40u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973F40u) goto L_08973F40;
    return;
L_08973F40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    goto L_08973F44;
L_08973F44:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973F58u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973F58u) goto L_08973F58;
    return;
L_08973F58:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08973F64u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08973F64u) goto L_08973F64;
    return;
L_08973F64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08973F84u);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973F84u) goto L_08973F84;
    return;
L_08973F84:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08973F90u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08973F90u) goto L_08973F90;
    return;
L_08973F90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08973FA0;
      }
      goto L_08973F9C;
    }
L_08973F9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
    goto L_08973FA0;
L_08973FA0:
    aot_gpr[2] = (0u | 0u);
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
L_08973FBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 3u, 0x08974014u>(ctx, &aot_mem); return;
      }
      goto L_08973FE4;
    }
L_08973FE4:
    aot_gpr[31] = (0x08973FECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 53u, 0x08975314u>(ctx, &aot_mem) && ctx.pc == 0x08973FECu) goto L_08973FEC;
    return;
L_08973FEC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08974000u);
    aot_gpr[5] = (0u | 1u);
    (void)rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0367(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0367_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_367(Runtime &runtime) {
    runtime.register_generated_unit(367u, 0x08973000u, 4096u, &recomp_unit_0367, &recomp_unit_0367_entry);
    runtime.register_function(0x08973000u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973008u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897301Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897302Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973034u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897304Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973078u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973084u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897308Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973090u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973098u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089730A4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089730B8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089730C8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089730D0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089730ECu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973110u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897311Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973124u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973128u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973130u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897313Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897314Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897315Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973164u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897317Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089731A0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089731ACu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089731C0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089731D0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089731E0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089731ECu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089731F8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973208u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973220u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973228u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973230u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897323Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973274u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897328Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973298u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089732ACu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089732BCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089732C4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089732CCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089732D4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089732ECu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089732F4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089732FCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897330Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973314u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973320u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973348u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973350u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973360u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973368u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973374u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897337Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973388u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973390u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973394u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897339Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089733A8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089733B4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089733BCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089733C8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089733E0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973400u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897340Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897341Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973494u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089734D0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089734DCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089734ECu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089734F4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973500u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973510u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973514u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973538u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973540u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973550u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973564u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973574u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973580u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973588u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973590u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973598u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089735A0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089735ACu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089735B4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089735B8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089735C0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089735C8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089735D4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089735DCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089735E4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089735F0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973608u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897361Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897362Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897363Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973648u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973654u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973664u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897367Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973684u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897368Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973698u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089736ACu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089736B8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089736C0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089736C8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089736E0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089736E8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089736F0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089736F8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973704u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973718u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973728u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973738u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973744u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973750u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973760u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973778u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973780u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973788u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973794u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089737ACu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089737BCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089737C4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089737D0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089737DCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089737E4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089737ECu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089737F4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973808u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973818u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973828u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973834u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973840u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973850u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973868u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973870u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973878u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973884u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973898u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089738A4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089738B4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089738BCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089738C4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089738CCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089738ECu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089738F8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973904u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897390Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897391Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897392Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897394Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x0897395Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973968u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973980u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089739A4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089739ACu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089739BCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089739D0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089739D8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089739E0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089739E4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089739F0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x089739F8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973A08u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973A1Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973A28u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973A38u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973A58u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973A5Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973A6Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973A88u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973A90u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973A98u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973AA4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973ABCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973AC8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973AD4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973AD8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973AF4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973B18u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973B28u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973B34u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973B3Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973B60u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973B64u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973B78u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973B98u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973BA4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973BACu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973BB8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973BC0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973BC8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973BD4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973BECu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C04u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C14u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C20u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C28u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C40u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C44u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C50u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C60u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C6Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C74u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C8Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C90u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973C9Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973CB4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973CC8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973CD4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973CDCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973CE0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973CF0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D08u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D1Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D28u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D30u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D34u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D44u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D5Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D70u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D78u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D80u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D88u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D90u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973D98u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973DA0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973DA8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973DB0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973DB8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973DC0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973DC8u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973DCCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973DD0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973DD4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973DE4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973E18u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973E20u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973E38u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973E40u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973E54u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973E58u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973E6Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973E78u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973E98u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973EA4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973EB0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973EB4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973ED0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973F04u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973F0Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973F24u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973F2Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973F40u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973F44u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973F58u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973F64u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973F84u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973F90u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973F9Cu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973FA0u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973FBCu, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973FE4u, &recomp_unit_0367, "recomp_unit_0367");
    runtime.register_function(0x08973FECu, &recomp_unit_0367, "recomp_unit_0367");
}
} // namespace psprecomp
