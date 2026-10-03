#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0389[1022] = {
    1, 0, 2, 0, 0, 3, 0, 4, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 11, 0, 12,
    0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0,
    18, 0, 0, 19, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0,
    0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 59, 0, 0,
    0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 0, 69, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 77, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 84, 85, 86, 0, 87, 88, 0, 0, 0, 0, 89, 90,
    0, 0, 91, 0, 0, 92, 0, 93, 94, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 106, 0, 107, 0, 108, 109, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 115, 0,
    116, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 133, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 0, 140, 141, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 151, 152, 0, 0, 153, 0, 0, 154, 155, 0, 156, 0, 0, 157, 0, 0, 158,
    0, 0, 159, 0, 160, 161, 0, 0, 0, 162, 163, 0, 164, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 169, 0, 170, 0, 0, 0, 0,
    0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178,
    0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186,
    0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 215, 216, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0,
    0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 228, 0, 229, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 240, 0,
    241, 242, 0, 0, 0, 243, 244, 0, 0, 245, 0, 246, 0, 247, 0, 248, 249, 0, 0, 250, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 263,
    0, 264, 0, 265, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 269, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0,
    0, 276, 277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 281, 0, 0, 282, 0, 0, 283, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 291, 292, 0, 0, 293, 0, 0, 294,
};
void recomp_unit_0389_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08989000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0389[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08989000;
    case 2u: goto L_08989008;
    case 3u: goto L_08989014;
    case 4u: goto L_0898901C;
    case 5u: goto L_08989020;
    case 6u: goto L_08989028;
    case 7u: goto L_08989030;
    case 8u: goto L_08989048;
    case 9u: goto L_08989060;
    case 10u: goto L_08989068;
    case 11u: goto L_08989074;
    case 12u: goto L_0898907C;
    case 13u: goto L_0898909C;
    case 14u: goto L_089890D0;
    case 15u: goto L_089890D8;
    case 16u: goto L_089890EC;
    case 17u: goto L_089890F4;
    case 18u: goto L_08989100;
    case 19u: goto L_0898910C;
    case 20u: goto L_08989110;
    case 21u: goto L_08989128;
    case 22u: goto L_08989150;
    case 23u: goto L_08989154;
    case 24u: goto L_0898915C;
    case 25u: goto L_08989184;
    case 26u: goto L_0898918C;
    case 27u: goto L_089891AC;
    case 28u: goto L_089891BC;
    case 29u: goto L_089891C4;
    case 30u: goto L_089891CC;
    case 31u: goto L_089891DC;
    case 32u: goto L_089891EC;
    case 33u: goto L_08989210;
    case 34u: goto L_08989224;
    case 35u: goto L_08989230;
    case 36u: goto L_08989248;
    case 37u: goto L_08989260;
    case 38u: goto L_08989268;
    case 39u: goto L_08989284;
    case 40u: goto L_0898928C;
    case 41u: goto L_089892AC;
    case 42u: goto L_089892B4;
    case 43u: goto L_089892D4;
    case 44u: goto L_08989300;
    case 45u: goto L_08989308;
    case 46u: goto L_08989340;
    case 47u: goto L_08989348;
    case 48u: goto L_08989360;
    case 49u: goto L_08989368;
    case 50u: goto L_08989370;
    case 51u: goto L_08989394;
    case 52u: goto L_089893A8;
    case 53u: goto L_089893B0;
    case 54u: goto L_089893B8;
    case 55u: goto L_089893C8;
    case 56u: goto L_089893D0;
    case 57u: goto L_089893DC;
    case 58u: goto L_089893F0;
    case 59u: goto L_089893F4;
    case 60u: goto L_08989404;
    case 61u: goto L_08989414;
    case 62u: goto L_0898941C;
    case 63u: goto L_08989428;
    case 64u: goto L_08989438;
    case 65u: goto L_08989440;
    case 66u: goto L_08989448;
    case 67u: goto L_08989450;
    case 68u: goto L_08989458;
    case 69u: goto L_08989464;
    case 70u: goto L_08989468;
    case 71u: goto L_0898948C;
    case 72u: goto L_08989494;
    case 73u: goto L_0898949C;
    case 74u: goto L_089894AC;
    case 75u: goto L_089894B8;
    case 76u: goto L_089894CC;
    case 77u: goto L_089894D0;
    case 78u: goto L_089894DC;
    case 79u: goto L_089894F4;
    case 80u: goto L_089894FC;
    case 81u: goto L_0898952C;
    case 82u: goto L_08989534;
    case 83u: goto L_08989548;
    case 84u: goto L_08989550;
    case 85u: goto L_08989554;
    case 86u: goto L_08989558;
    case 87u: goto L_08989560;
    case 88u: goto L_08989564;
    case 89u: goto L_08989578;
    case 90u: goto L_0898957C;
    case 91u: goto L_08989588;
    case 92u: goto L_08989594;
    case 93u: goto L_0898959C;
    case 94u: goto L_089895A0;
    case 95u: goto L_089895A8;
    case 96u: goto L_089895B0;
    case 97u: goto L_089895B8;
    case 98u: goto L_089895CC;
    case 99u: goto L_089895DC;
    case 100u: goto L_089895E4;
    case 101u: goto L_089895EC;
    case 102u: goto L_089895F4;
    case 103u: goto L_08989604;
    case 104u: goto L_0898961C;
    case 105u: goto L_08989624;
    case 106u: goto L_08989628;
    case 107u: goto L_08989630;
    case 108u: goto L_08989638;
    case 109u: goto L_0898963C;
    case 110u: goto L_08989644;
    case 111u: goto L_0898964C;
    case 112u: goto L_08989658;
    case 113u: goto L_08989660;
    case 114u: goto L_08989670;
    case 115u: goto L_08989678;
    case 116u: goto L_08989680;
    case 117u: goto L_0898968C;
    case 118u: goto L_08989694;
    case 119u: goto L_089896A8;
    case 120u: goto L_089896B0;
    case 121u: goto L_089896B8;
    case 122u: goto L_089896C4;
    case 123u: goto L_089896D0;
    case 124u: goto L_089896D8;
    case 125u: goto L_089896F8;
    case 126u: goto L_08989708;
    case 127u: goto L_08989710;
    case 128u: goto L_08989720;
    case 129u: goto L_08989730;
    case 130u: goto L_0898973C;
    case 131u: goto L_08989768;
    case 132u: goto L_08989770;
    case 133u: goto L_08989774;
    case 134u: goto L_0898977C;
    case 135u: goto L_08989800;
    case 136u: goto L_08989808;
    case 137u: goto L_08989814;
    case 138u: goto L_0898981C;
    case 139u: goto L_08989824;
    case 140u: goto L_08989830;
    case 141u: goto L_08989834;
    case 142u: goto L_08989838;
    case 143u: goto L_08989840;
    case 144u: goto L_08989854;
    case 145u: goto L_08989860;
    case 146u: goto L_08989874;
    case 147u: goto L_0898987C;
    case 148u: goto L_08989898;
    case 149u: goto L_089898A4;
    case 150u: goto L_089898B4;
    case 151u: goto L_089898BC;
    case 152u: goto L_089898C0;
    case 153u: goto L_089898CC;
    case 154u: goto L_089898D8;
    case 155u: goto L_089898DC;
    case 156u: goto L_089898E4;
    case 157u: goto L_089898F0;
    case 158u: goto L_089898FC;
    case 159u: goto L_08989908;
    case 160u: goto L_08989910;
    case 161u: goto L_08989914;
    case 162u: goto L_08989924;
    case 163u: goto L_08989928;
    case 164u: goto L_08989930;
    case 165u: goto L_08989934;
    case 166u: goto L_0898993C;
    case 167u: goto L_08989958;
    case 168u: goto L_08989960;
    case 169u: goto L_08989964;
    case 170u: goto L_0898996C;
    case 171u: goto L_08989988;
    case 172u: goto L_08989990;
    case 173u: goto L_089899A4;
    case 174u: goto L_089899B4;
    case 175u: goto L_089899B8;
    case 176u: goto L_089899CC;
    case 177u: goto L_089899F0;
    case 178u: goto L_089899FC;
    case 179u: goto L_08989A0C;
    case 180u: goto L_08989A14;
    case 181u: goto L_08989A34;
    case 182u: goto L_08989A3C;
    case 183u: goto L_08989A44;
    case 184u: goto L_08989A64;
    case 185u: goto L_08989A70;
    case 186u: goto L_08989A7C;
    case 187u: goto L_08989A84;
    case 188u: goto L_08989A90;
    case 189u: goto L_08989AA4;
    case 190u: goto L_08989AAC;
    case 191u: goto L_08989AC8;
    case 192u: goto L_08989AD4;
    case 193u: goto L_08989AE8;
    case 194u: goto L_08989AF0;
    case 195u: goto L_08989B10;
    case 196u: goto L_08989B20;
    case 197u: goto L_08989B2C;
    case 198u: goto L_08989B38;
    case 199u: goto L_08989B40;
    case 200u: goto L_08989B48;
    case 201u: goto L_08989B50;
    case 202u: goto L_08989B7C;
    case 203u: goto L_08989B80;
    case 204u: goto L_08989BA0;
    case 205u: goto L_08989BA8;
    case 206u: goto L_08989BB0;
    case 207u: goto L_08989BB8;
    case 208u: goto L_08989BC8;
    case 209u: goto L_08989BD4;
    case 210u: goto L_08989BE4;
    case 211u: goto L_08989C00;
    case 212u: goto L_08989C08;
    case 213u: goto L_08989C14;
    case 214u: goto L_08989C20;
    case 215u: goto L_08989C28;
    case 216u: goto L_08989C2C;
    case 217u: goto L_08989C38;
    case 218u: goto L_08989C40;
    case 219u: goto L_08989C54;
    case 220u: goto L_08989C5C;
    case 221u: goto L_08989C6C;
    case 222u: goto L_08989C74;
    case 223u: goto L_08989C8C;
    case 224u: goto L_08989C94;
    case 225u: goto L_08989CA0;
    case 226u: goto L_08989CB0;
    case 227u: goto L_08989CBC;
    case 228u: goto L_08989CC0;
    case 229u: goto L_08989CC8;
    case 230u: goto L_08989CD0;
    case 231u: goto L_08989CE0;
    case 232u: goto L_08989CE8;
    case 233u: goto L_08989D18;
    case 234u: goto L_08989D24;
    case 235u: goto L_08989D30;
    case 236u: goto L_08989D34;
    case 237u: goto L_08989D4C;
    case 238u: goto L_08989D5C;
    case 239u: goto L_08989D64;
    case 240u: goto L_08989D78;
    case 241u: goto L_08989D80;
    case 242u: goto L_08989D84;
    case 243u: goto L_08989D94;
    case 244u: goto L_08989D98;
    case 245u: goto L_08989DA4;
    case 246u: goto L_08989DAC;
    case 247u: goto L_08989DB4;
    case 248u: goto L_08989DBC;
    case 249u: goto L_08989DC0;
    case 250u: goto L_08989DCC;
    case 251u: goto L_08989DD0;
    case 252u: goto L_08989DEC;
    case 253u: goto L_08989E08;
    case 254u: goto L_08989E14;
    case 255u: goto L_08989E20;
    case 256u: goto L_08989E2C;
    case 257u: goto L_08989E34;
    case 258u: goto L_08989E3C;
    case 259u: goto L_08989E4C;
    case 260u: goto L_08989E5C;
    case 261u: goto L_08989E6C;
    case 262u: goto L_08989E74;
    case 263u: goto L_08989E7C;
    case 264u: goto L_08989E84;
    case 265u: goto L_08989E8C;
    case 266u: goto L_08989E9C;
    case 267u: goto L_08989EA4;
    case 268u: goto L_08989EAC;
    case 269u: goto L_08989EBC;
    case 270u: goto L_08989EC0;
    case 271u: goto L_08989EC8;
    case 272u: goto L_08989ED4;
    case 273u: goto L_08989EDC;
    case 274u: goto L_08989EEC;
    case 275u: goto L_08989EF4;
    case 276u: goto L_08989F04;
    case 277u: goto L_08989F08;
    case 278u: goto L_08989F14;
    case 279u: goto L_08989F24;
    case 280u: goto L_08989F30;
    case 281u: goto L_08989F34;
    case 282u: goto L_08989F40;
    case 283u: goto L_08989F4C;
    case 284u: goto L_08989F50;
    case 285u: goto L_08989F70;
    case 286u: goto L_08989F80;
    case 287u: goto L_08989F88;
    case 288u: goto L_08989FB4;
    case 289u: goto L_08989FBC;
    case 290u: goto L_08989FC4;
    case 291u: goto L_08989FD8;
    case 292u: goto L_08989FDC;
    case 293u: goto L_08989FE8;
    case 294u: goto L_08989FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08989000:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08989020;
    }
    goto L_08989008;
