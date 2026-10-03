#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0555[1024] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0,
    0, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 35, 0, 36, 0, 0, 37, 0,
    0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 49, 50, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0,
    74, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0,
    81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0,
    0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96,
    0, 0, 97, 0, 98, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 118, 119, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0,
    122, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 129, 130, 0, 0, 0, 0, 0,
    0, 131, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138,
    0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 163, 0, 164, 165, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 177, 178, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188,
    189, 0, 190, 0, 191, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 204, 0, 0,
    0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 213, 0, 214, 0, 215, 0, 216,
    0, 217, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    235, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 250,
};
void recomp_unit_0555_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A2F000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0555[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A2F000;
    case 2u: goto L_08A2F008;
    case 3u: goto L_08A2F038;
    case 4u: goto L_08A2F048;
    case 5u: goto L_08A2F04C;
    case 6u: goto L_08A2F064;
    case 7u: goto L_08A2F078;
    case 8u: goto L_08A2F088;
    case 9u: goto L_08A2F08C;
    case 10u: goto L_08A2F140;
    case 11u: goto L_08A2F180;
    case 12u: goto L_08A2F19C;
    case 13u: goto L_08A2F1A4;
    case 14u: goto L_08A2F1CC;
    case 15u: goto L_08A2F1EC;
    case 16u: goto L_08A2F200;
    case 17u: goto L_08A2F208;
    case 18u: goto L_08A2F21C;
    case 19u: goto L_08A2F230;
    case 20u: goto L_08A2F24C;
    case 21u: goto L_08A2F264;
    case 22u: goto L_08A2F274;
    case 23u: goto L_08A2F288;
    case 24u: goto L_08A2F29C;
    case 25u: goto L_08A2F2C0;
    case 26u: goto L_08A2F2E4;
    case 27u: goto L_08A2F304;
    case 28u: goto L_08A2F318;
    case 29u: goto L_08A2F324;
    case 30u: goto L_08A2F32C;
    case 31u: goto L_08A2F33C;
    case 32u: goto L_08A2F344;
    case 33u: goto L_08A2F34C;
    case 34u: goto L_08A2F358;
    case 35u: goto L_08A2F364;
    case 36u: goto L_08A2F36C;
    case 37u: goto L_08A2F378;
    case 38u: goto L_08A2F388;
    case 39u: goto L_08A2F398;
    case 40u: goto L_08A2F3A0;
    case 41u: goto L_08A2F3AC;
    case 42u: goto L_08A2F3B4;
    case 43u: goto L_08A2F3C4;
    case 44u: goto L_08A2F3D4;
    case 45u: goto L_08A2F3F0;
    case 46u: goto L_08A2F3F8;
    case 47u: goto L_08A2F40C;
    case 48u: goto L_08A2F428;
    case 49u: goto L_08A2F430;
    case 50u: goto L_08A2F434;
    case 51u: goto L_08A2F438;
    case 52u: goto L_08A2F440;
    case 53u: goto L_08A2F454;
    case 54u: goto L_08A2F460;
    case 55u: goto L_08A2F480;
    case 56u: goto L_08A2F488;
    case 57u: goto L_08A2F494;
    case 58u: goto L_08A2F4AC;
    case 59u: goto L_08A2F4B4;
    case 60u: goto L_08A2F4C0;
    case 61u: goto L_08A2F4D4;
    case 62u: goto L_08A2F4F4;
    case 63u: goto L_08A2F508;
    case 64u: goto L_08A2F514;
    case 65u: goto L_08A2F51C;
    case 66u: goto L_08A2F52C;
    case 67u: goto L_08A2F534;
    case 68u: goto L_08A2F53C;
    case 69u: goto L_08A2F544;
    case 70u: goto L_08A2F550;
    case 71u: goto L_08A2F55C;
    case 72u: goto L_08A2F568;
    case 73u: goto L_08A2F574;
    case 74u: goto L_08A2F580;
    case 75u: goto L_08A2F588;
    case 76u: goto L_08A2F598;
    case 77u: goto L_08A2F5A4;
    case 78u: goto L_08A2F5B4;
    case 79u: goto L_08A2F5E8;
    case 80u: goto L_08A2F5F0;
    case 81u: goto L_08A2F600;
    case 82u: goto L_08A2F608;
    case 83u: goto L_08A2F620;
    case 84u: goto L_08A2F628;
    case 85u: goto L_08A2F634;
    case 86u: goto L_08A2F650;
    case 87u: goto L_08A2F664;
    case 88u: goto L_08A2F66C;
    case 89u: goto L_08A2F674;
    case 90u: goto L_08A2F690;
    case 91u: goto L_08A2F698;
    case 92u: goto L_08A2F6B0;
    case 93u: goto L_08A2F6CC;
    case 94u: goto L_08A2F6EC;
    case 95u: goto L_08A2F6F4;
    case 96u: goto L_08A2F6FC;
    case 97u: goto L_08A2F708;
    case 98u: goto L_08A2F710;
    case 99u: goto L_08A2F714;
    case 100u: goto L_08A2F730;
    case 101u: goto L_08A2F738;
    case 102u: goto L_08A2F74C;
    case 103u: goto L_08A2F754;
    case 104u: goto L_08A2F75C;
    case 105u: goto L_08A2F768;
    case 106u: goto L_08A2F784;
    case 107u: goto L_08A2F798;
    case 108u: goto L_08A2F7A0;
    case 109u: goto L_08A2F7A8;
    case 110u: goto L_08A2F7C4;
    case 111u: goto L_08A2F7CC;
    case 112u: goto L_08A2F7E4;
    case 113u: goto L_08A2F800;
    case 114u: goto L_08A2F820;
    case 115u: goto L_08A2F828;
    case 116u: goto L_08A2F830;
    case 117u: goto L_08A2F83C;
    case 118u: goto L_08A2F844;
    case 119u: goto L_08A2F848;
    case 120u: goto L_08A2F864;
    case 121u: goto L_08A2F86C;
    case 122u: goto L_08A2F880;
    case 123u: goto L_08A2F888;
    case 124u: goto L_08A2F890;
    case 125u: goto L_08A2F89C;
    case 126u: goto L_08A2F8C0;
    case 127u: goto L_08A2F8D4;
    case 128u: goto L_08A2F8DC;
    case 129u: goto L_08A2F8E4;
    case 130u: goto L_08A2F8E8;
    case 131u: goto L_08A2F904;
    case 132u: goto L_08A2F90C;
    case 133u: goto L_08A2F914;
    case 134u: goto L_08A2F924;
    case 135u: goto L_08A2F934;
    case 136u: goto L_08A2F93C;
    case 137u: goto L_08A2F94C;
    case 138u: goto L_08A2F97C;
    case 139u: goto L_08A2F984;
    case 140u: goto L_08A2F98C;
    case 141u: goto L_08A2F998;
    case 142u: goto L_08A2F9A0;
    case 143u: goto L_08A2F9A8;
    case 144u: goto L_08A2F9B0;
    case 145u: goto L_08A2F9C4;
    case 146u: goto L_08A2F9CC;
    case 147u: goto L_08A2F9D4;
    case 148u: goto L_08A2F9E0;
    case 149u: goto L_08A2FA0C;
    case 150u: goto L_08A2FA20;
    case 151u: goto L_08A2FA28;
    case 152u: goto L_08A2FA30;
    case 153u: goto L_08A2FA58;
    case 154u: goto L_08A2FA60;
    case 155u: goto L_08A2FA68;
    case 156u: goto L_08A2FA78;
    case 157u: goto L_08A2FA94;
    case 158u: goto L_08A2FAAC;
    case 159u: goto L_08A2FAB8;
    case 160u: goto L_08A2FAC0;
    case 161u: goto L_08A2FAC8;
    case 162u: goto L_08A2FAD0;
    case 163u: goto L_08A2FADC;
    case 164u: goto L_08A2FAE4;
    case 165u: goto L_08A2FAE8;
    case 166u: goto L_08A2FB10;
    case 167u: goto L_08A2FB24;
    case 168u: goto L_08A2FB34;
    case 169u: goto L_08A2FB3C;
    case 170u: goto L_08A2FB48;
    case 171u: goto L_08A2FB50;
    case 172u: goto L_08A2FB64;
    case 173u: goto L_08A2FB6C;
    case 174u: goto L_08A2FBA4;
    case 175u: goto L_08A2FBB8;
    case 176u: goto L_08A2FBC0;
    case 177u: goto L_08A2FBC8;
    case 178u: goto L_08A2FBCC;
    case 179u: goto L_08A2FBD0;
    case 180u: goto L_08A2FBFC;
    case 181u: goto L_08A2FC04;
    case 182u: goto L_08A2FC0C;
    case 183u: goto L_08A2FC20;
    case 184u: goto L_08A2FC3C;
    case 185u: goto L_08A2FC54;
    case 186u: goto L_08A2FC6C;
    case 187u: goto L_08A2FC74;
    case 188u: goto L_08A2FC7C;
    case 189u: goto L_08A2FC80;
    case 190u: goto L_08A2FC88;
    case 191u: goto L_08A2FC90;
    case 192u: goto L_08A2FC94;
    case 193u: goto L_08A2FCC8;
    case 194u: goto L_08A2FCD8;
    case 195u: goto L_08A2FCE8;
    case 196u: goto L_08A2FD04;
    case 197u: goto L_08A2FD14;
    case 198u: goto L_08A2FD28;
    case 199u: goto L_08A2FD40;
    case 200u: goto L_08A2FD48;
    case 201u: goto L_08A2FD5C;
    case 202u: goto L_08A2FD64;
    case 203u: goto L_08A2FD6C;
    case 204u: goto L_08A2FD74;
    case 205u: goto L_08A2FD84;
    case 206u: goto L_08A2FD8C;
    case 207u: goto L_08A2FD94;
    case 208u: goto L_08A2FD9C;
    case 209u: goto L_08A2FDA4;
    case 210u: goto L_08A2FDC0;
    case 211u: goto L_08A2FDD0;
    case 212u: goto L_08A2FDE0;
    case 213u: goto L_08A2FDE4;
    case 214u: goto L_08A2FDEC;
    case 215u: goto L_08A2FDF4;
    case 216u: goto L_08A2FDFC;
    case 217u: goto L_08A2FE04;
    case 218u: goto L_08A2FE10;
    case 219u: goto L_08A2FE18;
    case 220u: goto L_08A2FE20;
    case 221u: goto L_08A2FE30;
    case 222u: goto L_08A2FE50;
    case 223u: goto L_08A2FE60;
    case 224u: goto L_08A2FE6C;
    case 225u: goto L_08A2FE90;
    case 226u: goto L_08A2FE98;
    case 227u: goto L_08A2FEA4;
    case 228u: goto L_08A2FEAC;
    case 229u: goto L_08A2FEB4;
    case 230u: goto L_08A2FEBC;
    case 231u: goto L_08A2FEC4;
    case 232u: goto L_08A2FECC;
    case 233u: goto L_08A2FED4;
    case 234u: goto L_08A2FEF0;
    case 235u: goto L_08A2FF00;
    case 236u: goto L_08A2FF0C;
    case 237u: goto L_08A2FF20;
    case 238u: goto L_08A2FF30;
    case 239u: goto L_08A2FF38;
    case 240u: goto L_08A2FF44;
    case 241u: goto L_08A2FF50;
    case 242u: goto L_08A2FF6C;
    case 243u: goto L_08A2FF7C;
    case 244u: goto L_08A2FF88;
    case 245u: goto L_08A2FFB0;
    case 246u: goto L_08A2FFB8;
    case 247u: goto L_08A2FFCC;
    case 248u: goto L_08A2FFE0;
    case 249u: goto L_08A2FFE8;
    case 250u: goto L_08A2FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A2F000:
    jump_target = aot_gpr[31];
    aot_gpr[3] = (aot_gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F008:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (20607u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[16] = ((aot_gpr[16] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_fpr[5] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A2F064;
      }
      goto L_08A2F038;
    }
L_08A2F038:
    aot_gpr[2] = (32640u << 16u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F19C;
      }
      goto L_08A2F048;
    }
L_08A2F048:
    aot_fpr[5] = aot_fpr[12] + aot_fpr[12];
    goto L_08A2F04C;
L_08A2F04C:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F064:
    aot_gpr[2] = (16095u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (12543u << 16u);
      if (branch_taken) {
          goto L_08A2F200;
      }
      goto L_08A2F078;
    }
L_08A2F078:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A2F1CC;
      }
      goto L_08A2F088;
    }
