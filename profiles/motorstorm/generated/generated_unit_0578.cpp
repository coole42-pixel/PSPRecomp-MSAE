#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0578[1024] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0,
    0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0,
    0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 26, 27, 0, 0, 0, 28, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 36, 0, 37,
    0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    44, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50, 51, 0, 0, 52, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 80, 81, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0,
    0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 109, 110, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0,
    0, 0, 0, 124, 0, 0, 125, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132,
    0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 144, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0,
    160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 0,
    0, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0,
    0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 206, 207, 0, 0,
    0, 208, 0, 209, 210, 0, 211, 0, 212, 213, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0,
    0, 230, 0, 231, 0, 232, 233, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 238,
    0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247,
    0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255, 256,
};
void recomp_unit_0578_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A46000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0578[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A46000;
    case 2u: goto L_08A46004;
    case 3u: goto L_08A46010;
    case 4u: goto L_08A46030;
    case 5u: goto L_08A46038;
    case 6u: goto L_08A4604C;
    case 7u: goto L_08A4605C;
    case 8u: goto L_08A46064;
    case 9u: goto L_08A4606C;
    case 10u: goto L_08A46078;
    case 11u: goto L_08A4608C;
    case 12u: goto L_08A46094;
    case 13u: goto L_08A460B0;
    case 14u: goto L_08A460C0;
    case 15u: goto L_08A460D4;
    case 16u: goto L_08A460DC;
    case 17u: goto L_08A460E8;
    case 18u: goto L_08A460F8;
    case 19u: goto L_08A46108;
    case 20u: goto L_08A46110;
    case 21u: goto L_08A46120;
    case 22u: goto L_08A46128;
    case 23u: goto L_08A46134;
    case 24u: goto L_08A46148;
    case 25u: goto L_08A46150;
    case 26u: goto L_08A46158;
    case 27u: goto L_08A4615C;
    case 28u: goto L_08A4616C;
    case 29u: goto L_08A46180;
    case 30u: goto L_08A4619C;
    case 31u: goto L_08A461AC;
    case 32u: goto L_08A461C4;
    case 33u: goto L_08A461D8;
    case 34u: goto L_08A461E0;
    case 35u: goto L_08A461EC;
    case 36u: goto L_08A461F4;
    case 37u: goto L_08A461FC;
    case 38u: goto L_08A46210;
    case 39u: goto L_08A4621C;
    case 40u: goto L_08A4622C;
    case 41u: goto L_08A4623C;
    case 42u: goto L_08A46258;
    case 43u: goto L_08A46270;
    case 44u: goto L_08A46280;
    case 45u: goto L_08A46288;
    case 46u: goto L_08A46290;
    case 47u: goto L_08A4629C;
    case 48u: goto L_08A462B4;
    case 49u: goto L_08A462C0;
    case 50u: goto L_08A462D8;
    case 51u: goto L_08A462DC;
    case 52u: goto L_08A462E8;
    case 53u: goto L_08A462FC;
    case 54u: goto L_08A46310;
    case 55u: goto L_08A46328;
    case 56u: goto L_08A46334;
    case 57u: goto L_08A46340;
    case 58u: goto L_08A46354;
    case 59u: goto L_08A4635C;
    case 60u: goto L_08A46368;
    case 61u: goto L_08A4637C;
    case 62u: goto L_08A46394;
    case 63u: goto L_08A463A0;
    case 64u: goto L_08A463AC;
    case 65u: goto L_08A463BC;
    case 66u: goto L_08A463C8;
    case 67u: goto L_08A463D8;
    case 68u: goto L_08A463EC;
    case 69u: goto L_08A463F4;
    case 70u: goto L_08A46410;
    case 71u: goto L_08A46420;
    case 72u: goto L_08A46434;
    case 73u: goto L_08A4643C;
    case 74u: goto L_08A46448;
    case 75u: goto L_08A46458;
    case 76u: goto L_08A46488;
    case 77u: goto L_08A4649C;
    case 78u: goto L_08A464A4;
    case 79u: goto L_08A464B4;
    case 80u: goto L_08A464C8;
    case 81u: goto L_08A464CC;
    case 82u: goto L_08A464D4;
    case 83u: goto L_08A464E4;
    case 84u: goto L_08A464F0;
    case 85u: goto L_08A464F8;
    case 86u: goto L_08A46504;
    case 87u: goto L_08A46520;
    case 88u: goto L_08A4653C;
    case 89u: goto L_08A46550;
    case 90u: goto L_08A4655C;
    case 91u: goto L_08A46564;
    case 92u: goto L_08A46578;
    case 93u: goto L_08A46594;
    case 94u: goto L_08A4659C;
    case 95u: goto L_08A465AC;
    case 96u: goto L_08A465B8;
    case 97u: goto L_08A465CC;
    case 98u: goto L_08A465D4;
    case 99u: goto L_08A465DC;
    case 100u: goto L_08A465EC;
    case 101u: goto L_08A465F8;
    case 102u: goto L_08A46604;
    case 103u: goto L_08A46614;
    case 104u: goto L_08A46624;
    case 105u: goto L_08A46630;
    case 106u: goto L_08A46648;
    case 107u: goto L_08A46650;
    case 108u: goto L_08A46658;
    case 109u: goto L_08A46664;
    case 110u: goto L_08A46668;
    case 111u: goto L_08A46678;
    case 112u: goto L_08A46690;
    case 113u: goto L_08A46698;
    case 114u: goto L_08A466A4;
    case 115u: goto L_08A466AC;
    case 116u: goto L_08A466B4;
    case 117u: goto L_08A466BC;
    case 118u: goto L_08A466C4;
    case 119u: goto L_08A466CC;
    case 120u: goto L_08A466D4;
    case 121u: goto L_08A466DC;
    case 122u: goto L_08A466E4;
    case 123u: goto L_08A466EC;
    case 124u: goto L_08A4670C;
    case 125u: goto L_08A46718;
    case 126u: goto L_08A4671C;
    case 127u: goto L_08A46728;
    case 128u: goto L_08A46730;
    case 129u: goto L_08A46738;
    case 130u: goto L_08A46754;
    case 131u: goto L_08A46770;
    case 132u: goto L_08A4677C;
    case 133u: goto L_08A46784;
    case 134u: goto L_08A46794;
    case 135u: goto L_08A467A0;
    case 136u: goto L_08A467A8;
    case 137u: goto L_08A467B0;
    case 138u: goto L_08A467B8;
    case 139u: goto L_08A467C0;
    case 140u: goto L_08A467C8;
    case 141u: goto L_08A467D0;
    case 142u: goto L_08A467D8;
    case 143u: goto L_08A467E0;
    case 144u: goto L_08A467E4;
    case 145u: goto L_08A467FC;
    case 146u: goto L_08A46810;
    case 147u: goto L_08A46834;
    case 148u: goto L_08A46844;
    case 149u: goto L_08A46850;
    case 150u: goto L_08A46860;
    case 151u: goto L_08A4688C;
    case 152u: goto L_08A468B0;
    case 153u: goto L_08A468C0;
    case 154u: goto L_08A468D4;
    case 155u: goto L_08A46904;
    case 156u: goto L_08A46938;
    case 157u: goto L_08A46948;
    case 158u: goto L_08A46960;
    case 159u: goto L_08A46970;
    case 160u: goto L_08A46980;
    case 161u: goto L_08A4698C;
    case 162u: goto L_08A469B4;
    case 163u: goto L_08A469E4;
    case 164u: goto L_08A469F0;
    case 165u: goto L_08A46A0C;
    case 166u: goto L_08A46A1C;
    case 167u: goto L_08A46A24;
    case 168u: goto L_08A46A34;
    case 169u: goto L_08A46A58;
    case 170u: goto L_08A46A88;
    case 171u: goto L_08A46A98;
    case 172u: goto L_08A46AA0;
    case 173u: goto L_08A46AA8;
    case 174u: goto L_08A46AB0;
    case 175u: goto L_08A46AB8;
    case 176u: goto L_08A46AC4;
    case 177u: goto L_08A46AE8;
    case 178u: goto L_08A46B10;
    case 179u: goto L_08A46B18;
    case 180u: goto L_08A46B28;
    case 181u: goto L_08A46B30;
    case 182u: goto L_08A46B38;
    case 183u: goto L_08A46B40;
    case 184u: goto L_08A46B48;
    case 185u: goto L_08A46B50;
    case 186u: goto L_08A46B58;
    case 187u: goto L_08A46B60;
    case 188u: goto L_08A46B68;
    case 189u: goto L_08A46B70;
    case 190u: goto L_08A46B88;
    case 191u: goto L_08A46B90;
    case 192u: goto L_08A46B9C;
    case 193u: goto L_08A46BA4;
    case 194u: goto L_08A46BC4;
    case 195u: goto L_08A46BF0;
    case 196u: goto L_08A46BF8;
    case 197u: goto L_08A46C04;
    case 198u: goto L_08A46C0C;
    case 199u: goto L_08A46C1C;
    case 200u: goto L_08A46C2C;
    case 201u: goto L_08A46C3C;
    case 202u: goto L_08A46C40;
    case 203u: goto L_08A46C50;
    case 204u: goto L_08A46C58;
    case 205u: goto L_08A46C68;
    case 206u: goto L_08A46C70;
    case 207u: goto L_08A46C74;
    case 208u: goto L_08A46C84;
    case 209u: goto L_08A46C8C;
    case 210u: goto L_08A46C90;
    case 211u: goto L_08A46C98;
    case 212u: goto L_08A46CA0;
    case 213u: goto L_08A46CA4;
    case 214u: goto L_08A46CA8;
    case 215u: goto L_08A46CCC;
    case 216u: goto L_08A46CE8;
    case 217u: goto L_08A46D34;
    case 218u: goto L_08A46D48;
    case 219u: goto L_08A46D5C;
    case 220u: goto L_08A46D70;
    case 221u: goto L_08A46D84;
    case 222u: goto L_08A46D98;
    case 223u: goto L_08A46DB0;
    case 224u: goto L_08A46DFC;
    case 225u: goto L_08A46E04;
    case 226u: goto L_08A46E14;
    case 227u: goto L_08A46E30;
    case 228u: goto L_08A46E68;
    case 229u: goto L_08A46E78;
    case 230u: goto L_08A46E84;
    case 231u: goto L_08A46E8C;
    case 232u: goto L_08A46E94;
    case 233u: goto L_08A46E98;
    case 234u: goto L_08A46EA8;
    case 235u: goto L_08A46EB0;
    case 236u: goto L_08A46EE0;
    case 237u: goto L_08A46EEC;
    case 238u: goto L_08A46EFC;
    case 239u: goto L_08A46F0C;
    case 240u: goto L_08A46F1C;
    case 241u: goto L_08A46F28;
    case 242u: goto L_08A46F40;
    case 243u: goto L_08A46F48;
    case 244u: goto L_08A46F50;
    case 245u: goto L_08A46F60;
    case 246u: goto L_08A46F70;
    case 247u: goto L_08A46F7C;
    case 248u: goto L_08A46F88;
    case 249u: goto L_08A46F98;
    case 250u: goto L_08A46FB8;
    case 251u: goto L_08A46FC8;
    case 252u: goto L_08A46FD0;
    case 253u: goto L_08A46FDC;
    case 254u: goto L_08A46FF0;
    case 255u: goto L_08A46FF8;
    case 256u: goto L_08A46FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A46000:
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[2]);
    goto L_08A46004;