L_08989008:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989014u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989014u) goto L_08989014;
    return;
L_08989014:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0898918C;
      }
      goto L_0898901C;
    }
L_0898901C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08989020;
L_08989020:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 184u, 0x08988CF8u>(ctx, &aot_mem); return;
      }
      goto L_08989028;
    }
L_08989028:
    aot_gpr[3] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 184u, 0x08988CF8u>(ctx, &aot_mem); return;
L_08989030:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[31] = (0x08989048u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 38u, 0x0898836Cu>(ctx, &aot_mem) && ctx.pc == 0x08989048u) goto L_08989048;
    return;
L_08989048:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1216)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          goto L_0898901C;
      }
      goto L_08989060;
    }
L_08989060:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08989020;
    }
    goto L_08989068;
L_08989068:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989074u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989074u) goto L_08989074;
    return;
L_08989074:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08989020;
    }
    goto L_0898907C;
L_0898907C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1068)));
    aot_gpr[2] = (aot_gpr[2] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1068), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1068)));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000002u) | ((0u & 0x00000001u) << 1u));
    goto L_0898909C;
L_0898909C:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1068), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1068)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1220)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1216)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089890D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089890D0u) goto L_089890D0;
    return;
L_089890D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08989020;
L_089890D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089890ECu);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089890ECu) goto L_089890EC;
    return;
