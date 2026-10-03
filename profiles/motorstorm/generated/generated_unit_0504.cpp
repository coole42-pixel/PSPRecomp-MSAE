#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0504[1021] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 9,
    0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0,
    0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34,
    35, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 39, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0, 44, 0, 45, 0, 0, 46, 47, 0,
    0, 48, 0, 49, 0, 50, 0, 51, 52, 0, 53, 0, 54, 0, 55, 56, 0, 57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 61, 0,
    0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0,
    69, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0,
    86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93,
    0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 107, 0, 108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114,
    115, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 0,
    128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 136,
    137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0,
    145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 155, 156, 0, 157, 0, 158, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    163, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 171,
    0, 172, 0, 0, 0, 173, 0, 174, 175, 0, 176, 0, 177, 0, 0, 0, 178, 179, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0,
    183, 0, 0, 0, 0, 0, 184, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 196,
    0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0,
    0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216,
    0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 223, 224, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228,
    0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 0,
    239, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 246, 0, 247, 0, 248, 0, 249, 0,
    0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 255, 0, 256, 0, 257, 0, 0, 0, 258, 0, 259, 0, 260, 0,
    0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 0, 0, 270,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 0, 279, 0, 280, 0,
    0, 281, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 289,
};
void recomp_unit_0504_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089FC000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0504[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089FC000;
    case 2u: goto L_089FC014;
    case 3u: goto L_089FC01C;
    case 4u: goto L_089FC03C;
    case 5u: goto L_089FC058;
    case 6u: goto L_089FC060;
    case 7u: goto L_089FC06C;
    case 8u: goto L_089FC074;
    case 9u: goto L_089FC07C;
    case 10u: goto L_089FC08C;
    case 11u: goto L_089FC098;
    case 12u: goto L_089FC0A8;
    case 13u: goto L_089FC0B4;
    case 14u: goto L_089FC0C4;
    case 15u: goto L_089FC0D0;
    case 16u: goto L_089FC0D8;
    case 17u: goto L_089FC0E0;
    case 18u: goto L_089FC0FC;
    case 19u: goto L_089FC114;
    case 20u: goto L_089FC128;
    case 21u: goto L_089FC130;
    case 22u: goto L_089FC154;
    case 23u: goto L_089FC15C;
    case 24u: goto L_089FC168;
    case 25u: goto L_089FC178;
    case 26u: goto L_089FC184;
    case 27u: goto L_089FC190;
    case 28u: goto L_089FC19C;
    case 29u: goto L_089FC1A8;
    case 30u: goto L_089FC1C4;
    case 31u: goto L_089FC1CC;
    case 32u: goto L_089FC1D4;
    case 33u: goto L_089FC1E0;
    case 34u: goto L_089FC1FC;
    case 35u: goto L_089FC200;
    case 36u: goto L_089FC208;
    case 37u: goto L_089FC214;
    case 38u: goto L_089FC230;
    case 39u: goto L_089FC234;
    case 40u: goto L_089FC23C;
    case 41u: goto L_089FC244;
    case 42u: goto L_089FC250;
    case 43u: goto L_089FC258;
    case 44u: goto L_089FC260;
    case 45u: goto L_089FC268;
    case 46u: goto L_089FC274;
    case 47u: goto L_089FC278;
    case 48u: goto L_089FC284;
    case 49u: goto L_089FC28C;
    case 50u: goto L_089FC294;
    case 51u: goto L_089FC29C;
    case 52u: goto L_089FC2A0;
    case 53u: goto L_089FC2A8;
    case 54u: goto L_089FC2B0;
    case 55u: goto L_089FC2B8;
    case 56u: goto L_089FC2BC;
    case 57u: goto L_089FC2C4;
    case 58u: goto L_089FC2DC;
    case 59u: goto L_089FC2E4;
    case 60u: goto L_089FC2EC;
    case 61u: goto L_089FC2F8;
    case 62u: goto L_089FC310;
    case 63u: goto L_089FC318;
    case 64u: goto L_089FC320;
    case 65u: goto L_089FC328;
    case 66u: goto L_089FC340;
    case 67u: goto L_089FC348;
    case 68u: goto L_089FC364;
    case 69u: goto L_089FC380;
    case 70u: goto L_089FC388;
    case 71u: goto L_089FC394;
    case 72u: goto L_089FC3A0;
    case 73u: goto L_089FC3AC;
    case 74u: goto L_089FC3B4;
    case 75u: goto L_089FC3C8;
    case 76u: goto L_089FC3DC;
    case 77u: goto L_089FC3E4;
    case 78u: goto L_089FC3F0;
    case 79u: goto L_089FC400;
    case 80u: goto L_089FC43C;
    case 81u: goto L_089FC444;
    case 82u: goto L_089FC454;
    case 83u: goto L_089FC45C;
    case 84u: goto L_089FC468;
    case 85u: goto L_089FC478;
    case 86u: goto L_089FC480;
    case 87u: goto L_089FC490;
    case 88u: goto L_089FC4B4;
    case 89u: goto L_089FC4D4;
    case 90u: goto L_089FC4DC;
    case 91u: goto L_089FC4E4;
    case 92u: goto L_089FC4EC;
    case 93u: goto L_089FC4FC;
    case 94u: goto L_089FC50C;
    case 95u: goto L_089FC520;
    case 96u: goto L_089FC534;
    case 97u: goto L_089FC544;
    case 98u: goto L_089FC550;
    case 99u: goto L_089FC558;
    case 100u: goto L_089FC560;
    case 101u: goto L_089FC568;
    case 102u: goto L_089FC584;
    case 103u: goto L_089FC590;
    case 104u: goto L_089FC59C;
    case 105u: goto L_089FC5A4;
    case 106u: goto L_089FC5AC;
    case 107u: goto L_089FC5B0;
    case 108u: goto L_089FC5B8;
    case 109u: goto L_089FC5C4;
    case 110u: goto L_089FC5CC;
    case 111u: goto L_089FC5D8;
    case 112u: goto L_089FC5E4;
    case 113u: goto L_089FC5F0;
    case 114u: goto L_089FC5FC;
    case 115u: goto L_089FC600;
    case 116u: goto L_089FC608;
    case 117u: goto L_089FC614;
    case 118u: goto L_089FC61C;
    case 119u: goto L_089FC628;
    case 120u: goto L_089FC62C;
    case 121u: goto L_089FC634;
    case 122u: goto L_089FC640;
    case 123u: goto L_089FC64C;
    case 124u: goto L_089FC658;
    case 125u: goto L_089FC664;
    case 126u: goto L_089FC670;
    case 127u: goto L_089FC678;
    case 128u: goto L_089FC680;
    case 129u: goto L_089FC688;
    case 130u: goto L_089FC6B4;
    case 131u: goto L_089FC6BC;
    case 132u: goto L_089FC6CC;
    case 133u: goto L_089FC6D8;
    case 134u: goto L_089FC6E0;
    case 135u: goto L_089FC6F0;
    case 136u: goto L_089FC6FC;
    case 137u: goto L_089FC700;
    case 138u: goto L_089FC70C;
    case 139u: goto L_089FC714;
    case 140u: goto L_089FC730;
    case 141u: goto L_089FC74C;
    case 142u: goto L_089FC768;
    case 143u: goto L_089FC770;
    case 144u: goto L_089FC778;
    case 145u: goto L_089FC780;
    case 146u: goto L_089FC790;
    case 147u: goto L_089FC7A8;
    case 148u: goto L_089FC7C0;
    case 149u: goto L_089FC804;
    case 150u: goto L_089FC818;
    case 151u: goto L_089FC858;
    case 152u: goto L_089FC864;
    case 153u: goto L_089FC870;
    case 154u: goto L_089FC890;
    case 155u: goto L_089FC89C;
    case 156u: goto L_089FC8A0;
    case 157u: goto L_089FC8A8;
    case 158u: goto L_089FC8B0;
    case 159u: goto L_089FC8B8;
    case 160u: goto L_089FC8C8;
    case 161u: goto L_089FC8D0;
    case 162u: goto L_089FC8E8;
    case 163u: goto L_089FC900;
    case 164u: goto L_089FC908;
    case 165u: goto L_089FC910;
    case 166u: goto L_089FC920;
    case 167u: goto L_089FC948;
    case 168u: goto L_089FC95C;
    case 169u: goto L_089FC964;
    case 170u: goto L_089FC970;
    case 171u: goto L_089FC97C;
    case 172u: goto L_089FC984;
    case 173u: goto L_089FC994;
    case 174u: goto L_089FC99C;
    case 175u: goto L_089FC9A0;
    case 176u: goto L_089FC9A8;
    case 177u: goto L_089FC9B0;
    case 178u: goto L_089FC9C0;
    case 179u: goto L_089FC9C4;
    case 180u: goto L_089FC9D0;
    case 181u: goto L_089FC9E4;
    case 182u: goto L_089FC9F8;
    case 183u: goto L_089FCA00;
    case 184u: goto L_089FCA18;
    case 185u: goto L_089FCA1C;
    case 186u: goto L_089FCA28;
    case 187u: goto L_089FCA5C;
    case 188u: goto L_089FCA98;
    case 189u: goto L_089FCAA0;
    case 190u: goto L_089FCAAC;
    case 191u: goto L_089FCAB8;
    case 192u: goto L_089FCAD0;
    case 193u: goto L_089FCAD8;
    case 194u: goto L_089FCAE4;
    case 195u: goto L_089FCAF4;
    case 196u: goto L_089FCAFC;
    case 197u: goto L_089FCB0C;
    case 198u: goto L_089FCB14;
    case 199u: goto L_089FCB1C;
    case 200u: goto L_089FCB3C;
    case 201u: goto L_089FCB44;
    case 202u: goto L_089FCB5C;
    case 203u: goto L_089FCB6C;
    case 204u: goto L_089FCBA0;
    case 205u: goto L_089FCBD4;
    case 206u: goto L_089FCBEC;
    case 207u: goto L_089FCBF4;
    case 208u: goto L_089FCC04;
    case 209u: goto L_089FCC14;
    case 210u: goto L_089FCC20;
    case 211u: goto L_089FCC30;
    case 212u: goto L_089FCC3C;
    case 213u: goto L_089FCC44;
    case 214u: goto L_089FCC4C;
    case 215u: goto L_089FCC74;
    case 216u: goto L_089FCC7C;
    case 217u: goto L_089FCC88;
    case 218u: goto L_089FCC90;
    case 219u: goto L_089FCC9C;
    case 220u: goto L_089FCCA8;
    case 221u: goto L_089FCCB8;
    case 222u: goto L_089FCCC0;
    case 223u: goto L_089FCCCC;
    case 224u: goto L_089FCCD0;
    case 225u: goto L_089FCCD4;
    case 226u: goto L_089FCCDC;
    case 227u: goto L_089FCCF4;
    case 228u: goto L_089FCCFC;
    case 229u: goto L_089FCD0C;
    case 230u: goto L_089FCD14;
    case 231u: goto L_089FCD2C;
    case 232u: goto L_089FCD34;
    case 233u: goto L_089FCD44;
    case 234u: goto L_089FCD4C;
    case 235u: goto L_089FCD58;
    case 236u: goto L_089FCD60;
    case 237u: goto L_089FCD6C;
    case 238u: goto L_089FCD74;
    case 239u: goto L_089FCD80;
    case 240u: goto L_089FCD94;
    case 241u: goto L_089FCD9C;
    case 242u: goto L_089FCDB4;
    case 243u: goto L_089FCDBC;
    case 244u: goto L_089FCDCC;
    case 245u: goto L_089FCDDC;
    case 246u: goto L_089FCDE0;
    case 247u: goto L_089FCDE8;
    case 248u: goto L_089FCDF0;
    case 249u: goto L_089FCDF8;
    case 250u: goto L_089FCE08;
    case 251u: goto L_089FCE14;
    case 252u: goto L_089FCE28;
    case 253u: goto L_089FCE30;
    case 254u: goto L_089FCE38;
    case 255u: goto L_089FCE48;
    case 256u: goto L_089FCE50;
    case 257u: goto L_089FCE58;
    case 258u: goto L_089FCE68;
    case 259u: goto L_089FCE70;
    case 260u: goto L_089FCE78;
    case 261u: goto L_089FCE88;
    case 262u: goto L_089FCE90;
    case 263u: goto L_089FCE98;
    case 264u: goto L_089FCEB4;
    case 265u: goto L_089FCEC0;
    case 266u: goto L_089FCED0;
    case 267u: goto L_089FCED8;
    case 268u: goto L_089FCEE0;
    case 269u: goto L_089FCEEC;
    case 270u: goto L_089FCEFC;
    case 271u: goto L_089FCF08;
    case 272u: goto L_089FCF24;
    case 273u: goto L_089FCF30;
    case 274u: goto L_089FCF40;
    case 275u: goto L_089FCF48;
    case 276u: goto L_089FCF50;
    case 277u: goto L_089FCF58;
    case 278u: goto L_089FCF60;
    case 279u: goto L_089FCF70;
    case 280u: goto L_089FCF78;
    case 281u: goto L_089FCF84;
    case 282u: goto L_089FCF8C;
    case 283u: goto L_089FCF94;
    case 284u: goto L_089FCFB0;
    case 285u: goto L_089FCFBC;
    case 286u: goto L_089FCFCC;
    case 287u: goto L_089FCFD4;
    case 288u: goto L_089FCFDC;
    case 289u: goto L_089FCFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089FC000:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FC014u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FC014u) goto L_089FC014;
    return;
