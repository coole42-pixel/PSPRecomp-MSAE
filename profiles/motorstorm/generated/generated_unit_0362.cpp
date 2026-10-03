#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0362[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7,
    0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0,
    21, 0, 22, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 29, 0,
    0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36,
    0, 0, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 59,
    0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0,
    66, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0,
    0, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 97, 98, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0,
    111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 120, 121, 0, 122, 0, 0,
    0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0,
    132, 0, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 146, 0, 0, 0, 0, 147, 148, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 150, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0,
    159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 169, 0, 170,
    0, 171, 0, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0,
    0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0,
    188, 0, 189, 0, 190, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201,
    0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 217, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0,
    229, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239,
    0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0,
    0, 0, 0, 0, 265, 266, 0, 267, 0, 0, 0, 0, 268, 0, 269, 270, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 274,
};
void recomp_unit_0362_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0896E000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0362[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0896E000;
    case 2u: goto L_0896E038;
    case 3u: goto L_0896E044;
    case 4u: goto L_0896E054;
    case 5u: goto L_0896E058;
    case 6u: goto L_0896E070;
    case 7u: goto L_0896E07C;
    case 8u: goto L_0896E084;
    case 9u: goto L_0896E088;
    case 10u: goto L_0896E0AC;
    case 11u: goto L_0896E0CC;
    case 12u: goto L_0896E0D8;
    case 13u: goto L_0896E108;
    case 14u: goto L_0896E114;
    case 15u: goto L_0896E13C;
    case 16u: goto L_0896E150;
    case 17u: goto L_0896E160;
    case 18u: goto L_0896E168;
    case 19u: goto L_0896E170;
    case 20u: goto L_0896E178;
    case 21u: goto L_0896E180;
    case 22u: goto L_0896E188;
    case 23u: goto L_0896E190;
    case 24u: goto L_0896E1A0;
    case 25u: goto L_0896E1A8;
    case 26u: goto L_0896E1BC;
    case 27u: goto L_0896E1E8;
    case 28u: goto L_0896E1F4;
    case 29u: goto L_0896E1F8;
    case 30u: goto L_0896E208;
    case 31u: goto L_0896E218;
    case 32u: goto L_0896E224;
    case 33u: goto L_0896E230;
    case 34u: goto L_0896E23C;
    case 35u: goto L_0896E26C;
    case 36u: goto L_0896E27C;
    case 37u: goto L_0896E290;
    case 38u: goto L_0896E298;
    case 39u: goto L_0896E2A0;
    case 40u: goto L_0896E2A8;
    case 41u: goto L_0896E2B8;
    case 42u: goto L_0896E2D8;
    case 43u: goto L_0896E300;
    case 44u: goto L_0896E308;
    case 45u: goto L_0896E324;
    case 46u: goto L_0896E338;
    case 47u: goto L_0896E34C;
    case 48u: goto L_0896E35C;
    case 49u: goto L_0896E364;
    case 50u: goto L_0896E378;
    case 51u: goto L_0896E390;
    case 52u: goto L_0896E398;
    case 53u: goto L_0896E3A0;
    case 54u: goto L_0896E3AC;
    case 55u: goto L_0896E3CC;
    case 56u: goto L_0896E3D8;
    case 57u: goto L_0896E3EC;
    case 58u: goto L_0896E3F4;
    case 59u: goto L_0896E3FC;
    case 60u: goto L_0896E404;
    case 61u: goto L_0896E414;
    case 62u: goto L_0896E454;
    case 63u: goto L_0896E460;
    case 64u: goto L_0896E470;
    case 65u: goto L_0896E478;
    case 66u: goto L_0896E480;
    case 67u: goto L_0896E488;
    case 68u: goto L_0896E490;
    case 69u: goto L_0896E498;
    case 70u: goto L_0896E4A4;
    case 71u: goto L_0896E4B8;
    case 72u: goto L_0896E4E4;
    case 73u: goto L_0896E4F8;
    case 74u: goto L_0896E510;
    case 75u: goto L_0896E518;
    case 76u: goto L_0896E528;
    case 77u: goto L_0896E540;
    case 78u: goto L_0896E548;
    case 79u: goto L_0896E558;
    case 80u: goto L_0896E568;
    case 81u: goto L_0896E570;
    case 82u: goto L_0896E578;
    case 83u: goto L_0896E588;
    case 84u: goto L_0896E590;
    case 85u: goto L_0896E598;
    case 86u: goto L_0896E5A4;
    case 87u: goto L_0896E5C4;
    case 88u: goto L_0896E5CC;
    case 89u: goto L_0896E5D4;
    case 90u: goto L_0896E5DC;
    case 91u: goto L_0896E60C;
    case 92u: goto L_0896E620;
    case 93u: goto L_0896E628;
    case 94u: goto L_0896E640;
    case 95u: goto L_0896E654;
    case 96u: goto L_0896E65C;
    case 97u: goto L_0896E664;
    case 98u: goto L_0896E668;
    case 99u: goto L_0896E678;
    case 100u: goto L_0896E698;
    case 101u: goto L_0896E6A4;
    case 102u: goto L_0896E6AC;
    case 103u: goto L_0896E6B8;
    case 104u: goto L_0896E6C0;
    case 105u: goto L_0896E6C8;
    case 106u: goto L_0896E6D0;
    case 107u: goto L_0896E6E0;
    case 108u: goto L_0896E6E8;
    case 109u: goto L_0896E6F0;
    case 110u: goto L_0896E6F8;
    case 111u: goto L_0896E700;
    case 112u: goto L_0896E70C;
    case 113u: goto L_0896E718;
    case 114u: goto L_0896E724;
    case 115u: goto L_0896E72C;
    case 116u: goto L_0896E734;
    case 117u: goto L_0896E73C;
    case 118u: goto L_0896E744;
    case 119u: goto L_0896E75C;
    case 120u: goto L_0896E768;
    case 121u: goto L_0896E76C;
    case 122u: goto L_0896E774;
    case 123u: goto L_0896E788;
    case 124u: goto L_0896E794;
    case 125u: goto L_0896E7A0;
    case 126u: goto L_0896E7B0;
    case 127u: goto L_0896E7B8;
    case 128u: goto L_0896E7CC;
    case 129u: goto L_0896E7E4;
    case 130u: goto L_0896E7EC;
    case 131u: goto L_0896E7F4;
    case 132u: goto L_0896E800;
    case 133u: goto L_0896E80C;
    case 134u: goto L_0896E818;
    case 135u: goto L_0896E820;
    case 136u: goto L_0896E828;
    case 137u: goto L_0896E830;
    case 138u: goto L_0896E838;
    case 139u: goto L_0896E840;
    case 140u: goto L_0896E850;
    case 141u: goto L_0896E85C;
    case 142u: goto L_0896E88C;
    case 143u: goto L_0896E8A0;
    case 144u: goto L_0896E8B0;
    case 145u: goto L_0896E8C0;
    case 146u: goto L_0896E8C4;
    case 147u: goto L_0896E8D8;
    case 148u: goto L_0896E8DC;
    case 149u: goto L_0896E8F4;
    case 150u: goto L_0896E904;
    case 151u: goto L_0896E910;
    case 152u: goto L_0896E91C;
    case 153u: goto L_0896E924;
    case 154u: goto L_0896E92C;
    case 155u: goto L_0896E948;
    case 156u: goto L_0896E954;
    case 157u: goto L_0896E960;
    case 158u: goto L_0896E974;
    case 159u: goto L_0896E980;
    case 160u: goto L_0896E98C;
    case 161u: goto L_0896E99C;
    case 162u: goto L_0896E9B0;
    case 163u: goto L_0896E9C0;
    case 164u: goto L_0896E9C8;
    case 165u: goto L_0896E9D8;
    case 166u: goto L_0896E9E0;
    case 167u: goto L_0896E9E8;
    case 168u: goto L_0896E9F0;
    case 169u: goto L_0896E9F4;
    case 170u: goto L_0896E9FC;
    case 171u: goto L_0896EA04;
    case 172u: goto L_0896EA14;
    case 173u: goto L_0896EA1C;
    case 174u: goto L_0896EA24;
    case 175u: goto L_0896EA2C;
    case 176u: goto L_0896EA3C;
    case 177u: goto L_0896EA44;
    case 178u: goto L_0896EA58;
    case 179u: goto L_0896EA68;
    case 180u: goto L_0896EA74;
    case 181u: goto L_0896EA84;
    case 182u: goto L_0896EA90;
    case 183u: goto L_0896EAB0;
    case 184u: goto L_0896EABC;
    case 185u: goto L_0896EADC;
    case 186u: goto L_0896EAE4;
    case 187u: goto L_0896EAF8;
    case 188u: goto L_0896EB00;
    case 189u: goto L_0896EB08;
    case 190u: goto L_0896EB10;
    case 191u: goto L_0896EB1C;
    case 192u: goto L_0896EB24;
    case 193u: goto L_0896EB2C;
    case 194u: goto L_0896EB44;
    case 195u: goto L_0896EB50;
    case 196u: goto L_0896EB70;
    case 197u: goto L_0896EB78;
    case 198u: goto L_0896EBA0;
    case 199u: goto L_0896EBBC;
    case 200u: goto L_0896EBF4;
    case 201u: goto L_0896EBFC;
    case 202u: goto L_0896EC04;
    case 203u: goto L_0896EC0C;
    case 204u: goto L_0896EC14;
    case 205u: goto L_0896EC24;
    case 206u: goto L_0896EC40;
    case 207u: goto L_0896EC54;
    case 208u: goto L_0896EC64;
    case 209u: goto L_0896EC6C;
    case 210u: goto L_0896EC7C;
    case 211u: goto L_0896EC8C;
    case 212u: goto L_0896ECB0;
    case 213u: goto L_0896ECC0;
    case 214u: goto L_0896ECD4;
    case 215u: goto L_0896ECE4;
    case 216u: goto L_0896ECEC;
    case 217u: goto L_0896ECF0;
    case 218u: goto L_0896ED04;
    case 219u: goto L_0896ED1C;
    case 220u: goto L_0896ED2C;
    case 221u: goto L_0896ED34;
    case 222u: goto L_0896ED3C;
    case 223u: goto L_0896ED44;
    case 224u: goto L_0896ED4C;
    case 225u: goto L_0896ED54;
    case 226u: goto L_0896ED60;
    case 227u: goto L_0896ED68;
    case 228u: goto L_0896ED70;
    case 229u: goto L_0896ED80;
    case 230u: goto L_0896ED88;
    case 231u: goto L_0896ED90;
    case 232u: goto L_0896ED98;
    case 233u: goto L_0896EDA8;
    case 234u: goto L_0896EDB0;
    case 235u: goto L_0896EDB8;
    case 236u: goto L_0896EDC0;
    case 237u: goto L_0896EDC8;
    case 238u: goto L_0896EDE4;
    case 239u: goto L_0896EDFC;
    case 240u: goto L_0896EE04;
    case 241u: goto L_0896EE10;
    case 242u: goto L_0896EE18;
    case 243u: goto L_0896EE20;
    case 244u: goto L_0896EE28;
    case 245u: goto L_0896EE3C;
    case 246u: goto L_0896EE50;
    case 247u: goto L_0896EE78;
    case 248u: goto L_0896EE80;
    case 249u: goto L_0896EE98;
    case 250u: goto L_0896EEC8;
    case 251u: goto L_0896EED0;
    case 252u: goto L_0896EED4;
    case 253u: goto L_0896EEF4;
    case 254u: goto L_0896EF18;
    case 255u: goto L_0896EF24;
    case 256u: goto L_0896EF2C;
    case 257u: goto L_0896EF34;
    case 258u: goto L_0896EF3C;
    case 259u: goto L_0896EF44;
    case 260u: goto L_0896EF4C;
    case 261u: goto L_0896EF54;
    case 262u: goto L_0896EF5C;
    case 263u: goto L_0896EF64;
    case 264u: goto L_0896EF78;
    case 265u: goto L_0896EF90;
    case 266u: goto L_0896EF94;
    case 267u: goto L_0896EF9C;
    case 268u: goto L_0896EFB0;
    case 269u: goto L_0896EFB8;
    case 270u: goto L_0896EFBC;
    case 271u: goto L_0896EFC4;
    case 272u: goto L_0896EFD4;
    case 273u: goto L_0896EFE4;
    case 274u: goto L_0896EFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0896E000:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26564)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26572)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896E038u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26560));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E038u) goto L_0896E038;
    return;
