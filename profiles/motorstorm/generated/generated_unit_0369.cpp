#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0369[1020] = {
    1, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0,
    21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0,
    0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 51,
    0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 58, 0, 0, 0, 59, 0, 60, 61, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 67, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0,
    0, 72, 0, 73, 0, 74, 75, 0, 76, 77, 0, 0, 0, 78, 0, 79, 0, 80, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84,
    0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0,
    0, 0, 111, 112, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 129, 0,
    130, 0, 0, 131, 0, 0, 0, 0, 0, 132, 133, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 147, 148, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0,
    170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 0, 188, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    192, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212,
    0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0,
    0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 228, 0, 0,
    229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240,
    0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0,
    0, 0, 0, 252, 0, 0, 253, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 261,
    0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268,
};
void recomp_unit_0369_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08975000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0369[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08975000;
    case 2u: goto L_08975008;
    case 3u: goto L_08975010;
    case 4u: goto L_0897501C;
    case 5u: goto L_0897502C;
    case 6u: goto L_08975034;
    case 7u: goto L_0897503C;
    case 8u: goto L_08975048;
    case 9u: goto L_08975060;
    case 10u: goto L_08975068;
    case 11u: goto L_08975070;
    case 12u: goto L_08975078;
    case 13u: goto L_08975088;
    case 14u: goto L_089750A0;
    case 15u: goto L_089750A8;
    case 16u: goto L_089750B8;
    case 17u: goto L_089750C4;
    case 18u: goto L_089750DC;
    case 19u: goto L_089750E4;
    case 20u: goto L_089750F4;
    case 21u: goto L_08975100;
    case 22u: goto L_08975118;
    case 23u: goto L_08975120;
    case 24u: goto L_08975130;
    case 25u: goto L_0897513C;
    case 26u: goto L_08975154;
    case 27u: goto L_0897515C;
    case 28u: goto L_0897516C;
    case 29u: goto L_08975178;
    case 30u: goto L_08975190;
    case 31u: goto L_08975198;
    case 32u: goto L_089751A8;
    case 33u: goto L_089751B4;
    case 34u: goto L_089751CC;
    case 35u: goto L_089751D4;
    case 36u: goto L_089751E4;
    case 37u: goto L_089751F0;
    case 38u: goto L_0897521C;
    case 39u: goto L_08975228;
    case 40u: goto L_0897524C;
    case 41u: goto L_08975258;
    case 42u: goto L_08975260;
    case 43u: goto L_08975284;
    case 44u: goto L_08975290;
    case 45u: goto L_089752B4;
    case 46u: goto L_089752C0;
    case 47u: goto L_089752C8;
    case 48u: goto L_089752D8;
    case 49u: goto L_089752E8;
    case 50u: goto L_089752F0;
    case 51u: goto L_089752FC;
    case 52u: goto L_0897530C;
    case 53u: goto L_08975314;
    case 54u: goto L_0897531C;
    case 55u: goto L_08975330;
    case 56u: goto L_0897533C;
    case 57u: goto L_08975348;
    case 58u: goto L_0897534C;
    case 59u: goto L_0897535C;
    case 60u: goto L_08975364;
    case 61u: goto L_08975368;
    case 62u: goto L_08975370;
    case 63u: goto L_08975394;
    case 64u: goto L_089753AC;
    case 65u: goto L_089753B8;
    case 66u: goto L_089753C0;
    case 67u: goto L_089753CC;
    case 68u: goto L_089753D0;
    case 69u: goto L_089753D8;
    case 70u: goto L_089753EC;
    case 71u: goto L_089753F8;
    case 72u: goto L_08975404;
    case 73u: goto L_0897540C;
    case 74u: goto L_08975414;
    case 75u: goto L_08975418;
    case 76u: goto L_08975420;
    case 77u: goto L_08975424;
    case 78u: goto L_08975434;
    case 79u: goto L_0897543C;
    case 80u: goto L_08975444;
    case 81u: goto L_08975448;
    case 82u: goto L_08975454;
    case 83u: goto L_08975474;
    case 84u: goto L_0897547C;
    case 85u: goto L_08975488;
    case 86u: goto L_08975490;
    case 87u: goto L_08975498;
    case 88u: goto L_089754AC;
    case 89u: goto L_089754B4;
    case 90u: goto L_089754BC;
    case 91u: goto L_089754D4;
    case 92u: goto L_089754DC;
    case 93u: goto L_089754F4;
    case 94u: goto L_089754FC;
    case 95u: goto L_0897551C;
    case 96u: goto L_08975524;
    case 97u: goto L_08975530;
    case 98u: goto L_08975538;
    case 99u: goto L_08975540;
    case 100u: goto L_08975548;
    case 101u: goto L_08975560;
    case 102u: goto L_08975568;
    case 103u: goto L_08975580;
    case 104u: goto L_08975588;
    case 105u: goto L_089755A0;
    case 106u: goto L_089755A8;
    case 107u: goto L_089755C8;
    case 108u: goto L_089755D4;
    case 109u: goto L_089755E8;
    case 110u: goto L_089755F4;
    case 111u: goto L_08975608;
    case 112u: goto L_0897560C;
    case 113u: goto L_08975614;
    case 114u: goto L_08975620;
    case 115u: goto L_0897563C;
    case 116u: goto L_08975640;
    case 117u: goto L_08975648;
    case 118u: goto L_08975654;
    case 119u: goto L_0897566C;
    case 120u: goto L_08975674;
    case 121u: goto L_0897567C;
    case 122u: goto L_08975698;
    case 123u: goto L_089756B0;
    case 124u: goto L_089756B8;
    case 125u: goto L_089756C0;
    case 126u: goto L_089756CC;
    case 127u: goto L_089756D8;
    case 128u: goto L_089756F4;
    case 129u: goto L_089756F8;
    case 130u: goto L_08975700;
    case 131u: goto L_0897570C;
    case 132u: goto L_08975724;
    case 133u: goto L_08975728;
    case 134u: goto L_08975734;
    case 135u: goto L_08975740;
    case 136u: goto L_08975748;
    case 137u: goto L_08975754;
    case 138u: goto L_0897575C;
    case 139u: goto L_08975764;
    case 140u: goto L_0897576C;
    case 141u: goto L_08975784;
    case 142u: goto L_089757A0;
    case 143u: goto L_089757AC;
    case 144u: goto L_089757C0;
    case 145u: goto L_089757CC;
    case 146u: goto L_089757F0;
    case 147u: goto L_089757F4;
    case 148u: goto L_089757F8;
    case 149u: goto L_08975810;
    case 150u: goto L_08975834;
    case 151u: goto L_08975850;
    case 152u: goto L_08975858;
    case 153u: goto L_08975880;
    case 154u: goto L_08975888;
    case 155u: goto L_089758A4;
    case 156u: goto L_089758B4;
    case 157u: goto L_089758C0;
    case 158u: goto L_089758C8;
    case 159u: goto L_089758D0;
    case 160u: goto L_089758E4;
    case 161u: goto L_089758EC;
    case 162u: goto L_08975908;
    case 163u: goto L_08975918;
    case 164u: goto L_08975924;
    case 165u: goto L_0897593C;
    case 166u: goto L_08975944;
    case 167u: goto L_08975960;
    case 168u: goto L_08975968;
    case 169u: goto L_08975974;
    case 170u: goto L_08975980;
    case 171u: goto L_08975998;
    case 172u: goto L_089759A0;
    case 173u: goto L_089759A8;
    case 174u: goto L_089759B0;
    case 175u: goto L_089759CC;
    case 176u: goto L_089759E8;
    case 177u: goto L_089759FC;
    case 178u: goto L_08975A14;
    case 179u: goto L_08975A20;
    case 180u: goto L_08975A34;
    case 181u: goto L_08975A50;
    case 182u: goto L_08975A58;
    case 183u: goto L_08975A60;
    case 184u: goto L_08975A84;
    case 185u: goto L_08975A90;
    case 186u: goto L_08975AA0;
    case 187u: goto L_08975AA8;
    case 188u: goto L_08975AB8;
    case 189u: goto L_08975ABC;
    case 190u: goto L_08975ACC;
    case 191u: goto L_08975AF8;
    case 192u: goto L_08975B00;
    case 193u: goto L_08975B08;
    case 194u: goto L_08975B24;
    case 195u: goto L_08975B38;
    case 196u: goto L_08975B54;
    case 197u: goto L_08975B64;
    case 198u: goto L_08975B74;
    case 199u: goto L_08975B80;
    case 200u: goto L_08975BAC;
    case 201u: goto L_08975BB4;
    case 202u: goto L_08975BC4;
    case 203u: goto L_08975BF0;
    case 204u: goto L_08975BF8;
    case 205u: goto L_08975C08;
    case 206u: goto L_08975C38;
    case 207u: goto L_08975C54;
    case 208u: goto L_08975C5C;
    case 209u: goto L_08975C64;
    case 210u: goto L_08975C6C;
    case 211u: goto L_08975C74;
    case 212u: goto L_08975C7C;
    case 213u: goto L_08975C8C;
    case 214u: goto L_08975C98;
    case 215u: goto L_08975CB0;
    case 216u: goto L_08975CB8;
    case 217u: goto L_08975CC8;
    case 218u: goto L_08975CD4;
    case 219u: goto L_08975CEC;
    case 220u: goto L_08975CF4;
    case 221u: goto L_08975D08;
    case 222u: goto L_08975D14;
    case 223u: goto L_08975D2C;
    case 224u: goto L_08975D34;
    case 225u: goto L_08975D4C;
    case 226u: goto L_08975D60;
    case 227u: goto L_08975D68;
    case 228u: goto L_08975D74;
    case 229u: goto L_08975D80;
    case 230u: goto L_08975D88;
    case 231u: goto L_08975D90;
    case 232u: goto L_08975D98;
    case 233u: goto L_08975DA0;
    case 234u: goto L_08975DB8;
    case 235u: goto L_08975DC4;
    case 236u: goto L_08975DCC;
    case 237u: goto L_08975DD4;
    case 238u: goto L_08975DEC;
    case 239u: goto L_08975DF4;
    case 240u: goto L_08975DFC;
    case 241u: goto L_08975E04;
    case 242u: goto L_08975E20;
    case 243u: goto L_08975E28;
    case 244u: goto L_08975E40;
    case 245u: goto L_08975E5C;
    case 246u: goto L_08975E80;
    case 247u: goto L_08975E90;
    case 248u: goto L_08975EB4;
    case 249u: goto L_08975EC4;
    case 250u: goto L_08975EE8;
    case 251u: goto L_08975EF8;
    case 252u: goto L_08975F0C;
    case 253u: goto L_08975F18;
    case 254u: goto L_08975F20;
    case 255u: goto L_08975F28;
    case 256u: goto L_08975F30;
    case 257u: goto L_08975F48;
    case 258u: goto L_08975F50;
    case 259u: goto L_08975F68;
    case 260u: goto L_08975F70;
    case 261u: goto L_08975F7C;
    case 262u: goto L_08975F94;
    case 263u: goto L_08975FA0;
    case 264u: goto L_08975FB8;
    case 265u: goto L_08975FC0;
    case 266u: goto L_08975FCC;
    case 267u: goto L_08975FE4;
    case 268u: goto L_08975FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08975000:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_08975010;
      }
      goto L_08975008;
    }