L_08A46004:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46010:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A46038;
      }
      goto L_08A46030;
    }
L_08A46030:
    aot_gpr[31] = (0x08A46038u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A460F8;
L_08A46038:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4604C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A4606C;
      }
      goto L_08A4605C;
    }
L_08A4605C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4606C;
      }
      goto L_08A46064;
    }
L_08A46064:
    aot_gpr[31] = (0x08A4606Cu);
    // nop
    goto L_08A460C0;
L_08A4606C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46078:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A4608Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A4608Cu) goto L_08A4608C;
    return;
L_08A4608C:
    aot_gpr[31] = (0x08A46094u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A46094u) goto L_08A46094;
    return;
L_08A46094:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 86u);
    aot_gpr[31] = (0x08A460B0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(11080));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A460B0u) goto L_08A460B0;
    return;
L_08A460B0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A460C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A460D4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A460D4u) goto L_08A460D4;
    return;
L_08A460D4:
    aot_gpr[31] = (0x08A460DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A460DCu) goto L_08A460DC;
    return;
L_08A460DC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A460E8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A460E8u) goto L_08A460E8;
    return;
L_08A460E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A460F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A46108u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A4621C;
L_08A46108:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A46120;
      }
      goto L_08A46110;
    }
L_08A46110:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46120:
    aot_gpr[31] = (0x08A46128u);
    // nop
    goto L_08A4616C;
