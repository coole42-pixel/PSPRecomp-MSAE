#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0113[1022] = {
    1, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 9, 0, 10, 11, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0,
    0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0,
    0, 0, 26, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0,
    0, 36, 0, 37, 0, 38, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 47, 0, 0, 0,
    0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 58,
    0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 85, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0,
    89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0,
    0, 99, 0, 0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 104, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0,
    111, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 121, 0,
    0, 0, 0, 0, 122, 123, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 131, 0, 132, 0,
    0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 0,
    144, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 160, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164,
    0, 165, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0,
    0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0,
    0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0,
    199, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210,
    0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0,
    222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 243,
    0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0,
    252, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263,
    0, 0, 264, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272,
};
void recomp_unit_0113_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08875000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0113[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08875000;
    case 2u: goto L_0887500C;
    case 3u: goto L_08875014;
    case 4u: goto L_08875020;
    case 5u: goto L_0887502C;
    case 6u: goto L_0887503C;
    case 7u: goto L_08875044;
    case 8u: goto L_08875050;
    case 9u: goto L_0887505C;
    case 10u: goto L_08875064;
    case 11u: goto L_08875068;
    case 12u: goto L_08875070;
    case 13u: goto L_08875094;
    case 14u: goto L_088750E8;
    case 15u: goto L_088750F8;
    case 16u: goto L_0887510C;
    case 17u: goto L_08875118;
    case 18u: goto L_08875120;
    case 19u: goto L_08875128;
    case 20u: goto L_0887513C;
    case 21u: goto L_08875148;
    case 22u: goto L_08875150;
    case 23u: goto L_08875164;
    case 24u: goto L_08875170;
    case 25u: goto L_08875178;
    case 26u: goto L_08875188;
    case 27u: goto L_08875194;
    case 28u: goto L_0887519C;
    case 29u: goto L_088751A8;
    case 30u: goto L_088751B8;
    case 31u: goto L_088751C4;
    case 32u: goto L_088751CC;
    case 33u: goto L_088751D8;
    case 34u: goto L_088751E4;
    case 35u: goto L_088751F0;
    case 36u: goto L_08875204;
    case 37u: goto L_0887520C;
    case 38u: goto L_08875214;
    case 39u: goto L_08875218;
    case 40u: goto L_08875248;
    case 41u: goto L_0887529C;
    case 42u: goto L_088752B4;
    case 43u: goto L_088752BC;
    case 44u: goto L_088752C8;
    case 45u: goto L_088752D8;
    case 46u: goto L_088752EC;
    case 47u: goto L_088752F0;
    case 48u: goto L_08875308;
    case 49u: goto L_08875314;
    case 50u: goto L_0887531C;
    case 51u: goto L_08875334;
    case 52u: goto L_0887533C;
    case 53u: goto L_0887534C;
    case 54u: goto L_08875358;
    case 55u: goto L_08875360;
    case 56u: goto L_08875368;
    case 57u: goto L_08875370;
    case 58u: goto L_0887537C;
    case 59u: goto L_08875388;
    case 60u: goto L_08875394;
    case 61u: goto L_088753A0;
    case 62u: goto L_088753B0;
    case 63u: goto L_088753BC;
    case 64u: goto L_088753C4;
    case 65u: goto L_088753D0;
    case 66u: goto L_088753D8;
    case 67u: goto L_088753F0;
    case 68u: goto L_088753F4;
    case 69u: goto L_08875424;
    case 70u: goto L_08875470;
    case 71u: goto L_08875498;
    case 72u: goto L_088754A0;
    case 73u: goto L_088754AC;
    case 74u: goto L_088754B4;
    case 75u: goto L_088754C8;
    case 76u: goto L_088754D8;
    case 77u: goto L_088754E4;
    case 78u: goto L_08875504;
    case 79u: goto L_0887550C;
    case 80u: goto L_08875518;
    case 81u: goto L_08875520;
    case 82u: goto L_08875530;
    case 83u: goto L_08875538;
    case 84u: goto L_0887554C;
    case 85u: goto L_08875550;
    case 86u: goto L_08875560;
    case 87u: goto L_0887556C;
    case 88u: goto L_08875574;
    case 89u: goto L_08875580;
    case 90u: goto L_0887558C;
    case 91u: goto L_08875598;
    case 92u: goto L_088755AC;
    case 93u: goto L_088755B8;
    case 94u: goto L_088755C4;
    case 95u: goto L_088755CC;
    case 96u: goto L_088755D8;
    case 97u: goto L_088755E4;
    case 98u: goto L_088755F8;
    case 99u: goto L_08875604;
    case 100u: goto L_08875610;
    case 101u: goto L_08875618;
    case 102u: goto L_08875624;
    case 103u: goto L_0887562C;
    case 104u: goto L_08875634;
    case 105u: goto L_08875638;
    case 106u: goto L_08875668;
    case 107u: goto L_088756AC;
    case 108u: goto L_088756C8;
    case 109u: goto L_088756DC;
    case 110u: goto L_088756E4;
    case 111u: goto L_08875700;
    case 112u: goto L_08875704;
    case 113u: goto L_0887570C;
    case 114u: goto L_08875720;
    case 115u: goto L_0887572C;
    case 116u: goto L_08875740;
    case 117u: goto L_08875748;
    case 118u: goto L_08875758;
    case 119u: goto L_08875764;
    case 120u: goto L_08875770;
    case 121u: goto L_08875778;
    case 122u: goto L_08875790;
    case 123u: goto L_08875794;
    case 124u: goto L_088757A0;
    case 125u: goto L_088757A8;
    case 126u: goto L_088757B8;
    case 127u: goto L_088757C0;
    case 128u: goto L_088757C8;
    case 129u: goto L_088757D8;
    case 130u: goto L_088757EC;
    case 131u: goto L_088757F0;
    case 132u: goto L_088757F8;
    case 133u: goto L_0887580C;
    case 134u: goto L_08875814;
    case 135u: goto L_08875828;
    case 136u: goto L_08875830;
    case 137u: goto L_0887583C;
    case 138u: goto L_08875848;
    case 139u: goto L_08875850;
    case 140u: goto L_08875858;
    case 141u: goto L_08875860;
    case 142u: goto L_08875868;
    case 143u: goto L_08875874;
    case 144u: goto L_08875880;
    case 145u: goto L_08875888;
    case 146u: goto L_08875894;
    case 147u: goto L_088758A4;
    case 148u: goto L_088758B0;
    case 149u: goto L_088758B8;
    case 150u: goto L_088758C4;
    case 151u: goto L_088758CC;
    case 152u: goto L_088758D8;
    case 153u: goto L_088758E0;
    case 154u: goto L_088758F8;
    case 155u: goto L_088758FC;
    case 156u: goto L_0887592C;
    case 157u: goto L_08875984;
    case 158u: goto L_088759A4;
    case 159u: goto L_088759BC;
    case 160u: goto L_088759C0;
    case 161u: goto L_088759C8;
    case 162u: goto L_088759E0;
    case 163u: goto L_088759E8;
    case 164u: goto L_088759FC;
    case 165u: goto L_08875A04;
    case 166u: goto L_08875A0C;
    case 167u: goto L_08875A18;
    case 168u: goto L_08875A24;
    case 169u: goto L_08875A2C;
    case 170u: goto L_08875A40;
    case 171u: goto L_08875A50;
    case 172u: goto L_08875A5C;
    case 173u: goto L_08875A64;
    case 174u: goto L_08875A6C;
    case 175u: goto L_08875A74;
    case 176u: goto L_08875A84;
    case 177u: goto L_08875A90;
    case 178u: goto L_08875A9C;
    case 179u: goto L_08875AA8;
    case 180u: goto L_08875AB4;
    case 181u: goto L_08875ABC;
    case 182u: goto L_08875AC8;
    case 183u: goto L_08875AD0;
    case 184u: goto L_08875AD8;
    case 185u: goto L_08875AE0;
    case 186u: goto L_08875AE8;
    case 187u: goto L_08875AF0;
    case 188u: goto L_08875AF8;
    case 189u: goto L_08875B04;
    case 190u: goto L_08875B10;
    case 191u: goto L_08875B28;
    case 192u: goto L_08875B30;
    case 193u: goto L_08875B3C;
    case 194u: goto L_08875B48;
    case 195u: goto L_08875B50;
    case 196u: goto L_08875B64;
    case 197u: goto L_08875B6C;
    case 198u: goto L_08875B78;
    case 199u: goto L_08875B80;
    case 200u: goto L_08875B88;
    case 201u: goto L_08875B98;
    case 202u: goto L_08875BA4;
    case 203u: goto L_08875BAC;
    case 204u: goto L_08875BB4;
    case 205u: goto L_08875BBC;
    case 206u: goto L_08875BCC;
    case 207u: goto L_08875BD8;
    case 208u: goto L_08875BE4;
    case 209u: goto L_08875BF0;
    case 210u: goto L_08875BFC;
    case 211u: goto L_08875C04;
    case 212u: goto L_08875C10;
    case 213u: goto L_08875C18;
    case 214u: goto L_08875C20;
    case 215u: goto L_08875C2C;
    case 216u: goto L_08875C38;
    case 217u: goto L_08875C48;
    case 218u: goto L_08875C54;
    case 219u: goto L_08875C5C;
    case 220u: goto L_08875C6C;
    case 221u: goto L_08875C78;
    case 222u: goto L_08875C80;
    case 223u: goto L_08875C90;
    case 224u: goto L_08875C9C;
    case 225u: goto L_08875CA8;
    case 226u: goto L_08875CB4;
    case 227u: goto L_08875CC0;
    case 228u: goto L_08875CC8;
    case 229u: goto L_08875CD4;
    case 230u: goto L_08875CDC;
    case 231u: goto L_08875CF4;
    case 232u: goto L_08875CF8;
    case 233u: goto L_08875D28;
    case 234u: goto L_08875D7C;
    case 235u: goto L_08875D94;
    case 236u: goto L_08875DAC;
    case 237u: goto L_08875DB0;
    case 238u: goto L_08875DB8;
    case 239u: goto L_08875DD0;
    case 240u: goto L_08875DD8;
    case 241u: goto L_08875DEC;
    case 242u: goto L_08875DF4;
    case 243u: goto L_08875DFC;
    case 244u: goto L_08875E10;
    case 245u: goto L_08875E1C;
    case 246u: goto L_08875E2C;
    case 247u: goto L_08875E3C;
    case 248u: goto L_08875E4C;
    case 249u: goto L_08875E5C;
    case 250u: goto L_08875E64;
    case 251u: goto L_08875E6C;
    case 252u: goto L_08875E80;
    case 253u: goto L_08875E88;
    case 254u: goto L_08875E98;
    case 255u: goto L_08875EA4;
    case 256u: goto L_08875EAC;
    case 257u: goto L_08875EB4;
    case 258u: goto L_08875EBC;
    case 259u: goto L_08875EC4;
    case 260u: goto L_08875ED0;
    case 261u: goto L_08875EDC;
    case 262u: goto L_08875EF0;
    case 263u: goto L_08875EFC;
    case 264u: goto L_08875F08;
    case 265u: goto L_08875F10;
    case 266u: goto L_08875F1C;
    case 267u: goto L_08875F24;
    case 268u: goto L_08875F38;
    case 269u: goto L_08875F3C;
    case 270u: goto L_08875F6C;
    case 271u: goto L_08875FC4;
    case 272u: goto L_08875FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08875000:
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875068;
      }
      goto L_0887500C;
    }
