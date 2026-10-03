#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0076[1022] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0,
    0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20,
    0, 21, 0, 22, 0, 0, 23, 0, 24, 25, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0,
    32, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 40, 41, 0, 0, 0,
    0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 61,
    0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 72,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80,
    0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0,
    0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99,
    0, 0, 0, 100, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0,
    0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114,
    0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0,
    0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0,
    0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0,
    0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0,
    0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0,
    165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0,
    0, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0,
    0, 0, 180, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0,
    187, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0,
    0, 196, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    223, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0,
    233, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0,
    243, 0, 0, 0, 244, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 252, 0, 0,
    0, 253, 0, 254, 0, 255, 0, 0, 256, 0, 257, 258, 0, 0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 265,
    0, 0, 266, 0, 267, 268, 0, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0,
    276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 283, 284, 0, 0, 0, 0, 285,
};
void recomp_unit_0076_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08850000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0076[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08850000;
    case 2u: goto L_08850008;
    case 3u: goto L_08850014;
    case 4u: goto L_08850024;
    case 5u: goto L_08850034;
    case 6u: goto L_08850044;
    case 7u: goto L_0885004C;
    case 8u: goto L_08850058;
    case 9u: goto L_08850068;
    case 10u: goto L_08850078;
    case 11u: goto L_08850088;
    case 12u: goto L_08850090;
    case 13u: goto L_0885009C;
    case 14u: goto L_088500AC;
    case 15u: goto L_088500BC;
    case 16u: goto L_088500CC;
    case 17u: goto L_088500D4;
    case 18u: goto L_088500DC;
    case 19u: goto L_088500EC;
    case 20u: goto L_088500FC;
    case 21u: goto L_08850104;
    case 22u: goto L_0885010C;
    case 23u: goto L_08850118;
    case 24u: goto L_08850120;
    case 25u: goto L_08850124;
    case 26u: goto L_08850134;
    case 27u: goto L_0885013C;
    case 28u: goto L_08850148;
    case 29u: goto L_08850158;
    case 30u: goto L_08850168;
    case 31u: goto L_08850178;
    case 32u: goto L_08850180;
    case 33u: goto L_08850190;
    case 34u: goto L_08850198;
    case 35u: goto L_088501A0;
    case 36u: goto L_088501C0;
    case 37u: goto L_088501CC;
    case 38u: goto L_088501D8;
    case 39u: goto L_088501E0;
    case 40u: goto L_088501EC;
    case 41u: goto L_088501F0;
    case 42u: goto L_08850204;
    case 43u: goto L_08850214;
    case 44u: goto L_0885021C;
    case 45u: goto L_08850238;
    case 46u: goto L_08850290;
    case 47u: goto L_08850298;
    case 48u: goto L_088502A4;
    case 49u: goto L_088502AC;
    case 50u: goto L_088502C4;
    case 51u: goto L_088502F8;
    case 52u: goto L_08850310;
    case 53u: goto L_08850328;
    case 54u: goto L_08850334;
    case 55u: goto L_0885034C;
    case 56u: goto L_08850358;
    case 57u: goto L_08850360;
    case 58u: goto L_08850368;
    case 59u: goto L_08850370;
    case 60u: goto L_08850378;
    case 61u: goto L_0885037C;
    case 62u: goto L_08850384;
    case 63u: goto L_0885038C;
    case 64u: goto L_0885039C;
    case 65u: goto L_088503A4;
    case 66u: goto L_088503B0;
    case 67u: goto L_088503CC;
    case 68u: goto L_088503D8;
    case 69u: goto L_088503E0;
    case 70u: goto L_088503E8;
    case 71u: goto L_088503F0;
    case 72u: goto L_088503FC;
    case 73u: goto L_08850410;
    case 74u: goto L_08850428;
    case 75u: goto L_08850438;
    case 76u: goto L_08850440;
    case 77u: goto L_0885044C;
    case 78u: goto L_0885045C;
    case 79u: goto L_0885046C;
    case 80u: goto L_0885047C;
    case 81u: goto L_08850484;
    case 82u: goto L_08850490;
    case 83u: goto L_088504A0;
    case 84u: goto L_088504B0;
    case 85u: goto L_088504C0;
    case 86u: goto L_088504C8;
    case 87u: goto L_088504D4;
    case 88u: goto L_088504E4;
    case 89u: goto L_088504F4;
    case 90u: goto L_08850504;
    case 91u: goto L_0885050C;
    case 92u: goto L_08850518;
    case 93u: goto L_08850528;
    case 94u: goto L_08850538;
    case 95u: goto L_08850548;
    case 96u: goto L_08850550;
    case 97u: goto L_0885055C;
    case 98u: goto L_0885056C;
    case 99u: goto L_0885057C;
    case 100u: goto L_0885058C;
    case 101u: goto L_08850594;
    case 102u: goto L_088505A0;
    case 103u: goto L_088505B0;
    case 104u: goto L_088505C0;
    case 105u: goto L_088505D0;
    case 106u: goto L_088505D8;
    case 107u: goto L_088505E4;
    case 108u: goto L_088505F4;
    case 109u: goto L_08850604;
    case 110u: goto L_08850614;
    case 111u: goto L_0885061C;
    case 112u: goto L_0885064C;
    case 113u: goto L_08850674;
    case 114u: goto L_0885067C;
    case 115u: goto L_08850684;
    case 116u: goto L_0885068C;
    case 117u: goto L_08850698;
    case 118u: goto L_088506A8;
    case 119u: goto L_088506C8;
    case 120u: goto L_088506D8;
    case 121u: goto L_088506E0;
    case 122u: goto L_088506EC;
    case 123u: goto L_088506FC;
    case 124u: goto L_08850714;
    case 125u: goto L_08850724;
    case 126u: goto L_0885072C;
    case 127u: goto L_08850738;
    case 128u: goto L_08850748;
    case 129u: goto L_08850760;
    case 130u: goto L_08850770;
    case 131u: goto L_08850778;
    case 132u: goto L_08850784;
    case 133u: goto L_08850794;
    case 134u: goto L_088507AC;
    case 135u: goto L_088507BC;
    case 136u: goto L_088507C4;
    case 137u: goto L_088507D0;
    case 138u: goto L_088507E0;
    case 139u: goto L_088507F4;
    case 140u: goto L_08850804;
    case 141u: goto L_08850814;
    case 142u: goto L_0885081C;
    case 143u: goto L_08850828;
    case 144u: goto L_08850838;
    case 145u: goto L_08850844;
    case 146u: goto L_08850854;
    case 147u: goto L_08850864;
    case 148u: goto L_0885086C;
    case 149u: goto L_08850878;
    case 150u: goto L_08850888;
    case 151u: goto L_08850894;
    case 152u: goto L_088508A4;
    case 153u: goto L_088508B4;
    case 154u: goto L_088508BC;
    case 155u: goto L_088508C8;
    case 156u: goto L_088508D8;
    case 157u: goto L_088508E4;
    case 158u: goto L_088508F4;
    case 159u: goto L_08850904;
    case 160u: goto L_0885090C;
    case 161u: goto L_08850924;
    case 162u: goto L_0885095C;
    case 163u: goto L_08850964;
    case 164u: goto L_08850978;
    case 165u: goto L_08850980;
    case 166u: goto L_08850994;
    case 167u: goto L_088509A4;
    case 168u: goto L_088509C4;
    case 169u: goto L_088509D8;
    case 170u: goto L_088509F0;
    case 171u: goto L_088509F8;
    case 172u: goto L_08850A08;
    case 173u: goto L_08850A10;
    case 174u: goto L_08850A1C;
    case 175u: goto L_08850A2C;
    case 176u: goto L_08850A44;
    case 177u: goto L_08850A58;
    case 178u: goto L_08850A70;
    case 179u: goto L_08850A78;
    case 180u: goto L_08850A88;
    case 181u: goto L_08850A90;
    case 182u: goto L_08850A9C;
    case 183u: goto L_08850AAC;
    case 184u: goto L_08850ACC;
    case 185u: goto L_08850AE0;
    case 186u: goto L_08850AF8;
    case 187u: goto L_08850B00;
    case 188u: goto L_08850B10;
    case 189u: goto L_08850B18;
    case 190u: goto L_08850B24;
    case 191u: goto L_08850B34;
    case 192u: goto L_08850B40;
    case 193u: goto L_08850B54;
    case 194u: goto L_08850B6C;
    case 195u: goto L_08850B74;
    case 196u: goto L_08850B84;
    case 197u: goto L_08850B8C;
    case 198u: goto L_08850B98;
    case 199u: goto L_08850BA8;
    case 200u: goto L_08850BB8;
    case 201u: goto L_08850BC8;
    case 202u: goto L_08850BD0;
    case 203u: goto L_08850BDC;
    case 204u: goto L_08850BEC;
    case 205u: goto L_08850BF4;
    case 206u: goto L_08850C08;
    case 207u: goto L_08850C20;
    case 208u: goto L_08850C28;
    case 209u: goto L_08850C38;
    case 210u: goto L_08850C40;
    case 211u: goto L_08850C4C;
    case 212u: goto L_08850C5C;
    case 213u: goto L_08850C64;
    case 214u: goto L_08850C78;
    case 215u: goto L_08850C90;
    case 216u: goto L_08850C98;
    case 217u: goto L_08850CA8;
    case 218u: goto L_08850CB0;
    case 219u: goto L_08850CBC;
    case 220u: goto L_08850CCC;
    case 221u: goto L_08850CD4;
    case 222u: goto L_08850CE8;
    case 223u: goto L_08850D00;
    case 224u: goto L_08850D08;
    case 225u: goto L_08850D18;
    case 226u: goto L_08850D20;
    case 227u: goto L_08850D2C;
    case 228u: goto L_08850D3C;
    case 229u: goto L_08850D4C;
    case 230u: goto L_08850D5C;
    case 231u: goto L_08850D64;
    case 232u: goto L_08850D70;
    case 233u: goto L_08850D80;
    case 234u: goto L_08850D8C;
    case 235u: goto L_08850DA4;
    case 236u: goto L_08850DB0;
    case 237u: goto L_08850DBC;
    case 238u: goto L_08850DC8;
    case 239u: goto L_08850DD4;
    case 240u: goto L_08850DE8;
    case 241u: goto L_08850DF0;
    case 242u: goto L_08850DF8;
    case 243u: goto L_08850E00;
    case 244u: goto L_08850E10;
    case 245u: goto L_08850E18;
    case 246u: goto L_08850E24;
    case 247u: goto L_08850E34;
    case 248u: goto L_08850E44;
    case 249u: goto L_08850E54;
    case 250u: goto L_08850E5C;
    case 251u: goto L_08850E64;
    case 252u: goto L_08850E74;
    case 253u: goto L_08850E84;
    case 254u: goto L_08850E8C;
    case 255u: goto L_08850E94;
    case 256u: goto L_08850EA0;
    case 257u: goto L_08850EA8;
    case 258u: goto L_08850EAC;
    case 259u: goto L_08850EBC;
    case 260u: goto L_08850EC4;
    case 261u: goto L_08850ECC;
    case 262u: goto L_08850EDC;
    case 263u: goto L_08850EEC;
    case 264u: goto L_08850EF4;
    case 265u: goto L_08850EFC;
    case 266u: goto L_08850F08;
    case 267u: goto L_08850F10;
    case 268u: goto L_08850F14;
    case 269u: goto L_08850F24;
    case 270u: goto L_08850F2C;
    case 271u: goto L_08850F38;
    case 272u: goto L_08850F48;
    case 273u: goto L_08850F58;
    case 274u: goto L_08850F68;
    case 275u: goto L_08850F70;
    case 276u: goto L_08850F80;
    case 277u: goto L_08850F88;
    case 278u: goto L_08850F90;
    case 279u: goto L_08850FB0;
    case 280u: goto L_08850FBC;
    case 281u: goto L_08850FC8;
    case 282u: goto L_08850FD0;
    case 283u: goto L_08850FDC;
    case 284u: goto L_08850FE0;
    case 285u: goto L_08850FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08850000:
    aot_gpr[31] = (0x08850008u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850008u) goto L_08850008;
    return;
L_08850008:
    aot_gpr[4] = (0u | 236u);
    aot_gpr[31] = (0x08850014u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850014u) goto L_08850014;
    return;
L_08850014:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850024u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850024u) goto L_08850024;
    return;