L_08A2F088:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A2F08C;
L_08A2F08C:
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20384)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20408)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20388)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20412)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20392)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20416)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20396)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20420)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20400)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20424)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20404)));
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) < 0;
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08A2F264;
      }
      goto L_08A2F140;
    }
L_08A2F140:
    aot_fpr[1] = aot_fpr[0] + aot_fpr[1];
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5844));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5860));
    aot_fpr[1] = aot_fpr[1] - aot_fpr[0];
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_fpr[1] = aot_fpr[1] - aot_fpr[5];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_fpr[5] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A2F04C;
      }
      goto L_08A2F180;
    }
L_08A2F180:
    aot_fpr[5] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) ^ 0x80000000u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F19C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A2F24C;
      }
      goto L_08A2F1A4;
    }
L_08A2F1A4:
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20360)));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20356)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[5] = aot_fpr[1] + aot_fpr[0];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F1CC:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20364)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20368)));
    aot_fpr[0] = aot_fpr[12] + aot_fpr[0];
    ctx.set_fpu_condition((aot_fpr[1] < aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A2F088;
      }
      goto L_08A2F1EC;
    }
L_08A2F1EC:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F200:
    aot_gpr[31] = (0x08A2F208u);
    // nop
    goto L_08A2F3C4;
L_08A2F208:
    aot_gpr[2] = (16279u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[4] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A2F274;
      }
      goto L_08A2F21C;
    }