L_089890EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 213u, 0x08988F98u>(ctx, &aot_mem); return;
      }
      goto L_089890F4;
    }
L_089890F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2808)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08989110;
    }
    goto L_08989100;
L_08989100:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898910Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898910Cu) goto L_0898910C;
    return;
L_0898910C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08989110;
L_08989110:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1072), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1184)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (aot_gpr[16] + 0u);
        goto L_08989154;
    }
    goto L_08989128;
L_08989128:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1188)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1184)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x08989150u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989150u) goto L_08989150;
    return;
L_08989150:
    aot_gpr[3] = (aot_gpr[16] + 0u);
    goto L_08989154;
L_08989154:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    (void)rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 184u, 0x08988CF8u>(ctx, &aot_mem); return;
L_0898915C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(192)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1172)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (0u + 0u);
    aot_gpr[31] = (0x08989184u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 218u, 0x08987F74u>(ctx, &aot_mem) && ctx.pc == 0x08989184u) goto L_08989184;
    return;
L_08989184:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 202u, 0x08988E2Cu>(ctx, &aot_mem); return;
L_0898918C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1068)));
    aot_gpr[2] = (aot_gpr[2] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1068), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1068)));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000004u) | ((0u & 0x00000001u) << 2u));
    goto L_0898909C;
L_089891AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089891DC;
      }
      goto L_089891BC;
    }
L_089891BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1044));
      if (branch_taken) {
          goto L_089891DC;
      }
      goto L_089891C4;
    }
L_089891C4:
    aot_gpr[31] = (0x089891CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089891CCu) goto L_089891CC;
    return;
L_089891CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089891DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089891EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
      if (branch_taken) {
          goto L_08989268;
      }
      goto L_08989210;
    }
