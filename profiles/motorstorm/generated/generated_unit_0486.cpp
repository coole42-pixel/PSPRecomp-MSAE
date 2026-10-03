#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0486[1021] = {
    1, 0, 0, 0, 0, 0, 2, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0,
    0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0,
    27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 36, 0, 37,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 54, 0, 0,
    0, 55, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0,
    67, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0,
    0, 79, 80, 0, 0, 81, 0, 82, 0, 0, 83, 84, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 102,
    0, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0,
    114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0,
    0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133,
    0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0, 144,
    0, 145, 0, 146, 0, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0,
    155, 0, 156, 0, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 173,
    0, 174, 0, 0, 175, 0, 176, 0, 0, 177, 0, 178, 0, 179, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186,
    0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197, 198, 0, 0, 199, 0, 200, 0, 201, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 211, 0,
    212, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222,
    0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 234, 235, 0, 236, 0, 237, 0, 0, 238, 239, 0, 240, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 251, 0, 252,
    0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 263, 264, 0, 265, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 269, 0, 270, 0,
    271, 0, 0, 0, 272, 273, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 276, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 284, 0, 285, 286, 0, 287, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289,
};
void recomp_unit_0486_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089EA000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0486[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089EA000;
    case 2u: goto L_089EA018;
    case 3u: goto L_089EA01C;
    case 4u: goto L_089EA028;
    case 5u: goto L_089EA030;
    case 6u: goto L_089EA044;
    case 7u: goto L_089EA05C;
    case 8u: goto L_089EA068;
    case 9u: goto L_089EA088;
    case 10u: goto L_089EA09C;
    case 11u: goto L_089EA0A8;
    case 12u: goto L_089EA0C0;
    case 13u: goto L_089EA0C8;
    case 14u: goto L_089EA0D4;
    case 15u: goto L_089EA0E8;
    case 16u: goto L_089EA0F4;
    case 17u: goto L_089EA10C;
    case 18u: goto L_089EA114;
    case 19u: goto L_089EA12C;
    case 20u: goto L_089EA134;
    case 21u: goto L_089EA13C;
    case 22u: goto L_089EA144;
    case 23u: goto L_089EA14C;
    case 24u: goto L_089EA154;
    case 25u: goto L_089EA160;
    case 26u: goto L_089EA174;
    case 27u: goto L_089EA180;
    case 28u: goto L_089EA198;
    case 29u: goto L_089EA1A4;
    case 30u: goto L_089EA1B8;
    case 31u: goto L_089EA1C0;
    case 32u: goto L_089EA1C8;
    case 33u: goto L_089EA1D4;
    case 34u: goto L_089EA1E0;
    case 35u: goto L_089EA1EC;
    case 36u: goto L_089EA1F4;
    case 37u: goto L_089EA1FC;
    case 38u: goto L_089EA210;
    case 39u: goto L_089EA224;
    case 40u: goto L_089EA234;
    case 41u: goto L_089EA248;
    case 42u: goto L_089EA258;
    case 43u: goto L_089EA26C;
    case 44u: goto L_089EA284;
    case 45u: goto L_089EA28C;
    case 46u: goto L_089EA294;
    case 47u: goto L_089EA2B4;
    case 48u: goto L_089EA2BC;
    case 49u: goto L_089EA2C4;
    case 50u: goto L_089EA2D0;
    case 51u: goto L_089EA2D8;
    case 52u: goto L_089EA2E0;
    case 53u: goto L_089EA2EC;
    case 54u: goto L_089EA2F4;
    case 55u: goto L_089EA304;
    case 56u: goto L_089EA30C;
    case 57u: goto L_089EA318;
    case 58u: goto L_089EA320;
    case 59u: goto L_089EA328;
    case 60u: goto L_089EA330;
    case 61u: goto L_089EA338;
    case 62u: goto L_089EA340;
    case 63u: goto L_089EA34C;
    case 64u: goto L_089EA354;
    case 65u: goto L_089EA360;
    case 66u: goto L_089EA374;
    case 67u: goto L_089EA380;
    case 68u: goto L_089EA390;
    case 69u: goto L_089EA398;
    case 70u: goto L_089EA3A0;
    case 71u: goto L_089EA3A8;
    case 72u: goto L_089EA3B0;
    case 73u: goto L_089EA3B8;
    case 74u: goto L_089EA3C0;
    case 75u: goto L_089EA3CC;
    case 76u: goto L_089EA3D8;
    case 77u: goto L_089EA3EC;
    case 78u: goto L_089EA3F8;
    case 79u: goto L_089EA404;
    case 80u: goto L_089EA408;
    case 81u: goto L_089EA414;
    case 82u: goto L_089EA41C;
    case 83u: goto L_089EA428;
    case 84u: goto L_089EA42C;
    case 85u: goto L_089EA434;
    case 86u: goto L_089EA43C;
    case 87u: goto L_089EA44C;
    case 88u: goto L_089EA458;
    case 89u: goto L_089EA460;
    case 90u: goto L_089EA46C;
    case 91u: goto L_089EA474;
    case 92u: goto L_089EA47C;
    case 93u: goto L_089EA4A0;
    case 94u: goto L_089EA4A8;
    case 95u: goto L_089EA4AC;
    case 96u: goto L_089EA4BC;
    case 97u: goto L_089EA4C4;
    case 98u: goto L_089EA4CC;
    case 99u: goto L_089EA4D8;
    case 100u: goto L_089EA4E0;
    case 101u: goto L_089EA4E8;
    case 102u: goto L_089EA4FC;
    case 103u: goto L_089EA508;
    case 104u: goto L_089EA510;
    case 105u: goto L_089EA51C;
    case 106u: goto L_089EA524;
    case 107u: goto L_089EA52C;
    case 108u: goto L_089EA538;
    case 109u: goto L_089EA540;
    case 110u: goto L_089EA550;
    case 111u: goto L_089EA558;
    case 112u: goto L_089EA564;
    case 113u: goto L_089EA56C;
    case 114u: goto L_089EA580;
    case 115u: goto L_089EA58C;
    case 116u: goto L_089EA594;
    case 117u: goto L_089EA5A0;
    case 118u: goto L_089EA5A8;
    case 119u: goto L_089EA5B0;
    case 120u: goto L_089EA5BC;
    case 121u: goto L_089EA5C4;
    case 122u: goto L_089EA5D4;
    case 123u: goto L_089EA5DC;
    case 124u: goto L_089EA5E8;
    case 125u: goto L_089EA5F0;
    case 126u: goto L_089EA604;
    case 127u: goto L_089EA61C;
    case 128u: goto L_089EA62C;
    case 129u: goto L_089EA63C;
    case 130u: goto L_089EA644;
    case 131u: goto L_089EA650;
    case 132u: goto L_089EA674;
    case 133u: goto L_089EA67C;
    case 134u: goto L_089EA684;
    case 135u: goto L_089EA690;
    case 136u: goto L_089EA6A4;
    case 137u: goto L_089EA6AC;
    case 138u: goto L_089EA6B8;
    case 139u: goto L_089EA6C8;
    case 140u: goto L_089EA6D8;
    case 141u: goto L_089EA6E0;
    case 142u: goto L_089EA6EC;
    case 143u: goto L_089EA6F4;
    case 144u: goto L_089EA6FC;
    case 145u: goto L_089EA704;
    case 146u: goto L_089EA70C;
    case 147u: goto L_089EA718;
    case 148u: goto L_089EA720;
    case 149u: goto L_089EA72C;
    case 150u: goto L_089EA734;
    case 151u: goto L_089EA73C;
    case 152u: goto L_089EA750;
    case 153u: goto L_089EA75C;
    case 154u: goto L_089EA770;
    case 155u: goto L_089EA780;
    case 156u: goto L_089EA788;
    case 157u: goto L_089EA794;
    case 158u: goto L_089EA79C;
    case 159u: goto L_089EA7A4;
    case 160u: goto L_089EA7B0;
    case 161u: goto L_089EA7B8;
    case 162u: goto L_089EA7C8;
    case 163u: goto L_089EA7D0;
    case 164u: goto L_089EA7DC;
    case 165u: goto L_089EA7E4;
    case 166u: goto L_089EA7F8;
    case 167u: goto L_089EA820;
    case 168u: goto L_089EA848;
    case 169u: goto L_089EA850;
    case 170u: goto L_089EA858;
    case 171u: goto L_089EA864;
    case 172u: goto L_089EA86C;
    case 173u: goto L_089EA87C;
    case 174u: goto L_089EA884;
    case 175u: goto L_089EA890;
    case 176u: goto L_089EA898;
    case 177u: goto L_089EA8A4;
    case 178u: goto L_089EA8AC;
    case 179u: goto L_089EA8B4;
    case 180u: goto L_089EA8C0;
    case 181u: goto L_089EA8C8;
    case 182u: goto L_089EA8D4;
    case 183u: goto L_089EA8DC;
    case 184u: goto L_089EA8EC;
    case 185u: goto L_089EA8F4;
    case 186u: goto L_089EA8FC;
    case 187u: goto L_089EA914;
    case 188u: goto L_089EA920;
    case 189u: goto L_089EA93C;
    case 190u: goto L_089EA944;
    case 191u: goto L_089EA94C;
    case 192u: goto L_089EA954;
    case 193u: goto L_089EA95C;
    case 194u: goto L_089EA974;
    case 195u: goto L_089EA990;
    case 196u: goto L_089EA9A8;
    case 197u: goto L_089EA9B4;
    case 198u: goto L_089EA9B8;
    case 199u: goto L_089EA9C4;
    case 200u: goto L_089EA9CC;
    case 201u: goto L_089EA9D4;
    case 202u: goto L_089EA9D8;
    case 203u: goto L_089EA9E8;
    case 204u: goto L_089EAA2C;
    case 205u: goto L_089EAA38;
    case 206u: goto L_089EAA40;
    case 207u: goto L_089EAA4C;
    case 208u: goto L_089EAA58;
    case 209u: goto L_089EAA64;
    case 210u: goto L_089EAA6C;
    case 211u: goto L_089EAA78;
    case 212u: goto L_089EAA80;
    case 213u: goto L_089EAA88;
    case 214u: goto L_089EAA90;
    case 215u: goto L_089EAAB4;
    case 216u: goto L_089EAABC;
    case 217u: goto L_089EAAC4;
    case 218u: goto L_089EAB10;
    case 219u: goto L_089EAB3C;
    case 220u: goto L_089EAB44;
    case 221u: goto L_089EAB74;
    case 222u: goto L_089EAB7C;
    case 223u: goto L_089EAB88;
    case 224u: goto L_089EAB90;
    case 225u: goto L_089EAB98;
    case 226u: goto L_089EABA0;
    case 227u: goto L_089EABEC;
    case 228u: goto L_089EABF8;
    case 229u: goto L_089EAC08;
    case 230u: goto L_089EAC28;
    case 231u: goto L_089EAC2C;
    case 232u: goto L_089EAC50;
    case 233u: goto L_089EAC7C;
    case 234u: goto L_089EAC88;
    case 235u: goto L_089EAC8C;
    case 236u: goto L_089EAC94;
    case 237u: goto L_089EAC9C;
    case 238u: goto L_089EACA8;
    case 239u: goto L_089EACAC;
    case 240u: goto L_089EACB4;
    case 241u: goto L_089EACB8;
    case 242u: goto L_089EACCC;
    case 243u: goto L_089EACE0;
    case 244u: goto L_089EAD1C;
    case 245u: goto L_089EAD28;
    case 246u: goto L_089EAD2C;
    case 247u: goto L_089EAD50;
    case 248u: goto L_089EAD58;
    case 249u: goto L_089EAD60;
    case 250u: goto L_089EAD68;
    case 251u: goto L_089EAD74;
    case 252u: goto L_089EAD7C;
    case 253u: goto L_089EAD88;
    case 254u: goto L_089EAD94;
    case 255u: goto L_089EADAC;
    case 256u: goto L_089EADBC;
    case 257u: goto L_089EADCC;
    case 258u: goto L_089EAE00;
    case 259u: goto L_089EAE0C;
    case 260u: goto L_089EAE14;
    case 261u: goto L_089EAE24;
    case 262u: goto L_089EAE30;
    case 263u: goto L_089EAE38;
    case 264u: goto L_089EAE3C;
    case 265u: goto L_089EAE44;
    case 266u: goto L_089EAE50;
    case 267u: goto L_089EAE58;
    case 268u: goto L_089EAE60;
    case 269u: goto L_089EAE70;
    case 270u: goto L_089EAE78;
    case 271u: goto L_089EAE80;
    case 272u: goto L_089EAE90;
    case 273u: goto L_089EAE94;
    case 274u: goto L_089EAE98;
    case 275u: goto L_089EAEBC;
    case 276u: goto L_089EAEC0;
    case 277u: goto L_089EAEDC;
    case 278u: goto L_089EAEE4;
    case 279u: goto L_089EAF14;
    case 280u: goto L_089EAF44;
    case 281u: goto L_089EAF74;
    case 282u: goto L_089EAF8C;
    case 283u: goto L_089EAFA0;
    case 284u: goto L_089EAFAC;
    case 285u: goto L_089EAFB4;
    case 286u: goto L_089EAFB8;
    case 287u: goto L_089EAFC0;
    case 288u: goto L_089EAFC4;
    case 289u: goto L_089EAFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089EA000:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(-31724), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29676), aot_gpr[4]);
    goto L_089EA018;