L_089FC014:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC058;
      }
      goto L_089FC01C;
    }
L_089FC01C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(532)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FC03Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FC03Cu) goto L_089FC03C;
    return;
L_089FC03C:
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
L_089FC058:
    aot_gpr[31] = (0x089FC060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FC060u) goto L_089FC060;
    return;
L_089FC060:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FC06Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FC06Cu) goto L_089FC06C;
    return;
L_089FC06C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 239u, 0x089FBFECu>(ctx, &aot_mem); return;
      }
      goto L_089FC074;
    }
L_089FC074:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC07C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089FC08Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 129u, 0x089FD6B4u>(ctx, &aot_mem) && ctx.pc == 0x089FC08Cu) goto L_089FC08C;
    return;
L_089FC08C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC098:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089FC0A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 130u, 0x089FD6BCu>(ctx, &aot_mem) && ctx.pc == 0x089FC0A8u) goto L_089FC0A8;
    return;
L_089FC0A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC0B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089FC0C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 118u, 0x089FD61Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC0C4u) goto L_089FC0C4;
    return;
L_089FC0C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC0D0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC0D8:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC0E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC114;
      }
      goto L_089FC0FC;
    }
L_089FC0FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FC114u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FC114u) goto L_089FC114;
    return;
L_089FC114:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC128:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC130:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FC230;
      }
      goto L_089FC154;
    }