L_0896E038:
    aot_gpr[18] = (2220u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(-27888));
      if (branch_taken) {
          goto L_0896E058;
      }
      goto L_0896E044;
    }
L_0896E044:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896E058;
      }
      goto L_0896E054;
    }
L_0896E054:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896E058;
L_0896E058:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26576)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0896E070u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26568)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E070u) goto L_0896E070;
    return;
L_0896E070:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E088;
      }
      goto L_0896E07C;
    }
L_0896E07C:
    aot_gpr[31] = (0x0896E084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E084u) goto L_0896E084;
    return;
L_0896E084:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), 0u);
    goto L_0896E088;
L_0896E088:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-27888), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
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
L_0896E0AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27888));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896E0CCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26556));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E0CCu) goto L_0896E0CC;
    return;
L_0896E0CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E0D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26544), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[6] = (0u + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896E108u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 203u, 0x08960BA8u>(ctx, &aot_mem) && ctx.pc == 0x0896E108u) goto L_0896E108;
    return;
L_0896E108:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E114:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0896E13Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896E13Cu) goto L_0896E13C;
    return;
L_0896E13C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26544)));
      if (branch_taken) {
          goto L_0896E1A8;
      }
      goto L_0896E150;
    }
L_0896E150:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0896E170;
      }
      goto L_0896E160;
    }