L_089EA018:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089EA01C;
L_089EA01C:
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 237u, 0x089E9E80u>(ctx, &aot_mem); return;
      }
      goto L_089EA028;
    }
L_089EA028:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 241u, 0x089E9EB8u>(ctx, &aot_mem); return;
L_089EA030:
    aot_gpr[21] = (1u << 16u);
    aot_gpr[19] = (aot_gpr[17] + aot_gpr[21]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29676)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EA2B4;
      }
      goto L_089EA044;
    }
L_089EA044:
    aot_gpr[6] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29676)));
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089EA294;
    }
    goto L_089EA05C;
L_089EA05C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089EA018;
L_089EA068:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[3] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-29676)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-29676), 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(-31724), static_cast<std::uint8_t>(0u));
    goto L_089EA018;
L_089EA088:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31728)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 253u, 0x089E9F84u>(ctx, &aot_mem); return;
      }
      goto L_089EA09C;
    }
L_089EA09C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089EA018;
L_089EA0A8:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31728)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089EA4CC;
      }
      goto L_089EA0C0;
    }
L_089EA0C0:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 252u, 0x089E9F80u>(ctx, &aot_mem); return;
      }
      goto L_089EA0C8;
    }
L_089EA0C8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089EA018;
L_089EA0D4:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31728)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089EA328;
      }
      goto L_089EA0E8;
    }