L_089FC154:
    aot_gpr[31] = (0x089FC15Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 129u, 0x089FD6B4u>(ctx, &aot_mem) && ctx.pc == 0x089FC15Cu) goto L_089FC15C;
    return;
L_089FC15C:
    aot_gpr[17] = (0u | 3u);
    if (aot_gpr[2] != aot_gpr[17]) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089FC234;
    }
    goto L_089FC168;
L_089FC168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089FC1CC;
      }
      goto L_089FC178;
    }
L_089FC178:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089FC184u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_089FCC3C;
L_089FC184:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FC190u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 127u, 0x089FB930u>(ctx, &aot_mem) && ctx.pc == 0x089FC190u) goto L_089FC190;
    return;
L_089FC190:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x089FC19Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 127u, 0x089FB930u>(ctx, &aot_mem) && ctx.pc == 0x089FC19Cu) goto L_089FC19C;
    return;
L_089FC19C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[31] = (0x089FC1A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FC128;
L_089FC1A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FC1C4u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FC1C4u) goto L_089FC1C4;
    return;
L_089FC1C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 2u);
    goto L_089FC1CC;
L_089FC1CC:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FC200;
      }
      goto L_089FC1D4;
    }
L_089FC1D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089FC1E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FC128;
L_089FC1E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FC1FCu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FC1FCu) goto L_089FC1FC;
    return;
L_089FC1FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089FC200;
L_089FC200:
    if (aot_gpr[4] != aot_gpr[17]) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089FC234;
    }
    goto L_089FC208;
L_089FC208:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089FC214u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FC128;
L_089FC214:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FC230u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FC230u) goto L_089FC230;
    return;
L_089FC230:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089FC234;
L_089FC234:
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089FC278;
    }
    goto L_089FC23C;
L_089FC23C:
    aot_gpr[31] = (0x089FC244u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 112u, 0x089FD5D4u>(ctx, &aot_mem) && ctx.pc == 0x089FC244u) goto L_089FC244;
    return;
L_089FC244:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
        goto L_089FC250;
    }
    goto L_089FC250;