L_0896E160:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896E188;
      }
      goto L_0896E168;
    }
L_0896E168:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896E188;
      }
      goto L_0896E170;
    }
L_0896E170:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896E180;
      }
      goto L_0896E178;
    }
L_0896E178:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26544)));
    goto L_0896E180;
L_0896E180:
    aot_gpr[31] = (0x0896E188u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 218u, 0x08960C84u>(ctx, &aot_mem) && ctx.pc == 0x0896E188u) goto L_0896E188;
    return;
L_0896E188:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E2B8;
      }
      goto L_0896E190;
    }
L_0896E190:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26544)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896E1A0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x0896E1A0u) goto L_0896E1A0;
    return;
L_0896E1A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E2B8;
      }
      goto L_0896E1A8;
    }
L_0896E1A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] << 4u);
      if (branch_taken) {
          goto L_0896E26C;
      }
      goto L_0896E1BC;
    }
L_0896E1BC:
    aot_gpr[5] = (0u + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0896E1E8u);
    aot_gpr[5] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 271u, 0x08A3ADD8u>(ctx, &aot_mem) && ctx.pc == 0x0896E1E8u) goto L_0896E1E8;
    return;
L_0896E1E8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E1F8;
      }
      goto L_0896E1F4;
    }
L_0896E1F4:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0896E1F8;
L_0896E1F8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0896E208u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896E208u) goto L_0896E208;
    return;