L_08850024:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(672)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08850034u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850034u) goto L_08850034;
    return;
L_08850034:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850044u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850044u) goto L_08850044;
    return;
L_08850044:
    aot_gpr[31] = (0x0885004Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885004Cu) goto L_0885004C;
    return;
L_0885004C:
    aot_gpr[4] = (0u | 237u);
    aot_gpr[31] = (0x08850058u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850058u) goto L_08850058;
    return;
L_08850058:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850068u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850068u) goto L_08850068;
    return;
L_08850068:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(676)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08850078u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850078u) goto L_08850078;
    return;
L_08850078:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850088u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850088u) goto L_08850088;
    return;
L_08850088:
    aot_gpr[31] = (0x08850090u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850090u) goto L_08850090;
    return;
L_08850090:
    aot_gpr[4] = (0u | 239u);
    aot_gpr[31] = (0x0885009Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0885009Cu) goto L_0885009C;
    return;
L_0885009C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088500ACu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088500ACu) goto L_088500AC;
    return;
L_088500AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(680)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088500BCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088500BCu) goto L_088500BC;
    return;
L_088500BC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088500CCu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088500CCu) goto L_088500CC;
    return;
L_088500CC:
    aot_gpr[31] = (0x088500D4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x088500D4u) goto L_088500D4;
    return;