L_089EA0E8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089EA018;
L_089EA0F4:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31728)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 252u, 0x089E9F80u>(ctx, &aot_mem); return;
      }
      goto L_089EA10C;
    }
L_089EA10C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), 0u);
    goto L_089EA018;
L_089EA114:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31728)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EA154;
      }
      goto L_089EA12C;
    }
L_089EA12C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089EA154;
      }
      goto L_089EA134;
    }
L_089EA134:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089EA154;
      }
      goto L_089EA13C;
    }
L_089EA13C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_089EA644;
      }
      goto L_089EA144;
    }
L_089EA144:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(19));
      if (branch_taken) {
          goto L_089EA788;
      }
      goto L_089EA14C;
    }
L_089EA14C:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 252u, 0x089E9F80u>(ctx, &aot_mem); return;
      }
      goto L_089EA154;
    }
L_089EA154:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 251u, 0x089E9F7Cu>(ctx, &aot_mem); return;
L_089EA160:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31728)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(13));
      if (branch_taken) {
          goto L_089EA34C;
      }
      goto L_089EA174;
    }
L_089EA174:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089EA018;
L_089EA180:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31728)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 252u, 0x089E9F80u>(ctx, &aot_mem); return;
      }
      goto L_089EA198;
    }
L_089EA198:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089EA018;
L_089EA1A4:
    aot_gpr[21] = (1u << 16u);
    aot_gpr[19] = (aot_gpr[17] + aot_gpr[21]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29676)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EA4D8;
      }
      goto L_089EA1B8;
    }
L_089EA1B8:
    aot_gpr[31] = (0x089EA1C0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 118u, 0x089E975Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA1C0u) goto L_089EA1C0;
    return;
L_089EA1C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA1C8;
    }
L_089EA1C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29676)));
        goto L_089EA650;
    }
    goto L_089EA1D4;
L_089EA1D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29664)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EA794;
      }
      goto L_089EA1E0;
    }
L_089EA1E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29676)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29664), 0u);
      if (branch_taken) {
          goto L_089EA1FC;
      }
      goto L_089EA1EC;
    }
L_089EA1EC:
    aot_gpr[31] = (0x089EA1F4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 196u, 0x089E9C18u>(ctx, &aot_mem) && ctx.pc == 0x089EA1F4u) goto L_089EA1F4;
    return;
L_089EA1F4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA1FC;
    }
L_089EA1FC:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-31728), aot_gpr[3]);
    goto L_089EA018;