L_0896E208:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(296));
    aot_gpr[31] = (0x0896E218u);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896E218u) goto L_0896E218;
    return;
L_0896E218:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(396));
    aot_gpr[31] = (0x0896E224u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0896E224u) goto L_0896E224;
    return;
L_0896E224:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(524));
    aot_gpr[31] = (0x0896E230u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(956));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0896E230u) goto L_0896E230;
    return;
L_0896E230:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(652));
    aot_gpr[31] = (0x0896E23Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(700));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0896E23Cu) goto L_0896E23C;
    return;
L_0896E23C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(560)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(388), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(556)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(384), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(392), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(552)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(908), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26544)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    goto L_0896E26C;
L_0896E26C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1084))))));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896E2B8;
      }
      goto L_0896E27C;
    }
L_0896E27C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26544)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0896E298;
      }
      goto L_0896E290;
    }
L_0896E290:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26544)));
    goto L_0896E298;
L_0896E298:
    aot_gpr[31] = (0x0896E2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 218u, 0x08960C84u>(ctx, &aot_mem) && ctx.pc == 0x0896E2A0u) goto L_0896E2A0;
    return;
L_0896E2A0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E2B8;
      }
      goto L_0896E2A8;
    }
L_0896E2A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26544)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896E2B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x0896E2B8u) goto L_0896E2B8;
    return;
L_0896E2B8:
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
L_0896E2D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0896E300u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24824));
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 7u, 0x0896705Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E300u) goto L_0896E300;
    return;
L_0896E300:
    aot_gpr[31] = (0x0896E308u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x0896E308u) goto L_0896E308;
    return;
L_0896E308:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E324:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896E338u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 211u, 0x08960C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E338u) goto L_0896E338;
    return;
L_0896E338:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E34C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0896E3A0;
      }
      goto L_0896E35C;
    }
L_0896E35C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3A0;
      }
      goto L_0896E364;
    }
L_0896E364:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E398;
      }
      goto L_0896E378;
    }
L_0896E378:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896E390u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E390u) goto L_0896E390;
    return;
L_0896E390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3A0;
      }
      goto L_0896E398;
    }
L_0896E398:
    aot_gpr[31] = (0x0896E3A0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0896E3A0u) goto L_0896E3A0;
    return;
L_0896E3A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E3AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-20601));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896E3CCu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E3CCu) goto L_0896E3CC;
    return;
L_0896E3CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E3D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896E3ECu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0896E3ECu) goto L_0896E3EC;
    return;
L_0896E3EC:
    aot_gpr[31] = (0x0896E3F4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 81u, 0x089FE658u>(ctx, &aot_mem) && ctx.pc == 0x0896E3F4u) goto L_0896E3F4;
    return;
L_0896E3F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E404;
      }
      goto L_0896E3FC;
    }
L_0896E3FC:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    goto L_0896E404;
L_0896E404:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E414:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0896E478;
      }
      goto L_0896E454;
    }
L_0896E454:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0896E460u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 47u, 0x08983264u>(ctx, &aot_mem) && ctx.pc == 0x0896E460u) goto L_0896E460;
    return;
L_0896E460:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[31] = (0x0896E470u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 161u, 0x08962BC4u>(ctx, &aot_mem) && ctx.pc == 0x0896E470u) goto L_0896E470;
    return;
L_0896E470:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0896E478;
L_0896E478:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E488;
      }
      goto L_0896E480;
    }
L_0896E480:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0896E488;
L_0896E488:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E5DC;
      }
      goto L_0896E490;
    }
L_0896E490:
    aot_gpr[31] = (0x0896E498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x0896E498u) goto L_0896E498;
    return;
L_0896E498:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0896E4A4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 240u, 0x089EFEDCu>(ctx, &aot_mem) && ctx.pc == 0x0896E4A4u) goto L_0896E4A4;
    return;
L_0896E4A4:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896E4B8u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E4B8u) goto L_0896E4B8;
    return;
L_0896E4B8:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(10240));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(332)));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896E4E4u);
    aot_gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E4E4u) goto L_0896E4E4;
    return;
L_0896E4E4:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896E4F8u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E4F8u) goto L_0896E4F8;
    return;
L_0896E4F8:
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    aot_gpr[30] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896E510u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E510u) goto L_0896E510;
    return;
L_0896E510:
    aot_gpr[31] = (0x0896E518u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    ctx.pc = 0x08A5ACA4u;
    return;
L_0896E518:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0896E528u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896E528u) goto L_0896E528;
    return;
L_0896E528:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E570;
      }
      goto L_0896E540;
    }
L_0896E540:
    aot_gpr[31] = (0x0896E548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0896E548u) goto L_0896E548;
    return;
L_0896E548:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0896E558u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 44u, 0x089FE2E0u>(ctx, &aot_mem) && ctx.pc == 0x0896E558u) goto L_0896E558;
    return;
L_0896E558:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[31] = (0x0896E568u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 171u, 0x08962C34u>(ctx, &aot_mem) && ctx.pc == 0x0896E568u) goto L_0896E568;
    return;
L_0896E568:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0896E570;
L_0896E570:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E598;
      }
      goto L_0896E578;
    }