L_08989210:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2820)));
    aot_gpr[18] = (2217u << 16u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08989260;
      }
      goto L_08989224;
    }
L_08989224:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08989260;
      }
      goto L_08989230;
    }
L_08989230:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08989284;
      }
      goto L_08989248;
    }
L_08989248:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[6] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089892B4;
      }
      goto L_08989260;
    }
L_08989260:
    aot_gpr[31] = (0x08989268u);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08989268u) goto L_08989268;
    return;
L_08989268:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989284:
    aot_gpr[31] = (0x0898928Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x0898928Cu) goto L_0898928C;
    return;
L_0898928C:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2792)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089892ACu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089892ACu) goto L_089892AC;
    return;
L_089892AC:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    goto L_08989260;
L_089892B4:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089892D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089892D4u) goto L_089892D4;
    return;
L_089892D4:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2792)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989300u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989300u) goto L_08989300;
    return;
L_08989300:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    goto L_08989260;
L_08989308:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_08989370;
      }
      goto L_08989340;
    }
L_08989340:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089893DC;
      }
      goto L_08989348;
    }
L_08989348:
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989360u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989360u) goto L_08989360;
    return;
L_08989360:
    aot_gpr[31] = (0x08989368u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08989368u) goto L_08989368;
    return;
L_08989368:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08989394;
      }
      goto L_08989370;
    }
L_08989370:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989394:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089893A8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089893A8u) goto L_089893A8;
    return;
L_089893A8:
    aot_gpr[31] = (0x089893B0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089893B0u) goto L_089893B0;
    return;
L_089893B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08989370;
      }
      goto L_089893B8;
    }
L_089893B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08989464;
      }
      goto L_089893C8;
    }
L_089893C8:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_08989468;
      }
      goto L_089893D0;
    }
L_089893D0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08989370;
L_089893DC:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4232)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[20] = (0u | 65535u);
      if (branch_taken) {
          goto L_08989464;
      }
      goto L_089893F0;
    }
L_089893F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    goto L_089893F4;
L_089893F4:
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08989458;
      }
      goto L_08989404;
    }
L_08989404:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989414u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989414u) goto L_08989414;
    return;
L_08989414:
    aot_gpr[31] = (0x0898941Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898941Cu) goto L_0898941C;
    return;
L_0898941C:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08989370;
      }
      goto L_08989428;
    }
L_08989428:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989438u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989438u) goto L_08989438;
    return;
L_08989438:
    aot_gpr[31] = (0x08989440u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08989440u) goto L_08989440;
    return;
L_08989440:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_0898948C;
      }
      goto L_08989448;
    }
L_08989448:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[20];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08989458;
      }
      goto L_08989450;
    }
L_08989450:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08989494;
      }
      goto L_08989458;
    }
L_08989458:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1316)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
        goto L_089893F4;
    }
    goto L_08989464;
L_08989464:
    aot_gpr[17] = (0u + 0u);
    goto L_08989468;
L_08989468:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898948C:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    goto L_08989370;
L_08989494:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08989370;
L_0898949C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089894CC;
      }
      goto L_089894AC;
    }
L_089894AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1232)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26192)));
        goto L_089894D0;
    }
    goto L_089894B8;
L_089894B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1236)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1232)));
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089894CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26192)));
    goto L_089894D0;
L_089894D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4236)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089894F4;
      }
      goto L_089894DC;
    }
L_089894DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4240)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4236)));
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089894F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089894FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2820)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08989550;
      }
      goto L_0898952C;
    }
L_0898952C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08989694;
      }
      goto L_08989534;
    }
L_08989534:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989548u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989548u) goto L_08989548;
    return;
L_08989548:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089896B0;
      }
      goto L_08989550;
    }
L_08989550:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26192)));
    goto L_08989554;
L_08989554:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4232)));
    goto L_08989558;
L_08989558:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089895A8;
      }
      goto L_08989560;
    }
L_08989560:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_08989564;
L_08989564:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1072)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1180), 0u);
      if (branch_taken) {
          goto L_089895F4;
      }
      goto L_08989578;
    }
L_08989578:
    aot_gpr[17] = (2217u << 16u);
    goto L_0898957C;
L_0898957C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2808)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1316)));
        goto L_089895A0;
    }
    goto L_08989588;
L_08989588:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989594u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989594u) goto L_08989594;
    return;
L_08989594:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          goto L_089895CC;
      }
      goto L_0898959C;
    }
L_0898959C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1316)));
    goto L_089895A0;
L_089895A0:
    if (aot_gpr[16] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
        goto L_08989564;
    }
    goto L_089895A8;
L_089895A8:
    aot_gpr[31] = (0x089895B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x089895B0u) goto L_089895B0;
    return;
L_089895B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089895B8;
L_089895B8:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089895CC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089895DCu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089895DCu) goto L_089895DC;
    return;
L_089895DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_0898959C;
      }
      goto L_089895E4;
    }
L_089895E4:
    aot_gpr[31] = (0x089895ECu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0898949C;
L_089895EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1316)));
    goto L_08989558;
L_089895F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
        goto L_08989628;
    }
    goto L_08989604;
L_08989604:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2812)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1096)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898961Cu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898961Cu) goto L_0898961C;
    return;
L_0898961C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08989678;
      }
      goto L_08989624;
    }
L_08989624:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    goto L_08989628;
L_08989628:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1180)));
        goto L_0898963C;
    }
    goto L_08989630;