L_088500D4:
    aot_gpr[31] = (0x088500DCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 132u, 0x08873888u>(ctx, &aot_mem) && ctx.pc == 0x088500DCu) goto L_088500DC;
    return;
L_088500DC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 228u);
    aot_gpr[31] = (0x088500ECu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088500ECu) goto L_088500EC;
    return;
L_088500EC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088500FCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088500FCu) goto L_088500FC;
    return;
L_088500FC:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08850120;
      }
      goto L_08850104;
    }
L_08850104:
    aot_gpr[31] = (0x0885010Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 218u, 0x0884FE58u>(ctx, &aot_mem) && ctx.pc == 0x0885010Cu) goto L_0885010C;
    return;
L_0885010C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08850118u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08850118u) goto L_08850118;
    return;
L_08850118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850124;
      }
      goto L_08850120;
    }
L_08850120:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08850124;
L_08850124:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850134u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850134u) goto L_08850134;
    return;
L_08850134:
    aot_gpr[31] = (0x0885013Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885013Cu) goto L_0885013C;
    return;
L_0885013C:
    aot_gpr[4] = (0u | 230u);
    aot_gpr[31] = (0x08850148u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850148u) goto L_08850148;
    return;
L_08850148:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850158u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850158u) goto L_08850158;
    return;
L_08850158:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(129));
    aot_gpr[31] = (0x08850168u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 138u, 0x088738D4u>(ctx, &aot_mem) && ctx.pc == 0x08850168u) goto L_08850168;
    return;
L_08850168:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08850204;
      }
      goto L_08850178;
    }
L_08850178:
    aot_gpr[31] = (0x08850180u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 152u, 0x0881CAA0u>(ctx, &aot_mem) && ctx.pc == 0x08850180u) goto L_08850180;
    return;
L_08850180:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08850190u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 153u, 0x0881CABCu>(ctx, &aot_mem) && ctx.pc == 0x08850190u) goto L_08850190;
    return;
L_08850190:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[19];
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08850204;
      }
      goto L_08850198;
    }
L_08850198:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08850204;
      }
      goto L_088501A0;
    }
L_088501A0:
    aot_gpr[5] = (aot_gpr[18] << 24u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x088501C0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(444));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088501C0u) goto L_088501C0;
    return;
L_088501C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(129)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088501E0;
      }
      goto L_088501CC;
    }
L_088501CC:
    aot_gpr[4] = (0u | 92u);
    aot_gpr[31] = (0x088501D8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088501D8u) goto L_088501D8;
    return;
L_088501D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088501F0;
      }
      goto L_088501E0;
    }
L_088501E0:
    aot_gpr[4] = (0u | 93u);
    aot_gpr[31] = (0x088501ECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088501ECu) goto L_088501EC;
    return;
L_088501EC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088501F0;
L_088501F0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08850204u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850204u) goto L_08850204;
    return;
L_08850204:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850214u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850214u) goto L_08850214;
    return;
L_08850214:
    aot_gpr[31] = (0x0885021Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885021Cu) goto L_0885021C;
    return;
L_0885021C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850238:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(20));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088502C4;
      }
      goto L_08850290;
    }
L_08850290:
    aot_gpr[31] = (0x08850298u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 74u, 0x0881C544u>(ctx, &aot_mem) && ctx.pc == 0x08850298u) goto L_08850298;
    return;
L_08850298:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088502AC;
      }
      goto L_088502A4;
    }
L_088502A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088502C4;
      }
      goto L_088502AC;
    }
L_088502AC:
    aot_gpr[19] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08850290;
      }
      goto L_088502C4;
    }