L_0896E578:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E598;
      }
      goto L_0896E588;
    }
L_0896E588:
    aot_gpr[31] = (0x0896E590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E590u) goto L_0896E590;
    return;
L_0896E590:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(332), 0u);
    goto L_0896E598;
L_0896E598:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E5DC;
      }
      goto L_0896E5A4;
    }
L_0896E5A4:
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[5] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6332));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-31048));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E5D4;
      }
      goto L_0896E5C4;
    }
L_0896E5C4:
    aot_gpr[31] = (0x0896E5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E5CCu) goto L_0896E5CC;
    return;
L_0896E5CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(332), 0u);
    goto L_0896E5D4;
L_0896E5D4:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    goto L_0896E5DC;
L_0896E5DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E60C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896E620u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0896E620u) goto L_0896E620;
    return;
L_0896E620:
    aot_gpr[31] = (0x0896E628u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 96u, 0x089FE750u>(ctx, &aot_mem) && ctx.pc == 0x0896E628u) goto L_0896E628;
    return;
L_0896E628:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E640:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896E654u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0896E654u) goto L_0896E654;
    return;
L_0896E654:
    aot_gpr[31] = (0x0896E65Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 97u, 0x089FE75Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E65Cu) goto L_0896E65C;
    return;
L_0896E65C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E668;
      }
      goto L_0896E664;
    }
L_0896E664:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_0896E668;
L_0896E668:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E678:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[9];
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_0896E6F8;
      }
      goto L_0896E698;
    }
L_0896E698:
    aot_gpr[8] = (0u | 5u);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[8] = (0u | 2u);
      if (branch_taken) {
          goto L_0896E6E8;
      }
      goto L_0896E6A4;
    }
L_0896E6A4:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_0896E6D0;
      }
      goto L_0896E6AC;
    }
L_0896E6AC:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896E6C0;
      }
      goto L_0896E6B8;
    }
L_0896E6B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E700;
      }
      goto L_0896E6C0;
    }
L_0896E6C0:
    aot_gpr[31] = (0x0896E6C8u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_0896E3D8;
L_0896E6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E700;
      }
      goto L_0896E6D0;
    }
L_0896E6D0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0896E6E0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_0896E414;
L_0896E6E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E700;
      }
      goto L_0896E6E8;
    }
L_0896E6E8:
    aot_gpr[31] = (0x0896E6F0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_0896E60C;
L_0896E6F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E700;
      }
      goto L_0896E6F8;
    }
L_0896E6F8:
    aot_gpr[31] = (0x0896E700u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_0896E640;
L_0896E700:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E70C:
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E718:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E72C;
      }
      goto L_0896E724;
    }
L_0896E724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E734;
      }
      goto L_0896E72C;
    }
L_0896E72C:
    aot_gpr[5] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    goto L_0896E734;
L_0896E734:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E73C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E744:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27928));
    aot_gpr[6] = (0u | 20600u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[5]);
      if (branch_taken) {
          goto L_0896E768;
      }
      goto L_0896E75C;
    }
L_0896E75C:
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
      if (branch_taken) {
          goto L_0896E76C;
      }
      goto L_0896E768;
    }
L_0896E768:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_0896E76C;
L_0896E76C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E774:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896E788u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27928));
    goto L_0896E73C;
L_0896E788:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896E794u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26536));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E794u) goto L_0896E794;
    return;
L_0896E794:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E7A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0896E7F4;
      }
      goto L_0896E7B0;
    }
L_0896E7B0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E7F4;
      }
      goto L_0896E7B8;
    }
L_0896E7B8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E7EC;
      }
      goto L_0896E7CC;
    }
L_0896E7CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896E7E4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E7E4u) goto L_0896E7E4;
    return;
L_0896E7E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E7F4;
      }
      goto L_0896E7EC;
    }
L_0896E7EC:
    aot_gpr[31] = (0x0896E7F4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0896E7F4u) goto L_0896E7F4;
    return;
L_0896E7F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E800:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E80C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr[5]) > 0) {
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
        goto L_0896E828;
    }
    goto L_0896E818;
L_0896E818:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896E838;
      }
      goto L_0896E820;
    }
L_0896E820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E838;
      }
      goto L_0896E828;
    }
L_0896E828:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E838;
      }
      goto L_0896E830;
    }
L_0896E830:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_0896E838;
      }
      goto L_0896E838;
    }
L_0896E838:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896E850u);
    // nop
    goto L_0896E800;
L_0896E850:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E85C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x0896E88Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x0896E88Cu) goto L_0896E88C;
    return;
L_0896E88C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896E8C4;
      }
      goto L_0896E8A0;
    }
L_0896E8A0:
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0896E8B0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5844));
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 88u, 0x089AABACu>(ctx, &aot_mem) && ctx.pc == 0x0896E8B0u) goto L_0896E8B0;
    return;
L_0896E8B0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x0896E8C0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x0896E8C0u) goto L_0896E8C0;
    return;
L_0896E8C0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_0896E8C4;
L_0896E8C4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E8DC;
      }
      goto L_0896E8D8;
    }
L_0896E8D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), 0u);
    goto L_0896E8DC;