L_08989630:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08989660;
      }
      goto L_08989638;
    }
L_08989638:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1180)));
    goto L_0898963C;
L_0898963C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898957C;
      }
      goto L_08989644;
    }
L_08989644:
    aot_gpr[31] = (0x0898964Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898964Cu) goto L_0898964C;
    return;
L_0898964C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08989658u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0898949C;
L_08989658:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1316)));
    goto L_08989558;
L_08989660:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989670u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989670u) goto L_08989670;
    return;
L_08989670:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1180)));
        goto L_0898963C;
    }
    goto L_08989678;
L_08989678:
    aot_gpr[31] = (0x08989680u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08989680u) goto L_08989680;
    return;
L_08989680:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0898968Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0898949C;
L_0898968C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1316)));
    goto L_08989558;
L_08989694:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089896A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089896A8u) goto L_089896A8;
    return;
L_089896A8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26192)));
        goto L_08989554;
    }
    goto L_089896B0;
L_089896B0:
    aot_gpr[31] = (0x089896B8u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089896B8u) goto L_089896B8;
    return;
L_089896B8:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089896C4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0898949C;
L_089896C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26192)));
        goto L_08989554;
    }
    goto L_089896D0;
L_089896D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089895B8;
L_089896D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08989710;
      }
      goto L_089896F8;
    }
L_089896F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989708u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989708u) goto L_08989708;
    return;
L_08989708:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1100), 0u);
    goto L_08989710;
L_08989710:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (0u + 0u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[2] = (aot_gpr[16] << 2u);
    goto L_08989720;
L_08989720:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08989774;
      }
      goto L_08989730;
    }
L_08989730:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989768;
      }
      goto L_0898973C;
    }
L_0898973C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), 0u);
    goto L_08989768;
L_08989768:
    aot_gpr[31] = (0x08989770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x08989770u) goto L_08989770;
    return;
L_08989770:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08989774;
L_08989774:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[17];
    aot_gpr[2] = (aot_gpr[16] << 2u);
      if (branch_taken) {
          goto L_08989720;
      }
      goto L_0898977C;
    }
L_0898977C:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1072), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1028), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1036), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1024), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1200), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1204), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1208), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1212), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1216), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1220), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1068), 0u);
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1080), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1076), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4232)));
    if (aot_gpr[2] == aot_gpr[4]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1316)));
        goto L_08989854;
    }
    goto L_08989800;
L_08989800:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989838;
      }
      goto L_08989808;
    }
L_08989808:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(1316)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_0898981C;
      }
      goto L_08989814;
    }
L_08989814:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08989874;
L_0898981C:
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989838;
      }
      goto L_08989824;
    }
L_08989824:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1316)));
    if (aot_gpr[4] != aot_gpr[2]) {
    aot_gpr[3] = (aot_gpr[2] + 0u);
        goto L_0898981C;
    }
    goto L_08989830;
L_08989830:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1316)));
    goto L_08989834;
L_08989834:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1316), aot_gpr[2]);
    goto L_08989838;
L_08989838:
    aot_gpr[31] = (0x08989840u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x08989840u) goto L_08989840;
    return;
L_08989840:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989854:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08989860u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4232), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x08989860u) goto L_08989860;
    return;
L_08989860:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989874:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1316)));
    goto L_08989834;
L_0898987C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_08989AF0;
      }
      goto L_08989898;
    }
L_08989898:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[18] = (2216u << 16u);
      if (branch_taken) {
          goto L_08989AF0;
      }
      goto L_089898A4;
    }
L_089898A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4232)));
    if (aot_gpr[16] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_0898996C;
    }
    goto L_089898B4;
L_089898B4:
    if (aot_gpr[3] != aot_gpr[16]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1316)));
        goto L_08989964;
    }
    goto L_089898BC;
L_089898BC:
    aot_gpr[2] = (2217u << 16u);
    goto L_089898C0;
L_089898C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1172)));
        goto L_089898DC;
    }
    goto L_089898CC;
L_089898CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(304)));
    if (aot_gpr[2] == aot_gpr[16]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
        goto L_08989B40;
    }
    goto L_089898D8;
L_089898D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1172)));
    goto L_089898DC;
L_089898DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
      if (branch_taken) {
          goto L_08989988;
      }
      goto L_089898E4;
    }
L_089898E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (2217u << 16u);
      if (branch_taken) {
          goto L_08989AF0;
      }
      goto L_089898F0;
    }
L_089898F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2808)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1072)));
        goto L_08989914;
    }
    goto L_089898FC;
L_089898FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989908u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989908u) goto L_08989908;
    return;
L_08989908:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          goto L_08989AC8;
      }
      goto L_08989910;
    }
L_08989910:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1072)));
    goto L_08989914;
L_08989914:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08989990;
      }
      goto L_08989924;
    }
L_08989924:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1128)));
    goto L_08989928;
L_08989928:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1128), 0u);
        goto L_08989A64;
    }
    goto L_08989930;
L_08989930:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1108)));
    goto L_08989934;
L_08989934:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08989A3C;
      }
      goto L_0898993C;
    }
L_0898993C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989958:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[16];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089898C0;
      }
      goto L_08989960;
    }
L_08989960:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1316)));
    goto L_08989964;
L_08989964:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08989958;
      }
      goto L_0898996C;
    }
L_0898996C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989988:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4228), 0u);
    goto L_089898E4;