L_0887500C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08875068;
      }
      goto L_08875014;
    }
L_08875014:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875044;
      }
      goto L_08875020;
    }
L_08875020:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0887502Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 147u, 0x08874884u>(ctx, &aot_mem) && ctx.pc == 0x0887502Cu) goto L_0887502C;
    return;
L_0887502C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875068;
      }
      goto L_0887503C;
    }
L_0887503C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08875068;
      }
      goto L_08875044;
    }
L_08875044:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875068;
      }
      goto L_08875050;
    }
L_08875050:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0887505Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 133u, 0x088747ECu>(ctx, &aot_mem) && ctx.pc == 0x0887505Cu) goto L_0887505C;
    return;
L_0887505C:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08875068;
      }
      goto L_08875064;
    }
L_08875064:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08875068;
L_08875068:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 281u, 0x08874FBCu>(ctx, &aot_mem); return;
      }
      goto L_08875070;
    }
L_08875070:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08875094:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[23] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-4360)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 5u);
      if (branch_taken) {
          goto L_08875214;
      }
      goto L_088750E8;
    }
L_088750E8:
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(128));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(384));
    aot_gpr[22] = (0u | 1u);
    aot_gpr[18] = (2215u << 16u);
    goto L_088750F8;
L_088750F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887510Cu);
    aot_gpr[22] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 188u, 0x0881CD10u>(ctx, &aot_mem) && ctx.pc == 0x0887510Cu) goto L_0887510C;
    return;