L_0896E8DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E8F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896E904u);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    goto L_0896E800;
L_0896E904:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E910:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E924;
      }
      goto L_0896E91C;
    }
L_0896E91C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0896E924;
L_0896E924:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E92C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896E948u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    goto L_0896E910;
L_0896E948:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E954:
    aot_gpr[2] = (2220u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-27864));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E960:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896E974u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27864));
    goto L_0896E8F4;
L_0896E974:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896E980u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26520));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E980u) goto L_0896E980;
    return;
L_0896E980:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E98C:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(17792));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E99C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896E9B0u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF94u;
    return;
L_0896E9B0:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26504)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E9F4;
      }
      goto L_0896E9C0;
    }
L_0896E9C0:
    aot_gpr[31] = (0x0896E9C8u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_0896E98C;
L_0896E9C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0896E9E0;
      }
      goto L_0896E9D8;
    }
L_0896E9D8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896E9F4;
      }
      goto L_0896E9E0;
    }
L_0896E9E0:
    aot_gpr[31] = (0x0896E9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 213u, 0x08963BF0u>(ctx, &aot_mem) && ctx.pc == 0x0896E9E8u) goto L_0896E9E8;
    return;
L_0896E9E8:
    aot_gpr[31] = (0x0896E9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 239u, 0x08963D88u>(ctx, &aot_mem) && ctx.pc == 0x0896E9F0u) goto L_0896E9F0;
    return;
L_0896E9F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26504)));
    goto L_0896E9F4;
L_0896E9F4:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EA2C;
      }
      goto L_0896E9FC;
    }
L_0896E9FC:
    aot_gpr[31] = (0x0896EA04u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_0896E98C;
L_0896EA04:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_0896EA1C;
      }
      goto L_0896EA14;
    }
L_0896EA14:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896EA2C;
      }
      goto L_0896EA1C;
    }
L_0896EA1C:
    aot_gpr[31] = (0x0896EA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 160u, 0x089638ECu>(ctx, &aot_mem) && ctx.pc == 0x0896EA24u) goto L_0896EA24;
    return;
L_0896EA24:
    aot_gpr[31] = (0x0896EA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 186u, 0x08963A80u>(ctx, &aot_mem) && ctx.pc == 0x0896EA2Cu) goto L_0896EA2C;
    return;
L_0896EA2C:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26500), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0896EA3Cu);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF7Cu;
    return;
L_0896EA3C:
    aot_gpr[31] = (0x0896EA44u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5B0E4u;
    return;
L_0896EA44:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EA58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896EA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x0896EA68u) goto L_0896EA68;
    return;
L_0896EA68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EA74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896EA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EA84u) goto L_0896EA84;
    return;
L_0896EA84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EA90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17744));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896EAB0u);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EAB0u) goto L_0896EAB0;
    return;
L_0896EAB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EABC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896EB2C;
      }
      goto L_0896EADC;
    }
L_0896EADC:
    aot_gpr[31] = (0x0896EAE4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0896EA90;
L_0896EAE4:
    aot_gpr[18] = (1u << 16u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(17832)));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_gpr[4] = (aot_gpr[16] & 1u);
        goto L_0896EB1C;
    }
    goto L_0896EAF8;
L_0896EAF8:
    aot_gpr[31] = (0x0896EB00u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B00Cu;
    return;
L_0896EB00:
    aot_gpr[31] = (0x0896EB08u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(17832)));
    ctx.pc = 0x08A5B0D4u;
    return;
L_0896EB08:
    aot_gpr[31] = (0x0896EB10u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF7Cu;
    return;
L_0896EB10:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(17832), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_0896EB1C;
L_0896EB1C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EB2C;
      }
      goto L_0896EB24;
    }
L_0896EB24:
    aot_gpr[31] = (0x0896EB2Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0896EA74;
L_0896EB2C:
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
L_0896EB44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896EB70;
      }
      goto L_0896EB50;
    }
L_0896EB50:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(17792), 0u);
    goto L_0896EB70;
L_0896EB70:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EB78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0896EBA0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 133u, 0x08962938u>(ctx, &aot_mem) && ctx.pc == 0x0896EBA0u) goto L_0896EBA0;
    return;
L_0896EBA0:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(3032));
    aot_gpr[19] = (0u | 64u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896EBBCu);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EBBCu) goto L_0896EBBC;
    return;
L_0896EBBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3032), aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (0u | 18u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (0u | 19u);
    aot_gpr[31] = (0x0896EBF4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 164u, 0x08942C88u>(ctx, &aot_mem) && ctx.pc == 0x0896EBF4u) goto L_0896EBF4;
    return;
L_0896EBF4:
    aot_gpr[31] = (0x0896EBFCu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 173u, 0x08942D14u>(ctx, &aot_mem) && ctx.pc == 0x0896EBFCu) goto L_0896EBFC;
    return;
L_0896EBFC:
    aot_gpr[31] = (0x0896EC04u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = 0x08A5ABDCu;
    return;
L_0896EC04:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0896EC14;
      }
      goto L_0896EC0C;
    }
L_0896EC0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EC24;
      }
      goto L_0896EC14;
    }