L_089EA210:
    aot_gpr[21] = (1u << 16u);
    aot_gpr[19] = (aot_gpr[17] + aot_gpr[21]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29676)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          goto L_089EA4FC;
      }
      goto L_089EA224;
    }
L_089EA224:
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(13));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-31728), aot_gpr[3]);
    goto L_089EA018;
L_089EA234:
    aot_gpr[21] = (1u << 16u);
    aot_gpr[19] = (aot_gpr[17] + aot_gpr[21]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29676)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          goto L_089EA580;
      }
      goto L_089EA248;
    }
L_089EA248:
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(19));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-31728), aot_gpr[3]);
    goto L_089EA018;
L_089EA258:
    aot_gpr[30] = (1u << 16u);
    aot_gpr[21] = (aot_gpr[17] + aot_gpr[30]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29676)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EA674;
      }
      goto L_089EA26C;
    }
L_089EA26C:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31728)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(26));
      if (branch_taken) {
          goto L_089EA73C;
      }
      goto L_089EA284;
    }
L_089EA284:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089EA018;
      }
      goto L_089EA28C;
    }
L_089EA28C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089EA018;
L_089EA294:
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(-31724), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29676), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089EA018;
L_089EA2B4:
    aot_gpr[31] = (0x089EA2BCu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 118u, 0x089E975Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA2BCu) goto L_089EA2BC;
    return;
L_089EA2BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA2C4;
    }
L_089EA2C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EA604;
      }
      goto L_089EA2D0;
    }
L_089EA2D0:
    aot_gpr[31] = (0x089EA2D8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 124u, 0x089E97C0u>(ctx, &aot_mem) && ctx.pc == 0x089EA2D8u) goto L_089EA2D8;
    return;
L_089EA2D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA2E0;
    }
L_089EA2E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EA2ECu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 138u, 0x089E98B4u>(ctx, &aot_mem) && ctx.pc == 0x089EA2ECu) goto L_089EA2EC;
    return;
L_089EA2EC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA2F4;
    }
L_089EA2F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EA304u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 143u, 0x089E9940u>(ctx, &aot_mem) && ctx.pc == 0x089EA304u) goto L_089EA304;
    return;
L_089EA304:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA30C;
    }
L_089EA30C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EA318u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 127u, 0x089E97D8u>(ctx, &aot_mem) && ctx.pc == 0x089EA318u) goto L_089EA318;
    return;
L_089EA318:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EA044;
      }
      goto L_089EA320;
    }
L_089EA320:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 241u, 0x089E9EB8u>(ctx, &aot_mem); return;
L_089EA328:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EA340;
      }
      goto L_089EA330;
    }
L_089EA330:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089EA340;
      }
      goto L_089EA338;
    }
L_089EA338:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 252u, 0x089E9F80u>(ctx, &aot_mem); return;
      }
      goto L_089EA340;
    }
L_089EA340:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089EA018;
L_089EA34C:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 252u, 0x089E9F80u>(ctx, &aot_mem); return;
      }
      goto L_089EA354;
    }
L_089EA354:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089EA018;
L_089EA360:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-32760)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 242u, 0x089E9EC0u>(ctx, &aot_mem); return;
      }
      goto L_089EA374;
    }
L_089EA374:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29660)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EA398;
      }
      goto L_089EA380;
    }
L_089EA380:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089EA390u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29672)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA390u) goto L_089EA390;
    return;
L_089EA390:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-32760)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    goto L_089EA398;
L_089EA398:
    aot_gpr[31] = (0x089EA3A0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 127u, 0x089E97D8u>(ctx, &aot_mem) && ctx.pc == 0x089EA3A0u) goto L_089EA3A0;
    return;
L_089EA3A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 242u, 0x089E9EC0u>(ctx, &aot_mem); return;
      }
      goto L_089EA3A8;
    }
L_089EA3A8:
    aot_gpr[20] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089EA3B0;
L_089EA3B0:
    aot_gpr[31] = (0x089EA3B8u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 118u, 0x089E975Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA3B8u) goto L_089EA3B8;
    return;
L_089EA3B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 242u, 0x089E9EC0u>(ctx, &aot_mem); return;
      }
      goto L_089EA3C0;
    }
L_089EA3C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[18] = (0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 242u, 0x089E9EC0u>(ctx, &aot_mem); return;
    }
    goto L_089EA3CC;
L_089EA3CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089EA460;
      }
      goto L_089EA3D8;
    }
L_089EA3D8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089EA408;
      }
      goto L_089EA3EC;
    }
L_089EA3EC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    if (aot_gpr[6] == aot_gpr[4]) {
    aot_gpr[16] = (0u + 0u);
        goto L_089EA460;
    }
    goto L_089EA3F8;
L_089EA3F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[2];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EA3EC;
      }
      goto L_089EA404;
    }
L_089EA404:
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089EA408;
L_089EA408:
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EA46C;
      }
      goto L_089EA414;
    }
L_089EA414:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[6];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EA434;
      }
      goto L_089EA41C;
    }
L_089EA41C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          goto L_089EA43C;
      }
      goto L_089EA428;
    }
L_089EA428:
    aot_gpr[20] = (aot_gpr[5] + 0u);
    goto L_089EA42C;
L_089EA42C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EA3B0;
      }
      goto L_089EA434;
    }
L_089EA434:
    aot_gpr[18] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 242u, 0x089E9EC0u>(ctx, &aot_mem); return;
L_089EA43C:
    aot_gpr[3] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-29656)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089EA42C;
      }
      goto L_089EA44C;
    }
L_089EA44C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089EA458u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-29672)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA458u) goto L_089EA458;
    return;
L_089EA458:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089EA428;
L_089EA460:
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA414;
      }
      goto L_089EA46C;
    }