L_08A46128:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46134:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A46148u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A46210;
L_08A46148:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4615C;
      }
      goto L_08A46150;
    }
L_08A46150:
    aot_gpr[31] = (0x08A46158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0577_entry, 577u, 8u, 0x08A45FA4u>(ctx, &aot_mem) && ctx.pc == 0x08A46158u) goto L_08A46158;
    return;
L_08A46158:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08A4615C;
L_08A4615C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4616C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A46180u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0577_entry, 577u, 8u, 0x08A45FA4u>(ctx, &aot_mem) && ctx.pc == 0x08A46180u) goto L_08A46180;
    return;
L_08A46180:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4619C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A461ACu);
    // nop
    goto L_08A461C4;
L_08A461AC:
    aot_gpr[4] = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[2] = (ctx.lo);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A461C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A461D8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A4621C;
L_08A461D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A461EC;
      }
      goto L_08A461E0;
    }
L_08A461E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A461FC;
      }
      goto L_08A461EC;
    }
L_08A461EC:
    aot_gpr[31] = (0x08A461F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0577_entry, 577u, 8u, 0x08A45FA4u>(ctx, &aot_mem) && ctx.pc == 0x08A461F4u) goto L_08A461F4;
    return;
L_08A461F4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A461FC;
L_08A461FC:
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46210:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4621C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A4622Cu);
    // nop
    goto L_08A46210;