L_0896EC14:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(17792), aot_gpr[4]);
    goto L_0896EC24;
L_0896EC24:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EC40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896EC54u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EC54u) goto L_0896EC54;
    return;
L_0896EC54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896EC6C;
      }
      goto L_0896EC64;
    }
L_0896EC64:
    aot_gpr[31] = (0x0896EC6Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0896EB78;
L_0896EC6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EC7C:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(17792), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EC8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (1u << 16u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(17832)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896ECF0;
      }
      goto L_0896ECB0;
    }
L_0896ECB0:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-26500)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896ECF0;
      }
      goto L_0896ECC0;
    }
L_0896ECC0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-26500), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(17832)));
    aot_gpr[31] = (0x0896ECD4u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B00Cu;
    return;
L_0896ECD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(17832)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896ECE4u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5AFFCu;
    return;
L_0896ECE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896ECF0;
      }
      goto L_0896ECEC;
    }
L_0896ECEC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-26500), static_cast<std::uint8_t>(0u));
    goto L_0896ECF0;
L_0896ECF0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896ED04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0896ED1Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    ctx.pc = 0x08A5AC0Cu;
    return;
L_0896ED1C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EE28;
      }
      goto L_0896ED2C;
    }
L_0896ED2C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896EDB8;
      }
      goto L_0896ED34;
    }
L_0896ED34:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0896ED54;
      }
      goto L_0896ED3C;
    }
L_0896ED3C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896ED88;
      }
      goto L_0896ED44;
    }
L_0896ED44:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896EDB0;
      }
      goto L_0896ED4C;
    }
L_0896ED4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EE28;
      }
      goto L_0896ED54;
    }
L_0896ED54:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0896ED60u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 182u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x0896ED60u) goto L_0896ED60;
    return;
L_0896ED60:
    aot_gpr[31] = (0x0896ED68u);
    aot_gpr[4] = (0u | 1u);
    ctx.pc = 0x08A5AC6Cu;
    return;
L_0896ED68:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0896ED80;
      }
      goto L_0896ED70;
    }
L_0896ED70:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(17792), aot_gpr[4]);
    goto L_0896ED80;
L_0896ED80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EE28;
      }
      goto L_0896ED88;
    }
L_0896ED88:
    aot_gpr[31] = (0x0896ED90u);
    // nop
    ctx.pc = 0x08A5AC5Cu;
    return;
L_0896ED90:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0896EDA8;
      }
      goto L_0896ED98;
    }
L_0896ED98:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(17792), aot_gpr[4]);
    goto L_0896EDA8;
L_0896EDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EE28;
      }
      goto L_0896EDB0;
    }
L_0896EDB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EE28;
      }
      goto L_0896EDB8;
    }
L_0896EDB8:
    aot_gpr[31] = (0x0896EDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 180u, 0x08942D80u>(ctx, &aot_mem) && ctx.pc == 0x0896EDC0u) goto L_0896EDC0;
    return;
L_0896EDC0:
    aot_gpr[31] = (0x0896EDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 184u, 0x08942DD8u>(ctx, &aot_mem) && ctx.pc == 0x0896EDC8u) goto L_0896EDC8;
    return;
L_0896EDC8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3032));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (1u << 16u);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_0896EE20;
      }
      goto L_0896EDE4;
    }
L_0896EDE4:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(17792), aot_gpr[4]);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17796));
    aot_gpr[31] = (0x0896EDFCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = 0x08A5AD3Cu;
    return;
L_0896EDFC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0896EE10;
      }
      goto L_0896EE04;
    }
L_0896EE04:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(17792), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896EE18;
      }
      goto L_0896EE10;
    }
L_0896EE10:
    aot_gpr[31] = (0x0896EE18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0896EC8C;
L_0896EE18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EE28;
      }
      goto L_0896EE20;
    }
L_0896EE20:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(17792), aot_gpr[4]);
    goto L_0896EE28;
L_0896EE28:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EE3C:
    aot_gpr[6] = (1u << 16u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(17792), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EE50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    aot_gpr[31] = (0x0896EE78u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AD3Cu;
    return;
L_0896EE78:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896EED4;
      }
      goto L_0896EE80;
    }
L_0896EE80:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[19] = (0u | 36u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896EE98u);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EE98u) goto L_0896EE98;
    return;
L_0896EE98:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(17672));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1788));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[31] = (0x0896EEC8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = 0x08A5AD2Cu;
    return;
L_0896EEC8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_0896EED4;
      }
      goto L_0896EED0;
    }
L_0896EED0:
    aot_gpr[17] = (0u | 1u);
    goto L_0896EED4;
L_0896EED4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EEF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (1u << 16u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(17736)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EFD4;
      }
      goto L_0896EF18;
    }
L_0896EF18:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896EF5C;
      }
      goto L_0896EF24;
    }
L_0896EF24:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0896EF64;
      }
      goto L_0896EF2C;
    }
L_0896EF2C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896EF9C;
      }
      goto L_0896EF34;
    }
L_0896EF34:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896EFC4;
      }
      goto L_0896EF3C;
    }