L_088502C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[30] = (0u | 0u);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[31] = (0x088502F8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 217u, 0x08874BFCu>(ctx, &aot_mem) && ctx.pc == 0x088502F8u) goto L_088502F8;
    return;
L_088502F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088503CC;
      }
      goto L_08850310;
    }
L_08850310:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(524));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[20] = (0u | 2u);
    aot_gpr[19] = (0u | 3u);
    goto L_08850328;
L_08850328:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_08850384;
      }
      goto L_08850334;
    }
L_08850334:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[31] = (0x0885034Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 48u, 0x0881C3CCu>(ctx, &aot_mem) && ctx.pc == 0x0885034Cu) goto L_0885034C;
    return;
L_0885034C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_08850360;
      }
      goto L_08850358;
    }
L_08850358:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885037C;
      }
      goto L_08850360;
    }
L_08850360:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_08850370;
      }
      goto L_08850368;
    }
L_08850368:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885037C;
      }
      goto L_08850370;
    }
L_08850370:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0885037C;
      }
      goto L_08850378;
    }
L_08850378:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0885037C;
L_0885037C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088503B0;
      }
      goto L_08850384;
    }
L_08850384:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0885039C;
      }
      goto L_0885038C;
    }
L_0885038C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
      if (branch_taken) {
          goto L_088503B0;
      }
      goto L_0885039C;
    }
L_0885039C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088503B0;
      }
      goto L_088503A4;
    }
L_088503A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    goto L_088503B0;
L_088503B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08850328;
      }
      goto L_088503CC;
    }
L_088503CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0885061C;
      }
      goto L_088503D8;
    }
L_088503D8:
    aot_gpr[31] = (0x088503E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x088503E0u) goto L_088503E0;
    return;
L_088503E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088503F0;
      }
      goto L_088503E8;
    }
L_088503E8:
    aot_gpr[31] = (0x088503F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x088503F0u) goto L_088503F0;
    return;
L_088503F0:
    aot_gpr[4] = (0u | 240u);
    aot_gpr[31] = (0x088503FCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088503FCu) goto L_088503FC;
    return;
L_088503FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08850410u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850410u) goto L_08850410;
    return;
L_08850410:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(440));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08850428u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850428u) goto L_08850428;
    return;
L_08850428:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850438u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850438u) goto L_08850438;
    return;
L_08850438:
    aot_gpr[31] = (0x08850440u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850440u) goto L_08850440;
    return;
L_08850440:
    aot_gpr[4] = (0u | 241u);
    aot_gpr[31] = (0x0885044Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0885044Cu) goto L_0885044C;
    return;
L_0885044C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0885045Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0885045Cu) goto L_0885045C;
    return;
L_0885045C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0885046Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0885046Cu) goto L_0885046C;
    return;
L_0885046C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0885047Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0885047Cu) goto L_0885047C;
    return;
L_0885047C:
    aot_gpr[31] = (0x08850484u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850484u) goto L_08850484;
    return;
L_08850484:
    aot_gpr[4] = (0u | 242u);
    aot_gpr[31] = (0x08850490u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850490u) goto L_08850490;
    return;
L_08850490:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088504A0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088504A0u) goto L_088504A0;
    return;
L_088504A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088504B0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088504B0u) goto L_088504B0;
    return;
L_088504B0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088504C0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088504C0u) goto L_088504C0;
    return;
L_088504C0:
    aot_gpr[31] = (0x088504C8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x088504C8u) goto L_088504C8;
    return;
L_088504C8:
    aot_gpr[4] = (0u | 243u);
    aot_gpr[31] = (0x088504D4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088504D4u) goto L_088504D4;
    return;
L_088504D4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088504E4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088504E4u) goto L_088504E4;
    return;
L_088504E4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088504F4u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088504F4u) goto L_088504F4;
    return;
L_088504F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850504u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850504u) goto L_08850504;
    return;
L_08850504:
    aot_gpr[31] = (0x0885050Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885050Cu) goto L_0885050C;
    return;
L_0885050C:
    aot_gpr[4] = (0u | 244u);
    aot_gpr[31] = (0x08850518u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850518u) goto L_08850518;
    return;
L_08850518:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850528u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850528u) goto L_08850528;
    return;
L_08850528:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08850538u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850538u) goto L_08850538;
    return;
L_08850538:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850548u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850548u) goto L_08850548;
    return;
L_08850548:
    aot_gpr[31] = (0x08850550u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850550u) goto L_08850550;
    return;
L_08850550:
    aot_gpr[4] = (0u | 245u);
    aot_gpr[31] = (0x0885055Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0885055Cu) goto L_0885055C;
    return;
L_0885055C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0885056Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0885056Cu) goto L_0885056C;
    return;
L_0885056C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885057Cu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0885057Cu) goto L_0885057C;
    return;
L_0885057C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0885058Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0885058Cu) goto L_0885058C;
    return;
L_0885058C:
    aot_gpr[31] = (0x08850594u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850594u) goto L_08850594;
    return;
L_08850594:
    aot_gpr[4] = (0u | 375u);
    aot_gpr[31] = (0x088505A0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088505A0u) goto L_088505A0;
    return;
L_088505A0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088505B0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088505B0u) goto L_088505B0;
    return;
L_088505B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088505C0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088505C0u) goto L_088505C0;
    return;
L_088505C0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088505D0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088505D0u) goto L_088505D0;
    return;
L_088505D0:
    aot_gpr[31] = (0x088505D8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x088505D8u) goto L_088505D8;
    return;
L_088505D8:
    aot_gpr[4] = (0u | 200u);
    aot_gpr[31] = (0x088505E4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088505E4u) goto L_088505E4;
    return;
L_088505E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088505F4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088505F4u) goto L_088505F4;
    return;
L_088505F4:
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08850604u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850604u) goto L_08850604;
    return;
L_08850604:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850614u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850614u) goto L_08850614;
    return;