L_089EA46C:
    aot_gpr[31] = (0x089EA474u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 127u, 0x089E97D8u>(ctx, &aot_mem) && ctx.pc == 0x089EA474u) goto L_089EA474;
    return;
L_089EA474:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 242u, 0x089E9EC0u>(ctx, &aot_mem); return;
      }
      goto L_089EA47C;
    }
L_089EA47C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] << 2u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089EA75C;
      }
      goto L_089EA4A0;
    }
L_089EA4A0:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          goto L_089EA61C;
      }
      goto L_089EA4A8;
    }
L_089EA4A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_089EA4AC;
L_089EA4AC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[31] = (0x089EA4BCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 127u, 0x089E97D8u>(ctx, &aot_mem) && ctx.pc == 0x089EA4BCu) goto L_089EA4BC;
    return;
L_089EA4BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 242u, 0x089E9EC0u>(ctx, &aot_mem); return;
      }
      goto L_089EA4C4;
    }
L_089EA4C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089EA42C;
L_089EA4CC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089EA018;
L_089EA4D8:
    aot_gpr[31] = (0x089EA4E0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 118u, 0x089E975Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA4E0u) goto L_089EA4E0;
    return;
L_089EA4E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA4E8;
    }
L_089EA4E8:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-31728), aot_gpr[3]);
    goto L_089EA018;
L_089EA4FC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089EA508u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 118u, 0x089E975Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA508u) goto L_089EA508;
    return;
L_089EA508:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA510;
    }
L_089EA510:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EA820;
      }
      goto L_089EA51C;
    }
L_089EA51C:
    aot_gpr[31] = (0x089EA524u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 124u, 0x089E97C0u>(ctx, &aot_mem) && ctx.pc == 0x089EA524u) goto L_089EA524;
    return;
L_089EA524:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA52C;
    }
L_089EA52C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EA538u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 138u, 0x089E98B4u>(ctx, &aot_mem) && ctx.pc == 0x089EA538u) goto L_089EA538;
    return;
L_089EA538:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA540;
    }
L_089EA540:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EA550u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 143u, 0x089E9940u>(ctx, &aot_mem) && ctx.pc == 0x089EA550u) goto L_089EA550;
    return;
L_089EA550:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA558;
    }
L_089EA558:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EA564u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 127u, 0x089E97D8u>(ctx, &aot_mem) && ctx.pc == 0x089EA564u) goto L_089EA564;
    return;
L_089EA564:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA56C;
    }
L_089EA56C:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(13));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-31728), aot_gpr[3]);
    goto L_089EA018;
L_089EA580:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089EA58Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 118u, 0x089E975Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA58Cu) goto L_089EA58C;
    return;
L_089EA58C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA594;
    }
L_089EA594:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EA7F8;
      }
      goto L_089EA5A0;
    }
L_089EA5A0:
    aot_gpr[31] = (0x089EA5A8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 124u, 0x089E97C0u>(ctx, &aot_mem) && ctx.pc == 0x089EA5A8u) goto L_089EA5A8;
    return;
L_089EA5A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA5B0;
    }
L_089EA5B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EA5BCu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 138u, 0x089E98B4u>(ctx, &aot_mem) && ctx.pc == 0x089EA5BCu) goto L_089EA5BC;
    return;
L_089EA5BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA5C4;
    }
L_089EA5C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EA5D4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 143u, 0x089E9940u>(ctx, &aot_mem) && ctx.pc == 0x089EA5D4u) goto L_089EA5D4;
    return;
L_089EA5D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA5DC;
    }
L_089EA5DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EA5E8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 127u, 0x089E97D8u>(ctx, &aot_mem) && ctx.pc == 0x089EA5E8u) goto L_089EA5E8;
    return;
L_089EA5E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA5F0;
    }
L_089EA5F0:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(19));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-31728), aot_gpr[3]);
    goto L_089EA018;
L_089EA604:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29676)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29676), 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(-31724), static_cast<std::uint8_t>(0u));
    goto L_089EA044;
L_089EA61C:
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-29652)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
        goto L_089EA4AC;
    }
    goto L_089EA62C;
L_089EA62C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-29672)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089EA63Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA63Cu) goto L_089EA63C;
    return;
L_089EA63C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089EA4A8;
L_089EA644:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 251u, 0x089E9F7Cu>(ctx, &aot_mem); return;
L_089EA650:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29676), 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(-31724), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-31728), aot_gpr[3]);
    goto L_089EA018;
L_089EA674:
    aot_gpr[31] = (0x089EA67Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 118u, 0x089E975Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA67Cu) goto L_089EA67C;
    return;
L_089EA67C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA684;
    }
L_089EA684:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 33812u);
      if (branch_taken) {
          goto L_089EA8B4;
      }
      goto L_089EA690;
    }
L_089EA690:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x089EA6A4u);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089EA6A4u) goto L_089EA6A4;
    return;
L_089EA6A4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          goto L_089EA6B8;
      }
      goto L_089EA6AC;
    }
L_089EA6AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29676)));
    { const bool branch_taken = aot_gpr[22] == aot_gpr[2];
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          goto L_089EA8FC;
      }
      goto L_089EA6B8;
    }
L_089EA6B8:
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-29664)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EA848;
      }
      goto L_089EA6C8;
    }
L_089EA6C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-29664), 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089EA6D8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 196u, 0x089E9C18u>(ctx, &aot_mem) && ctx.pc == 0x089EA6D8u) goto L_089EA6D8;
    return;
L_089EA6D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA6E0;
    }
L_089EA6E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EA6ECu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 127u, 0x089E97D8u>(ctx, &aot_mem) && ctx.pc == 0x089EA6ECu) goto L_089EA6EC;
    return;
L_089EA6EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EA26C;
      }
      goto L_089EA6F4;
    }