L_0887510C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08875118u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 247u, 0x08874D98u>(ctx, &aot_mem) && ctx.pc == 0x08875118u) goto L_08875118;
    return;
L_08875118:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088751F0;
      }
      goto L_08875120;
    }
L_08875120:
    { const bool branch_taken = aot_gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875150;
      }
      goto L_08875128;
    }
L_08875128:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887513Cu);
    aot_gpr[22] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 188u, 0x0881CD10u>(ctx, &aot_mem) && ctx.pc == 0x0887513Cu) goto L_0887513C;
    return;
L_0887513C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08875148u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 261u, 0x08874E50u>(ctx, &aot_mem) && ctx.pc == 0x08875148u) goto L_08875148;
    return;
L_08875148:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[21];
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088751F0;
      }
      goto L_08875150;
    }
L_08875150:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08875164u);
    aot_gpr[22] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 188u, 0x0881CD10u>(ctx, &aot_mem) && ctx.pc == 0x08875164u) goto L_08875164;
    return;
L_08875164:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08875170u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 271u, 0x08874EF0u>(ctx, &aot_mem) && ctx.pc == 0x08875170u) goto L_08875170;
    return;
L_08875170:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088751E4;
      }
      goto L_08875178;
    }
L_08875178:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_gpr[4] = (0u | 376u);
    aot_gpr[31] = (0x08875188u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08875188u) goto L_08875188;
    return;
L_08875188:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08875194u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875194u) goto L_08875194;
    return;
L_08875194:
    aot_gpr[31] = (0x0887519Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 189u, 0x0881CD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0887519Cu) goto L_0887519C;
    return;
L_0887519C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088751A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 190u, 0x0881CD48u>(ctx, &aot_mem) && ctx.pc == 0x088751A8u) goto L_088751A8;
    return;
L_088751A8:
    aot_gpr[5] = (aot_gpr[2] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x088751B8u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088751B8u) goto L_088751B8;
    return;
L_088751B8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088751C4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088751C4u) goto L_088751C4;
    return;
L_088751C4:
    aot_gpr[31] = (0x088751CCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 192u, 0x0881CD80u>(ctx, &aot_mem) && ctx.pc == 0x088751CCu) goto L_088751CC;
    return;
L_088751CC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088751D8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088751D8u) goto L_088751D8;
    return;
L_088751D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(517), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088751E4;
L_088751E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887520C;
      }
      goto L_088751F0;
    }
L_088751F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-4360)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088750F8;
      }
      goto L_08875204;
    }
L_08875204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08875214;
      }
      goto L_0887520C;
    }
L_0887520C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_08875218;
      }
      goto L_08875214;
    }
L_08875214:
    aot_gpr[2] = (0u | 0u);
    goto L_08875218;
L_08875218:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875248:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[5] & 255u);
    aot_gpr[22] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088753F0;
      }
      goto L_0887529C;
    }
L_0887529C:
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[30] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(7480));
    aot_gpr[19] = (2215u << 16u);
    goto L_088752B4;
L_088752B4:
    aot_gpr[31] = (0x088752BCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 74u, 0x0881C544u>(ctx, &aot_mem) && ctx.pc == 0x088752BCu) goto L_088752BC;
    return;
L_088752BC:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
      if (branch_taken) {
          goto L_088752D8;
      }
      goto L_088752C8;
    }
L_088752C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088753D8;
      }
      goto L_088752D8;
    }