L_08A4622C:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4623C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A46258u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A46258u) goto L_08A46258;
    return;
L_08A46258:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(512), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46270:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A46290;
      }
      goto L_08A46280;
    }
L_08A46280:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46290;
      }
      goto L_08A46288;
    }
L_08A46288:
    aot_gpr[31] = (0x08A46290u);
    // nop
    goto L_08A46420;
L_08A46290:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4629C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    goto L_08A462B4;
L_08A462B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A462DC;
    }
    goto L_08A462C0;
L_08A462C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A462D8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A462D8u) goto L_08A462D8;
    return;
L_08A462D8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A462DC;
L_08A462DC:
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A462B4;
      }
      goto L_08A462E8;
    }
L_08A462E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A462FC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(512));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46310:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    goto L_08A46328;
L_08A46328:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A46354;
      }
      goto L_08A46334;
    }
L_08A46334:
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A46328;
      }
      goto L_08A46340;
    }
L_08A46340:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46354:
    aot_gpr[31] = (0x08A4635Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_08A462FC;
L_08A4635C:
    aot_gpr[5] = (aot_gpr[2] & 255u);
    aot_gpr[31] = (0x08A46368u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 226u, 0x089F2EC0u>(ctx, &aot_mem) && ctx.pc == 0x08A46368u) goto L_08A46368;
    return;
L_08A46368:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4637C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    goto L_08A46394;
L_08A46394:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A463BC;
      }
      goto L_08A463A0;
    }
L_08A463A0:
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A46394;
      }
      goto L_08A463AC;
    }
L_08A463AC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A463BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x08A463C8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 226u, 0x089F2EC0u>(ctx, &aot_mem) && ctx.pc == 0x08A463C8u) goto L_08A463C8;
    return;
L_08A463C8:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A463D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A463ECu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A463ECu) goto L_08A463EC;
    return;
L_08A463EC:
    aot_gpr[31] = (0x08A463F4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A463F4u) goto L_08A463F4;
    return;
L_08A463F4:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 83u);
    aot_gpr[31] = (0x08A46410u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(11112));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A46410u) goto L_08A46410;
    return;
L_08A46410:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46420:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A46434u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A46434u) goto L_08A46434;
    return;
L_08A46434:
    aot_gpr[31] = (0x08A4643Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4643Cu) goto L_08A4643C;
    return;
L_08A4643C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A46448u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A46448u) goto L_08A46448;
    return;
L_08A46448:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46458:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A46488u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A46624;
L_08A46488:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A4649Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11152));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 129u, 0x08A008A4u>(ctx, &aot_mem) && ctx.pc == 0x08A4649Cu) goto L_08A4649C;
    return;
L_08A4649C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A464CC;
      }
      goto L_08A464A4;
    }
L_08A464A4:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x08A464B4u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(11164));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A464B4u) goto L_08A464B4;
    return;
L_08A464B4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A464C8u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A464C8u) goto L_08A464C8;
    return;
L_08A464C8:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A464CC;
L_08A464CC:
    aot_gpr[31] = (0x08A464D4u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(11172));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A464D4u) goto L_08A464D4;
    return;
L_08A464D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A464E4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A464E4u) goto L_08A464E4;
    return;
L_08A464E4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46504;
      }
      goto L_08A464F0;
    }