L_08975008:
    aot_gpr[31] = (0x08975010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 202u, 0x08973C04u>(ctx, &aot_mem) && ctx.pc == 0x08975010u) goto L_08975010;
    return;
L_08975010:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897501C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975034;
      }
      goto L_0897502C;
    }
L_0897502C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_0897503C;
      }
      goto L_08975034;
    }
L_08975034:
    aot_gpr[31] = (0x0897503Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 208u, 0x08973C50u>(ctx, &aot_mem) && ctx.pc == 0x0897503Cu) goto L_0897503C;
    return;
L_0897503C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975048:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975068;
      }
      goto L_08975060;
    }
L_08975060:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_08975078;
      }
      goto L_08975068;
    }
L_08975068:
    aot_gpr[31] = (0x08975070u);
    aot_gpr[4] = (0u | 200u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08975070:
    aot_gpr[31] = (0x08975078u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 40u, 0x08974254u>(ctx, &aot_mem) && ctx.pc == 0x08975078u) goto L_08975078;
    return;
L_08975078:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975088:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089750A8;
      }
      goto L_089750A0;
    }
L_089750A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_089750B8;
      }
      goto L_089750A8;
    }
L_089750A8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089750B8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 69u, 0x08974418u>(ctx, &aot_mem) && ctx.pc == 0x089750B8u) goto L_089750B8;
    return;