L_088752D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3304)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08875334;
      }
      goto L_088752EC;
    }
L_088752EC:
    aot_gpr[16] = (0u | 0u);
    goto L_088752F0;
L_088752F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3308)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08875308u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 75u, 0x0881C560u>(ctx, &aot_mem) && ctx.pc == 0x08875308u) goto L_08875308;
    return;
L_08875308:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0887531C;
      }
      goto L_08875314;
    }
L_08875314:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08875334;
      }
      goto L_0887531C;
    }
L_0887531C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3304)));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088752F0;
      }
      goto L_08875334;
    }
L_08875334:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088753D8;
      }
      goto L_0887533C;
    }
L_0887533C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0887534Cu);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 75u, 0x0881C560u>(ctx, &aot_mem) && ctx.pc == 0x0887534Cu) goto L_0887534C;
    return;
L_0887534C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08875358u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 131u, 0x088747B4u>(ctx, &aot_mem) && ctx.pc == 0x08875358u) goto L_08875358;
    return;
L_08875358:
    { const bool branch_taken = aot_gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875368;
      }
      goto L_08875360;
    }
L_08875360:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088753D8;
      }
      goto L_08875368;
    }
L_08875368:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088753C4;
      }
      goto L_08875370;
    }
L_08875370:
    aot_gpr[4] = (0u | 295u);
    aot_gpr[31] = (0x0887537Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887537Cu) goto L_0887537C;
    return;
L_0887537C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08875388u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875388u) goto L_08875388;
    return;
L_08875388:
    aot_gpr[4] = (0u | 300u);
    aot_gpr[31] = (0x08875394u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08875394u) goto L_08875394;
    return;
L_08875394:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088753A0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 75u, 0x0881C560u>(ctx, &aot_mem) && ctx.pc == 0x088753A0u) goto L_088753A0;
    return;
L_088753A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x088753B0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088753B0u) goto L_088753B0;
    return;
L_088753B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088753BCu);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088753BCu) goto L_088753BC;
    return;
L_088753BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(517), static_cast<std::uint8_t>(0u));
    goto L_088753C4;
L_088753C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088753D8;
      }
      goto L_088753D0;
    }
L_088753D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088753F4;
      }
      goto L_088753D8;
    }
L_088753D8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088752B4;
      }
      goto L_088753F0;
    }
L_088753F0:
    aot_gpr[2] = (0u | 0u);
    goto L_088753F4;
L_088753F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875424:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x08875470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 280u, 0x08874F88u>(ctx, &aot_mem) && ctx.pc == 0x08875470u) goto L_08875470;
    return;
L_08875470:
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[21] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[23] = (0u | 2u);
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(128));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(384));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(7508));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(7540));
    aot_gpr[30] = (2215u << 16u);
    goto L_08875498;
L_08875498:
    aot_gpr[31] = (0x088754A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x0881C1D8u>(ctx, &aot_mem) && ctx.pc == 0x088754A0u) goto L_088754A0;
    return;
L_088754A0:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875634;
      }
      goto L_088754AC;
    }
L_088754AC:
    aot_gpr[31] = (0x088754B4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x0881C224u>(ctx, &aot_mem) && ctx.pc == 0x088754B4u) goto L_088754B4;
    return;
L_088754B4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_0887562C;
      }
      goto L_088754C8;
    }
L_088754C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887562C;
      }
      goto L_088754D8;
    }
L_088754D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887562C;
      }
      goto L_088754E4;
    }
L_088754E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4200)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875530;
      }
      goto L_08875504;
    }
L_08875504:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[5] | 0u);
    goto L_0887550C;
L_0887550C:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4204)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_08875520;
      }
      goto L_08875518;
    }
L_08875518:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08875530;
      }
      goto L_08875520;
    }
L_08875520:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887550C;
      }
      goto L_08875530;
    }
L_08875530:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887562C;
      }
      goto L_08875538;
    }
L_08875538:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08875550;
      }
      goto L_0887554C;
    }
L_0887554C:
    aot_gpr[4] = (0u | 1u);
    goto L_08875550;
L_08875550:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887562C;
      }
      goto L_08875560;
    }
L_08875560:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0887556Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 132u, 0x088747D0u>(ctx, &aot_mem) && ctx.pc == 0x0887556Cu) goto L_0887556C;
    return;
L_0887556C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875618;
      }
      goto L_08875574;
    }
L_08875574:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_088755CC;
      }
      goto L_08875580;
    }
L_08875580:
    aot_gpr[4] = (0u | 298u);
    aot_gpr[31] = (0x0887558Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887558Cu) goto L_0887558C;
    return;
L_0887558C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08875598u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875598u) goto L_08875598;
    return;
L_08875598:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x088755ACu);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088755ACu) goto L_088755AC;
    return;
L_088755AC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088755B8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088755B8u) goto L_088755B8;
    return;
L_088755B8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088755C4u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088755C4u) goto L_088755C4;
    return;
L_088755C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08875610;
      }
      goto L_088755CC;
    }
L_088755CC:
    aot_gpr[4] = (0u | 297u);
    aot_gpr[31] = (0x088755D8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088755D8u) goto L_088755D8;
    return;
L_088755D8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088755E4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088755E4u) goto L_088755E4;
    return;
L_088755E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x088755F8u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088755F8u) goto L_088755F8;
    return;
L_088755F8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08875604u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875604u) goto L_08875604;
    return;
L_08875604:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08875610u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875610u) goto L_08875610;
    return;