L_08989990:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1072), aot_gpr[2]);
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2820)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1092)));
        goto L_08989A84;
    }
    goto L_089899A4;
L_089899A4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1128)));
        goto L_08989928;
    }
    goto L_089899B4;
L_089899B4:
    aot_gpr[2] = (2217u << 16u);
    goto L_089899B8;
L_089899B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2812)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1096)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089899CCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089899CCu) goto L_089899CC;
    return;
L_089899CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1072), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2820)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_08989B20;
      }
      goto L_089899F0;
    }
L_089899F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08989B10;
      }
      goto L_089899FC;
    }
L_089899FC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989A0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989A0Cu) goto L_08989A0C;
    return;
L_08989A0C:
    aot_gpr[31] = (0x08989A14u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1112));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x08989A14u) goto L_08989A14;
    return;
L_08989A14:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1192), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1108), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1128)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1196), aot_gpr[4]);
      if (branch_taken) {
          goto L_08989930;
      }
      goto L_08989A34;
    }
L_08989A34:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1128), 0u);
    goto L_08989A64;
L_08989A3C:
    aot_gpr[31] = (0x08989A44u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089896D8;
L_08989A44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989A64:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1040));
    aot_gpr[31] = (0x08989A70u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 33u, 0x0899322Cu>(ctx, &aot_mem) && ctx.pc == 0x08989A70u) goto L_08989A70;
    return;
L_08989A70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1108)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_0898993C;
      }
      goto L_08989A7C;
    }
L_08989A7C:
    // nop
    goto L_08989A3C;
L_08989A84:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089899B8;
      }
      goto L_08989A90;
    }
L_08989A90:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989AA4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989AA4u) goto L_08989AA4;
    return;
L_08989AA4:
    aot_gpr[31] = (0x08989AACu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1112));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x08989AACu) goto L_08989AAC;
    return;
L_08989AAC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1192), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1108), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1196), aot_gpr[4]);
    goto L_089899A4;
L_08989AC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989AD4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989AD4u) goto L_08989AD4;
    return;
L_08989AD4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1072)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1128)));
        goto L_08989928;
    }
    goto L_08989AE8;
L_08989AE8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    goto L_08989990;
L_08989AF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989B10:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08989A0C;
      }
      goto L_08989B20;
    }
L_08989B20:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989B2Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989B2Cu) goto L_08989B2C;
    return;
L_08989B2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1128)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1108)));
        goto L_08989934;
    }
    goto L_08989B38;
L_08989B38:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1128), 0u);
    goto L_08989A64;
L_08989B40:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989B48u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989B48u) goto L_08989B48;
    return;
L_08989B48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1172)));
    goto L_089898DC;
L_08989B50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2824)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[20] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08989BA0;
      }
      goto L_08989B7C;
    }
L_08989B7C:
    aot_gpr[2] = (0u + 0u);
    goto L_08989B80;
L_08989B80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989BA0:
    aot_gpr[31] = (0x08989BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 80u, 0x0898E584u>(ctx, &aot_mem) && ctx.pc == 0x08989BA8u) goto L_08989BA8;
    return;
L_08989BA8:
    aot_gpr[31] = (0x08989BB0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08989BB0u) goto L_08989BB0;
    return;
L_08989BB0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08989B80;
      }
      goto L_08989BB8;
    }
L_08989BB8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(4748));
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08989BC8;
L_08989BC8:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08989BD4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 110u, 0x0898F700u>(ctx, &aot_mem) && ctx.pc == 0x08989BD4u) goto L_08989BD4;
    return;
L_08989BD4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08989C28;
    }
    goto L_08989BE4;
L_08989BE4:
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-18672));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989C00:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_08989C28;
      }
      goto L_08989C08;
    }
L_08989C08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08989C28;
    }
    goto L_08989C14;
L_08989C14:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989C20u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989C20u) goto L_08989C20;
    return;
L_08989C20:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08989C28;
L_08989C28:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    goto L_08989C2C;
L_08989C2C:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(12940));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08989BC8;
      }
      goto L_08989C38;
    }
L_08989C38:
    aot_gpr[2] = (0u + 0u);
    goto L_08989B80;
L_08989C40:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08989C54u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 113u, 0x0898F758u>(ctx, &aot_mem) && ctx.pc == 0x08989C54u) goto L_08989C54;
    return;
L_08989C54:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
        goto L_08989C2C;
    }
    goto L_08989C5C;
L_08989C5C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
        goto L_08989C2C;
    }
    goto L_08989C6C;
L_08989C6C:
    aot_gpr[31] = (0x08989C74u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x08989C74u) goto L_08989C74;
    return;
L_08989C74:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(12940));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08989BC8;
      }
      goto L_08989C8C;
    }
L_08989C8C:
    aot_gpr[2] = (0u + 0u);
    goto L_08989B80;
L_08989C94:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08989CA0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08989CA0u) goto L_08989CA0;
    return;
L_08989CA0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(10001) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
        goto L_08989C2C;
    }
    goto L_08989CB0;
L_08989CB0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_08989C28;
      }
      goto L_08989CBC;
    }
L_08989CBC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(13));
    goto L_08989CC0;
L_08989CC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_08989C08;
L_08989CC8:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(13));
      if (branch_taken) {
          goto L_08989CC0;
      }
      goto L_08989CD0;
    }
L_08989CD0:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(12940));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08989BC8;
      }
      goto L_08989CE0;
    }