L_089FC250:
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089FC278;
    }
    goto L_089FC258;
L_089FC258:
    aot_gpr[31] = (0x089FC260u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 117u, 0x089FD614u>(ctx, &aot_mem) && ctx.pc == 0x089FC260u) goto L_089FC260;
    return;
L_089FC260:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089FC274;
      }
      goto L_089FC268;
    }
L_089FC268:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089FC274u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 203u, 0x089FBE30u>(ctx, &aot_mem) && ctx.pc == 0x089FC274u) goto L_089FC274;
    return;
L_089FC274:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089FC278;
L_089FC278:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC2A0;
      }
      goto L_089FC284;
    }
L_089FC284:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FC348;
      }
      goto L_089FC28C;
    }
L_089FC28C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089FC348;
      }
      goto L_089FC294;
    }
L_089FC294:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089FC2BC;
      }
      goto L_089FC29C;
    }
L_089FC29C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    goto L_089FC2A0;
L_089FC2A0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC2EC;
      }
      goto L_089FC2A8;
    }
L_089FC2A8:
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_089FC320;
    }
    goto L_089FC2B0;
L_089FC2B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC348;
      }
      goto L_089FC2B8;
    }
L_089FC2B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_089FC2BC;
L_089FC2BC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC2DC;
      }
      goto L_089FC2C4;
    }
L_089FC2C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FC2DCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FC2DCu) goto L_089FC2DC;
    return;
L_089FC2DC:
    aot_gpr[31] = (0x089FC2E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089FCC4C;
L_089FC2E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC348;
      }
      goto L_089FC2EC;
    }
L_089FC2EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC310;
      }
      goto L_089FC2F8;
    }
L_089FC2F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FC310u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FC310u) goto L_089FC310;
    return;
L_089FC310:
    aot_gpr[31] = (0x089FC318u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089FCC4C;
L_089FC318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC348;
      }
      goto L_089FC320;
    }
L_089FC320:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC340;
      }
      goto L_089FC328;
    }
L_089FC328:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FC340u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FC340u) goto L_089FC340;
    return;
L_089FC340:
    aot_gpr[31] = (0x089FC348u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 63u, 0x089FD35Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC348u) goto L_089FC348;
    return;
L_089FC348:
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
L_089FC364:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FC3B4;
      }
      goto L_089FC380;
    }
L_089FC380:
    aot_gpr[31] = (0x089FC388u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FC534;
L_089FC388:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089FC394u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x089FC394u) goto L_089FC394;
    return;
L_089FC394:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x089FC3A0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 6u, 0x08A4604Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC3A0u) goto L_089FC3A0;
    return;
L_089FC3A0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC3B4;
      }
      goto L_089FC3AC;
    }
L_089FC3AC:
    aot_gpr[31] = (0x089FC3B4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FC3C8;
L_089FC3B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC3C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FC3DCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FC3DCu) goto L_089FC3DC;
    return;
L_089FC3DC:
    aot_gpr[31] = (0x089FC3E4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC3E4u) goto L_089FC3E4;
    return;
L_089FC3E4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FC3F0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FC3F0u) goto L_089FC3F0;
    return;
L_089FC3F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC400:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[9] = (0u | 11u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[9];
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089FC490;
      }
      goto L_089FC43C;
    }
L_089FC43C:
    aot_gpr[31] = (0x089FC444u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089FCBD4;
L_089FC444:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[20] = (0u | 1u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(1060), aot_gpr[16]);
      if (branch_taken) {
          goto L_089FC480;
      }
      goto L_089FC454;
    }
L_089FC454:
    aot_gpr[31] = (0x089FC45Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089FC534;
L_089FC45C:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089FC468u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 149u, 0x089EEC40u>(ctx, &aot_mem) && ctx.pc == 0x089FC468u) goto L_089FC468;
    return;
L_089FC468:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x089FC478u);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FC478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC490;
      }
      goto L_089FC480;
    }
L_089FC480:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FC490u);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FC490:
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
L_089FC4B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (0u | 11u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089FC520;
      }
      goto L_089FC4D4;
    }
L_089FC4D4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 1 ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC520;
      }
      goto L_089FC4DC;
    }
L_089FC4DC:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC520;
      }
      goto L_089FC4E4;
    }
L_089FC4E4:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC520;
      }
      goto L_089FC4EC;
    }
L_089FC4EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1068), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1072), aot_gpr[4]);
    aot_gpr[31] = (0x089FC4FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FCBD4;
L_089FC4FC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 7u);
    aot_gpr[31] = (0x089FC50Cu);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FC50C:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC520:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC534:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089FC544u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 10u, 0x089EF094u>(ctx, &aot_mem) && ctx.pc == 0x089FC544u) goto L_089FC544;
    return;
L_089FC544:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC550:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(12) ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC560;
      }
      goto L_089FC558;
    }
L_089FC558:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC560:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC568;
    }
L_089FC568:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-7744)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    jump_target = aot_gpr[1];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC584:
    aot_gpr[8] = (0u | 5u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089FC5AC;
      }
      goto L_089FC590;
    }
L_089FC590:
    aot_gpr[8] = (0u | 6u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    aot_gpr[8] = (0u | 9u);
      if (branch_taken) {
          goto L_089FC5AC;
      }
      goto L_089FC59C;
    }
L_089FC59C:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    aot_gpr[8] = (0u | 10u);
      if (branch_taken) {
          goto L_089FC5AC;
      }
      goto L_089FC5A4;
    }
L_089FC5A4:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_089FC5B0;
      }
      goto L_089FC5AC;
    }
L_089FC5AC:
    aot_gpr[7] = (0u | 1u);
    goto L_089FC5B0;