L_089EA6F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 241u, 0x089E9EB8u>(ctx, &aot_mem); return;
L_089EA6FC:
    aot_gpr[31] = (0x089EA704u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 118u, 0x089E975Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA704u) goto L_089EA704;
    return;
L_089EA704:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA70C;
    }
L_089EA70C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EA718u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 196u, 0x089E9C18u>(ctx, &aot_mem) && ctx.pc == 0x089EA718u) goto L_089EA718;
    return;
L_089EA718:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA720;
    }
L_089EA720:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EA72Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 127u, 0x089E97D8u>(ctx, &aot_mem) && ctx.pc == 0x089EA72Cu) goto L_089EA72C;
    return;
L_089EA72C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 256u, 0x089E9FC8u>(ctx, &aot_mem); return;
      }
      goto L_089EA734;
    }
L_089EA734:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 241u, 0x089E9EB8u>(ctx, &aot_mem); return;
L_089EA73C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29664), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[3]);
    goto L_089EA018;
L_089EA750:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 259u, 0x089E9FE8u>(ctx, &aot_mem); return;
L_089EA75C:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-29660)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
        goto L_089EA4AC;
    }
    goto L_089EA770;
L_089EA770:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-29672)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089EA780u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA780u) goto L_089EA780;
    return;
L_089EA780:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089EA4A8;
L_089EA788:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 251u, 0x089E9F7Cu>(ctx, &aot_mem); return;
L_089EA794:
    aot_gpr[31] = (0x089EA79Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 124u, 0x089E97C0u>(ctx, &aot_mem) && ctx.pc == 0x089EA79Cu) goto L_089EA79C;
    return;
L_089EA79C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA7A4;
    }
L_089EA7A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EA7B0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 133u, 0x089E9828u>(ctx, &aot_mem) && ctx.pc == 0x089EA7B0u) goto L_089EA7B0;
    return;
L_089EA7B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA7B8;
    }
L_089EA7B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EA7C8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 143u, 0x089E9940u>(ctx, &aot_mem) && ctx.pc == 0x089EA7C8u) goto L_089EA7C8;
    return;
L_089EA7C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA7D0;
    }
L_089EA7D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EA7DCu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 127u, 0x089E97D8u>(ctx, &aot_mem) && ctx.pc == 0x089EA7DCu) goto L_089EA7DC;
    return;
L_089EA7DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA7E4;
    }
L_089EA7E4:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-31728), aot_gpr[3]);
    goto L_089EA018;
L_089EA7F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29676)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(19));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29676), 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(-31724), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-31728), aot_gpr[3]);
    goto L_089EA018;
L_089EA820:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29676)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(13));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29676), 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(-31724), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-31728), aot_gpr[3]);
    goto L_089EA018;
L_089EA848:
    aot_gpr[31] = (0x089EA850u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 124u, 0x089E97C0u>(ctx, &aot_mem) && ctx.pc == 0x089EA850u) goto L_089EA850;
    return;
L_089EA850:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA858;
    }
L_089EA858:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EA864u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 133u, 0x089E9828u>(ctx, &aot_mem) && ctx.pc == 0x089EA864u) goto L_089EA864;
    return;
L_089EA864:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA86C;
    }
L_089EA86C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EA87Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 143u, 0x089E9940u>(ctx, &aot_mem) && ctx.pc == 0x089EA87Cu) goto L_089EA87C;
    return;
L_089EA87C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA884;
    }
L_089EA884:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EA890u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 127u, 0x089E97D8u>(ctx, &aot_mem) && ctx.pc == 0x089EA890u) goto L_089EA890;
    return;
L_089EA890:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA898;
    }
L_089EA898:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EA8A4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 127u, 0x089E97D8u>(ctx, &aot_mem) && ctx.pc == 0x089EA8A4u) goto L_089EA8A4;
    return;
L_089EA8A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EA26C;
      }
      goto L_089EA8AC;
    }
L_089EA8AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 241u, 0x089E9EB8u>(ctx, &aot_mem); return;
L_089EA8B4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089EA8C0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 124u, 0x089E97C0u>(ctx, &aot_mem) && ctx.pc == 0x089EA8C0u) goto L_089EA8C0;
    return;
L_089EA8C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA8C8;
    }
L_089EA8C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EA8D4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 133u, 0x089E9828u>(ctx, &aot_mem) && ctx.pc == 0x089EA8D4u) goto L_089EA8D4;
    return;
L_089EA8D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 240u, 0x089E9EB4u>(ctx, &aot_mem); return;
      }
      goto L_089EA8DC;
    }
L_089EA8DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089EA8ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-32760), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 127u, 0x089E97D8u>(ctx, &aot_mem) && ctx.pc == 0x089EA8ECu) goto L_089EA8EC;
    return;
L_089EA8EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EA26C;
      }
      goto L_089EA8F4;
    }
L_089EA8F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 241u, 0x089E9EB8u>(ctx, &aot_mem); return;
L_089EA8FC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-31732)));
    aot_gpr[2] = (aot_gpr[22] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(-31724), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-29676), 0u);
      if (branch_taken) {
          goto L_089EA26C;
      }
      goto L_089EA914;
    }
L_089EA914:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(26));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089EA26C;
L_089EA920:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_089EA974;
      }
      goto L_089EA93C;
    }
L_089EA93C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089EA974;
      }
      goto L_089EA944;
    }
L_089EA944:
    aot_gpr[31] = (0x089EA94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089EA94Cu) goto L_089EA94C;
    return;
L_089EA94C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EA95C;
      }
      goto L_089EA954;
    }
L_089EA954:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_089EA95C;
L_089EA95C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA974:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA990:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_089EA9D8;
      }
      goto L_089EA9A8;
    }
L_089EA9A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA9CC;
      }
      goto L_089EA9B4;
    }
L_089EA9B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089EA9B8;
L_089EA9B8:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089EA9C4u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089EA9C4u) goto L_089EA9C4;
    return;