L_089750B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089750C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089750E4;
      }
      goto L_089750DC;
    }
L_089750DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_089750F4;
      }
      goto L_089750E4;
    }
L_089750E4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089750F4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 74u, 0x08974460u>(ctx, &aot_mem) && ctx.pc == 0x089750F4u) goto L_089750F4;
    return;
L_089750F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975100:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08975120;
      }
      goto L_08975118;
    }
L_08975118:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_08975130;
      }
      goto L_08975120;
    }
L_08975120:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08975130u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 79u, 0x089744A8u>(ctx, &aot_mem) && ctx.pc == 0x08975130u) goto L_08975130;
    return;
L_08975130:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897513C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0897515C;
      }
      goto L_08975154;
    }
L_08975154:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_0897516C;
      }
      goto L_0897515C;
    }
L_0897515C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0897516Cu);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 59u, 0x08974340u>(ctx, &aot_mem) && ctx.pc == 0x0897516Cu) goto L_0897516C;
    return;
L_0897516C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975178:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08975198;
      }
      goto L_08975190;
    }
L_08975190:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_089751A8;
      }
      goto L_08975198;
    }
L_08975198:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x089751A8u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 64u, 0x089743ACu>(ctx, &aot_mem) && ctx.pc == 0x089751A8u) goto L_089751A8;
    return;