L_08850614:
    aot_gpr[31] = (0x0885061Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885061Cu) goto L_0885061C;
    return;
L_0885061C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885064C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0885090C;
      }
      goto L_08850674;
    }
L_08850674:
    aot_gpr[31] = (0x0885067Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x0885067Cu) goto L_0885067C;
    return;
L_0885067C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885068C;
      }
      goto L_08850684;
    }
L_08850684:
    aot_gpr[31] = (0x0885068Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x0885068Cu) goto L_0885068C;
    return;
L_0885068C:
    aot_gpr[4] = (0u | 247u);
    aot_gpr[31] = (0x08850698u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850698u) goto L_08850698;
    return;
L_08850698:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088506A8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088506A8u) goto L_088506A8;
    return;
L_088506A8:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(452));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3352)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088506C8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088506C8u) goto L_088506C8;
    return;
L_088506C8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088506D8u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088506D8u) goto L_088506D8;
    return;
L_088506D8:
    aot_gpr[31] = (0x088506E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x088506E0u) goto L_088506E0;
    return;
L_088506E0:
    aot_gpr[4] = (0u | 248u);
    aot_gpr[31] = (0x088506ECu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088506ECu) goto L_088506EC;
    return;
L_088506EC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088506FCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088506FCu) goto L_088506FC;
    return;
L_088506FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3552)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08850714u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850714u) goto L_08850714;
    return;
L_08850714:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850724u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850724u) goto L_08850724;
    return;
L_08850724:
    aot_gpr[31] = (0x0885072Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885072Cu) goto L_0885072C;
    return;
L_0885072C:
    aot_gpr[4] = (0u | 249u);
    aot_gpr[31] = (0x08850738u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850738u) goto L_08850738;
    return;
L_08850738:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850748u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850748u) goto L_08850748;
    return;
L_08850748:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4068)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4624)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08850760u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850760u) goto L_08850760;
    return;
L_08850760:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850770u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850770u) goto L_08850770;
    return;
L_08850770:
    aot_gpr[31] = (0x08850778u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850778u) goto L_08850778;
    return;
L_08850778:
    aot_gpr[4] = (0u | 250u);
    aot_gpr[31] = (0x08850784u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850784u) goto L_08850784;
    return;
L_08850784:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850794u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850794u) goto L_08850794;
    return;
L_08850794:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3484)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5416)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088507ACu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088507ACu) goto L_088507AC;
    return;
L_088507AC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088507BCu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088507BCu) goto L_088507BC;
    return;
L_088507BC:
    aot_gpr[31] = (0x088507C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x088507C4u) goto L_088507C4;
    return;
L_088507C4:
    aot_gpr[4] = (0u | 251u);
    aot_gpr[31] = (0x088507D0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088507D0u) goto L_088507D0;
    return;
L_088507D0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088507E0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088507E0u) goto L_088507E0;
    return;
L_088507E0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x088507F4u);
    aot_gpr[18] = (aot_gpr[6] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 261u, 0x08874E50u>(ctx, &aot_mem) && ctx.pc == 0x088507F4u) goto L_088507F4;
    return;
L_088507F4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08850804u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850804u) goto L_08850804;
    return;
L_08850804:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850814u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850814u) goto L_08850814;
    return;
L_08850814:
    aot_gpr[31] = (0x0885081Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885081Cu) goto L_0885081C;
    return;
L_0885081C:
    aot_gpr[4] = (0u | 252u);
    aot_gpr[31] = (0x08850828u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850828u) goto L_08850828;
    return;
L_08850828:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850838u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850838u) goto L_08850838;
    return;
L_08850838:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08850844u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 261u, 0x08874E50u>(ctx, &aot_mem) && ctx.pc == 0x08850844u) goto L_08850844;
    return;
L_08850844:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08850854u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850854u) goto L_08850854;
    return;
L_08850854:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850864u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850864u) goto L_08850864;
    return;
L_08850864:
    aot_gpr[31] = (0x0885086Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885086Cu) goto L_0885086C;
    return;
L_0885086C:
    aot_gpr[4] = (0u | 253u);
    aot_gpr[31] = (0x08850878u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850878u) goto L_08850878;
    return;
L_08850878:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850888u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850888u) goto L_08850888;
    return;
L_08850888:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08850894u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 261u, 0x08874E50u>(ctx, &aot_mem) && ctx.pc == 0x08850894u) goto L_08850894;
    return;
L_08850894:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088508A4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088508A4u) goto L_088508A4;
    return;
L_088508A4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088508B4u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088508B4u) goto L_088508B4;
    return;
L_088508B4:
    aot_gpr[31] = (0x088508BCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x088508BCu) goto L_088508BC;
    return;
L_088508BC:
    aot_gpr[4] = (0u | 254u);
    aot_gpr[31] = (0x088508C8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088508C8u) goto L_088508C8;
    return;
L_088508C8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088508D8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088508D8u) goto L_088508D8;
    return;
L_088508D8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088508E4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 261u, 0x08874E50u>(ctx, &aot_mem) && ctx.pc == 0x088508E4u) goto L_088508E4;
    return;
L_088508E4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088508F4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088508F4u) goto L_088508F4;
    return;
L_088508F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850904u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850904u) goto L_08850904;
    return;
L_08850904:
    aot_gpr[31] = (0x0885090Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885090Cu) goto L_0885090C;
    return;
L_0885090C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850924:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 22u, 0x0885111Cu>(ctx, &aot_mem); return;
      }
      goto L_0885095C;
    }
L_0885095C:
    aot_gpr[31] = (0x08850964u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08850964u) goto L_08850964;
    return;
L_08850964:
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(440));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08850980;
      }
      goto L_08850978;
    }
L_08850978:
    aot_gpr[31] = (0x08850980u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08850980u) goto L_08850980;
    return;