L_0896EF3C:
    aot_gpr[31] = (0x0896EF44u);
    // nop
    goto L_0896EE50;
L_0896EF44:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EF54;
      }
      goto L_0896EF4C;
    }
L_0896EF4C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(17736), aot_gpr[4]);
    goto L_0896EF54;
L_0896EF54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EFD4;
      }
      goto L_0896EF5C;
    }
L_0896EF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EFD4;
      }
      goto L_0896EF64;
    }
L_0896EF64:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(17732)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0896EF90;
      }
      goto L_0896EF78;
    }
L_0896EF78:
    aot_gpr[6] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(17736), aot_gpr[6]);
    aot_gpr[6] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(17792), aot_gpr[5]);
      if (branch_taken) {
          goto L_0896EF94;
      }
      goto L_0896EF90;
    }
L_0896EF90:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(17736), aot_gpr[5]);
    goto L_0896EF94;
L_0896EF94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EFD4;
      }
      goto L_0896EF9C;
    }
L_0896EF9C:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(17792)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896EFBC;
      }
      goto L_0896EFB0;
    }
L_0896EFB0:
    aot_gpr[31] = (0x0896EFB8u);
    // nop
    goto L_0896EA90;
L_0896EFB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(17736), 0u);
    goto L_0896EFBC;
L_0896EFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EFD4;
      }
      goto L_0896EFC4;
    }
L_0896EFC4:
    aot_gpr[6] = (1u << 16u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(17792), aot_gpr[5]);
    goto L_0896EFD4;
L_0896EFD4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EFE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896EFF8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EFF8u) goto L_0896EFF8;
    return;
L_0896EFF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 5u);
    ctx.pc = 0x0896F000u; return;
}

void recomp_unit_0362(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0362_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_362(Runtime &runtime) {
    runtime.register_generated_unit(362u, 0x0896E000u, 4096u, &recomp_unit_0362, &recomp_unit_0362_entry);
    runtime.register_function(0x0896E000u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E038u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E044u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E054u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E058u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E070u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E07Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E084u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E088u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E0ACu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E0CCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E0D8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E108u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E114u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E13Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E150u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E160u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E168u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E170u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E178u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E180u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E188u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E190u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E1A0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E1A8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E1BCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E1E8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E1F4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E1F8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E208u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E218u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E224u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E230u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E23Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E26Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E27Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E290u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E298u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E2A0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E2A8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E2B8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E2D8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E300u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E308u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E324u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E338u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E34Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E35Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E364u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E378u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E390u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E398u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E3A0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E3ACu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E3CCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E3D8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E3ECu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E3F4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E3FCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E404u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E414u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E454u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E460u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E470u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E478u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E480u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E488u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E490u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E498u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E4A4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E4B8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E4E4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E4F8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E510u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E518u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E528u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E540u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E548u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E558u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E568u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E570u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E578u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E588u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E590u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E598u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E5A4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E5C4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E5CCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E5D4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E5DCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E60Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E620u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E628u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E640u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E654u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E65Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E664u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E668u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E678u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E698u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E6A4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E6ACu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E6B8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E6C0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E6C8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E6D0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E6E0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E6E8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E6F0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E6F8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E700u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E70Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E718u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E724u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E72Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E734u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E73Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E744u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E75Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E768u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E76Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E774u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E788u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E794u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E7A0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E7B0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E7B8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E7CCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E7E4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E7ECu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E7F4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E800u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E80Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E818u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E820u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E828u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E830u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E838u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E840u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E850u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E85Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E88Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E8A0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E8B0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E8C0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E8C4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E8D8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E8DCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E8F4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E904u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E910u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E91Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E924u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E92Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E948u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E954u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E960u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E974u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E980u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E98Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E99Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E9B0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E9C0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E9C8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E9D8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E9E0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E9E8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E9F0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E9F4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896E9FCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EA04u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EA14u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EA1Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EA24u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EA2Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EA3Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EA44u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EA58u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EA68u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EA74u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EA84u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EA90u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EAB0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EABCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EADCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EAE4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EAF8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EB00u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EB08u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EB10u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EB1Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EB24u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EB2Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EB44u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EB50u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EB70u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EB78u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EBA0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EBBCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EBF4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EBFCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EC04u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EC0Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EC14u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EC24u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EC40u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EC54u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EC64u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EC6Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EC7Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EC8Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ECB0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ECC0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ECD4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ECE4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ECECu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ECF0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED04u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED1Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED2Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED34u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED3Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED44u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED4Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED54u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED60u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED68u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED70u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED80u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED88u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED90u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896ED98u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EDA8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EDB0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EDB8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EDC0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EDC8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EDE4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EDFCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EE04u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EE10u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EE18u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EE20u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EE28u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EE3Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EE50u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EE78u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EE80u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EE98u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EEC8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EED0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EED4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EEF4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF18u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF24u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF2Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF34u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF3Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF44u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF4Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF54u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF5Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF64u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF78u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF90u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF94u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EF9Cu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EFB0u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EFB8u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EFBCu, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EFC4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EFD4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EFE4u, &recomp_unit_0362, "recomp_unit_0362");
    runtime.register_function(0x0896EFF8u, &recomp_unit_0362, "recomp_unit_0362");
}
} // namespace psprecomp