L_08A464F0:
    aot_gpr[31] = (0x08A464F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A464F8u) goto L_08A464F8;
    return;
L_08A464F8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A46504u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A46578;
L_08A46504:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08A46520:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A46564;
      }
      goto L_08A4653C;
    }
L_08A4653C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20112));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x08A46550u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A46630;
L_08A46550:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46564;
      }
      goto L_08A4655C;
    }
L_08A4655C:
    aot_gpr[31] = (0x08A46564u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A46564u) goto L_08A46564;
    return;
L_08A46564:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46578:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A46594u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    goto L_08A46630;
L_08A46594:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A465B8;
      }
      goto L_08A4659C;
    }
L_08A4659C:
    aot_gpr[5] = (0u | 61u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A465ACu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11180));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A465ACu) goto L_08A465AC;
    return;
L_08A465AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x08A465B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A465B8u) goto L_08A465B8;
    return;
L_08A465B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A465CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A465D4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A465DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A465ECu);
    // nop
    goto L_08A465CC;
L_08A465EC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46614;
      }
      goto L_08A465F8;
    }
L_08A465F8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46614;
      }
      goto L_08A46604;
    }
L_08A46604:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46614:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46624:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46630:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A46668;
      }
      goto L_08A46648;
    }
L_08A46648:
    aot_gpr[31] = (0x08A46650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A46650u) goto L_08A46650;
    return;
L_08A46650:
    aot_gpr[31] = (0x08A46658u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A46658u) goto L_08A46658;
    return;
L_08A46658:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A46664u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A46664u) goto L_08A46664;
    return;
L_08A46664:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A46668;
L_08A46668:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46678:
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (aot_gpr[5] & 240u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 192u);
      if (branch_taken) {
          goto L_08A46698;
      }
      goto L_08A46690;
    }
L_08A46690:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46698:
    aot_gpr[6] = (0u | 128u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[5] = (0u | 240u);
      if (branch_taken) {
          goto L_08A466AC;
      }
      goto L_08A466A4;
    }
L_08A466A4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A466AC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 224u);
      if (branch_taken) {
          goto L_08A466D4;
      }
      goto L_08A466B4;
    }
L_08A466B4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 208u);
      if (branch_taken) {
          goto L_08A466DC;
      }
      goto L_08A466BC;
    }
L_08A466BC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 192u);
      if (branch_taken) {
          goto L_08A466DC;
      }
      goto L_08A466C4;
    }
L_08A466C4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_08A466E4;
      }
      goto L_08A466CC;
    }
L_08A466CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A466D4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 3u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A466DC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A466E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A466EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A46738;
      }
      goto L_08A4670C;
    }
L_08A4670C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A46738;
      }
      goto L_08A46718;
    }
L_08A46718:
    aot_gpr[18] = (0u | 4u);
    goto L_08A4671C;
L_08A4671C:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x08A46728u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08A46678;
L_08A46728:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A46738;
      }
      goto L_08A46730;
    }
L_08A46730:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4671C;
      }
      goto L_08A46738;
    }
L_08A46738:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A46754:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A46770u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A46770u) goto L_08A46770;
    return;
L_08A46770:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08A467FC;
      }
      goto L_08A4677C;
    }
L_08A4677C:
    aot_gpr[31] = (0x08A46784u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08A46678;
L_08A46784:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A467E4;
      }
      goto L_08A46794;
    }
L_08A46794:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A467C8;
      }
      goto L_08A467A0;
    }
L_08A467A0:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A467D0;
      }
      goto L_08A467A8;
    }
L_08A467A8:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A467D8;
      }
      goto L_08A467B0;
    }
L_08A467B0:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A467E0;
      }
      goto L_08A467B8;
    }
L_08A467B8:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A467E0;
      }
      goto L_08A467C0;
    }
L_08A467C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A467E4;
      }
      goto L_08A467C8;
    }
L_08A467C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A467E4;
      }
      goto L_08A467D0;
    }
L_08A467D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A467E4;
      }
      goto L_08A467D8;
    }
L_08A467D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A467E4;
      }
      goto L_08A467E0;
    }
L_08A467E0:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A467E4;
L_08A467E4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A467FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46810:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A46834u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A46834u) goto L_08A46834;
    return;
L_08A46834:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A46844u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A466EC;
L_08A46844:
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) <= 0;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A46860;
      }
      goto L_08A46850;
    }
L_08A46850:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[31] = (0x08A46860u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A46860u) goto L_08A46860;
    return;