L_08A2F21C:
    aot_gpr[2] = (16175u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_fpr[1] = aot_fpr[0] + aot_fpr[0];
        goto L_08A2F2C0;
    }
    goto L_08A2F230;
L_08A2F230:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20368)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_fpr[1] = aot_fpr[4] + aot_fpr[0];
    aot_fpr[0] = aot_fpr[4] - aot_fpr[0];
    aot_fpr[5] = aot_fpr[0] / aot_fpr[1];
    goto L_08A2F08C;
L_08A2F24C:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20356)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20360)));
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) ^ 0x80000000u);
    aot_fpr[5] = aot_fpr[0] - aot_fpr[1];
    goto L_08A2F04C;
L_08A2F264:
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[5] = aot_fpr[5] - aot_fpr[0];
    goto L_08A2F04C;
L_08A2F274:
    aot_gpr[2] = (16411u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A2F29C;
      }
      goto L_08A2F288;
    }
L_08A2F288:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20380)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_fpr[5] = aot_fpr[0] / aot_fpr[4];
    goto L_08A2F08C;
L_08A2F29C:
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20376)));
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[1] = aot_fpr[0] - aot_fpr[1];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20368)));
    aot_fpr[2] = aot_fpr[2] + aot_fpr[0];
    aot_fpr[5] = aot_fpr[1] / aot_fpr[2];
    goto L_08A2F08C;
L_08A2F2C0:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20368)));
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (0u + 0u);
    aot_fpr[1] = aot_fpr[1] - aot_fpr[0];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20372)));
    aot_fpr[0] = aot_fpr[4] + aot_fpr[0];
    aot_fpr[5] = aot_fpr[1] / aot_fpr[0];
    goto L_08A2F08C;
L_08A2F2E4:
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (16201u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 4056u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A2F364;
      }
      goto L_08A2F304;
    }
L_08A2F304:
    aot_gpr[2] = (32639u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A2F324;
      }
      goto L_08A2F318;
    }
L_08A2F318:
    aot_fpr[0] = aot_fpr[12] - aot_fpr[12];
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F324:
    aot_gpr[31] = (0x08A2F32Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 27u, 0x08A31384u>(ctx, &aot_mem) && ctx.pc == 0x08A2F32Cu) goto L_08A2F32C;
    return;
L_08A2F32C:
    aot_gpr[3] = (aot_gpr[2] & 3u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2F378;
      }
      goto L_08A2F33C;
    }
L_08A2F33C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2F3AC;
      }
      goto L_08A2F344;
    }
L_08A2F344:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A2F398;
      }
      goto L_08A2F34C;
    }
L_08A2F34C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A2F358u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 78u, 0x08A3184Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F358u) goto L_08A2F358;
    return;
L_08A2F358:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F364:
    aot_gpr[31] = (0x08A2F36Cu);
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 78u, 0x08A3184Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F36Cu) goto L_08A2F36C;
    return;