L_08850980:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (0u | 94u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4808));
    aot_gpr[31] = (0x08850994u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850994u) goto L_08850994;
    return;
L_08850994:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088509A4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088509A4u) goto L_088509A4;
    return;
L_088509A4:
    aot_gpr[4] = (14979u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(468));
    aot_gpr[31] = (0x088509C4u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x088509C4u) goto L_088509C4;
    return;
L_088509C4:
    aot_gpr[23] = (aot_gpr[3] | 0u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 318u);
    aot_gpr[31] = (0x088509D8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088509D8u) goto L_088509D8;
    return;
L_088509D8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088509F0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088509F0u) goto L_088509F0;
    return;
L_088509F0:
    aot_gpr[31] = (0x088509F8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 159u, 0x0886C9E4u>(ctx, &aot_mem) && ctx.pc == 0x088509F8u) goto L_088509F8;
    return;
L_088509F8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850A08u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850A08u) goto L_08850A08;
    return;
L_08850A08:
    aot_gpr[31] = (0x08850A10u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850A10u) goto L_08850A10;
    return;
L_08850A10:
    aot_gpr[4] = (0u | 217u);
    aot_gpr[31] = (0x08850A1Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850A1Cu) goto L_08850A1C;
    return;
L_08850A1C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850A2Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850A2Cu) goto L_08850A2C;
    return;
L_08850A2C:
    aot_gpr[4] = (17761u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[22];
    aot_gpr[31] = (0x08850A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08850A44u) goto L_08850A44;
    return;
L_08850A44:
    aot_gpr[23] = (aot_gpr[3] | 0u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 319u);
    aot_gpr[31] = (0x08850A58u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850A58u) goto L_08850A58;
    return;
L_08850A58:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08850A70u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850A70u) goto L_08850A70;
    return;
L_08850A70:
    aot_gpr[31] = (0x08850A78u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 159u, 0x0886C9E4u>(ctx, &aot_mem) && ctx.pc == 0x08850A78u) goto L_08850A78;
    return;
L_08850A78:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850A88u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850A88u) goto L_08850A88;
    return;
L_08850A88:
    aot_gpr[31] = (0x08850A90u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850A90u) goto L_08850A90;
    return;
L_08850A90:
    aot_gpr[4] = (0u | 218u);
    aot_gpr[31] = (0x08850A9Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850A9Cu) goto L_08850A9C;
    return;
L_08850A9C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850AACu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850AACu) goto L_08850AAC;
    return;
L_08850AAC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[22];
    aot_gpr[31] = (0x08850ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08850ACCu) goto L_08850ACC;
    return;
L_08850ACC:
    aot_gpr[23] = (aot_gpr[3] | 0u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 319u);
    aot_gpr[31] = (0x08850AE0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850AE0u) goto L_08850AE0;
    return;
L_08850AE0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08850AF8u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850AF8u) goto L_08850AF8;
    return;
L_08850AF8:
    aot_gpr[31] = (0x08850B00u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 159u, 0x0886C9E4u>(ctx, &aot_mem) && ctx.pc == 0x08850B00u) goto L_08850B00;
    return;
L_08850B00:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850B10u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850B10u) goto L_08850B10;
    return;
L_08850B10:
    aot_gpr[31] = (0x08850B18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850B18u) goto L_08850B18;
    return;
L_08850B18:
    aot_gpr[4] = (0u | 219u);
    aot_gpr[31] = (0x08850B24u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850B24u) goto L_08850B24;
    return;
L_08850B24:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850B34u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850B34u) goto L_08850B34;
    return;
L_08850B34:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08850B40u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08850B40u) goto L_08850B40;
    return;
L_08850B40:
    aot_gpr[4] = (0u | 318u);
    aot_gpr[23] = (aot_gpr[3] | 0u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08850B54u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850B54u) goto L_08850B54;
    return;
L_08850B54:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08850B6Cu);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850B6Cu) goto L_08850B6C;
    return;
L_08850B6C:
    aot_gpr[31] = (0x08850B74u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 159u, 0x0886C9E4u>(ctx, &aot_mem) && ctx.pc == 0x08850B74u) goto L_08850B74;
    return;
L_08850B74:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850B84u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850B84u) goto L_08850B84;
    return;
L_08850B84:
    aot_gpr[31] = (0x08850B8Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850B8Cu) goto L_08850B8C;
    return;
L_08850B8C:
    aot_gpr[4] = (0u | 221u);
    aot_gpr[31] = (0x08850B98u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850B98u) goto L_08850B98;
    return;
L_08850B98:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850BA8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850BA8u) goto L_08850BA8;
    return;
L_08850BA8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08850BB8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(356)));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850BB8u) goto L_08850BB8;
    return;
L_08850BB8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850BC8u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850BC8u) goto L_08850BC8;
    return;
L_08850BC8:
    aot_gpr[31] = (0x08850BD0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850BD0u) goto L_08850BD0;
    return;
L_08850BD0:
    aot_gpr[4] = (0u | 222u);
    aot_gpr[31] = (0x08850BDCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850BDCu) goto L_08850BDC;
    return;
L_08850BDC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850BECu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850BECu) goto L_08850BEC;
    return;
L_08850BEC:
    aot_gpr[31] = (0x08850BF4u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08850BF4u) goto L_08850BF4;
    return;
L_08850BF4:
    aot_gpr[4] = (0u | 320u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[23] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08850C08u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850C08u) goto L_08850C08;
    return;
L_08850C08:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08850C20u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850C20u) goto L_08850C20;
    return;
L_08850C20:
    aot_gpr[31] = (0x08850C28u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 159u, 0x0886C9E4u>(ctx, &aot_mem) && ctx.pc == 0x08850C28u) goto L_08850C28;
    return;
L_08850C28:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850C38u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850C38u) goto L_08850C38;
    return;
L_08850C38:
    aot_gpr[31] = (0x08850C40u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850C40u) goto L_08850C40;
    return;