L_089751A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089751B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089751D4;
      }
      goto L_089751CC;
    }
L_089751CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_089751E4;
      }
      goto L_089751D4;
    }
L_089751D4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x089751E4u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 84u, 0x089744F0u>(ctx, &aot_mem) && ctx.pc == 0x089751E4u) goto L_089751E4;
    return;
L_089751E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089751F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897521Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897521Cu) goto L_0897521C;
    return;
L_0897521C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975228:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897524Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897524Cu) goto L_0897524C;
    return;
L_0897524C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975258:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975260:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975284u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975284u) goto L_08975284;
    return;
L_08975284:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089752B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089752B4u) goto L_089752B4;
    return;
L_089752B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089752C0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089752C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_089752F0;
      }
      goto L_089752D8;
    }
L_089752D8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(26000));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_089752F0;
      }
      goto L_089752E8;
    }
L_089752E8:
    aot_gpr[31] = (0x089752F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089752F0u) goto L_089752F0;
    return;
L_089752F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089752FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897530C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975314:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(476)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897531C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(472)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897535C;
      }
      goto L_08975330;
    }
L_08975330:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897534C;
      }
      goto L_0897533C;
    }
L_0897533C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897534C;
      }
      goto L_08975348;
    }
L_08975348:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0897534C;
L_0897534C:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08975330;
      }
      goto L_0897535C;
    }
L_0897535C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975368;
      }
      goto L_08975364;
    }
L_08975364:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_08975368;
L_08975368:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975370:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08975394u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_0897531C;
L_08975394:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089753AC;
      }
      goto L_089753AC;
    }
L_089753AC:
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089753D8;
      }
      goto L_089753B8;
    }
L_089753B8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089753D0;
      }
      goto L_089753C0;
    }
L_089753C0:
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[8] != 0u) {
    aot_gpr[5] = (0u | 44u);
        goto L_089753CC;
    }
    goto L_089753CC;
L_089753CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089753D0;
L_089753D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08975448;
      }
      goto L_089753D8;
    }
L_089753D8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(472)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[11] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08975434;
      }
      goto L_089753EC;
    }
L_089753EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975424;
      }
      goto L_089753F8;
    }
L_089753F8:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08975424;
      }
      goto L_08975404;
    }
L_08975404:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08975420;
      }
      goto L_0897540C;
    }
L_0897540C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975418;
      }
      goto L_08975414;
    }
L_08975414:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08975418;
L_08975418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975448;
      }
      goto L_08975420;
    }
L_08975420:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08975424;
L_08975424:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089753EC;
      }
      goto L_08975434;
    }
L_08975434:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975444;
      }
      goto L_0897543C;
    }
L_0897543C:
    aot_gpr[5] = (0u | 44u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08975444;
L_08975444:
    aot_gpr[2] = (0u | 0u);
    goto L_08975448;
L_08975448:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975454:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08975490;
      }
      goto L_08975474;
    }
L_08975474:
    aot_gpr[31] = (0x0897547Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08975314;
L_0897547C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
        goto L_08975498;
    }
    goto L_08975488;
L_08975488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089754D4;
      }
      goto L_08975490;
    }
L_08975490:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 44u);
      if (branch_taken) {
          goto L_089754DC;
      }
      goto L_08975498;
    }
L_08975498:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089754ACu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089754ACu) goto L_089754AC;
    return;
L_089754AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089754D4;
      }
      goto L_089754B4;
    }
L_089754B4:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_089754D4;
      }
      goto L_089754BC;
    }
L_089754BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089754D4u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089754D4u) goto L_089754D4;
    return;