L_089FC5B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC5B8;
    }
L_089FC5B8:
    aot_gpr[6] = (aot_gpr[6] ^ 11u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC5C4;
    }
L_089FC5C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC5CC;
    }
L_089FC5CC:
    aot_gpr[6] = (aot_gpr[6] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC5D8;
    }
L_089FC5D8:
    aot_gpr[6] = (aot_gpr[6] ^ 11u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC5E4;
    }
L_089FC5E4:
    aot_gpr[8] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089FC5FC;
      }
      goto L_089FC5F0;
    }
L_089FC5F0:
    aot_gpr[8] = (0u | 3u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_089FC600;
      }
      goto L_089FC5FC;
    }
L_089FC5FC:
    aot_gpr[7] = (0u | 1u);
    goto L_089FC600;
L_089FC600:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC608;
    }
L_089FC608:
    aot_gpr[6] = (aot_gpr[6] ^ 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC614;
    }
L_089FC614:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089FC628;
      }
      goto L_089FC61C;
    }
L_089FC61C:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC62C;
      }
      goto L_089FC628;
    }
L_089FC628:
    aot_gpr[7] = (0u | 1u);
    goto L_089FC62C;
L_089FC62C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC634;
    }
L_089FC634:
    aot_gpr[6] = (aot_gpr[6] ^ 11u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC640;
    }
L_089FC640:
    aot_gpr[6] = (aot_gpr[6] ^ 7u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC64C;
    }
L_089FC64C:
    aot_gpr[6] = (aot_gpr[6] ^ 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC658;
    }
L_089FC658:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089FC670;
      }
      goto L_089FC664;
    }
L_089FC664:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089FC678;
      }
      goto L_089FC670;
    }
L_089FC670:
    aot_gpr[7] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_089FC678;
L_089FC678:
    if (aot_gpr[6] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
        goto L_089FC680;
    }
    goto L_089FC680;
L_089FC680:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC688:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089FC6B4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC6B4u) goto L_089FC6B4;
    return;
L_089FC6B4:
    aot_gpr[31] = (0x089FC6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FC6BCu) goto L_089FC6BC;
    return;
L_089FC6BC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FC6CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7840));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x089FC6CCu) goto L_089FC6CC;
    return;
L_089FC6CC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FC700;
      }
      goto L_089FC6D8;
    }
L_089FC6D8:
    aot_gpr[31] = (0x089FC6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FC6E0u) goto L_089FC6E0;
    return;
L_089FC6E0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FC6F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7824));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x089FC6F0u) goto L_089FC6F0;
    return;
L_089FC6F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC730;
      }
      goto L_089FC6FC;
    }
L_089FC6FC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_089FC700;
L_089FC700:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089FC70Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089FC70Cu) goto L_089FC70C;
    return;
L_089FC70C:
    aot_gpr[31] = (0x089FC714u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FC714u) goto L_089FC714;
    return;
L_089FC714:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[16] ? 1u : 0u);
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
L_089FC730:
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
L_089FC74C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089FC768u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_089FCA5C;
L_089FC768:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089FC7A8;
      }
      goto L_089FC770;
    }
L_089FC770:
    aot_gpr[31] = (0x089FC778u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-7808));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 151u, 0x089FD7E0u>(ctx, &aot_mem) && ctx.pc == 0x089FC778u) goto L_089FC778;
    return;
L_089FC778:
    aot_gpr[31] = (0x089FC780u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 227u, 0x089FDBB8u>(ctx, &aot_mem) && ctx.pc == 0x089FC780u) goto L_089FC780;
    return;
L_089FC780:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FC790u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089FC790u) goto L_089FC790;
    return;
L_089FC790:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC7A8:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC7C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1200));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1176), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1160), aot_gpr[16]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1164), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1168), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1172), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1180), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1184), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1188), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1192), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1196), aot_gpr[31]);
    aot_gpr[31] = (0x089FC804u);
    aot_gpr[6] = (0u | 513u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC804u) goto L_089FC804;
    return;
L_089FC804:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(516));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FC818u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC818u) goto L_089FC818;
    return;
L_089FC818:
    aot_gpr[19] = (24933u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(29283));
    aot_gpr[21] = (24903u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(25972));
    aot_gpr[22] = (27728u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(25965));
    aot_gpr[23] = (29285u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[22]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(31073));
    aot_gpr[4] = (73u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21077));
    aot_gpr[31] = (0x089FC858u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FC858u) goto L_089FC858;
    return;
L_089FC858:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FC864u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x089FC864u) goto L_089FC864;
    return;
L_089FC864:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FC8A0;
      }
      goto L_089FC870;
    }
L_089FC870:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[22]);
    aot_gpr[4] = (76u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21077));
    aot_gpr[31] = (0x089FC890u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FC890u) goto L_089FC890;
    return;
L_089FC890:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FC89Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x089FC89Cu) goto L_089FC89C;
    return;
L_089FC89C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_089FC8A0;
L_089FC8A0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(548));
      if (branch_taken) {
          goto L_089FCA28;
      }
      goto L_089FC8A8;
    }
L_089FC8A8:
    aot_gpr[31] = (0x089FC8B0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 228u, 0x089F2ED0u>(ctx, &aot_mem) && ctx.pc == 0x089FC8B0u) goto L_089FC8B0;
    return;
L_089FC8B0:
    aot_gpr[31] = (0x089FC8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FC8B8u) goto L_089FC8B8;
    return;
L_089FC8B8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FC8C8u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 97u, 0x089F3634u>(ctx, &aot_mem) && ctx.pc == 0x089FC8C8u) goto L_089FC8C8;
    return;
L_089FC8C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FC908;
      }
      goto L_089FC8D0;
    }