L_08A46860:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A4688C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A468B0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A468B0u) goto L_08A468B0;
    return;
L_08A468B0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A468C0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A46754;
L_08A468C0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[16]);
    aot_gpr[31] = (0x08A468D4u);
    aot_gpr[6] = (aot_gpr[18] - aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A468D4u) goto L_08A468D4;
    return;
L_08A468D4:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08A46904:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A46938u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A46938u) goto L_08A46938;
    return;
L_08A46938:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08A46980;
      }
      goto L_08A46948;
    }
L_08A46948:
    aot_gpr[21] = (aot_gpr[4] - aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A46960u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A46960u) goto L_08A46960;
    return;
L_08A46960:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A46970u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A46970u) goto L_08A46970;
    return;
L_08A46970:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A4698C;
      }
      goto L_08A46980;
    }
L_08A46980:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A4698Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4698Cu) goto L_08A4698C;
    return;
L_08A4698C:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_08A469B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A469E4u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A469E4u) goto L_08A469E4;
    return;
L_08A469E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08A469F0;
L_08A469F0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A46A0Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A46A0Cu) goto L_08A46A0C;
    return;
L_08A46A0C:
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A46A34;
      }
      goto L_08A46A1C;
    }
L_08A46A1C:
    aot_gpr[31] = (0x08A46A24u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08A46810;
L_08A46A24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A469F0;
      }
      goto L_08A46A34;
    }
L_08A46A34:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46A58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A46AC4;
      }
      goto L_08A46A88;
    }
L_08A46A88:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[18] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[16] ? 1u : 0u);
    goto L_08A46A98;
L_08A46A98:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46AC4;
      }
      goto L_08A46AA0;
    }
L_08A46AA0:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
      if (branch_taken) {
          goto L_08A46AC4;
      }
      goto L_08A46AA8;
    }
L_08A46AA8:
    aot_gpr[31] = (0x08A46AB0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08A46678;
L_08A46AB0:
    if (aot_gpr[2] != aot_gpr[18]) {
    aot_gpr[20] = (0u | 0u);
        goto L_08A46AB8;
    }
    goto L_08A46AB8;
L_08A46AB8:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A46A98;
      }
      goto L_08A46AC4;
    }
L_08A46AC4:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_08A46AE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A46BA4;
      }
      goto L_08A46B10;
    }
L_08A46B10:
    aot_gpr[31] = (0x08A46B18u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    goto L_08A46678;
L_08A46B18:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A46B70;
      }
      goto L_08A46B28;
    }
L_08A46B28:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A46B60;
      }
      goto L_08A46B30;
    }
L_08A46B30:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A46B58;
      }
      goto L_08A46B38;
    }
L_08A46B38:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A46B50;
      }
      goto L_08A46B40;
    }
L_08A46B40:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A46B68;
      }
      goto L_08A46B48;
    }
L_08A46B48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 3u);
      if (branch_taken) {
          goto L_08A46B70;
      }
      goto L_08A46B50;
    }
L_08A46B50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_08A46B70;
      }
      goto L_08A46B58;
    }
L_08A46B58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A46B70;
      }
      goto L_08A46B60;
    }
L_08A46B60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A46B70;
      }
      goto L_08A46B68;
    }
L_08A46B68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A46B70;
      }
      goto L_08A46B70;
    }
L_08A46B70:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A46B88u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    goto L_08A46A58;
L_08A46B88:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46B9C;
      }
      goto L_08A46B90;
    }
L_08A46B90:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A46B9C;
L_08A46B9C:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A46B10;
      }
      goto L_08A46BA4;
    }
L_08A46BA4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08A46BC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A46CA8;
      }
      goto L_08A46BF0;
    }
L_08A46BF0:
    aot_gpr[31] = (0x08A46BF8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A46BF8u) goto L_08A46BF8;
    return;
L_08A46BF8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A46C04u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08A46AE8;
L_08A46C04:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A46CA8;
      }
      goto L_08A46C0C;
    }
L_08A46C0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[31] = (0x08A46C1Cu);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08A46678;
L_08A46C1C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A46CA8;
      }
      goto L_08A46C2C;
    }
L_08A46C2C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A46C58;
      }
      goto L_08A46C3C;
    }
L_08A46C3C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_08A46C40;
L_08A46C40:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[19]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A46C50u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A46678;
L_08A46C50:
    if (aot_gpr[2] == aot_gpr[21]) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
        goto L_08A46C40;
    }
    goto L_08A46C58;