L_089754D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(476), aot_gpr[16]);
    aot_gpr[2] = (0u | 0u);
    goto L_089754DC;
L_089754DC:
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
L_089754F4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(480)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089754FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08975538;
      }
      goto L_0897551C;
    }
L_0897551C:
    aot_gpr[31] = (0x08975524u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089754F4;
L_08975524:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975540;
      }
      goto L_08975530;
    }
L_08975530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975580;
      }
      goto L_08975538;
    }
L_08975538:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 44u);
      if (branch_taken) {
          goto L_08975588;
      }
      goto L_08975540;
    }
L_08975540:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08975580;
      }
      goto L_08975548;
    }
L_08975548:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975560u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975560u) goto L_08975560;
    return;
L_08975560:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975580;
      }
      goto L_08975568;
    }
L_08975568:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975580u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975580u) goto L_08975580;
    return;
L_08975580:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(480), aot_gpr[16]);
    aot_gpr[2] = (0u | 0u);
    goto L_08975588;
L_08975588:
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
L_089755A0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(484)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089755A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089755C8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_08975314;
L_089755C8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897560C;
      }
      goto L_089755D4;
    }
L_089755D4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x089755E8u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_08975370;
L_089755E8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897560C;
      }
      goto L_089755F4;
    }
L_089755F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08975608u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_08975370;
L_08975608:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_0897560C;
L_0897560C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975640;
      }
      goto L_08975614;
    }
L_08975614:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08975620u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08975454;
L_08975620:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897563Cu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897563Cu) goto L_0897563C;
    return;
L_0897563C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08975640;
L_08975640:
    aot_gpr[31] = (0x08975648u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089754F4;
L_08975648:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089756B0;
      }
      goto L_08975654;
    }
L_08975654:
    aot_gpr[4] = (0u | 8u);
    aot_gpr[5] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_0897566C;
L_0897566C:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_089756B0;
      }
      goto L_08975674;
    }
L_08975674:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089756B0;
      }
      goto L_0897567C;
    }
L_0897567C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08975698u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_08975370;
L_08975698:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0897566C;
      }
      goto L_089756B0;
    }
L_089756B0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089756F8;
      }
      goto L_089756B8;
    }
L_089756B8:
    aot_gpr[31] = (0x089756C0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089756C0u) goto L_089756C0;
    return;
L_089756C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089756F8;
      }
      goto L_089756CC;
    }
L_089756CC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089756D8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_089754FC;
L_089756D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089756F4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089756F4u) goto L_089756F4;
    return;
L_089756F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089756F8;
L_089756F8:
    aot_gpr[31] = (0x08975700u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089755A0;
L_08975700:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975728;
      }
      goto L_0897570C;
    }
L_0897570C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08975724u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975724u) goto L_08975724;
    return;
L_08975724:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08975728;
L_08975728:
    aot_gpr[4] = (aot_gpr[18] | aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975748;
      }
      goto L_08975734;
    }
L_08975734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897575C;
      }
      goto L_08975740;
    }
L_08975740:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_0897576C;
      }
      goto L_08975748;
    }
L_08975748:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08975754u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-21224));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08975754u) goto L_08975754;
    return;
L_08975754:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 256u);
      if (branch_taken) {
          goto L_0897576C;
      }
      goto L_0897575C;
    }
L_0897575C:
    aot_gpr[31] = (0x08975764u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 269u, 0x08973FBCu>(ctx, &aot_mem) && ctx.pc == 0x08975764u) goto L_08975764;
    return;
L_08975764:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u | 0u);
    goto L_0897576C;
L_0897576C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975784:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(436)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089757F8;
      }
      goto L_089757A0;
    }
L_089757A0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089757ACu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089757ACu) goto L_089757AC;
    return;
L_089757AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x089757C0u);
    aot_gpr[4] = (0u | 880u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x089757C0u) goto L_089757C0;
    return;
L_089757C0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089757F4;
      }
      goto L_089757CC;
    }
L_089757CC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21228)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21232)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[11] | 0u);
    aot_gpr[9] = (aot_gpr[11] | 0u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x089757F0u);
    aot_gpr[8] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 148u, 0x08981918u>(ctx, &aot_mem) && ctx.pc == 0x089757F0u) goto L_089757F0;
    return;
L_089757F0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089757F4;
L_089757F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), aot_gpr[4]);
    goto L_089757F8;