L_08875610:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(517), static_cast<std::uint8_t>(0u));
    goto L_08875618;
L_08875618:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887562C;
      }
      goto L_08875624;
    }
L_08875624:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08875638;
      }
      goto L_0887562C;
    }
L_0887562C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08875498;
      }
      goto L_08875634;
    }
L_08875634:
    aot_gpr[2] = (0u | 0u);
    goto L_08875638;
L_08875638:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875668:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[5] & 255u);
    aot_gpr[21] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x088756ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 280u, 0x08874F88u>(ctx, &aot_mem) && ctx.pc == 0x088756ACu) goto L_088756AC;
    return;
L_088756AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6208)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088758F8;
      }
      goto L_088756C8;
    }
L_088756C8:
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[30] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[19] = (2215u << 16u);
    goto L_088756DC;
L_088756DC:
    aot_gpr[31] = (0x088756E4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 182u, 0x0881BFE8u>(ctx, &aot_mem) && ctx.pc == 0x088756E4u) goto L_088756E4;
    return;
L_088756E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3172)));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08875740;
      }
      goto L_08875700;
    }
L_08875700:
    aot_gpr[16] = (0u | 0u);
    goto L_08875704;
L_08875704:
    aot_gpr[31] = (0x0887570Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 176u, 0x0881BEE8u>(ctx, &aot_mem) && ctx.pc == 0x0887570Cu) goto L_0887570C;
    return;
L_0887570C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3176)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887572C;
      }
      goto L_08875720;
    }
L_08875720:
    aot_gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3240), 0u);
      if (branch_taken) {
          goto L_08875740;
      }
      goto L_0887572C;
    }
L_0887572C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3172)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08875704;
      }
      goto L_08875740;
    }
L_08875740:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875764;
      }
      goto L_08875748;
    }
L_08875748:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08875758u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 176u, 0x0881BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08875758u) goto L_08875758;
    return;
L_08875758:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08875764u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 130u, 0x08874790u>(ctx, &aot_mem) && ctx.pc == 0x08875764u) goto L_08875764;
    return;
L_08875764:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[31] = (0x08875770u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 176u, 0x0881BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08875770u) goto L_08875770;
    return;
L_08875770:
    aot_gpr[31] = (0x08875778u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 4u, 0x0881C058u>(ctx, &aot_mem) && ctx.pc == 0x08875778u) goto L_08875778;
    return;
L_08875778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3304)));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088757B8;
      }
      goto L_08875790;
    }
L_08875790:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    goto L_08875794;
L_08875794:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(3308)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088757A8;
      }
      goto L_088757A0;
    }
L_088757A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088757B8;
      }
      goto L_088757A8;
    }
L_088757A8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08875794;
      }
      goto L_088757B8;
    }
L_088757B8:
    { const bool branch_taken = aot_gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088757D8;
      }
      goto L_088757C0;
    }
L_088757C0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088758E0;
      }
      goto L_088757C8;
    }
L_088757C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088758E0;
      }
      goto L_088757D8;
    }
L_088757D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3104)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08875828;
      }
      goto L_088757EC;
    }
L_088757EC:
    aot_gpr[16] = (0u | 0u);
    goto L_088757F0;
L_088757F0:
    aot_gpr[31] = (0x088757F8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 176u, 0x0881BEE8u>(ctx, &aot_mem) && ctx.pc == 0x088757F8u) goto L_088757F8;
    return;
L_088757F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3108)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08875814;
      }
      goto L_0887580C;
    }
L_0887580C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08875828;
      }
      goto L_08875814;
    }
L_08875814:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3104)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088757F0;
      }
      goto L_08875828;
    }
L_08875828:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088758E0;
      }
      goto L_08875830;
    }
L_08875830:
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0887583Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 176u, 0x0881BEE8u>(ctx, &aot_mem) && ctx.pc == 0x0887583Cu) goto L_0887583C;
    return;
L_0887583C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08875848u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 129u, 0x08874774u>(ctx, &aot_mem) && ctx.pc == 0x08875848u) goto L_08875848;
    return;
L_08875848:
    { const bool branch_taken = aot_gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875860;
      }
      goto L_08875850;
    }
L_08875850:
    aot_gpr[31] = (0x08875858u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 182u, 0x0881BFE8u>(ctx, &aot_mem) && ctx.pc == 0x08875858u) goto L_08875858;
    return;
L_08875858:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088758E0;
      }
      goto L_08875860;
    }
L_08875860:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088758CC;
      }
      goto L_08875868;
    }
L_08875868:
    aot_gpr[4] = (0u | 296u);
    aot_gpr[31] = (0x08875874u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08875874u) goto L_08875874;
    return;
L_08875874:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08875880u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875880u) goto L_08875880;
    return;
L_08875880:
    aot_gpr[31] = (0x08875888u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 1u, 0x0881C004u>(ctx, &aot_mem) && ctx.pc == 0x08875888u) goto L_08875888;
    return;
L_08875888:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08875894u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 2u, 0x0881C020u>(ctx, &aot_mem) && ctx.pc == 0x08875894u) goto L_08875894;
    return;
L_08875894:
    aot_gpr[5] = (aot_gpr[2] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x088758A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088758A4u) goto L_088758A4;
    return;
L_088758A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088758B0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088758B0u) goto L_088758B0;
    return;
L_088758B0:
    aot_gpr[31] = (0x088758B8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 3u, 0x0881C03Cu>(ctx, &aot_mem) && ctx.pc == 0x088758B8u) goto L_088758B8;
    return;