L_08A46C58:
    aot_gpr[20] = (aot_gpr[18] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[19]);
    aot_gpr[31] = (0x08A46C68u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08A46678;
L_08A46C68:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[21];
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A46C90;
      }
      goto L_08A46C70;
    }
L_08A46C70:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A46C74;
L_08A46C74:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[19]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A46C84u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A46678;
L_08A46C84:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[21];
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A46C74;
      }
      goto L_08A46C8C;
    }
L_08A46C8C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    goto L_08A46C90;
L_08A46C90:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A46CA0;
      }
      goto L_08A46C98;
    }
L_08A46C98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[4] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A46CA4;
      }
      goto L_08A46CA0;
    }
L_08A46CA0:
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[17]);
    goto L_08A46CA4;
L_08A46CA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    goto L_08A46CA8;
L_08A46CA8:
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
L_08A46CCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A46CE8u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A46CE8u) goto L_08A46CE8;
    return;
L_08A46CE8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (65280u << 16u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(300), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(304), aot_gpr[5]);
    aot_gpr[5] = (65407u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32639));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(312), aot_gpr[5]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-256));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(308), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(316), aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(300));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A46D34u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11216));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A46D34u) goto L_08A46D34;
    return;
L_08A46D34:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(296));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A46D48u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11228));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A46D48u) goto L_08A46D48;
    return;
L_08A46D48:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(304));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A46D5Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11240));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A46D5Cu) goto L_08A46D5C;
    return;
L_08A46D5C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(312));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A46D70u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11252));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A46D70u) goto L_08A46D70;
    return;
L_08A46D70:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(308));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A46D84u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11272));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A46D84u) goto L_08A46D84;
    return;
L_08A46D84:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(316));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A46D98u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11292));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A46D98u) goto L_08A46D98;
    return;
L_08A46D98:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46DB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[18] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x08A46DFCu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_08A46E30;
L_08A46DFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46E14;
      }
      goto L_08A46E04;
    }
L_08A46E04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] - aot_gpr[4]);
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[16]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[17] = (ctx.lo);
    goto L_08A46E14;
L_08A46E14:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08A46E30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 40u, 0x08A471E0u>(ctx, &aot_mem); return;
      }
      goto L_08A46E68;
    }
L_08A46E68:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46E84;
      }
      goto L_08A46E78;
    }
L_08A46E78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A46E98;
    }
    goto L_08A46E84;
L_08A46E84:
    aot_gpr[31] = (0x08A46E8Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 64u, 0x08A39324u>(ctx, &aot_mem) && ctx.pc == 0x08A46E8Cu) goto L_08A46E8C;
    return;
L_08A46E8C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A46EB0;
      }
      goto L_08A46E94;
    }
L_08A46E94:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A46E98;
L_08A46E98:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A46EE0;
      }
      goto L_08A46EA8;
    }
L_08A46EA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 1u);
      if (branch_taken) {
          goto L_08A46F48;
      }
      goto L_08A46EB0;
    }
L_08A46EB0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08A46EE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A46EFC;
      }
      goto L_08A46EEC;
    }
L_08A46EEC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A46EEC;
      }
      goto L_08A46EFC;
    }
L_08A46EFC:
    aot_gpr[5] = (0u | 1024u);
    aot_gpr[7] = (aot_gpr[18] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[5] = (aot_gpr[18] | 0u);
        goto L_08A46F0C;
    }
    goto L_08A46F0C;
L_08A46F0C:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A46F1Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A46F1Cu) goto L_08A46F1C;
    return;
L_08A46F1C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) <= 0) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 41u, 0x08A47210u>(ctx, &aot_mem); return;
    }
    goto L_08A46F28;
L_08A46F28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A46EE0;
      }
      goto L_08A46F40;
    }
L_08A46F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 40u, 0x08A471E0u>(ctx, &aot_mem); return;
      }
      goto L_08A46F48;
    }
L_08A46F48:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 12u, 0x08A4708Cu>(ctx, &aot_mem); return;
      }
      goto L_08A46F50;
    }
L_08A46F50:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A46F70;
      }
      goto L_08A46F60;
    }
L_08A46F60:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A46F60;
      }
      goto L_08A46F70;
    }
L_08A46F70:
    aot_gpr[4] = (aot_gpr[4] & 512u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A46FB8;
      }
      goto L_08A46F7C;
    }
L_08A46F7C:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[20] = (aot_gpr[18] | 0u);
        goto L_08A46F88;
    }
    goto L_08A46F88;