L_089757F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975810:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(392)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] & 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089758C8;
      }
      goto L_08975834;
    }
L_08975834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 32u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08975850u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975850u) goto L_08975850;
    return;
L_08975850:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089758C8;
      }
      goto L_08975858;
    }
L_08975858:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(392)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(432)));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(168));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08975880u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975880u) goto L_08975880;
    return;
L_08975880:
    aot_gpr[31] = (0x08975888u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089755A8;
L_08975888:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 32u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089758A4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089758A4u) goto L_089758A4;
    return;
L_089758A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x089758B4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x089758B4u) goto L_089758B4;
    return;
L_089758B4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
        goto L_089758D0;
    }
    goto L_089758C0;
L_089758C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975908;
      }
      goto L_089758C8;
    }
L_089758C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089759E8;
      }
      goto L_089758D0;
    }
L_089758D0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089758E4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089758E4u) goto L_089758E4;
    return;
L_089758E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975908;
      }
      goto L_089758EC;
    }
L_089758EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08975908u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975908u) goto L_08975908;
    return;
L_08975908:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08975918u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08975918u) goto L_08975918;
    return;
L_08975918:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975960;
      }
      goto L_08975924;
    }
L_08975924:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897593Cu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897593Cu) goto L_0897593C;
    return;
L_0897593C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975960;
      }
      goto L_08975944;
    }
L_08975944:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08975960u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975960u) goto L_08975960;
    return;
L_08975960:
    aot_gpr[31] = (0x08975968u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08975784;
L_08975968:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089759A8;
      }
      goto L_08975974;
    }
L_08975974:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08975980u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 159u, 0x08981A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08975980u) goto L_08975980;
    return;
L_08975980:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975998u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975998u) goto L_08975998;
    return;
L_08975998:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089759B0;
      }
      goto L_089759A0;
    }
L_089759A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089759CC;
      }
      goto L_089759A8;
    }
L_089759A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 68u);
      if (branch_taken) {
          goto L_089759E8;
      }
      goto L_089759B0;
    }
L_089759B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089759CCu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089759CCu) goto L_089759CC;
    return;
L_089759CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 10u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089759E8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089759E8u) goto L_089759E8;
    return;
L_089759E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089759FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(704));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08975A14u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 163u, 0x08979AE0u>(ctx, &aot_mem) && ctx.pc == 0x08975A14u) goto L_08975A14;
    return;
L_08975A14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975A20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08975A34u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08975810;
L_08975A34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 32u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08975A50u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975A50u) goto L_08975A50;
    return;
L_08975A50:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975A60;
      }
      goto L_08975A58;
    }
L_08975A58:
    aot_gpr[31] = (0x08975A60u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089759FC;
L_08975A60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(392)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(472)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975AB8;
      }
      goto L_08975A84;
    }
L_08975A84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975AA8;
      }
      goto L_08975A90;
    }
L_08975A90:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(508)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975AA8;
      }
      goto L_08975AA0;
    }
L_08975AA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 155u);
      if (branch_taken) {
          goto L_08975ABC;
      }
      goto L_08975AA8;
    }
L_08975AA8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08975A84;
      }
      goto L_08975AB8;
    }
L_08975AB8:
    aot_gpr[2] = (0u | 0u);
    goto L_08975ABC;
L_08975ABC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975ACC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08975AF8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975AF8u) goto L_08975AF8;
    return;
L_08975AF8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975B08;
      }
      goto L_08975B00;
    }
L_08975B00:
    aot_gpr[31] = (0x08975B08u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08975A20;
L_08975B08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975B24u);
    aot_gpr[5] = (0u | 4096u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975B24u) goto L_08975B24;
    return;
L_08975B24:
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (0u | 15u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08975B38u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28528));
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 114u, 0x08A48CBCu>(ctx, &aot_mem) && ctx.pc == 0x08975B38u) goto L_08975B38;
    return;
L_08975B38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(312));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08975B54u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975B54u) goto L_08975B54;
    return;
L_08975B54:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975B64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08975B74u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1072));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x08975B74u) goto L_08975B74;
    return;
L_08975B74:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975B80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1024u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08975BACu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975BACu) goto L_08975BAC;
    return;
L_08975BAC:
    aot_gpr[31] = (0x08975BB4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(520));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x08975BB4u) goto L_08975BB4;
    return;
L_08975BB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975BC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08975BF0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975BF0u) goto L_08975BF0;
    return;