L_088758B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088758C4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088758C4u) goto L_088758C4;
    return;
L_088758C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(517), static_cast<std::uint8_t>(aot_gpr[30]));
    goto L_088758CC;
L_088758CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088758E0;
      }
      goto L_088758D8;
    }
L_088758D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_088758FC;
      }
      goto L_088758E0;
    }
L_088758E0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6208)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088756DC;
      }
      goto L_088758F8;
    }
L_088758F8:
    aot_gpr[2] = (0u | 0u);
    goto L_088758FC;
L_088758FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887592C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08875CF4;
      }
      goto L_08875984;
    }
L_08875984:
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[30] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-5672));
    aot_gpr[20] = (2215u << 16u);
    goto L_088759A4;
L_088759A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3372)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088759FC;
      }
      goto L_088759BC;
    }
L_088759BC:
    aot_gpr[16] = (0u | 0u);
    goto L_088759C0;
L_088759C0:
    aot_gpr[31] = (0x088759C8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 87u, 0x0881C63Cu>(ctx, &aot_mem) && ctx.pc == 0x088759C8u) goto L_088759C8;
    return;
L_088759C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(3376));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088759E8;
      }
      goto L_088759E0;
    }
L_088759E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_088759FC;
      }
      goto L_088759E8;
    }
L_088759E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3372)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088759C0;
      }
      goto L_088759FC;
    }
L_088759FC:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875CDC;
      }
      goto L_08875A04;
    }
L_08875A04:
    aot_gpr[31] = (0x08875A0Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 89u, 0x0881C674u>(ctx, &aot_mem) && ctx.pc == 0x08875A0Cu) goto L_08875A0C;
    return;
L_08875A0C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08875AC8;
      }
      goto L_08875A18;
    }
L_08875A18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875A40;
      }
      goto L_08875A24;
    }
L_08875A24:
    aot_gpr[31] = (0x08875A2Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 89u, 0x0881C674u>(ctx, &aot_mem) && ctx.pc == 0x08875A2Cu) goto L_08875A2C;
    return;
L_08875A2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875AC8;
      }
      goto L_08875A40;
    }
L_08875A40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08875A50u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 87u, 0x0881C63Cu>(ctx, &aot_mem) && ctx.pc == 0x08875A50u) goto L_08875A50;
    return;
L_08875A50:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08875A5Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 172u, 0x08874998u>(ctx, &aot_mem) && ctx.pc == 0x08875A5Cu) goto L_08875A5C;
    return;
L_08875A5C:
    aot_gpr[31] = (0x08875A64u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 89u, 0x0881C674u>(ctx, &aot_mem) && ctx.pc == 0x08875A64u) goto L_08875A64;
    return;
L_08875A64:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875AC8;
      }
      goto L_08875A6C;
    }
L_08875A6C:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875ABC;
      }
      goto L_08875A74;
    }
L_08875A74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 258u);
    aot_gpr[31] = (0x08875A84u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08875A84u) goto L_08875A84;
    return;
L_08875A84:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08875A90u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875A90u) goto L_08875A90;
    return;
L_08875A90:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(52))))));
    aot_gpr[31] = (0x08875A9Cu);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(54))))));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08875A9Cu) goto L_08875A9C;
    return;
L_08875A9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08875AA8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875AA8u) goto L_08875AA8;
    return;
L_08875AA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08875AB4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875AB4u) goto L_08875AB4;
    return;
L_08875AB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(517), static_cast<std::uint8_t>(aot_gpr[30]));
    goto L_08875ABC;
L_08875ABC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875AE0;
      }
      goto L_08875AC8;
    }
L_08875AC8:
    aot_gpr[31] = (0x08875AD0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 90u, 0x0881C690u>(ctx, &aot_mem) && ctx.pc == 0x08875AD0u) goto L_08875AD0;
    return;
L_08875AD0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875AE8;
      }
      goto L_08875AD8;
    }
L_08875AD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08875C18;
      }
      goto L_08875AE0;
    }
L_08875AE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08875CF8;
      }
      goto L_08875AE8;
    }
L_08875AE8:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    goto L_08875AF0;
L_08875AF0:
    aot_gpr[31] = (0x08875AF8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 90u, 0x0881C690u>(ctx, &aot_mem) && ctx.pc == 0x08875AF8u) goto L_08875AF8;
    return;
L_08875AF8:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875B6C;
      }
      goto L_08875B04;
    }
L_08875B04:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08875B10u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 91u, 0x0881C6ACu>(ctx, &aot_mem) && ctx.pc == 0x08875B10u) goto L_08875B10;
    return;
L_08875B10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08875B64;
      }
      goto L_08875B28;
    }
L_08875B28:
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(544));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08875B30;
L_08875B30:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_08875B50;
      }
      goto L_08875B3C;
    }
L_08875B3C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08875B50;
      }
      goto L_08875B48;
    }
L_08875B48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08875B64;
      }
      goto L_08875B50;
    }
L_08875B50:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08875B30;
      }
      goto L_08875B64;
    }
L_08875B64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08875AF0;
      }
      goto L_08875B6C;
    }
L_08875B6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875B88;
      }
      goto L_08875B78;
    }
L_08875B78:
    aot_gpr[31] = (0x08875B80u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 90u, 0x0881C690u>(ctx, &aot_mem) && ctx.pc == 0x08875B80u) goto L_08875B80;
    return;
L_08875B80:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08875C18;
      }
      goto L_08875B88;
    }