L_08850C40:
    aot_gpr[4] = (0u | 223u);
    aot_gpr[31] = (0x08850C4Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850C4Cu) goto L_08850C4C;
    return;
L_08850C4C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850C5Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850C5Cu) goto L_08850C5C;
    return;
L_08850C5C:
    aot_gpr[31] = (0x08850C64u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08850C64u) goto L_08850C64;
    return;
L_08850C64:
    aot_gpr[4] = (0u | 320u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[23] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08850C78u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850C78u) goto L_08850C78;
    return;
L_08850C78:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08850C90u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850C90u) goto L_08850C90;
    return;
L_08850C90:
    aot_gpr[31] = (0x08850C98u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 159u, 0x0886C9E4u>(ctx, &aot_mem) && ctx.pc == 0x08850C98u) goto L_08850C98;
    return;
L_08850C98:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850CA8u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850CA8u) goto L_08850CA8;
    return;
L_08850CA8:
    aot_gpr[31] = (0x08850CB0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850CB0u) goto L_08850CB0;
    return;
L_08850CB0:
    aot_gpr[4] = (0u | 224u);
    aot_gpr[31] = (0x08850CBCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850CBCu) goto L_08850CBC;
    return;
L_08850CBC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850CCCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850CCCu) goto L_08850CCC;
    return;
L_08850CCC:
    aot_gpr[31] = (0x08850CD4u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08850CD4u) goto L_08850CD4;
    return;
L_08850CD4:
    aot_gpr[4] = (0u | 321u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[23] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08850CE8u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850CE8u) goto L_08850CE8;
    return;
L_08850CE8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08850D00u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850D00u) goto L_08850D00;
    return;
L_08850D00:
    aot_gpr[31] = (0x08850D08u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 159u, 0x0886C9E4u>(ctx, &aot_mem) && ctx.pc == 0x08850D08u) goto L_08850D08;
    return;
L_08850D08:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850D18u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850D18u) goto L_08850D18;
    return;
L_08850D18:
    aot_gpr[31] = (0x08850D20u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850D20u) goto L_08850D20;
    return;
L_08850D20:
    aot_gpr[4] = (0u | 225u);
    aot_gpr[31] = (0x08850D2Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850D2Cu) goto L_08850D2C;
    return;
L_08850D2C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850D3Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850D3Cu) goto L_08850D3C;
    return;
L_08850D3C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08850D4Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850D4Cu) goto L_08850D4C;
    return;
L_08850D4C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850D5Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850D5Cu) goto L_08850D5C;
    return;
L_08850D5C:
    aot_gpr[31] = (0x08850D64u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850D64u) goto L_08850D64;
    return;
L_08850D64:
    aot_gpr[4] = (0u | 226u);
    aot_gpr[31] = (0x08850D70u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850D70u) goto L_08850D70;
    return;
L_08850D70:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850D80u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850D80u) goto L_08850D80;
    return;
L_08850D80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(348)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08850DF8;
      }
      goto L_08850D8C;
    }
L_08850D8C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(344)));
    aot_gpr[20] = (2214u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(480));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08850DB0;
      }
      goto L_08850DA4;
    }
L_08850DA4:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08850DB0;
L_08850DB0:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_08850DC8;
      }
      goto L_08850DBC;
    }
L_08850DBC:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_08850DC8;
L_08850DC8:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[31] = (0x08850DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08850DD4u) goto L_08850DD4;
    return;
L_08850DD4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08850DE8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850DE8u) goto L_08850DE8;
    return;
L_08850DE8:
    aot_gpr[31] = (0x08850DF0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 159u, 0x0886C9E4u>(ctx, &aot_mem) && ctx.pc == 0x08850DF0u) goto L_08850DF0;
    return;
L_08850DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850E00;
      }
      goto L_08850DF8;
    }
L_08850DF8:
    aot_gpr[4] = (0u | 48u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_08850E00;
L_08850E00:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850E10u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850E10u) goto L_08850E10;
    return;
L_08850E10:
    aot_gpr[31] = (0x08850E18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850E18u) goto L_08850E18;
    return;
L_08850E18:
    aot_gpr[4] = (0u | 227u);
    aot_gpr[31] = (0x08850E24u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850E24u) goto L_08850E24;
    return;
L_08850E24:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850E34u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850E34u) goto L_08850E34;
    return;
L_08850E34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08850E44u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850E44u) goto L_08850E44;
    return;
L_08850E44:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850E54u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850E54u) goto L_08850E54;
    return;
L_08850E54:
    aot_gpr[31] = (0x08850E5Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850E5Cu) goto L_08850E5C;
    return;
L_08850E5C:
    aot_gpr[31] = (0x08850E64u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 114u, 0x08873780u>(ctx, &aot_mem) && ctx.pc == 0x08850E64u) goto L_08850E64;
    return;
L_08850E64:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 228u);
    aot_gpr[31] = (0x08850E74u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850E74u) goto L_08850E74;
    return;
L_08850E74:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850E84u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850E84u) goto L_08850E84;
    return;
L_08850E84:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_08850EA8;
      }
      goto L_08850E8C;
    }
L_08850E8C:
    aot_gpr[31] = (0x08850E94u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 218u, 0x0884FE58u>(ctx, &aot_mem) && ctx.pc == 0x08850E94u) goto L_08850E94;
    return;
L_08850E94:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08850EA0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08850EA0u) goto L_08850EA0;
    return;
L_08850EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850EAC;
      }
      goto L_08850EA8;
    }
L_08850EA8:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08850EAC;
L_08850EAC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850EBCu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850EBCu) goto L_08850EBC;
    return;
L_08850EBC:
    aot_gpr[31] = (0x08850EC4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850EC4u) goto L_08850EC4;
    return;