L_08989CE0:
    aot_gpr[2] = (0u + 0u);
    goto L_08989B80;
L_08989CE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[19] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(12940));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(4748));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    goto L_08989D30;
L_08989D18:
    aot_gpr[2] = (aot_gpr[3] & 255u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08989D5C;
      }
      goto L_08989D24;
    }
L_08989D24:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (aot_gpr[16] == aot_gpr[18]) {
    aot_gpr[16] = (2217u << 16u);
        goto L_08989D98;
    }
    goto L_08989D30;
L_08989D30:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08989D34;
L_08989D34:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08989D18;
      }
      goto L_08989D4C;
    }
L_08989D4C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[3] & 255u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[17];
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_08989D24;
      }
      goto L_08989D5C;
    }
L_08989D5C:
    aot_gpr[31] = (0x08989D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 110u, 0x0898F700u>(ctx, &aot_mem) && ctx.pc == 0x08989D64u) goto L_08989D64;
    return;
L_08989D64:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(13));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08989D84;
      }
      goto L_08989D78;
    }
L_08989D78:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989D80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989D80u) goto L_08989D80;
    return;
L_08989D80:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    goto L_08989D84;
L_08989D84:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (aot_gpr[16] != aot_gpr[18]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08989D34;
    }
    goto L_08989D94;
L_08989D94:
    aot_gpr[16] = (2217u << 16u);
    goto L_08989D98;
L_08989D98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2824)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(4748));
      if (branch_taken) {
          goto L_08989DC0;
      }
      goto L_08989DA4;
    }
L_08989DA4:
    aot_gpr[31] = (0x08989DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 11u, 0x0898E0A0u>(ctx, &aot_mem) && ctx.pc == 0x08989DACu) goto L_08989DAC;
    return;
L_08989DAC:
    aot_gpr[31] = (0x08989DB4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08989DB4u) goto L_08989DB4;
    return;
L_08989DB4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(4748));
      if (branch_taken) {
          goto L_08989DD0;
      }
      goto L_08989DBC;
    }
L_08989DBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2824), 0u);
    goto L_08989DC0;
L_08989DC0:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08989DCCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8192));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08989DCCu) goto L_08989DCC;
    return;
L_08989DCC:
    aot_gpr[2] = (0u + 0u);
    goto L_08989DD0;
L_08989DD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989DEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[31] = (0x08989E08u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    goto L_08989CE8;
L_08989E08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989E84;
      }
      goto L_08989E14;
    }
L_08989E14:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
        goto L_08989E34;
    }
    goto L_08989E20;
L_08989E20:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989E2Cu);
    aot_gpr[4] = (aot_gpr[3] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989E2Cu) goto L_08989E2C;
    return;
L_08989E2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    goto L_08989E34;
L_08989E34:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989E3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989E3Cu) goto L_08989E3C;
    return;
L_08989E3C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989E4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989E4Cu) goto L_08989E4C;
    return;
L_08989E4C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989E5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989E5Cu) goto L_08989E5C;
    return;
L_08989E5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(236)));
        goto L_08989E7C;
    }
    goto L_08989E6C;
L_08989E6C:
    aot_gpr[31] = (0x08989E74u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(296));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x08989E74u) goto L_08989E74;
    return;
L_08989E74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(236)));
    goto L_08989E7C;
L_08989E7C:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989E84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989E84u) goto L_08989E84;
    return;
L_08989E84:
    aot_gpr[31] = (0x08989E8Cu);
    aot_gpr[18] = (2216u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 79u, 0x08991488u>(ctx, &aot_mem) && ctx.pc == 0x08989E8Cu) goto L_08989E8C;
    return;
L_08989E8C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4232)));
    if (aot_gpr[16] == 0u) {
    aot_gpr[16] = (2217u << 16u);
        goto L_08989F08;
    }
    goto L_08989E9C;
L_08989E9C:
    aot_gpr[17] = (2217u << 16u);
    goto L_08989EBC;
L_08989EA4:
    aot_gpr[31] = (0x08989EACu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089896D8;
L_08989EAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4232)));
    if (aot_gpr[16] == 0u) {
    aot_gpr[16] = (2217u << 16u);
        goto L_08989F08;
    }
    goto L_08989EBC;
L_08989EBC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2808)));
    goto L_08989EC0;
L_08989EC0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08989EA4;
      }
      goto L_08989EC8;
    }
L_08989EC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989ED4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989ED4u) goto L_08989ED4;
    return;
L_08989ED4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08989EA4;
      }
      goto L_08989EDC;
    }
L_08989EDC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2808)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989EECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989EECu) goto L_08989EEC;
    return;
L_08989EEC:
    aot_gpr[31] = (0x08989EF4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089896D8;
L_08989EF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4232)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          goto L_08989EC0;
      }
      goto L_08989F04;
    }
L_08989F04:
    aot_gpr[16] = (2217u << 16u);
    goto L_08989F08;
L_08989F08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2820)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08989F70;
      }
      goto L_08989F14;
    }
L_08989F14:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2812)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (2217u << 16u);
        goto L_08989F34;
    }
    goto L_08989F24;
L_08989F24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989F30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989F30u) goto L_08989F30;
    return;
L_08989F30:
    aot_gpr[2] = (2217u << 16u);
    goto L_08989F34;
L_08989F34:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2788)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
      if (branch_taken) {
          goto L_08989F50;
      }
      goto L_08989F40;
    }