L_08A2F36C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F378:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A2F388u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 25u, 0x08A321E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F388u) goto L_08A2F388;
    return;
L_08A2F388:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) ^ 0x80000000u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F398:
    aot_gpr[31] = (0x08A2F3A0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 25u, 0x08A321E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F3A0u) goto L_08A2F3A0;
    return;
L_08A2F3A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F3AC:
    aot_gpr[31] = (0x08A2F3B4u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 78u, 0x08A3184Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F3B4u) goto L_08A2F3B4;
    return;
L_08A2F3B4:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) ^ 0x80000000u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F3C4:
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = ((aot_gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F3D4:
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = ((aot_gpr[5] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[2] = (aot_gpr[5] >> 23u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-127));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A2F440;
      }
      goto L_08A2F3F0;
    }
L_08A2F3F0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[2] = (127u << 16u);
      if (branch_taken) {
          goto L_08A2F460;
      }
      goto L_08A2F3F8;
    }
L_08A2F3F8:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> (aot_gpr[4] & 31u)));
    aot_gpr[3] = (aot_gpr[6] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A2F438;
      }
      goto L_08A2F40C;
    }
L_08A2F40C:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20428)));
    aot_fpr[1] = __builtin_bit_cast(float, 0u);
    aot_fpr[0] = aot_fpr[12] + aot_fpr[0];
    ctx.set_fpu_condition((aot_fpr[1] < aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_08A2F438;
      }
      goto L_08A2F428;
    }
L_08A2F428:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    aot_gpr[2] = (~(0u | aot_gpr[5]));
      if (branch_taken) {
          goto L_08A2F494;
      }
      goto L_08A2F430;
    }
L_08A2F430:
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[2]);
    goto L_08A2F434;
L_08A2F434:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    goto L_08A2F438;
L_08A2F438:
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F440:
    aot_gpr[2] = (32639u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F438;
      }
      goto L_08A2F454;
    }
L_08A2F454:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[12];
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F460:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20428)));
    aot_fpr[1] = __builtin_bit_cast(float, 0u);
    aot_fpr[0] = aot_fpr[12] + aot_fpr[0];
    ctx.set_fpu_condition((aot_fpr[1] < aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_08A2F438;
      }
      goto L_08A2F480;
    }
L_08A2F480:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2F4AC;
      }
      goto L_08A2F488;
    }
L_08A2F488:
    aot_gpr[6] = (0u + 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    goto L_08A2F438;
L_08A2F494:
    aot_gpr[2] = (128u << 16u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> (aot_gpr[4] & 31u)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[2] = (~(0u | aot_gpr[5]));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[2]);
    goto L_08A2F434;
L_08A2F4AC:
    if (aot_gpr[5] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
        goto L_08A2F438;
    }
    goto L_08A2F4B4;
L_08A2F4B4:
    aot_gpr[6] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    goto L_08A2F438;
L_08A2F4C0:
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[3] = (32640u << 16u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F4D4:
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (16201u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 4056u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A2F550;
      }
      goto L_08A2F4F4;
    }
L_08A2F4F4:
    aot_gpr[2] = (32639u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A2F514;
      }
      goto L_08A2F508;
    }
L_08A2F508:
    aot_fpr[0] = aot_fpr[12] - aot_fpr[12];
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F514:
    aot_gpr[31] = (0x08A2F51Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 27u, 0x08A31384u>(ctx, &aot_mem) && ctx.pc == 0x08A2F51Cu) goto L_08A2F51C;
    return;
L_08A2F51C:
    aot_gpr[3] = (aot_gpr[2] & 3u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2F568;
      }
      goto L_08A2F52C;
    }
L_08A2F52C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2F598;
      }
      goto L_08A2F534;
    }
L_08A2F534:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A2F580;
      }
      goto L_08A2F53C;
    }
L_08A2F53C:
    aot_gpr[31] = (0x08A2F544u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 25u, 0x08A321E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F544u) goto L_08A2F544;
    return;
L_08A2F544:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F550:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[31] = (0x08A2F55Cu);
    aot_gpr[4] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 25u, 0x08A321E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F55Cu) goto L_08A2F55C;
    return;
L_08A2F55C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F568:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A2F574u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 78u, 0x08A3184Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F574u) goto L_08A2F574;
    return;
L_08A2F574:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F580:
    aot_gpr[31] = (0x08A2F588u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 78u, 0x08A3184Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F588u) goto L_08A2F588;
    return;
L_08A2F588:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) ^ 0x80000000u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F598:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A2F5A4u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 25u, 0x08A321E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F5A4u) goto L_08A2F5A4;
    return;
L_08A2F5A4:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) ^ 0x80000000u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F5B4:
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (32639u << 16u);
    aot_gpr[3] = (16201u << 16u);
    aot_gpr[5] = ((aot_gpr[5] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (aot_gpr[3] | 4058u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2F620;
      }
      goto L_08A2F5E8;
    }
L_08A2F5E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08A2F600;
      }
      goto L_08A2F5F0;
    }
L_08A2F5F0:
    aot_fpr[0] = aot_fpr[12] - aot_fpr[12];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F600:
    aot_gpr[31] = (0x08A2F608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 27u, 0x08A31384u>(ctx, &aot_mem) && ctx.pc == 0x08A2F608u) goto L_08A2F608;
    return;
L_08A2F608:
    aot_gpr[2] = (aot_gpr[2] & 1u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[2]);
    goto L_08A2F620;
L_08A2F620:
    aot_gpr[31] = (0x08A2F628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 32u, 0x08A322B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2F628u) goto L_08A2F628;
    return;
L_08A2F628:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F634:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x08A2F650u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0556_entry, 556u, 7u, 0x08A30070u>(ctx, &aot_mem) && ctx.pc == 0x08A2F650u) goto L_08A2F650;
    return;