L_08850EC4:
    aot_gpr[31] = (0x08850ECCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 120u, 0x088737CCu>(ctx, &aot_mem) && ctx.pc == 0x08850ECCu) goto L_08850ECC;
    return;
L_08850ECC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 229u);
    aot_gpr[31] = (0x08850EDCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850EDCu) goto L_08850EDC;
    return;
L_08850EDC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850EECu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850EECu) goto L_08850EEC;
    return;
L_08850EEC:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_08850F10;
      }
      goto L_08850EF4;
    }
L_08850EF4:
    aot_gpr[31] = (0x08850EFCu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 218u, 0x0884FE58u>(ctx, &aot_mem) && ctx.pc == 0x08850EFCu) goto L_08850EFC;
    return;
L_08850EFC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08850F08u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08850F08u) goto L_08850F08;
    return;
L_08850F08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850F14;
      }
      goto L_08850F10;
    }
L_08850F10:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08850F14;
L_08850F14:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850F24u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850F24u) goto L_08850F24;
    return;
L_08850F24:
    aot_gpr[31] = (0x08850F2Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08850F2Cu) goto L_08850F2C;
    return;
L_08850F2C:
    aot_gpr[4] = (0u | 230u);
    aot_gpr[31] = (0x08850F38u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850F38u) goto L_08850F38;
    return;
L_08850F38:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08850F48u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08850F48u) goto L_08850F48;
    return;
L_08850F48:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(65));
    aot_gpr[31] = (0x08850F58u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 126u, 0x08873818u>(ctx, &aot_mem) && ctx.pc == 0x08850F58u) goto L_08850F58;
    return;
L_08850F58:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08850FF4;
      }
      goto L_08850F68;
    }
L_08850F68:
    aot_gpr[31] = (0x08850F70u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 152u, 0x0881CAA0u>(ctx, &aot_mem) && ctx.pc == 0x08850F70u) goto L_08850F70;
    return;
L_08850F70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08850F80u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 153u, 0x0881CABCu>(ctx, &aot_mem) && ctx.pc == 0x08850F80u) goto L_08850F80;
    return;
L_08850F80:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[21];
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08850FF4;
      }
      goto L_08850F88;
    }
L_08850F88:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_08850FF4;
      }
      goto L_08850F90;
    }
L_08850F90:
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x08850FB0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(444));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850FB0u) goto L_08850FB0;
    return;
L_08850FB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(65)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08850FD0;
      }
      goto L_08850FBC;
    }
L_08850FBC:
    aot_gpr[4] = (0u | 92u);
    aot_gpr[31] = (0x08850FC8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850FC8u) goto L_08850FC8;
    return;
L_08850FC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08850FE0;
      }
      goto L_08850FD0;
    }
L_08850FD0:
    aot_gpr[4] = (0u | 93u);
    aot_gpr[31] = (0x08850FDCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08850FDCu) goto L_08850FDC;
    return;
L_08850FDC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08850FE0;
L_08850FE0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08850FF4u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08850FF4u) goto L_08850FF4;
    return;
L_08850FF4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08851004u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0076(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0076_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_76(Runtime &runtime) {
    runtime.register_generated_unit(76u, 0x08850000u, 4096u, &recomp_unit_0076, &recomp_unit_0076_entry);
    runtime.register_function(0x08850000u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850008u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850014u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850024u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850034u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850044u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885004Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850058u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850068u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850078u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850088u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850090u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885009Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088500ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088500BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088500CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088500D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088500DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088500ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088500FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850104u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885010Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850118u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850120u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850124u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850134u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885013Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850148u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850158u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850168u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850178u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850180u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850190u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850198u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088501A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088501C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088501CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088501D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088501E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088501ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088501F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850204u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850214u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885021Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850238u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850290u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850298u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088502A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088502ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088502C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088502F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850310u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850328u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850334u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885034Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850358u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850360u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850368u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850370u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850378u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885037Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850384u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885038Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885039Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088503A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088503B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088503CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088503D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088503E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088503E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088503F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088503FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850410u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850428u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850438u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850440u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885044Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885045Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885046Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885047Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850484u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850490u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088504A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088504B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088504C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088504C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088504D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088504E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088504F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850504u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885050Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850518u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850528u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850538u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850548u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850550u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885055Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885056Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885057Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885058Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850594u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088505A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088505B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088505C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088505D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088505D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088505E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088505F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850604u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850614u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885061Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885064Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850674u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885067Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850684u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885068Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850698u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088506A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088506C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088506D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088506E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088506ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088506FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850714u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850724u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885072Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850738u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850748u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850760u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850770u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850778u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850784u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850794u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088507ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088507BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088507C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088507D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088507E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088507F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850804u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850814u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885081Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850828u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850838u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850844u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850854u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850864u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885086Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850878u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850888u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850894u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088508A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088508B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088508BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088508C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088508D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088508E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088508F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850904u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885090Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850924u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0885095Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850964u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850978u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850980u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850994u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088509A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088509C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088509D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088509F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x088509F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850A08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850A10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850A1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850A2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850A44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850A58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850A70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850A78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850A88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850A90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850A9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850AACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850ACCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850AE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850AF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850B00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850B10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850B18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850B24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850B34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850B40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850B54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850B6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850B74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850B84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850B8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850B98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850BA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850BB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850BC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850BD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850BDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850BECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850BF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850C08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850C20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850C28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850C38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850C40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850C4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850C5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850C64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850C78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850C90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850C98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850CA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850CB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850CBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850CCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850CD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850CE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850D00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850D08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850D18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850D20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850D2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850D3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850D4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850D5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850D64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850D70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850D80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850D8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850DA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850DB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850DBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850DC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850DD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850DE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850DF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850DF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850E94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850EA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850EA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850EACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850EBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850EC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850ECCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850EDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850EECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850EF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850EFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850F90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850FB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850FBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850FC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850FD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850FDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850FE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08850FF4u, &recomp_unit_0076, "recomp_unit_0076");
}
} // namespace psprecomp