L_08875B88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08875B98u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 87u, 0x0881C63Cu>(ctx, &aot_mem) && ctx.pc == 0x08875B98u) goto L_08875B98;
    return;
L_08875B98:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08875BA4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 172u, 0x08874998u>(ctx, &aot_mem) && ctx.pc == 0x08875BA4u) goto L_08875BA4;
    return;
L_08875BA4:
    aot_gpr[31] = (0x08875BACu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 90u, 0x0881C690u>(ctx, &aot_mem) && ctx.pc == 0x08875BACu) goto L_08875BAC;
    return;
L_08875BAC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875C18;
      }
      goto L_08875BB4;
    }
L_08875BB4:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875C04;
      }
      goto L_08875BBC;
    }
L_08875BBC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 258u);
    aot_gpr[31] = (0x08875BCCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08875BCCu) goto L_08875BCC;
    return;
L_08875BCC:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08875BD8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875BD8u) goto L_08875BD8;
    return;
L_08875BD8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(52))))));
    aot_gpr[31] = (0x08875BE4u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(54))))));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08875BE4u) goto L_08875BE4;
    return;
L_08875BE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08875BF0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875BF0u) goto L_08875BF0;
    return;
L_08875BF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08875BFCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875BFCu) goto L_08875BFC;
    return;
L_08875BFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(517), static_cast<std::uint8_t>(aot_gpr[30]));
    goto L_08875C04;
L_08875C04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875C18;
      }
      goto L_08875C10;
    }
L_08875C10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08875CF8;
      }
      goto L_08875C18;
    }
L_08875C18:
    aot_gpr[31] = (0x08875C20u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 93u, 0x0881C6D8u>(ctx, &aot_mem) && ctx.pc == 0x08875C20u) goto L_08875C20;
    return;
L_08875C20:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08875CDC;
      }
      goto L_08875C2C;
    }
L_08875C2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875C5C;
      }
      goto L_08875C38;
    }
L_08875C38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08875C48u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 93u, 0x0881C6D8u>(ctx, &aot_mem) && ctx.pc == 0x08875C48u) goto L_08875C48;
    return;
L_08875C48:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08875C54u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 208u, 0x08874BA0u>(ctx, &aot_mem) && ctx.pc == 0x08875C54u) goto L_08875C54;
    return;
L_08875C54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875CDC;
      }
      goto L_08875C5C;
    }
L_08875C5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08875C6Cu);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 87u, 0x0881C63Cu>(ctx, &aot_mem) && ctx.pc == 0x08875C6Cu) goto L_08875C6C;
    return;
L_08875C6C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08875C78u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 172u, 0x08874998u>(ctx, &aot_mem) && ctx.pc == 0x08875C78u) goto L_08875C78;
    return;
L_08875C78:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875CC8;
      }
      goto L_08875C80;
    }
L_08875C80:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 258u);
    aot_gpr[31] = (0x08875C90u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08875C90u) goto L_08875C90;
    return;
L_08875C90:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08875C9Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875C9Cu) goto L_08875C9C;
    return;
L_08875C9C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(52))))));
    aot_gpr[31] = (0x08875CA8u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(54))))));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08875CA8u) goto L_08875CA8;
    return;
L_08875CA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08875CB4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875CB4u) goto L_08875CB4;
    return;
L_08875CB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08875CC0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875CC0u) goto L_08875CC0;
    return;
L_08875CC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(517), static_cast<std::uint8_t>(aot_gpr[30]));
    goto L_08875CC8;
L_08875CC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875CDC;
      }
      goto L_08875CD4;
    }
L_08875CD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08875CF8;
      }
      goto L_08875CDC;
    }
L_08875CDC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088759A4;
      }
      goto L_08875CF4;
    }
L_08875CF4:
    aot_gpr[2] = (0u | 0u);
    goto L_08875CF8;
L_08875CF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875D28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    aot_gpr[21] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[6] | 0u);
    aot_gpr[23] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-5416)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08875F38;
      }
      goto L_08875D7C;
    }
L_08875D7C:
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[30] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(7576));
    aot_gpr[18] = (2215u << 16u);
    goto L_08875D94;
L_08875D94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3504)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08875DEC;
      }
      goto L_08875DAC;
    }
L_08875DAC:
    aot_gpr[16] = (0u | 0u);
    goto L_08875DB0;
L_08875DB0:
    aot_gpr[31] = (0x08875DB8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 113u, 0x0881C7F0u>(ctx, &aot_mem) && ctx.pc == 0x08875DB8u) goto L_08875DB8;
    return;
L_08875DB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(3508));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08875DD8;
      }
      goto L_08875DD0;
    }
L_08875DD0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08875DEC;
      }
      goto L_08875DD8;
    }
L_08875DD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3504)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08875DB0;
      }
      goto L_08875DEC;
    }
L_08875DEC:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875F24;
      }
      goto L_08875DF4;
    }
L_08875DF4:
    aot_gpr[31] = (0x08875DFCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 114u, 0x0881C80Cu>(ctx, &aot_mem) && ctx.pc == 0x08875DFCu) goto L_08875DFC;
    return;
L_08875DFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875F24;
      }
      goto L_08875E10;
    }
L_08875E10:
    aot_gpr[20] = (0u | 1u);
    aot_gpr[31] = (0x08875E1Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 115u, 0x0881C828u>(ctx, &aot_mem) && ctx.pc == 0x08875E1Cu) goto L_08875E1C;
    return;
L_08875E1C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875E80;
      }
      goto L_08875E2C;
    }