L_08975BF0:
    aot_gpr[31] = (0x08975BF8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(888));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x08975BF8u) goto L_08975BF8;
    return;
L_08975BF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975C08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (0u | 15u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08975C38u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 114u, 0x08A48CBCu>(ctx, &aot_mem) && ctx.pc == 0x08975C38u) goto L_08975C38;
    return;
L_08975C38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(312));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08975C54u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975C54u) goto L_08975C54;
    return;
L_08975C54:
    aot_gpr[31] = (0x08975C5Cu);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08975C5C:
    aot_gpr[31] = (0x08975C64u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08975B64;
L_08975C64:
    aot_gpr[31] = (0x08975C6Cu);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08975C6C:
    aot_gpr[31] = (0x08975C74u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08975B80;
L_08975C74:
    aot_gpr[31] = (0x08975C7Cu);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08975C7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08975C8Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08975C8Cu) goto L_08975C8C;
    return;
L_08975C8C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975CB0;
      }
      goto L_08975C98;
    }
L_08975C98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08975CB0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975CB0u) goto L_08975CB0;
    return;
L_08975CB0:
    aot_gpr[31] = (0x08975CB8u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08975CB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08975CC8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08975CC8u) goto L_08975CC8;
    return;
L_08975CC8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975CEC;
      }
      goto L_08975CD4;
    }
L_08975CD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08975CECu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975CECu) goto L_08975CEC;
    return;
L_08975CEC:
    aot_gpr[31] = (0x08975CF4u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08975CF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(472)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08975D60;
      }
      goto L_08975D08;
    }
L_08975D08:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975D4C;
      }
      goto L_08975D14;
    }
L_08975D14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975D2Cu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975D2Cu) goto L_08975D2C;
    return;
L_08975D2C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975D4C;
      }
      goto L_08975D34;
    }
L_08975D34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975D4Cu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975D4Cu) goto L_08975D4C;
    return;
L_08975D4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(472)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08975D08;
      }
      goto L_08975D60;
    }
L_08975D60:
    aot_gpr[31] = (0x08975D68u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08975D68:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08975D74u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08975D74u) goto L_08975D74;
    return;
L_08975D74:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08975D80u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 253u, 0x0897AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08975D80u) goto L_08975D80;
    return;
L_08975D80:
    aot_gpr[31] = (0x08975D88u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5AE4Cu;
    return;
L_08975D88:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975DCC;
      }
      goto L_08975D90;
    }
L_08975D90:
    aot_gpr[31] = (0x08975D98u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08975D98:
    aot_gpr[31] = (0x08975DA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08975784;
L_08975DA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975DB8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975DB8u) goto L_08975DB8;
    return;
L_08975DB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975DD4;
      }
      goto L_08975DC4;
    }
L_08975DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975DEC;
      }
      goto L_08975DCC;
    }
L_08975DCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 73u);
      if (branch_taken) {
          goto L_08975E40;
      }
      goto L_08975DD4;
    }
L_08975DD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08975DECu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975DECu) goto L_08975DEC;
    return;
L_08975DEC:
    aot_gpr[31] = (0x08975DF4u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08975DF4:
    aot_gpr[31] = (0x08975DFCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08975BC4;
L_08975DFC:
    aot_gpr[31] = (0x08975E04u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08975E04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975E20u);
    aot_gpr[5] = (0u | 6344u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975E20u) goto L_08975E20;
    return;
L_08975E20:
    aot_gpr[31] = (0x08975E28u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08975E28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975E40u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975E40u) goto L_08975E40;
    return;
L_08975E40:
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
L_08975E5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 512u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975E80u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975E80u) goto L_08975E80;
    return;
L_08975E80:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975E90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 512u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975EB4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975EB4u) goto L_08975EB4;
    return;
L_08975EB4:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975EC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08975F28;
      }
      goto L_08975EE8;
    }
L_08975EE8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08975EF8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08975EF8u) goto L_08975EF8;
    return;
L_08975EF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08975F0Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08975F0Cu) goto L_08975F0C;
    return;
L_08975F0C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08975F18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08975B80;
L_08975F18:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975F30;
      }
      goto L_08975F20;
    }
L_08975F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975F48;
      }
      goto L_08975F28;
    }
L_08975F28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 3u, 0x08976030u>(ctx, &aot_mem); return;
      }
      goto L_08975F30;
    }
L_08975F30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975F48u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975F48u) goto L_08975F48;
    return;
L_08975F48:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975F68;
      }
      goto L_08975F50;
    }