L_08A2F650:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(6896)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[3];
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A2F674;
      }
      goto L_08A2F664;
    }
L_08A2F664:
    aot_gpr[31] = (0x08A2F66Cu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A2F4C0;
L_08A2F66C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F690;
      }
      goto L_08A2F674;
    }
L_08A2F674:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F690:
    aot_gpr[31] = (0x08A2F698u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A2F3C4;
L_08A2F698:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20440)));
    ctx.set_fpu_condition((aot_fpr[1] < aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A2F674;
      }
      goto L_08A2F6B0;
    }
L_08A2F6B0:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20432));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08A2F6CCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F6CCu) goto L_08A2F6CC;
    return;
L_08A2F6CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_08A2F754;
      }
      goto L_08A2F6EC;
    }
L_08A2F6EC:
    aot_gpr[31] = (0x08A2F6F4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 50u, 0x08A32550u>(ctx, &aot_mem) && ctx.pc == 0x08A2F6F4u) goto L_08A2F6F4;
    return;
L_08A2F6F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F754;
      }
      goto L_08A2F6FC;
    }
L_08A2F6FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A2F730;
      }
      goto L_08A2F708;
    }
L_08A2F708:
    aot_gpr[31] = (0x08A2F710u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08A2F710u) goto L_08A2F710;
    return;
L_08A2F710:
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A2F714;
L_08A2F714:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F730:
    aot_gpr[31] = (0x08A2F738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 85u, 0x08A36498u>(ctx, &aot_mem) && ctx.pc == 0x08A2F738u) goto L_08A2F738;
    return;
L_08A2F738:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08A2F74Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08A2F74Cu) goto L_08A2F74C;
    return;
L_08A2F74C:
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A2F714;
L_08A2F754:
    aot_gpr[31] = (0x08A2F75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 85u, 0x08A36498u>(ctx, &aot_mem) && ctx.pc == 0x08A2F75Cu) goto L_08A2F75C;
    return;
L_08A2F75C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(33));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_08A2F6FC;
L_08A2F768:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x08A2F784u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0556_entry, 556u, 22u, 0x08A303C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F784u) goto L_08A2F784;
    return;
L_08A2F784:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(6896)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[3];
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A2F7A8;
      }
      goto L_08A2F798;
    }
L_08A2F798:
    aot_gpr[31] = (0x08A2F7A0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A2F4C0;
L_08A2F7A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F7C4;
      }
      goto L_08A2F7A8;
    }
L_08A2F7A8:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F7C4:
    aot_gpr[31] = (0x08A2F7CCu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A2F3C4;
L_08A2F7CC:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20452)));
    ctx.set_fpu_condition((aot_fpr[1] < aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A2F7A8;
      }
      goto L_08A2F7E4;
    }
L_08A2F7E4:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20444));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08A2F800u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F800u) goto L_08A2F800;
    return;
L_08A2F800:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_08A2F888;
      }
      goto L_08A2F820;
    }
L_08A2F820:
    aot_gpr[31] = (0x08A2F828u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 50u, 0x08A32550u>(ctx, &aot_mem) && ctx.pc == 0x08A2F828u) goto L_08A2F828;
    return;
L_08A2F828:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F888;
      }
      goto L_08A2F830;
    }
L_08A2F830:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A2F864;
      }
      goto L_08A2F83C;
    }
L_08A2F83C:
    aot_gpr[31] = (0x08A2F844u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08A2F844u) goto L_08A2F844;
    return;
L_08A2F844:
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A2F848;
L_08A2F848:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F864:
    aot_gpr[31] = (0x08A2F86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 85u, 0x08A36498u>(ctx, &aot_mem) && ctx.pc == 0x08A2F86Cu) goto L_08A2F86C;
    return;
L_08A2F86C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08A2F880u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08A2F880u) goto L_08A2F880;
    return;
L_08A2F880:
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A2F848;
L_08A2F888:
    aot_gpr[31] = (0x08A2F890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 85u, 0x08A36498u>(ctx, &aot_mem) && ctx.pc == 0x08A2F890u) goto L_08A2F890;
    return;
L_08A2F890:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(33));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_08A2F830;
L_08A2F89C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x08A2F8C0u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0556_entry, 556u, 40u, 0x08A30708u>(ctx, &aot_mem) && ctx.pc == 0x08A2F8C0u) goto L_08A2F8C0;
    return;
L_08A2F8C0:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(6896)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[3];
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A2F8E4;
      }
      goto L_08A2F8D4;
    }
L_08A2F8D4:
    aot_gpr[31] = (0x08A2F8DCu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A2F4C0;
L_08A2F8DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F904;
      }
      goto L_08A2F8E4;
    }
L_08A2F8E4:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_08A2F8E8;
L_08A2F8E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F904:
    aot_gpr[31] = (0x08A2F90Cu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    goto L_08A2F4C0;
L_08A2F90C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A2F8E4;
      }
      goto L_08A2F914;
    }
L_08A2F914:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[0])) && aot_fpr[20] == aot_fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
        goto L_08A2F8E8;
    }
    goto L_08A2F924;
L_08A2F924:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[21]) || std::isnan(aot_fpr[0])) && aot_fpr[21] == aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_08A2F8E8;
      }
      goto L_08A2F934;
    }
L_08A2F934:
    aot_gpr[31] = (0x08A2F93Cu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F93Cu) goto L_08A2F93C;
    return;
L_08A2F93C:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08A2F94Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F94Cu) goto L_08A2F94C;
    return;
L_08A2F94C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(20456));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_08A2F9CC;
      }
      goto L_08A2F97C;
    }