L_089EA9C4:
    if (aot_gpr[16] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
        goto L_089EA9B8;
    }
    goto L_089EA9CC;
L_089EA9CC:
    aot_gpr[31] = (0x089EA9D4u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089EA9D4u) goto L_089EA9D4;
    return;
L_089EA9D4:
    aot_gpr[2] = (0u + 0u);
    goto L_089EA9D8;
L_089EA9D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA9E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
      if (branch_taken) {
          goto L_089EAA90;
      }
      goto L_089EAA2C;
    }
L_089EAA2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089EAB3C;
      }
      goto L_089EAA38;
    }
L_089EAA38:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_089EAA58;
L_089EAA40:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[17] == aot_gpr[2]) {
    aot_gpr[16] = (0u + 0u);
        goto L_089EAA90;
    }
    goto L_089EAA4C;
L_089EAA4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089EAA78;
      }
      goto L_089EAA58;
    }
L_089EAA58:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089EAA64u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089EAA64u) goto L_089EAA64;
    return;
L_089EAA64:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089EAA40;
      }
      goto L_089EAA6C;
    }
L_089EAA6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089EAA58;
      }
      goto L_089EAA78;
    }
L_089EAA78:
    aot_gpr[31] = (0x089EAA80u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x089EAA80u) goto L_089EAA80;
    return;
L_089EAA80:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089EAA90;
      }
      goto L_089EAA88;
    }
L_089EAA88:
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (aot_gpr[29] + 0u);
        goto L_089EAAB4;
    }
    goto L_089EAA90;
L_089EAA90:
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
L_089EAAB4:
    aot_gpr[31] = (0x089EAABCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089EAABCu) goto L_089EAABC;
    return;
L_089EAABC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EAA90;
      }
      goto L_089EAAC4;
    }
L_089EAAC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EAB10u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089EAB10u) goto L_089EAB10;
    return;
L_089EAB10:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[20]);
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
L_089EAB3C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_089EAA78;
L_089EAB44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089EAC28;
      }
      goto L_089EAB74;
    }
L_089EAB74:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089EAC2C;
      }
      goto L_089EAB7C;
    }
L_089EAB7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[19] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089EABF8;
      }
      goto L_089EAB88;
    }
L_089EAB88:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    goto L_089EAB90;
L_089EAB90:
    aot_gpr[31] = (0x089EAB98u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089EAB98u) goto L_089EAB98;
    return;
L_089EAB98:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089EAC08;
      }
      goto L_089EABA0;
    }
L_089EABA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EABECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089EABECu) goto L_089EABEC;
    return;
L_089EABEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (aot_gpr[19] + 0u);
        goto L_089EAB90;
    }
    goto L_089EABF8;
L_089EABF8:
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089EAC08;
L_089EAC08:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
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
L_089EAC28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089EAC2C;
L_089EAC2C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EAC50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_089EACB8;
      }
      goto L_089EAC7C;
    }
L_089EAC7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089EACB8;
      }
      goto L_089EAC88;
    }
L_089EAC88:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    goto L_089EAC8C;
L_089EAC8C:
    aot_gpr[31] = (0x089EAC94u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089EAC94u) goto L_089EAC94;
    return;
L_089EAC94:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_089EACAC;
    }
    goto L_089EAC9C;
L_089EAC9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089EACCC;
      }
      goto L_089EACA8;
    }
L_089EACA8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_089EACAC;
L_089EACAC:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EAC8C;
      }
      goto L_089EACB4;
    }
L_089EACB4:
    aot_gpr[2] = (0u + 0u);
    goto L_089EACB8;
L_089EACB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EACCC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EACE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_089EAD2C;
      }
      goto L_089EAD1C;
    }
L_089EAD1C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    if (aot_gpr[8] == aot_gpr[2]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_089EAD50;
    }
    goto L_089EAD28;
L_089EAD28:
    aot_gpr[3] = (0u + 0u);
    goto L_089EAD2C;
L_089EAD2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EAD50:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EAD28;
      }
      goto L_089EAD58;
    }
L_089EAD58:
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    goto L_089EAD68;
L_089EAD60:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089EAD2C;
      }
      goto L_089EAD68;
    }
L_089EAD68:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089EAD74u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089EAD74u) goto L_089EAD74;
    return;
L_089EAD74:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_089EAD60;
    }
    goto L_089EAD7C;
L_089EAD7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[2] != aot_gpr[18]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_089EAD60;
    }
    goto L_089EAD88;
L_089EAD88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != aot_gpr[20]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_089EAD60;
    }
    goto L_089EAD94;
L_089EAD94:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[19] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[31] = (0x089EADACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x089EADACu) goto L_089EADAC;
    return;
L_089EADAC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089EADBCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089EADBCu) goto L_089EADBC;
    return;
L_089EADBC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089EAD2C;
L_089EADCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
      if (branch_taken) {
          goto L_089EAE94;
      }
      goto L_089EAE00;
    }
L_089EAE00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u | 55002u);
      if (branch_taken) {
          goto L_089EAE94;
      }
      goto L_089EAE0C;
    }
L_089EAE0C:
    aot_gpr[31] = (0x089EAE14u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089EAE14u) goto L_089EAE14;
    return;
L_089EAE14:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (0u | 55007u);
      if (branch_taken) {
          goto L_089EAE94;
      }
      goto L_089EAE24;
    }
L_089EAE24:
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    goto L_089EAE44;
L_089EAE30:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_089EAEDC;
      }
      goto L_089EAE38;
    }
L_089EAE38:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_089EAE3C;
L_089EAE3C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089EAE98;
      }
      goto L_089EAE44;
    }
L_089EAE44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[20];
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EAE30;
      }
      goto L_089EAE50;
    }
L_089EAE50:
    aot_gpr[31] = (0x089EAE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x089EAE58u) goto L_089EAE58;
    return;