L_089FC8D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1068)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(564));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1072)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089FC8E8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089FC8E8u) goto L_089FC8E8;
    return;
L_089FC8E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1064)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1060)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089FC900u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 188u, 0x089FBCE4u>(ctx, &aot_mem) && ctx.pc == 0x089FC900u) goto L_089FC900;
    return;
L_089FC900:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089FCA1C;
      }
      goto L_089FC908;
    }
L_089FC908:
    aot_gpr[31] = (0x089FC910u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 34u, 0x089F31ECu>(ctx, &aot_mem) && ctx.pc == 0x089FC910u) goto L_089FC910;
    return;
L_089FC910:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1156), aot_gpr[2]);
      if (branch_taken) {
          goto L_089FC9E4;
      }
      goto L_089FC920;
    }
L_089FC920:
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(1084));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(1152));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(1088));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-7804));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-7792));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-7788));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(1080));
    goto L_089FC948;
L_089FC948:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089FC95Cu);
    aot_gpr[8] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 36u, 0x089F3208u>(ctx, &aot_mem) && ctx.pc == 0x089FC95Cu) goto L_089FC95C;
    return;
L_089FC95C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089FC9D0;
      }
      goto L_089FC964;
    }
L_089FC964:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FC970u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC970u) goto L_089FC970;
    return;
L_089FC970:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1080)));
    aot_gpr[31] = (0x089FC97Cu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC97Cu) goto L_089FC97C;
    return;
L_089FC97C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1080)));
        goto L_089FC9A0;
    }
    goto L_089FC984;
L_089FC984:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1068)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FC994u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089FC994u) goto L_089FC994;
    return;
L_089FC994:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089FC9C4;
      }
      goto L_089FC99C;
    }
L_089FC99C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1080)));
    goto L_089FC9A0;
L_089FC9A0:
    aot_gpr[31] = (0x089FC9A8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC9A8u) goto L_089FC9A8;
    return;
L_089FC9A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089FC9C4;
      }
      goto L_089FC9B0;
    }
L_089FC9B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1072)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FC9C0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089FC9C0u) goto L_089FC9C0;
    return;
L_089FC9C0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089FC9C4;
L_089FC9C4:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089FC9D0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 38u, 0x089F3224u>(ctx, &aot_mem) && ctx.pc == 0x089FC9D0u) goto L_089FC9D0;
    return;
L_089FC9D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1156)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(1080));
      if (branch_taken) {
          goto L_089FC948;
      }
      goto L_089FC9E4;
    }
L_089FC9E4:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FC9F8u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 40u, 0x089F3240u>(ctx, &aot_mem) && ctx.pc == 0x089FC9F8u) goto L_089FC9F8;
    return;
L_089FC9F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCA1C;
      }
      goto L_089FCA00;
    }
L_089FCA00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1064)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1060)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089FCA18u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 188u, 0x089FBCE4u>(ctx, &aot_mem) && ctx.pc == 0x089FCA18u) goto L_089FCA18;
    return;
L_089FCA18:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_089FCA1C;
L_089FCA1C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089FCA28u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 230u, 0x089F2F04u>(ctx, &aot_mem) && ctx.pc == 0x089FCA28u) goto L_089FCA28;
    return;
L_089FCA28:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1160)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1164)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1168)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1172)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1176)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1180)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1184)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1188)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1192)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1196)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1200));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCA5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[31] = (0x089FCA98u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 151u, 0x089FD7E0u>(ctx, &aot_mem) && ctx.pc == 0x089FCA98u) goto L_089FCA98;
    return;
L_089FCA98:
    aot_gpr[31] = (0x089FCAA0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 221u, 0x089FDB78u>(ctx, &aot_mem) && ctx.pc == 0x089FCAA0u) goto L_089FCAA0;
    return;
L_089FCAA0:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[23]) <= 0;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_089FCBA0;
      }
      goto L_089FCAAC;
    }
L_089FCAAC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (2215u << 16u);
      if (branch_taken) {
          goto L_089FCB6C;
      }
      goto L_089FCAB8;
    }
L_089FCAB8:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-7776));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-7792));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-7888));
    goto L_089FCAD0;
L_089FCAD0:
    aot_gpr[31] = (0x089FCAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 151u, 0x089FD7E0u>(ctx, &aot_mem) && ctx.pc == 0x089FCAD8u) goto L_089FCAD8;
    return;
L_089FCAD8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FCAE4u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 222u, 0x089FDB80u>(ctx, &aot_mem) && ctx.pc == 0x089FCAE4u) goto L_089FCAE4;
    return;
L_089FCAE4:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089FCAF4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCAF4u) goto L_089FCAF4;
    return;
L_089FCAF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FCB14;
      }
      goto L_089FCAFC;
    }
L_089FCAFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089FCB0Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089FCB0Cu) goto L_089FCB0C;
    return;
L_089FCB0C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
      if (branch_taken) {
          goto L_089FCB44;
      }
      goto L_089FCB14;
    }
L_089FCB14:
    aot_gpr[31] = (0x089FCB1Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1064)));
    goto L_089FC128;
L_089FCB1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FCB3Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FCB3Cu) goto L_089FCB3C;
    return;
L_089FCB3C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCBA0;
      }
      goto L_089FCB44;
    }
L_089FCB44:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 538u);
    aot_gpr[31] = (0x089FCB5Cu);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x089FCB5Cu) goto L_089FCB5C;
    return;
L_089FCB5C:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FCAD0;
      }
      goto L_089FCB6C;
    }
L_089FCB6C:
    aot_gpr[2] = (0u | 1u);
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
L_089FCBA0:
    aot_gpr[2] = (0u | 0u);
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
L_089FCBD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FCBECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCBECu) goto L_089FCBEC;
    return;