L_08A2F97C:
    aot_gpr[31] = (0x08A2F984u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 50u, 0x08A32550u>(ctx, &aot_mem) && ctx.pc == 0x08A2F984u) goto L_08A2F984;
    return;
L_08A2F984:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F9CC;
      }
      goto L_08A2F98C;
    }
L_08A2F98C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A2F9A8;
      }
      goto L_08A2F998;
    }
L_08A2F998:
    aot_gpr[31] = (0x08A2F9A0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08A2F9A0u) goto L_08A2F9A0;
    return;
L_08A2F9A0:
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A2F8E4;
L_08A2F9A8:
    aot_gpr[31] = (0x08A2F9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 85u, 0x08A36498u>(ctx, &aot_mem) && ctx.pc == 0x08A2F9B0u) goto L_08A2F9B0;
    return;
L_08A2F9B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08A2F9C4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08A2F9C4u) goto L_08A2F9C4;
    return;
L_08A2F9C4:
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A2F8E4;
L_08A2F9CC:
    aot_gpr[31] = (0x08A2F9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 85u, 0x08A36498u>(ctx, &aot_mem) && ctx.pc == 0x08A2F9D4u) goto L_08A2F9D4;
    return;
L_08A2F9D4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(33));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_08A2F98C;
L_08A2F9E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[31] = (0x08A2FA0Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0556_entry, 556u, 94u, 0x08A309F4u>(ctx, &aot_mem) && ctx.pc == 0x08A2FA0Cu) goto L_08A2FA0C;
    return;
L_08A2FA0C:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(6896)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[3];
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A2FA30;
      }
      goto L_08A2FA20;
    }
L_08A2FA20:
    aot_gpr[31] = (0x08A2FA28u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A2F4C0;
L_08A2FA28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FA58;
      }
      goto L_08A2FA30;
    }
L_08A2FA30:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FA58:
    aot_gpr[31] = (0x08A2FA60u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_08A2F4C0;
L_08A2FA60:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A2FA30;
      }
      goto L_08A2FA68;
    }
L_08A2FA68:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[0])) && aot_fpr[20] == aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A2FA30;
      }
      goto L_08A2FA78;
    }
L_08A2FA78:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20464));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FA94u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FA94u) goto L_08A2FA94;
    return;
L_08A2FA94:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[17] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FAACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FAACu) goto L_08A2FAAC;
    return;
L_08A2FAAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[18] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A2FB10;
      }
      goto L_08A2FAB8;
    }
L_08A2FAB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    goto L_08A2FAC0;
L_08A2FAC0:
    aot_gpr[31] = (0x08A2FAC8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 50u, 0x08A32550u>(ctx, &aot_mem) && ctx.pc == 0x08A2FAC8u) goto L_08A2FAC8;
    return;
L_08A2FAC8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FB34;
      }
      goto L_08A2FAD0;
    }
L_08A2FAD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A2FB48;
      }
      goto L_08A2FADC;
    }
L_08A2FADC:
    aot_gpr[31] = (0x08A2FAE4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08A2FAE4u) goto L_08A2FAE4;
    return;
L_08A2FAE4:
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A2FAE8;
L_08A2FAE8:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FB10:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[31] = (0x08A2FB24u);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A2FB24u) goto L_08A2FB24;
    return;
L_08A2FB24:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A2FAC0;
      }
      goto L_08A2FB34;
    }
L_08A2FB34:
    aot_gpr[31] = (0x08A2FB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 85u, 0x08A36498u>(ctx, &aot_mem) && ctx.pc == 0x08A2FB3Cu) goto L_08A2FB3C;
    return;
L_08A2FB3C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(33));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_08A2FAD0;
L_08A2FB48:
    aot_gpr[31] = (0x08A2FB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 85u, 0x08A36498u>(ctx, &aot_mem) && ctx.pc == 0x08A2FB50u) goto L_08A2FB50;
    return;
L_08A2FB50:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08A2FB64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08A2FB64u) goto L_08A2FB64;
    return;
L_08A2FB64:
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A2FAE8;
L_08A2FB6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[31] = (0x08A2FBA4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[23]));
    if (rt.invoke_chained_direct<&recomp_unit_0556_entry, 556u, 128u, 0x08A30BDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2FBA4u) goto L_08A2FBA4;
    return;
L_08A2FBA4:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(6896)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[3];
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A2FBC8;
      }
      goto L_08A2FBB8;
    }
L_08A2FBB8:
    aot_gpr[31] = (0x08A2FBC0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_08A2F4C0;
L_08A2FBC0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FBFC;
      }
      goto L_08A2FBC8;
    }
L_08A2FBC8:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A2FBCC;
L_08A2FBCC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08A2FBD0;
L_08A2FBD0:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[23] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FBFC:
    aot_gpr[31] = (0x08A2FC04u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    goto L_08A2F4C0;
L_08A2FC04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[23] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A2FCC8;
      }
      goto L_08A2FC0C;
    }
L_08A2FC0C:
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[22]) || std::isnan(aot_fpr[0])) && aot_fpr[22] == aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A2FBC8;
      }
      goto L_08A2FC20;
    }
L_08A2FC20:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20472));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FC3Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FC3Cu) goto L_08A2FC3C;
    return;
L_08A2FC3C:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[17] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FC54u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FC54u) goto L_08A2FC54;
    return;
L_08A2FC54:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
      if (branch_taken) {
          goto L_08A2FD28;
      }
      goto L_08A2FC6C;
    }
L_08A2FC6C:
    aot_gpr[31] = (0x08A2FC74u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 50u, 0x08A32550u>(ctx, &aot_mem) && ctx.pc == 0x08A2FC74u) goto L_08A2FC74;
    return;