L_089EAE58:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089EAEC0;
    }
    goto L_089EAE60;
L_089EAE60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EAEBC;
      }
      goto L_089EAE70;
    }
L_089EAE70:
    aot_gpr[31] = (0x089EAE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089EAE78u) goto L_089EAE78;
    return;
L_089EAE78:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (0u | 55008u);
        goto L_089EAE94;
    }
    goto L_089EAE80;
L_089EAE80:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == aot_gpr[3]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_089EAE3C;
    }
    goto L_089EAE90;
L_089EAE90:
    aot_gpr[18] = (0u | 55008u);
    goto L_089EAE94;
L_089EAE94:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089EAE98;
L_089EAE98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EAEBC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089EAEC0;
L_089EAEC0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089EAE38;
L_089EAEDC:
    aot_gpr[31] = (0x089EAEE4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089EAEE4u) goto L_089EAEE4;
    return;
L_089EAEE4:
    aot_gpr[18] = (0u | 55002u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EAF14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 8u, 0x089EB078u>(ctx, &aot_mem); return;
      }
      goto L_089EAF44;
    }
L_089EAF44:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 8u, 0x089EB078u>(ctx, &aot_mem); return;
      }
      goto L_089EAF74;
    }
L_089EAF74:
    aot_gpr[2] = (0u | 55007u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089EAFC0;
      }
      goto L_089EAF8C;
    }
L_089EAF8C:
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[20] = (0u | 55002u);
    aot_gpr[23] = (0u | 55008u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089EAFA0;
L_089EAFA0:
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[20]);
        goto L_089EAFF0;
    }
    goto L_089EAFAC;
L_089EAFAC:
    if (aot_gpr[3] == aot_gpr[21]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
        (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 2u, 0x089EB024u>(ctx, &aot_mem); return;
    }
    goto L_089EAFB4;
L_089EAFB4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    goto L_089EAFB8;
L_089EAFB8:
    if (aot_gpr[17] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089EAFA0;
    }
    goto L_089EAFC0;
L_089EAFC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089EAFC4;
L_089EAFC4:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EAFF0:
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.pc = 0x089EB000u; return;
}

void recomp_unit_0486(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0486_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_486(Runtime &runtime) {
    runtime.register_generated_unit(486u, 0x089EA000u, 4096u, &recomp_unit_0486, &recomp_unit_0486_entry);
    runtime.register_function(0x089EA000u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA018u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA01Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA028u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA030u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA044u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA05Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA068u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA088u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA09Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA0A8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA0C0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA0C8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA0D4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA0E8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA0F4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA10Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA114u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA12Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA134u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA13Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA144u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA14Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA154u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA160u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA174u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA180u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA198u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA1A4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA1B8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA1C0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA1C8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA1D4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA1E0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA1ECu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA1F4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA1FCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA210u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA224u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA234u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA248u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA258u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA26Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA284u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA28Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA294u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA2B4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA2BCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA2C4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA2D0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA2D8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA2E0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA2ECu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA2F4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA304u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA30Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA318u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA320u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA328u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA330u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA338u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA340u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA34Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA354u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA360u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA374u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA380u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA390u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA398u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA3A0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA3A8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA3B0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA3B8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA3C0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA3CCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA3D8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA3ECu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA3F8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA404u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA408u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA414u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA41Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA428u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA42Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA434u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA43Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA44Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA458u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA460u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA46Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA474u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA47Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA4A0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA4A8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA4ACu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA4BCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA4C4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA4CCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA4D8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA4E0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA4E8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA4FCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA508u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA510u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA51Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA524u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA52Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA538u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA540u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA550u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA558u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA564u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA56Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA580u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA58Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA594u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA5A0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA5A8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA5B0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA5BCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA5C4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA5D4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA5DCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA5E8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA5F0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA604u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA61Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA62Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA63Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA644u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA650u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA674u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA67Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA684u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA690u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA6A4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA6ACu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA6B8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA6C8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA6D8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA6E0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA6ECu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA6F4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA6FCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA704u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA70Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA718u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA720u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA72Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA734u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA73Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA750u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA75Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA770u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA780u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA788u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA794u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA79Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA7A4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA7B0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA7B8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA7C8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA7D0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA7DCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA7E4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA7F8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA820u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA848u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA850u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA858u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA864u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA86Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA87Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA884u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA890u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA898u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA8A4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA8ACu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA8B4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA8C0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA8C8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA8D4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA8DCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA8ECu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA8F4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA8FCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA914u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA920u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA93Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA944u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA94Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA954u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA95Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA974u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA990u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA9A8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA9B4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA9B8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA9C4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA9CCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA9D4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA9D8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EA9E8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAA2Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAA38u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAA40u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAA4Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAA58u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAA64u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAA6Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAA78u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAA80u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAA88u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAA90u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAAB4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAABCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAAC4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAB10u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAB3Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAB44u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAB74u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAB7Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAB88u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAB90u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAB98u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EABA0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EABECu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EABF8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAC08u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAC28u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAC2Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAC50u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAC7Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAC88u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAC8Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAC94u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAC9Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EACA8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EACACu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EACB4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EACB8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EACCCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EACE0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAD1Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAD28u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAD2Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAD50u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAD58u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAD60u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAD68u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAD74u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAD7Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAD88u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAD94u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EADACu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EADBCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EADCCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE00u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE0Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE14u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE24u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE30u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE38u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE3Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE44u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE50u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE58u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE60u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE70u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE78u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE80u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE90u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE94u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAE98u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAEBCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAEC0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAEDCu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAEE4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAF14u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAF44u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAF74u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAF8Cu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAFA0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAFACu, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAFB4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAFB8u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAFC0u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAFC4u, &recomp_unit_0486, "recomp_unit_0486");
    runtime.register_function(0x089EAFF0u, &recomp_unit_0486, "recomp_unit_0486");
}
} // namespace psprecomp