L_08975F50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975F68u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975F68u) goto L_08975F68;
    return;
L_08975F68:
    aot_gpr[31] = (0x08975F70u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08975784;
L_08975F70:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975F94;
      }
      goto L_08975F7C;
    }
L_08975F7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(144));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08975F94u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975F94u) goto L_08975F94;
    return;
L_08975F94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975FB8;
      }
      goto L_08975FA0;
    }
L_08975FA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(152));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08975FB8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975FB8u) goto L_08975FB8;
    return;
L_08975FB8:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[16] | 0u);
    goto L_08975FC0;
L_08975FC0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 1u, 0x08976004u>(ctx, &aot_mem); return;
      }
      goto L_08975FCC;
    }
L_08975FCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08975FE4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08975FE4u) goto L_08975FE4;
    return;
L_08975FE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 1u, 0x08976004u>(ctx, &aot_mem); return;
      }
      goto L_08975FEC;
    }
L_08975FEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(168));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08976004u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0369(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0369_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_369(Runtime &runtime) {
    runtime.register_generated_unit(369u, 0x08975000u, 4096u, &recomp_unit_0369, &recomp_unit_0369_entry);
    runtime.register_function(0x08975000u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975008u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975010u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897501Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897502Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975034u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897503Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975048u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975060u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975068u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975070u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975078u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975088u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089750A0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089750A8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089750B8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089750C4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089750DCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089750E4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089750F4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975100u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975118u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975120u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975130u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897513Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975154u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897515Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897516Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975178u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975190u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975198u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089751A8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089751B4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089751CCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089751D4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089751E4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089751F0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897521Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975228u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897524Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975258u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975260u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975284u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975290u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089752B4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089752C0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089752C8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089752D8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089752E8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089752F0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089752FCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897530Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975314u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897531Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975330u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897533Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975348u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897534Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897535Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975364u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975368u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975370u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975394u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089753ACu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089753B8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089753C0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089753CCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089753D0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089753D8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089753ECu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089753F8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975404u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897540Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975414u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975418u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975420u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975424u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975434u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897543Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975444u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975448u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975454u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975474u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897547Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975488u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975490u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975498u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089754ACu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089754B4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089754BCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089754D4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089754DCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089754F4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089754FCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897551Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975524u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975530u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975538u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975540u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975548u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975560u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975568u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975580u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975588u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089755A0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089755A8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089755C8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089755D4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089755E8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089755F4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975608u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897560Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975614u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975620u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897563Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975640u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975648u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975654u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897566Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975674u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897567Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975698u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089756B0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089756B8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089756C0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089756CCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089756D8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089756F4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089756F8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975700u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897570Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975724u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975728u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975734u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975740u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975748u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975754u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897575Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975764u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897576Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975784u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089757A0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089757ACu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089757C0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089757CCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089757F0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089757F4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089757F8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975810u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975834u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975850u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975858u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975880u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975888u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089758A4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089758B4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089758C0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089758C8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089758D0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089758E4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089758ECu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975908u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975918u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975924u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x0897593Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975944u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975960u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975968u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975974u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975980u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975998u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089759A0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089759A8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089759B0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089759CCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089759E8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x089759FCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975A14u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975A20u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975A34u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975A50u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975A58u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975A60u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975A84u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975A90u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975AA0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975AA8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975AB8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975ABCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975ACCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975AF8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975B00u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975B08u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975B24u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975B38u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975B54u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975B64u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975B74u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975B80u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975BACu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975BB4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975BC4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975BF0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975BF8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975C08u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975C38u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975C54u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975C5Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975C64u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975C6Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975C74u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975C7Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975C8Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975C98u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975CB0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975CB8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975CC8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975CD4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975CECu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975CF4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975D08u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975D14u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975D2Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975D34u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975D4Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975D60u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975D68u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975D74u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975D80u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975D88u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975D90u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975D98u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975DA0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975DB8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975DC4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975DCCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975DD4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975DECu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975DF4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975DFCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975E04u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975E20u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975E28u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975E40u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975E5Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975E80u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975E90u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975EB4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975EC4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975EE8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975EF8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975F0Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975F18u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975F20u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975F28u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975F30u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975F48u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975F50u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975F68u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975F70u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975F7Cu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975F94u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975FA0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975FB8u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975FC0u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975FCCu, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975FE4u, &recomp_unit_0369, "recomp_unit_0369");
    runtime.register_function(0x08975FECu, &recomp_unit_0369, "recomp_unit_0369");
}
} // namespace psprecomp