L_089FCBEC:
    aot_gpr[31] = (0x089FCBF4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 18u, 0x08A460F8u>(ctx, &aot_mem) && ctx.pc == 0x089FCBF4u) goto L_089FCBF4;
    return;
L_089FCBF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCC04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089FCC14u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 23u, 0x08A46134u>(ctx, &aot_mem) && ctx.pc == 0x089FCC14u) goto L_089FCC14;
    return;
L_089FCC14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCC20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089FCC30u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 32u, 0x08A461C4u>(ctx, &aot_mem) && ctx.pc == 0x089FCC30u) goto L_089FCC30;
    return;
L_089FCC30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCC3C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCC44:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCC4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2080));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2060), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 11u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2064), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2068), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2072), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 6u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCC74;
    }
L_089FCC74:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
      if (branch_taken) {
          goto L_089FCCD4;
      }
      goto L_089FCC7C;
    }
L_089FCC7C:
    aot_gpr[5] = (0u | 10u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
      if (branch_taken) {
          goto L_089FCCD4;
      }
      goto L_089FCC88;
    }
L_089FCC88:
    aot_gpr[31] = (0x089FCC90u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FCC20;
L_089FCC90:
    aot_gpr[5] = (aot_gpr[2] < static_cast<std::uint32_t>(5001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089FCCD0;
      }
      goto L_089FCC9C;
    }
L_089FCC9C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FCCC0;
      }
      goto L_089FCCA8;
    }
L_089FCCA8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x089FCCB8u);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCCB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089FCCD0;
      }
      goto L_089FCCC0;
    }
L_089FCCC0:
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x089FCCCCu);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCCCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089FCCD0;
L_089FCCD0:
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    goto L_089FCCD4;
L_089FCCD4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCCDC;
    }
L_089FCCDC:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-7696)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCCF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCCFC;
    }
L_089FCCFC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FCD0Cu);
    aot_gpr[6] = (0u | 513u);
    goto L_089FC688;
L_089FCD0C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FCD60;
      }
      goto L_089FCD14;
    }
L_089FCD14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1064)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1060)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089FCD2Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 188u, 0x089FBCE4u>(ctx, &aot_mem) && ctx.pc == 0x089FCD2Cu) goto L_089FCD2C;
    return;
L_089FCD2C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FCD4C;
      }
      goto L_089FCD34;
    }
L_089FCD34:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x089FCD44u);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCD44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCD4C;
    }
L_089FCD4C:
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x089FCD58u);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCD58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCD60;
    }
L_089FCD60:
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x089FCD6Cu);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCD6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCD74;
    }
L_089FCD74:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(516));
    aot_gpr[31] = (0x089FCD80u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 142u, 0x089EEBC0u>(ctx, &aot_mem) && ctx.pc == 0x089FCD80u) goto L_089FCD80;
    return;
L_089FCD80:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(1544));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FCD94u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_089FC74C;
L_089FCD94:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089FCDE0;
      }
      goto L_089FCD9C;
    }
L_089FCD9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1064)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1060)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x089FCDB4u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 188u, 0x089FBCE4u>(ctx, &aot_mem) && ctx.pc == 0x089FCDB4u) goto L_089FCDB4;
    return;
L_089FCDB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089FCDE0;
      }
      goto L_089FCDBC;
    }
L_089FCDBC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FCDCCu);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCDCCu) goto L_089FCDCC;
    return;
L_089FCDCC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x089FCDDCu);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCDDC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089FCDE0;
L_089FCDE0:
    aot_gpr[31] = (0x089FCDE8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x089FCDE8u) goto L_089FCDE8;
    return;
L_089FCDE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCDF0;
    }
L_089FCDF0:
    aot_gpr[31] = (0x089FCDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FCDF8u) goto L_089FCDF8;
    return;
L_089FCDF8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FCE08u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7764));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x089FCE08u) goto L_089FCE08;
    return;
L_089FCE08:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FCE70;
      }
      goto L_089FCE14;
    }
L_089FCE14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1064)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1060)));
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089FCE28u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 188u, 0x089FBCE4u>(ctx, &aot_mem) && ctx.pc == 0x089FCE28u) goto L_089FCE28;
    return;
L_089FCE28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCE50;
      }
      goto L_089FCE30;
    }
L_089FCE30:
    aot_gpr[31] = (0x089FCE38u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FC534;
L_089FCE38:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x089FCE48u);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCE48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCE50;
    }
L_089FCE50:
    aot_gpr[31] = (0x089FCE58u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FC534;
L_089FCE58:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x089FCE68u);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCE68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCE70;
    }
L_089FCE70:
    aot_gpr[31] = (0x089FCE78u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FC534;
L_089FCE78:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x089FCE88u);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCE88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCE90;
    }
L_089FCE90:
    aot_gpr[31] = (0x089FCE98u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1064)));
    goto L_089FC128;
L_089FCE98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FCEB4u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FCEB4u) goto L_089FCEB4;
    return;
L_089FCEB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1064)));
    aot_gpr[31] = (0x089FCEC0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 187u, 0x089FBCDCu>(ctx, &aot_mem) && ctx.pc == 0x089FCEC0u) goto L_089FCEC0;
    return;
L_089FCEC0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 11u);
    aot_gpr[31] = (0x089FCED0u);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCED0:
    aot_gpr[31] = (0x089FCED8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FCC04;
L_089FCED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCEE0;
    }
L_089FCEE0:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089FCEECu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 127u, 0x089FB930u>(ctx, &aot_mem) && ctx.pc == 0x089FCEECu) goto L_089FCEEC;
    return;
L_089FCEEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[31] = (0x089FCEFCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 127u, 0x089FB930u>(ctx, &aot_mem) && ctx.pc == 0x089FCEFCu) goto L_089FCEFC;
    return;