L_08875E2C:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875E80;
      }
      goto L_08875E3C;
    }
L_08875E3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08875E6C;
      }
      goto L_08875E4C;
    }
L_08875E4C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08875E5Cu);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 208u, 0x08874BA0u>(ctx, &aot_mem) && ctx.pc == 0x08875E5Cu) goto L_08875E5C;
    return;
L_08875E5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875E6C;
      }
      goto L_08875E64;
    }
L_08875E64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08875E80;
      }
      goto L_08875E6C;
    }
L_08875E6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875E3C;
      }
      goto L_08875E80;
    }
L_08875E80:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875F24;
      }
      goto L_08875E88;
    }
L_08875E88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08875E98u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 113u, 0x0881C7F0u>(ctx, &aot_mem) && ctx.pc == 0x08875E98u) goto L_08875E98;
    return;
L_08875E98:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08875EA4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 182u, 0x08874A34u>(ctx, &aot_mem) && ctx.pc == 0x08875EA4u) goto L_08875EA4;
    return;
L_08875EA4:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875EBC;
      }
      goto L_08875EAC;
    }
L_08875EAC:
    aot_gpr[31] = (0x08875EB4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 114u, 0x0881C80Cu>(ctx, &aot_mem) && ctx.pc == 0x08875EB4u) goto L_08875EB4;
    return;
L_08875EB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875F24;
      }
      goto L_08875EBC;
    }
L_08875EBC:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875F10;
      }
      goto L_08875EC4;
    }
L_08875EC4:
    aot_gpr[4] = (0u | 260u);
    aot_gpr[31] = (0x08875ED0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08875ED0u) goto L_08875ED0;
    return;
L_08875ED0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08875EDCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875EDCu) goto L_08875EDC;
    return;
L_08875EDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08875EF0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08875EF0u) goto L_08875EF0;
    return;
L_08875EF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08875EFCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875EFCu) goto L_08875EFC;
    return;
L_08875EFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08875F08u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08875F08u) goto L_08875F08;
    return;
L_08875F08:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(517), static_cast<std::uint8_t>(0u));
    goto L_08875F10;
L_08875F10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875F24;
      }
      goto L_08875F1C;
    }
L_08875F1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08875F3C;
      }
      goto L_08875F24;
    }
L_08875F24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-5416)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875D94;
      }
      goto L_08875F38;
    }
L_08875F38:
    aot_gpr[2] = (0u | 0u);
    goto L_08875F3C;
L_08875F3C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875F6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2214u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 54u, 0x08876280u>(ctx, &aot_mem); return;
      }
      goto L_08875FC4;
    }
L_08875FC4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7612));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7632));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[23] + static_cast<std::uint32_t>(128));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(7656));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[23] + static_cast<std::uint32_t>(384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[20] = (2215u << 16u);
    goto L_08875FF4;
L_08875FF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3572)));
    ctx.pc = 0x08876000u; return;
}

void recomp_unit_0113(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0113_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_113(Runtime &runtime) {
    runtime.register_generated_unit(113u, 0x08875000u, 4096u, &recomp_unit_0113, &recomp_unit_0113_entry);
    runtime.register_function(0x08875000u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887500Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875014u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875020u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887502Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887503Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875044u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875050u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887505Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875064u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875068u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875070u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875094u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088750E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088750F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887510Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875118u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875120u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875128u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887513Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875148u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875150u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875164u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875170u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875178u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875188u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875194u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887519Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088751A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088751B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088751C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088751CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088751D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088751E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088751F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875204u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887520Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875214u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875218u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875248u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887529Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088752B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088752BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088752C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088752D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088752ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088752F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875308u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875314u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887531Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875334u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887533Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887534Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875358u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875360u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875368u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875370u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887537Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875388u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875394u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088753A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088753B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088753BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088753C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088753D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088753D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088753F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088753F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875424u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875470u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875498u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088754A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088754ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088754B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088754C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088754D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088754E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875504u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887550Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875518u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875520u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875530u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875538u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887554Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875550u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875560u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887556Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875574u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875580u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887558Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875598u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088755ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088755B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088755C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088755CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088755D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088755E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088755F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875604u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875610u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875618u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875624u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887562Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875634u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875638u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875668u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088756ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088756C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088756DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088756E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875700u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875704u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887570Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875720u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887572Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875740u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875748u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875758u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875764u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875770u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875778u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875790u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875794u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088757A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088757A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088757B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088757C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088757C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088757D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088757ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088757F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088757F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887580Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875814u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875828u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875830u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887583Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875848u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875850u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875858u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875860u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875868u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875874u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875880u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875888u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875894u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088758A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088758B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088758B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088758C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088758CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088758D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088758E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088758F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088758FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x0887592Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875984u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088759A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088759BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088759C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088759C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088759E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088759E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x088759FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875A9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875AA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875AB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875ABCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875AC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875AD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875AD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875AE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875AE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875AF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875AF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875B98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875BA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875BACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875BB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875BBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875BCCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875BD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875BE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875BF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875BFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875C9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875CA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875CB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875CC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875CC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875CD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875CDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875CF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875CF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875D28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875D7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875D94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875DACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875DB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875DB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875DD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875DD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875DECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875DF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875DFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875E10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875E1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875E2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875E3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875E4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875E5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875E64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875E6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875E80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875E88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875E98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875EA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875EACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875EB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875EBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875EC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875ED0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875EDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875EF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875EFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875F08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875F10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875F1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875F24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875F38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875F3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875F6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875FC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x08875FF4u, &recomp_unit_0113, "recomp_unit_0113");
}
} // namespace psprecomp