L_08A46F88:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A46F98u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A46F98u) goto L_08A46F98;
    return;
L_08A46F98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 9u, 0x08A4706Cu>(ctx, &aot_mem); return;
      }
      goto L_08A46FB8;
    }
L_08A46FB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 2u, 0x08A47008u>(ctx, &aot_mem); return;
      }
      goto L_08A46FC8;
    }
L_08A46FC8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 2u, 0x08A47008u>(ctx, &aot_mem); return;
      }
      goto L_08A46FD0;
    }
L_08A46FD0:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A46FDCu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A46FDCu) goto L_08A46FDC;
    return;
L_08A46FDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    aot_gpr[31] = (0x08A46FF0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 103u, 0x08A37910u>(ctx, &aot_mem) && ctx.pc == 0x08A46FF0u) goto L_08A46FF0;
    return;
L_08A46FF0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        (void)rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 10u, 0x08A47070u>(ctx, &aot_mem); return;
    }
    goto L_08A46FF8;
L_08A46FF8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08A46FFC;
L_08A46FFC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08A47000u; return;
}

void recomp_unit_0578(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0578_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_578(Runtime &runtime) {
    runtime.register_generated_unit(578u, 0x08A46000u, 4096u, &recomp_unit_0578, &recomp_unit_0578_entry);
    runtime.register_function(0x08A46000u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46004u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46010u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46030u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46038u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4604Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4605Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46064u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4606Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46078u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4608Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46094u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A460B0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A460C0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A460D4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A460DCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A460E8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A460F8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46108u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46110u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46120u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46128u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46134u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46148u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46150u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46158u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4615Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4616Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46180u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4619Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A461ACu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A461C4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A461D8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A461E0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A461ECu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A461F4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A461FCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46210u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4621Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4622Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4623Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46258u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46270u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46280u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46288u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46290u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4629Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A462B4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A462C0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A462D8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A462DCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A462E8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A462FCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46310u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46328u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46334u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46340u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46354u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4635Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46368u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4637Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46394u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A463A0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A463ACu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A463BCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A463C8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A463D8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A463ECu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A463F4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46410u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46420u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46434u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4643Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46448u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46458u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46488u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4649Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A464A4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A464B4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A464C8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A464CCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A464D4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A464E4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A464F0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A464F8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46504u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46520u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4653Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46550u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4655Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46564u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46578u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46594u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4659Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A465ACu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A465B8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A465CCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A465D4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A465DCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A465ECu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A465F8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46604u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46614u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46624u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46630u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46648u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46650u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46658u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46664u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46668u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46678u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46690u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46698u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A466A4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A466ACu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A466B4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A466BCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A466C4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A466CCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A466D4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A466DCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A466E4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A466ECu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4670Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46718u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4671Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46728u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46730u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46738u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46754u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46770u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4677Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46784u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46794u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A467A0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A467A8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A467B0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A467B8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A467C0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A467C8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A467D0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A467D8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A467E0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A467E4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A467FCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46810u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46834u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46844u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46850u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46860u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4688Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A468B0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A468C0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A468D4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46904u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46938u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46948u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46960u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46970u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46980u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A4698Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A469B4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A469E4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A469F0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46A0Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46A1Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46A24u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46A34u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46A58u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46A88u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46A98u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46AA0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46AA8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46AB0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46AB8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46AC4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46AE8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B10u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B18u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B28u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B30u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B38u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B40u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B48u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B50u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B58u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B60u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B68u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B70u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B88u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B90u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46B9Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46BA4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46BC4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46BF0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46BF8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C04u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C0Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C1Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C2Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C3Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C40u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C50u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C58u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C68u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C70u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C74u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C84u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C8Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C90u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46C98u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46CA0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46CA4u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46CA8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46CCCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46CE8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46D34u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46D48u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46D5Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46D70u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46D84u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46D98u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46DB0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46DFCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46E04u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46E14u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46E30u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46E68u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46E78u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46E84u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46E8Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46E94u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46E98u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46EA8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46EB0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46EE0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46EECu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46EFCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46F0Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46F1Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46F28u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46F40u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46F48u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46F50u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46F60u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46F70u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46F7Cu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46F88u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46F98u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46FB8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46FC8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46FD0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46FDCu, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46FF0u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46FF8u, &recomp_unit_0578, "recomp_unit_0578");
    runtime.register_function(0x08A46FFCu, &recomp_unit_0578, "recomp_unit_0578");
}
} // namespace psprecomp