L_089FCEFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[31] = (0x089FCF08u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1064)));
    goto L_089FC128;
L_089FCF08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FCF24u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FCF24u) goto L_089FCF24;
    return;
L_089FCF24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1064)));
    aot_gpr[31] = (0x089FCF30u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 187u, 0x089FBCDCu>(ctx, &aot_mem) && ctx.pc == 0x089FCF30u) goto L_089FCF30;
    return;
L_089FCF30:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 11u);
    aot_gpr[31] = (0x089FCF40u);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCF40:
    aot_gpr[31] = (0x089FCF48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FCC04;
L_089FCF48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCF50;
    }
L_089FCF50:
    aot_gpr[31] = (0x089FCF58u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FC7C0;
L_089FCF58:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FCF78;
      }
      goto L_089FCF60;
    }
L_089FCF60:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 8u);
    aot_gpr[31] = (0x089FCF70u);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCF70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCF78;
    }
L_089FCF78:
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x089FCF84u);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCF84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCF8C;
    }
L_089FCF8C:
    aot_gpr[31] = (0x089FCF94u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1064)));
    goto L_089FC128;
L_089FCF94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FCFB0u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FCFB0u) goto L_089FCFB0;
    return;
L_089FCFB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1064)));
    aot_gpr[31] = (0x089FCFBCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 187u, 0x089FBCDCu>(ctx, &aot_mem) && ctx.pc == 0x089FCFBCu) goto L_089FCFBC;
    return;
L_089FCFBC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 11u);
    aot_gpr[31] = (0x089FCFCCu);
    aot_gpr[6] = (0u | 0u);
    goto L_089FC550;
L_089FCFCC:
    aot_gpr[31] = (0x089FCFD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FCC04;
L_089FCFD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 5u, 0x089FD030u>(ctx, &aot_mem); return;
      }
      goto L_089FCFDC;
    }
L_089FCFDC:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1064)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[31] = (0x089FCFF0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_089FC128;
L_089FCFF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.pc = 0x089FD000u; return;
}

void recomp_unit_0504(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0504_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_504(Runtime &runtime) {
    runtime.register_generated_unit(504u, 0x089FC000u, 4096u, &recomp_unit_0504, &recomp_unit_0504_entry);
    runtime.register_function(0x089FC000u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC014u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC01Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC03Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC058u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC060u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC06Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC074u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC07Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC08Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC098u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC0A8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC0B4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC0C4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC0D0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC0D8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC0E0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC0FCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC114u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC128u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC130u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC154u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC15Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC168u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC178u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC184u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC190u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC19Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC1A8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC1C4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC1CCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC1D4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC1E0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC1FCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC200u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC208u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC214u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC230u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC234u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC23Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC244u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC250u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC258u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC260u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC268u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC274u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC278u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC284u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC28Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC294u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC29Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC2A0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC2A8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC2B0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC2B8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC2BCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC2C4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC2DCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC2E4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC2ECu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC2F8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC310u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC318u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC320u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC328u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC340u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC348u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC364u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC380u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC388u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC394u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC3A0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC3ACu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC3B4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC3C8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC3DCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC3E4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC3F0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC400u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC43Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC444u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC454u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC45Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC468u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC478u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC480u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC490u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC4B4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC4D4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC4DCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC4E4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC4ECu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC4FCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC50Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC520u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC534u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC544u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC550u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC558u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC560u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC568u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC584u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC590u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC59Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC5A4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC5ACu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC5B0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC5B8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC5C4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC5CCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC5D8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC5E4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC5F0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC5FCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC600u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC608u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC614u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC61Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC628u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC62Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC634u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC640u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC64Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC658u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC664u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC670u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC678u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC680u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC688u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC6B4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC6BCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC6CCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC6D8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC6E0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC6F0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC6FCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC700u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC70Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC714u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC730u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC74Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC768u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC770u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC778u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC780u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC790u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC7A8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC7C0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC804u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC818u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC858u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC864u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC870u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC890u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC89Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC8A0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC8A8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC8B0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC8B8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC8C8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC8D0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC8E8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC900u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC908u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC910u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC920u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC948u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC95Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC964u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC970u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC97Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC984u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC994u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC99Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC9A0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC9A8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC9B0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC9C0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC9C4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC9D0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC9E4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FC9F8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCA00u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCA18u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCA1Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCA28u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCA5Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCA98u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCAA0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCAACu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCAB8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCAD0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCAD8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCAE4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCAF4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCAFCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCB0Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCB14u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCB1Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCB3Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCB44u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCB5Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCB6Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCBA0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCBD4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCBECu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCBF4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCC04u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCC14u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCC20u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCC30u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCC3Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCC44u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCC4Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCC74u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCC7Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCC88u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCC90u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCC9Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCCA8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCCB8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCCC0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCCCCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCCD0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCCD4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCCDCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCCF4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCCFCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD0Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD14u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD2Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD34u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD44u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD4Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD58u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD60u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD6Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD74u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD80u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD94u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCD9Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCDB4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCDBCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCDCCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCDDCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCDE0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCDE8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCDF0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCDF8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE08u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE14u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE28u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE30u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE38u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE48u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE50u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE58u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE68u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE70u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE78u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE88u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE90u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCE98u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCEB4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCEC0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCED0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCED8u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCEE0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCEECu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCEFCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF08u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF24u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF30u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF40u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF48u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF50u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF58u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF60u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF70u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF78u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF84u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF8Cu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCF94u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCFB0u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCFBCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCFCCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCFD4u, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCFDCu, &recomp_unit_0504, "recomp_unit_0504");
    runtime.register_function(0x089FCFF0u, &recomp_unit_0504, "recomp_unit_0504");
}
} // namespace psprecomp