L_08A2FC74:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FE90;
      }
      goto L_08A2FC7C;
    }
L_08A2FC7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A2FC80;
L_08A2FC80:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A2FD40;
      }
      goto L_08A2FC88;
    }
L_08A2FC88:
    aot_gpr[31] = (0x08A2FC90u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08A2FC90u) goto L_08A2FC90;
    return;
L_08A2FC90:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A2FC94;
L_08A2FC94:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[23] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FCC8:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[21]) || std::isnan(aot_fpr[23])) && aot_fpr[21] == aot_fpr[23]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2FD64;
      }
      goto L_08A2FCD8;
    }
L_08A2FCD8:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[22]) || std::isnan(aot_fpr[23])) && aot_fpr[22] == aot_fpr[23]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
      if (branch_taken) {
          goto L_08A2FE10;
      }
      goto L_08A2FCE8;
    }
L_08A2FCE8:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20472));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FD04u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FD04u) goto L_08A2FD04;
    return;
L_08A2FD04:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FD14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FD14u) goto L_08A2FD14;
    return;
L_08A2FD14:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_08A2FC6C;
      }
      goto L_08A2FD28;
    }
L_08A2FD28:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20480)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20484)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    goto L_08A2FC7C;
L_08A2FD40:
    aot_gpr[31] = (0x08A2FD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 85u, 0x08A36498u>(ctx, &aot_mem) && ctx.pc == 0x08A2FD48u) goto L_08A2FD48;
    return;
L_08A2FD48:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08A2FD5Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08A2FD5Cu) goto L_08A2FD5C;
    return;
L_08A2FD5C:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A2FC94;
L_08A2FD64:
    aot_gpr[31] = (0x08A2FD6Cu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 75u, 0x08A32778u>(ctx, &aot_mem) && ctx.pc == 0x08A2FD6Cu) goto L_08A2FD6C;
    return;
L_08A2FD6C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A2FEA4;
      }
      goto L_08A2FD74;
    }
L_08A2FD74:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[0])) && aot_fpr[20] == aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08A2FBCC;
      }
      goto L_08A2FD84;
    }
L_08A2FD84:
    aot_gpr[31] = (0x08A2FD8Cu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 75u, 0x08A32778u>(ctx, &aot_mem) && ctx.pc == 0x08A2FD8Cu) goto L_08A2FD8C;
    return;
L_08A2FD8C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08A2FBCC;
      }
      goto L_08A2FD94;
    }
L_08A2FD94:
    aot_gpr[31] = (0x08A2FD9Cu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 75u, 0x08A32778u>(ctx, &aot_mem) && ctx.pc == 0x08A2FD9Cu) goto L_08A2FD9C;
    return;
L_08A2FD9C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A2FBC8;
      }
      goto L_08A2FDA4;
    }
L_08A2FDA4:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(20472));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[31] = (0x08A2FDC0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FDC0u) goto L_08A2FDC0;
    return;
L_08A2FDC0:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FDD0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FDD0u) goto L_08A2FDD0;
    return;
L_08A2FDD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    goto L_08A2FDE0;
L_08A2FDE0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_08A2FDE4;
L_08A2FDE4:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2FDFC;
      }
      goto L_08A2FDEC;
    }
L_08A2FDEC:
    aot_gpr[31] = (0x08A2FDF4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 50u, 0x08A32550u>(ctx, &aot_mem) && ctx.pc == 0x08A2FDF4u) goto L_08A2FDF4;
    return;
L_08A2FDF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A2FC80;
      }
      goto L_08A2FDFC;
    }
L_08A2FDFC:
    aot_gpr[31] = (0x08A2FE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 85u, 0x08A36498u>(ctx, &aot_mem) && ctx.pc == 0x08A2FE04u) goto L_08A2FE04;
    return;
L_08A2FE04:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(34));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_08A2FC7C;
L_08A2FE10:
    aot_gpr[31] = (0x08A2FE18u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 75u, 0x08A32778u>(ctx, &aot_mem) && ctx.pc == 0x08A2FE18u) goto L_08A2FE18;
    return;
L_08A2FE18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08A2FBCC;
      }
      goto L_08A2FE20;
    }
L_08A2FE20:
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[23]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08A2FBD0;
      }
      goto L_08A2FE30;
    }
L_08A2FE30:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20472));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FE50u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FE50u) goto L_08A2FE50;
    return;
L_08A2FE50:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FE60u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FE60u) goto L_08A2FE60;
    return;
L_08A2FE60:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A2FF44;
      }
      goto L_08A2FE6C;
    }
L_08A2FE6C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6892)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6888)));
    aot_gpr[4] = (32768u << 16u);
    aot_gpr[3] = (aot_gpr[7] ^ aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A2FC6C;
      }
      goto L_08A2FE90;
    }
L_08A2FE90:
    aot_gpr[31] = (0x08A2FE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 85u, 0x08A36498u>(ctx, &aot_mem) && ctx.pc == 0x08A2FE98u) goto L_08A2FE98;
    return;
L_08A2FE98:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(33));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_08A2FC7C;
L_08A2FEA4:
    aot_gpr[31] = (0x08A2FEACu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 75u, 0x08A32778u>(ctx, &aot_mem) && ctx.pc == 0x08A2FEACu) goto L_08A2FEAC;
    return;
L_08A2FEAC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A2FD74;
      }
      goto L_08A2FEB4;
    }
L_08A2FEB4:
    aot_gpr[31] = (0x08A2FEBCu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 75u, 0x08A32778u>(ctx, &aot_mem) && ctx.pc == 0x08A2FEBCu) goto L_08A2FEBC;
    return;
L_08A2FEBC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A2FD74;
      }
      goto L_08A2FEC4;
    }