L_08989F40:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989F4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989F4Cu) goto L_08989F4C;
    return;
L_08989F4C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    goto L_08989F50;
L_08989F50:
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4228), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989F70:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(120)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08989F80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989F80u) goto L_08989F80;
    return;
L_08989F80:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2820), 0u);
    goto L_08989F14;
L_08989F88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[31] = (0x08989FB4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 162u, 0x08992A80u>(ctx, &aot_mem) && ctx.pc == 0x08989FB4u) goto L_08989FB4;
    return;
L_08989FB4:
    aot_gpr[31] = (0x08989FBCu);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    goto L_089894FC;
L_08989FBC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0390_entry, 390u, 33u, 0x0898A198u>(ctx, &aot_mem); return;
      }
      goto L_08989FC4;
    }
L_08989FC4:
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4228)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0390_entry, 390u, 34u, 0x0898A1C4u>(ctx, &aot_mem); return;
      }
      goto L_08989FD8;
    }
L_08989FD8:
    aot_gpr[21] = (2217u << 16u);
    goto L_08989FDC;
L_08989FDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0390_entry, 390u, 2u, 0x0898A004u>(ctx, &aot_mem); return;
      }
      goto L_08989FE8;
    }
L_08989FE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0390_entry, 390u, 2u, 0x0898A004u>(ctx, &aot_mem); return;
      }
      goto L_08989FF4;
    }
L_08989FF4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1072)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1084)));
        (void)rt.invoke_chained_direct<&recomp_unit_0390_entry, 390u, 36u, 0x0898A1D4u>(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0390_entry, 390u, 1u, 0x0898A000u>(ctx, &aot_mem); return;
}

void recomp_unit_0389(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0389_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_389(Runtime &runtime) {
    runtime.register_generated_unit(389u, 0x08989000u, 4096u, &recomp_unit_0389, &recomp_unit_0389_entry);
    runtime.register_function(0x08989000u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989008u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989014u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898901Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989020u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989028u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989030u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989048u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989060u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989068u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989074u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898907Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898909Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089890D0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089890D8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089890ECu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089890F4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989100u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898910Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989110u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989128u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989150u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989154u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898915Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989184u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898918Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089891ACu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089891BCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089891C4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089891CCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089891DCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089891ECu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989210u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989224u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989230u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989248u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989260u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989268u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989284u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898928Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089892ACu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089892B4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089892D4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989300u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989308u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989340u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989348u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989360u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989368u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989370u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989394u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089893A8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089893B0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089893B8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089893C8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089893D0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089893DCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089893F0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089893F4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989404u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989414u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898941Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989428u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989438u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989440u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989448u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989450u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989458u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989464u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989468u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898948Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989494u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898949Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089894ACu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089894B8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089894CCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089894D0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089894DCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089894F4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089894FCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898952Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989534u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989548u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989550u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989554u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989558u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989560u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989564u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989578u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898957Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989588u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989594u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898959Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089895A0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089895A8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089895B0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089895B8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089895CCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089895DCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089895E4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089895ECu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089895F4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989604u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898961Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989624u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989628u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989630u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989638u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898963Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989644u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898964Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989658u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989660u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989670u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989678u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989680u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898968Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989694u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089896A8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089896B0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089896B8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089896C4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089896D0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089896D8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089896F8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989708u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989710u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989720u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989730u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898973Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989768u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989770u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989774u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898977Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989800u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989808u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989814u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898981Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989824u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989830u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989834u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989838u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989840u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989854u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989860u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989874u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898987Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989898u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089898A4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089898B4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089898BCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089898C0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089898CCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089898D8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089898DCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089898E4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089898F0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089898FCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989908u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989910u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989914u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989924u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989928u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989930u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989934u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898993Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989958u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989960u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989964u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x0898996Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989988u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989990u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089899A4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089899B4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089899B8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089899CCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089899F0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x089899FCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989A0Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989A14u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989A34u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989A3Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989A44u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989A64u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989A70u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989A7Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989A84u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989A90u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989AA4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989AACu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989AC8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989AD4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989AE8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989AF0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989B10u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989B20u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989B2Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989B38u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989B40u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989B48u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989B50u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989B7Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989B80u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989BA0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989BA8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989BB0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989BB8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989BC8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989BD4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989BE4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C00u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C08u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C14u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C20u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C28u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C2Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C38u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C40u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C54u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C5Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C6Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C74u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C8Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989C94u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989CA0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989CB0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989CBCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989CC0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989CC8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989CD0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989CE0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989CE8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989D18u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989D24u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989D30u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989D34u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989D4Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989D5Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989D64u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989D78u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989D80u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989D84u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989D94u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989D98u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989DA4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989DACu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989DB4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989DBCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989DC0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989DCCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989DD0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989DECu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E08u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E14u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E20u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E2Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E34u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E3Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E4Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E5Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E6Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E74u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E7Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E84u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E8Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989E9Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989EA4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989EACu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989EBCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989EC0u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989EC8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989ED4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989EDCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989EECu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989EF4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989F04u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989F08u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989F14u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989F24u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989F30u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989F34u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989F40u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989F4Cu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989F50u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989F70u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989F80u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989F88u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989FB4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989FBCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989FC4u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989FD8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989FDCu, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989FE8u, &recomp_unit_0389, "recomp_unit_0389");
    runtime.register_function(0x08989FF4u, &recomp_unit_0389, "recomp_unit_0389");
}
} // namespace psprecomp