L_08A2FEC4:
    aot_gpr[31] = (0x08A2FECCu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A2F4C0;
L_08A2FECC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
      if (branch_taken) {
          goto L_08A2FF50;
      }
      goto L_08A2FED4;
    }
L_08A2FED4:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20472));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FEF0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FEF0u) goto L_08A2FEF0;
    return;
L_08A2FEF0:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FF00u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FF00u) goto L_08A2FF00;
    return;
L_08A2FF00:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A2FF44;
      }
      goto L_08A2FF0C;
    }
L_08A2FF0C:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[31] = (0x08A2FF20u);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A2FF20u) goto L_08A2FF20;
    return;
L_08A2FF20:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A2FC6C;
      }
      goto L_08A2FF30;
    }
L_08A2FF30:
    aot_gpr[31] = (0x08A2FF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 85u, 0x08A36498u>(ctx, &aot_mem) && ctx.pc == 0x08A2FF38u) goto L_08A2FF38;
    return;
L_08A2FF38:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(33));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_08A2FC7C;
L_08A2FF44:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    goto L_08A2FC6C;
L_08A2FF50:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20472));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FF6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FF6Cu) goto L_08A2FF6C;
    return;
L_08A2FF6C:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08A2FF7Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FF7Cu) goto L_08A2FF7C;
    return;
L_08A2FF7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[18] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A2FFFC;
      }
      goto L_08A2FF88;
    }
L_08A2FF88:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20488)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20492)));
    ctx.set_fpu_condition((aot_fpr[21] < aot_fpr[23]));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A2FDEC;
      }
      goto L_08A2FFB0;
    }
L_08A2FFB0:
    aot_gpr[31] = (0x08A2FFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FFB8u) goto L_08A2FFB8;
    return;
L_08A2FFB8:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x08A2FFCCu);
    aot_gpr[17] = (aot_gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 51u, 0x08A32558u>(ctx, &aot_mem) && ctx.pc == 0x08A2FFCCu) goto L_08A2FFCC;
    return;
L_08A2FFCC:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A2FFE0u);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 164u, 0x08A3FC08u>(ctx, &aot_mem) && ctx.pc == 0x08A2FFE0u) goto L_08A2FFE0;
    return;
L_08A2FFE0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A2FDEC;
      }
      goto L_08A2FFE8;
    }
L_08A2FFE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20496)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20500)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    goto L_08A2FDEC;
L_08A2FFFC:
    aot_gpr[2] = (2215u << 16u);
    ctx.pc = 0x08A30000u; return;
}

void recomp_unit_0555(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0555_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_555(Runtime &runtime) {
    runtime.register_generated_unit(555u, 0x08A2F000u, 4096u, &recomp_unit_0555, &recomp_unit_0555_entry);
    runtime.register_function(0x08A2F000u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F008u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F038u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F048u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F04Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F064u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F078u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F088u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F08Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F140u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F180u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F19Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F1A4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F1CCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F1ECu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F200u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F208u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F21Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F230u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F24Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F264u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F274u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F288u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F29Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F2C0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F2E4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F304u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F318u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F324u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F32Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F33Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F344u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F34Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F358u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F364u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F36Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F378u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F388u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F398u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F3A0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F3ACu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F3B4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F3C4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F3D4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F3F0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F3F8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F40Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F428u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F430u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F434u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F438u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F440u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F454u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F460u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F480u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F488u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F494u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F4ACu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F4B4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F4C0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F4D4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F4F4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F508u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F514u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F51Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F52Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F534u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F53Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F544u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F550u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F55Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F568u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F574u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F580u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F588u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F598u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F5A4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F5B4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F5E8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F5F0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F600u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F608u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F620u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F628u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F634u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F650u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F664u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F66Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F674u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F690u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F698u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F6B0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F6CCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F6ECu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F6F4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F6FCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F708u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F710u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F714u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F730u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F738u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F74Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F754u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F75Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F768u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F784u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F798u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F7A0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F7A8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F7C4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F7CCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F7E4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F800u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F820u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F828u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F830u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F83Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F844u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F848u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F864u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F86Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F880u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F888u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F890u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F89Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F8C0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F8D4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F8DCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F8E4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F8E8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F904u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F90Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F914u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F924u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F934u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F93Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F94Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F97Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F984u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F98Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F998u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F9A0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F9A8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F9B0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F9C4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F9CCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F9D4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2F9E0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FA0Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FA20u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FA28u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FA30u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FA58u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FA60u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FA68u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FA78u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FA94u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FAACu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FAB8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FAC0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FAC8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FAD0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FADCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FAE4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FAE8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FB10u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FB24u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FB34u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FB3Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FB48u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FB50u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FB64u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FB6Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FBA4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FBB8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FBC0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FBC8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FBCCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FBD0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FBFCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FC04u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FC0Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FC20u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FC3Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FC54u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FC6Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FC74u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FC7Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FC80u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FC88u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FC90u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FC94u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FCC8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FCD8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FCE8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD04u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD14u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD28u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD40u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD48u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD5Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD64u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD6Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD74u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD84u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD8Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD94u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FD9Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FDA4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FDC0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FDD0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FDE0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FDE4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FDECu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FDF4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FDFCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FE04u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FE10u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FE18u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FE20u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FE30u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FE50u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FE60u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FE6Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FE90u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FE98u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FEA4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FEACu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FEB4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FEBCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FEC4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FECCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FED4u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FEF0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FF00u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FF0Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FF20u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FF30u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FF38u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FF44u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FF50u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FF6Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FF7Cu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FF88u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FFB0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FFB8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FFCCu, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FFE0u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FFE8u, &recomp_unit_0555, "recomp_unit_0555");
    runtime.register_function(0x08A2FFFCu, &recomp_unit_0555, "recomp_unit_0555");
}
} // namespace psprecomp
