#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0539[1021] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 29, 30, 0, 31, 0,
    0, 32, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0, 0,
    0, 0, 0, 41, 0, 0, 42, 0, 43, 0, 44, 0, 0, 45, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0,
    77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0,
    88, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 98, 0, 99, 0, 0, 0,
    100, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0,
    0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0,
    0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 130, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 135, 136, 0, 0, 0,
    0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 143, 0, 144, 0, 0, 145, 0, 146, 147, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157,
    0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0,
    206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0,
    0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 219, 220,
    0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226,
};
void recomp_unit_0539_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A1F004u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0539[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A1F004;
    case 2u: goto L_08A1F02C;
    case 3u: goto L_08A1F05C;
    case 4u: goto L_08A1F064;
    case 5u: goto L_08A1F06C;
    case 6u: goto L_08A1F084;
    case 7u: goto L_08A1F094;
    case 8u: goto L_08A1F09C;
    case 9u: goto L_08A1F0A4;
    case 10u: goto L_08A1F0C8;
    case 11u: goto L_08A1F0E0;
    case 12u: goto L_08A1F104;
    case 13u: goto L_08A1F10C;
    case 14u: goto L_08A1F140;
    case 15u: goto L_08A1F150;
    case 16u: goto L_08A1F160;
    case 17u: goto L_08A1F190;
    case 18u: goto L_08A1F1A8;
    case 19u: goto L_08A1F1C8;
    case 20u: goto L_08A1F1EC;
    case 21u: goto L_08A1F220;
    case 22u: goto L_08A1F234;
    case 23u: goto L_08A1F24C;
    case 24u: goto L_08A1F258;
    case 25u: goto L_08A1F260;
    case 26u: goto L_08A1F294;
    case 27u: goto L_08A1F2DC;
    case 28u: goto L_08A1F2E8;
    case 29u: goto L_08A1F2F0;
    case 30u: goto L_08A1F2F4;
    case 31u: goto L_08A1F2FC;
    case 32u: goto L_08A1F308;
    case 33u: goto L_08A1F310;
    case 34u: goto L_08A1F324;
    case 35u: goto L_08A1F338;
    case 36u: goto L_08A1F340;
    case 37u: goto L_08A1F348;
    case 38u: goto L_08A1F35C;
    case 39u: goto L_08A1F370;
    case 40u: goto L_08A1F378;
    case 41u: goto L_08A1F390;
    case 42u: goto L_08A1F39C;
    case 43u: goto L_08A1F3A4;
    case 44u: goto L_08A1F3AC;
    case 45u: goto L_08A1F3B8;
    case 46u: goto L_08A1F3BC;
    case 47u: goto L_08A1F3D0;
    case 48u: goto L_08A1F3F4;
    case 49u: goto L_08A1F424;
    case 50u: goto L_08A1F438;
    case 51u: goto L_08A1F44C;
    case 52u: goto L_08A1F460;
    case 53u: goto L_08A1F474;
    case 54u: goto L_08A1F488;
    case 55u: goto L_08A1F49C;
    case 56u: goto L_08A1F4B0;
    case 57u: goto L_08A1F4C4;
    case 58u: goto L_08A1F4D8;
    case 59u: goto L_08A1F4EC;
    case 60u: goto L_08A1F500;
    case 61u: goto L_08A1F514;
    case 62u: goto L_08A1F574;
    case 63u: goto L_08A1F588;
    case 64u: goto L_08A1F59C;
    case 65u: goto L_08A1F5B0;
    case 66u: goto L_08A1F5C4;
    case 67u: goto L_08A1F5D8;
    case 68u: goto L_08A1F5E8;
    case 69u: goto L_08A1F5F0;
    case 70u: goto L_08A1F610;
    case 71u: goto L_08A1F624;
    case 72u: goto L_08A1F62C;
    case 73u: goto L_08A1F634;
    case 74u: goto L_08A1F65C;
    case 75u: goto L_08A1F668;
    case 76u: goto L_08A1F674;
    case 77u: goto L_08A1F684;
    case 78u: goto L_08A1F694;
    case 79u: goto L_08A1F6A4;
    case 80u: goto L_08A1F6B0;
    case 81u: goto L_08A1F6C4;
    case 82u: goto L_08A1F6CC;
    case 83u: goto L_08A1F6D8;
    case 84u: goto L_08A1F6E0;
    case 85u: goto L_08A1F6E8;
    case 86u: goto L_08A1F6F0;
    case 87u: goto L_08A1F6F8;
    case 88u: goto L_08A1F704;
    case 89u: goto L_08A1F708;
    case 90u: goto L_08A1F718;
    case 91u: goto L_08A1F72C;
    case 92u: goto L_08A1F734;
    case 93u: goto L_08A1F740;
    case 94u: goto L_08A1F748;
    case 95u: goto L_08A1F750;
    case 96u: goto L_08A1F75C;
    case 97u: goto L_08A1F768;
    case 98u: goto L_08A1F76C;
    case 99u: goto L_08A1F774;
    case 100u: goto L_08A1F784;
    case 101u: goto L_08A1F78C;
    case 102u: goto L_08A1F798;
    case 103u: goto L_08A1F7A0;
    case 104u: goto L_08A1F7B4;
    case 105u: goto L_08A1F7C8;
    case 106u: goto L_08A1F7DC;
    case 107u: goto L_08A1F7F0;
    case 108u: goto L_08A1F82C;
    case 109u: goto L_08A1F840;
    case 110u: goto L_08A1F84C;
    case 111u: goto L_08A1F85C;
    case 112u: goto L_08A1F870;
    case 113u: goto L_08A1F87C;
    case 114u: goto L_08A1F88C;
    case 115u: goto L_08A1F8A0;
    case 116u: goto L_08A1F8A8;
    case 117u: goto L_08A1F8B8;
    case 118u: goto L_08A1F8CC;
    case 119u: goto L_08A1F8DC;
    case 120u: goto L_08A1F8F0;
    case 121u: goto L_08A1F8F8;
    case 122u: goto L_08A1F904;
    case 123u: goto L_08A1F914;
    case 124u: goto L_08A1F93C;
    case 125u: goto L_08A1F970;
    case 126u: goto L_08A1F988;
    case 127u: goto L_08A1F990;
    case 128u: goto L_08A1F99C;
    case 129u: goto L_08A1F9AC;
    case 130u: goto L_08A1F9B4;
    case 131u: goto L_08A1F9B8;
    case 132u: goto L_08A1F9CC;
    case 133u: goto L_08A1F9D4;
    case 134u: goto L_08A1F9E0;
    case 135u: goto L_08A1F9F0;
    case 136u: goto L_08A1F9F4;
    case 137u: goto L_08A1FA08;
    case 138u: goto L_08A1FA10;
    case 139u: goto L_08A1FA18;
    case 140u: goto L_08A1FA2C;
    case 141u: goto L_08A1FA38;
    case 142u: goto L_08A1FA48;
    case 143u: goto L_08A1FA4C;
    case 144u: goto L_08A1FA54;
    case 145u: goto L_08A1FA60;
    case 146u: goto L_08A1FA68;
    case 147u: goto L_08A1FA6C;
    case 148u: goto L_08A1FA80;
    case 149u: goto L_08A1FAA4;
    case 150u: goto L_08A1FAB0;
    case 151u: goto L_08A1FAB8;
    case 152u: goto L_08A1FAC8;
    case 153u: goto L_08A1FAD0;
    case 154u: goto L_08A1FAE0;
    case 155u: goto L_08A1FAE8;
    case 156u: goto L_08A1FAF8;
    case 157u: goto L_08A1FB00;
    case 158u: goto L_08A1FB10;
    case 159u: goto L_08A1FB18;
    case 160u: goto L_08A1FB28;
    case 161u: goto L_08A1FB30;
    case 162u: goto L_08A1FB48;
    case 163u: goto L_08A1FB50;
    case 164u: goto L_08A1FB5C;
    case 165u: goto L_08A1FB64;
    case 166u: goto L_08A1FB88;
    case 167u: goto L_08A1FBAC;
    case 168u: goto L_08A1FBB4;
    case 169u: goto L_08A1FBBC;
    case 170u: goto L_08A1FBD8;
    case 171u: goto L_08A1FBFC;
    case 172u: goto L_08A1FC04;
    case 173u: goto L_08A1FC28;
    case 174u: goto L_08A1FC30;
    case 175u: goto L_08A1FC54;
    case 176u: goto L_08A1FC64;
    case 177u: goto L_08A1FC88;
    case 178u: goto L_08A1FC94;
    case 179u: goto L_08A1FC9C;
    case 180u: goto L_08A1FCA4;
    case 181u: goto L_08A1FCB0;
    case 182u: goto L_08A1FCBC;
    case 183u: goto L_08A1FCC4;
    case 184u: goto L_08A1FCCC;
    case 185u: goto L_08A1FCD4;
    case 186u: goto L_08A1FCEC;
    case 187u: goto L_08A1FCF4;
    case 188u: goto L_08A1FD18;
    case 189u: goto L_08A1FD20;
    case 190u: goto L_08A1FD2C;
    case 191u: goto L_08A1FD34;
    case 192u: goto L_08A1FD4C;
    case 193u: goto L_08A1FD54;
    case 194u: goto L_08A1FD78;
    case 195u: goto L_08A1FD90;
    case 196u: goto L_08A1FDB4;
    case 197u: goto L_08A1FDF8;
    case 198u: goto L_08A1FE08;
    case 199u: goto L_08A1FE14;
    case 200u: goto L_08A1FE30;
    case 201u: goto L_08A1FE38;
    case 202u: goto L_08A1FE48;
    case 203u: goto L_08A1FE4C;
    case 204u: goto L_08A1FE60;
    case 205u: goto L_08A1FE6C;
    case 206u: goto L_08A1FE84;
    case 207u: goto L_08A1FE90;
    case 208u: goto L_08A1FEC8;
    case 209u: goto L_08A1FED8;
    case 210u: goto L_08A1FEF4;
    case 211u: goto L_08A1FEFC;
    case 212u: goto L_08A1FF08;
    case 213u: goto L_08A1FF18;
    case 214u: goto L_08A1FF20;
    case 215u: goto L_08A1FF38;
    case 216u: goto L_08A1FF48;
    case 217u: goto L_08A1FF6C;
    case 218u: goto L_08A1FF74;
    case 219u: goto L_08A1FF7C;
    case 220u: goto L_08A1FF80;
    case 221u: goto L_08A1FF94;
    case 222u: goto L_08A1FF9C;
    case 223u: goto L_08A1FFB4;
    case 224u: goto L_08A1FFC4;
    case 225u: goto L_08A1FFEC;
    case 226u: goto L_08A1FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A1F004:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F02C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A1F05C;
L_08A1F05C:
    aot_gpr[31] = (0x08A1F064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1F064u) goto L_08A1F064;
    return;
L_08A1F064:
    aot_gpr[31] = (0x08A1F06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A1F06Cu) goto L_08A1F06C;
    return;
L_08A1F06C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1F084u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_08A1F10C;
L_08A1F084:
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1F0A4;
      }
      goto L_08A1F094;
    }
L_08A1F094:
    aot_gpr[31] = (0x08A1F09Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 123u, 0x08A466ECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F09Cu) goto L_08A1F09C;
    return;
L_08A1F09C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A1F05C;
      }
      goto L_08A1F0A4;
    }
L_08A1F0A4:
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
L_08A1F0C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1F104;
      }
      goto L_08A1F0E0;
    }
L_08A1F0E0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A1F0E0;
      }
      goto L_08A1F104;
    }
L_08A1F104:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F10C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-12320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12292), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12296), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12300), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12304), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] - aot_gpr[7]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12288), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12308), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A1F1C8;
      }
      goto L_08A1F140;
    }
L_08A1F140:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A1F150u);
    aot_gpr[6] = (0u | 12288u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F150u) goto L_08A1F150;
    return;
L_08A1F150:
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A1F160u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A1F160u) goto L_08A1F160;
    return;
L_08A1F160:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(508)));
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(508), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(448)));
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A1F190u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1F190u) goto L_08A1F190;
    return;
L_08A1F190:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A1F1A8u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F1A8u) goto L_08A1F1A8;
    return;
L_08A1F1A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12288)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12292)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12296)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12300)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12304)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12308)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(12320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F1C8:
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12288)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12292)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12296)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12300)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12304)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12308)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(12320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F1EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(396)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(476), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1F260;
      }
      goto L_08A1F220;
    }
L_08A1F220:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[31] = (0x08A1F234u);
    aot_fpr[20] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 192u, 0x08A3FE28u>(ctx, &aot_mem) && ctx.pc == 0x08A1F234u) goto L_08A1F234;
    return;
L_08A1F234:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(308)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A1F24Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F24Cu) goto L_08A1F24C;
    return;
L_08A1F24C:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A1F258u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08A1F258u) goto L_08A1F258;
    return;
L_08A1F258:
    aot_fpr[12] = aot_fpr[20] / aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08A1F260;
L_08A1F260:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[5] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(432), aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), aot_gpr[4]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
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
L_08A1F294:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1F2DCu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F2DCu) goto L_08A1F2DC;
    return;
L_08A1F2DC:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1F2F4;
      }
      goto L_08A1F2E8;
    }
L_08A1F2E8:
    aot_gpr[31] = (0x08A1F2F0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1F2F0u) goto L_08A1F2F0;
    return;
L_08A1F2F0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_08A1F2F4;
L_08A1F2F4:
    aot_gpr[31] = (0x08A1F2FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(328)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1F2FCu) goto L_08A1F2FC;
    return;
L_08A1F2FC:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) <= 0;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1F310;
      }
      goto L_08A1F308;
    }
L_08A1F308:
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-1))))));
    goto L_08A1F310;
L_08A1F310:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A1F340;
      }
      goto L_08A1F324;
    }
L_08A1F324:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1F338u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 27u, 0x08A1E274u>(ctx, &aot_mem) && ctx.pc == 0x08A1F338u) goto L_08A1F338;
    return;
L_08A1F338:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A1F3B8;
      }
      goto L_08A1F340;
    }
L_08A1F340:
    if (static_cast<std::int32_t>(aot_gpr[20]) <= 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(232)));
        goto L_08A1F3BC;
    }
    goto L_08A1F348;
L_08A1F348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(232)));
        goto L_08A1F3BC;
    }
    goto L_08A1F35C;
L_08A1F35C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(384)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(336)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(232)));
        goto L_08A1F3BC;
    }
    goto L_08A1F370;
L_08A1F370:
    aot_gpr[31] = (0x08A1F378u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1F378u) goto L_08A1F378;
    return;
L_08A1F378:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(328)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(332)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(352)));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A1F390u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 155u, 0x08A46904u>(ctx, &aot_mem) && ctx.pc == 0x08A1F390u) goto L_08A1F390;
    return;
L_08A1F390:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(352), aot_gpr[2]);
    aot_gpr[31] = (0x08A1F39Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 170u, 0x08A1EDF4u>(ctx, &aot_mem) && ctx.pc == 0x08A1F39Cu) goto L_08A1F39C;
    return;
L_08A1F39C:
    aot_gpr[31] = (0x08A1F3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1F3A4u) goto L_08A1F3A4;
    return;
L_08A1F3A4:
    aot_gpr[31] = (0x08A1F3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A1F3ACu) goto L_08A1F3AC;
    return;
L_08A1F3AC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A1F3B8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 128u, 0x08A1E9DCu>(ctx, &aot_mem) && ctx.pc == 0x08A1F3B8u) goto L_08A1F3B8;
    return;
L_08A1F3B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(232)));
    goto L_08A1F3BC;
L_08A1F3BC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1F3D0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F3D0u) goto L_08A1F3D0;
    return;
L_08A1F3D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F3F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08A1F424u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A1F424u) goto L_08A1F424;
    return;
L_08A1F424:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17096));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A1F438u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 13u, 0x08A1E094u>(ctx, &aot_mem) && ctx.pc == 0x08A1F438u) goto L_08A1F438;
    return;
L_08A1F438:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(420));
    aot_gpr[31] = (0x08A1F44Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(312));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 103u, 0x08A0063Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F44Cu) goto L_08A1F44C;
    return;
L_08A1F44C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(448));
    aot_gpr[31] = (0x08A1F460u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F460u) goto L_08A1F460;
    return;
L_08A1F460:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F474u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F474u) goto L_08A1F474;
    return;
L_08A1F474:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(480));
    aot_gpr[31] = (0x08A1F488u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F488u) goto L_08A1F488;
    return;
L_08A1F488:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F49Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F49Cu) goto L_08A1F49C;
    return;
L_08A1F49C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(488));
    aot_gpr[31] = (0x08A1F4B0u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(344));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F4B0u) goto L_08A1F4B0;
    return;
L_08A1F4B0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F4C4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F4C4u) goto L_08A1F4C4;
    return;
L_08A1F4C4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(492));
    aot_gpr[31] = (0x08A1F4D8u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F4D8u) goto L_08A1F4D8;
    return;
L_08A1F4D8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F4ECu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F4ECu) goto L_08A1F4EC;
    return;
L_08A1F4EC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(468));
    aot_gpr[31] = (0x08A1F500u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(372));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F500u) goto L_08A1F500;
    return;
L_08A1F500:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F514u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F514u) goto L_08A1F514;
    return;
L_08A1F514:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(468)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(488)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_fpr[16] = aot_fpr[16] + aot_fpr[15];
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    aot_fpr[15] = aot_fpr[12] - aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(412), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[15] - aot_fpr[14];
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[16] + aot_fpr[14];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(396));
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(388));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[31] = (0x08A1F574u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(424), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F574u) goto L_08A1F574;
    return;
L_08A1F574:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F588u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F588u) goto L_08A1F588;
    return;
L_08A1F588:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(332));
    aot_gpr[31] = (0x08A1F59Cu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(404));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F59Cu) goto L_08A1F59C;
    return;
L_08A1F59C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F5B0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F5B0u) goto L_08A1F5B0;
    return;
L_08A1F5B0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(336));
    aot_gpr[31] = (0x08A1F5C4u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(416));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F5C4u) goto L_08A1F5C4;
    return;
L_08A1F5C4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F5D8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F5D8u) goto L_08A1F5D8;
    return;
L_08A1F5D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08A1F5E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(332), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1F5E8u) goto L_08A1F5E8;
    return;
L_08A1F5E8:
    aot_gpr[31] = (0x08A1F5F0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F5F0u) goto L_08A1F5F0;
    return;
L_08A1F5F0:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(428));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 129u);
    aot_gpr[31] = (0x08A1F610u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F610u) goto L_08A1F610;
    return;
L_08A1F610:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(328), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1F624u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F624u) goto L_08A1F624;
    return;
L_08A1F624:
    aot_gpr[31] = (0x08A1F62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1F62Cu) goto L_08A1F62C;
    return;
L_08A1F62C:
    aot_gpr[31] = (0x08A1F634u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F634u) goto L_08A1F634;
    return;
L_08A1F634:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(336)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 134u);
    aot_gpr[31] = (0x08A1F65Cu);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F65Cu) goto L_08A1F65C;
    return;
L_08A1F65C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(428), aot_gpr[2]);
    aot_gpr[31] = (0x08A1F668u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 21u, 0x08A1E1CCu>(ctx, &aot_mem) && ctx.pc == 0x08A1F668u) goto L_08A1F668;
    return;
L_08A1F668:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A1F674u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F674u) goto L_08A1F674;
    return;
L_08A1F674:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1F684u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F684u) goto L_08A1F684;
    return;
L_08A1F684:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x08A1F694u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(472));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F694u) goto L_08A1F694;
    return;
L_08A1F694:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1F6A4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F6A4u) goto L_08A1F6A4;
    return;
L_08A1F6A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A1F6E0;
      }
      goto L_08A1F6B0;
    }
L_08A1F6B0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(484));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A1F6C4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F6C4u) goto L_08A1F6C4;
    return;
L_08A1F6C4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1F6D8;
      }
      goto L_08A1F6CC;
    }
L_08A1F6CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(444), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A1F708;
      }
      goto L_08A1F6D8;
    }
L_08A1F6D8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(444), 0u);
      if (branch_taken) {
          goto L_08A1F708;
      }
      goto L_08A1F6E0;
    }
L_08A1F6E0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A1F708;
      }
      goto L_08A1F6E8;
    }
L_08A1F6E8:
    aot_gpr[31] = (0x08A1F6F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(492));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F6F0u) goto L_08A1F6F0;
    return;
L_08A1F6F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1F704;
      }
      goto L_08A1F6F8;
    }
L_08A1F6F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(444), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A1F708;
      }
      goto L_08A1F704;
    }
L_08A1F704:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(444), 0u);
    goto L_08A1F708;
L_08A1F708:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(440));
    aot_gpr[31] = (0x08A1F718u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(500));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F718u) goto L_08A1F718;
    return;
L_08A1F718:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F72Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F72Cu) goto L_08A1F72C;
    return;
L_08A1F72C:
    aot_gpr[31] = (0x08A1F734u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F734u) goto L_08A1F734;
    return;
L_08A1F734:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1F740u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F740u) goto L_08A1F740;
    return;
L_08A1F740:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(444)));
        goto L_08A1F76C;
    }
    goto L_08A1F748;
L_08A1F748:
    aot_gpr[31] = (0x08A1F750u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F750u) goto L_08A1F750;
    return;
L_08A1F750:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1F75Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F75Cu) goto L_08A1F75C;
    return;
L_08A1F75C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1F768u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 245u, 0x08A1DFD8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F768u) goto L_08A1F768;
    return;
L_08A1F768:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(444)));
    goto L_08A1F76C;
L_08A1F76C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F798;
      }
      goto L_08A1F774;
    }
L_08A1F774:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(352), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(384), 0u);
    aot_gpr[31] = (0x08A1F784u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(380), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1F784u) goto L_08A1F784;
    return;
L_08A1F784:
    aot_gpr[31] = (0x08A1F78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A1F78Cu) goto L_08A1F78C;
    return;
L_08A1F78C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1F798u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 128u, 0x08A1E9DCu>(ctx, &aot_mem) && ctx.pc == 0x08A1F798u) goto L_08A1F798;
    return;
L_08A1F798:
    aot_gpr[31] = (0x08A1F7A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(328)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A1F7A0u) goto L_08A1F7A0;
    return;
L_08A1F7A0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(136));
    aot_gpr[31] = (0x08A1F7B4u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F7B4u) goto L_08A1F7B4;
    return;
L_08A1F7B4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F7C8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F7C8u) goto L_08A1F7C8;
    return;
L_08A1F7C8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(140));
    aot_gpr[31] = (0x08A1F7DCu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(532));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F7DCu) goto L_08A1F7DC;
    return;
L_08A1F7DC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F7F0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F7F0u) goto L_08A1F7F0;
    return;
L_08A1F7F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(392)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(376)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(512));
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(552));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x08A1F82Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(472), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F82Cu) goto L_08A1F82C;
    return;
L_08A1F82C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F840u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F840u) goto L_08A1F840;
    return;
L_08A1F840:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(512), 0u);
        goto L_08A1F84C;
    }
    goto L_08A1F84C;
L_08A1F84C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(516));
    aot_gpr[31] = (0x08A1F85Cu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F85Cu) goto L_08A1F85C;
    return;
L_08A1F85C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F870u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F870u) goto L_08A1F870;
    return;
L_08A1F870:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(516), 0u);
        goto L_08A1F87C;
    }
    goto L_08A1F87C;
L_08A1F87C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(520));
    aot_gpr[31] = (0x08A1F88Cu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(588));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F88Cu) goto L_08A1F88C;
    return;
L_08A1F88C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F8A0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F8A0u) goto L_08A1F8A0;
    return;
L_08A1F8A0:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(520), 0u);
        goto L_08A1F8A8;
    }
    goto L_08A1F8A8;
L_08A1F8A8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A1F8B8u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(608));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F8B8u) goto L_08A1F8B8;
    return;
L_08A1F8B8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F8CCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F8CCu) goto L_08A1F8CC;
    return;
L_08A1F8CC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A1F8DCu);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(616));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F8DCu) goto L_08A1F8DC;
    return;
L_08A1F8DC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1F8F0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F8F0u) goto L_08A1F8F0;
    return;
L_08A1F8F0:
    aot_gpr[31] = (0x08A1F8F8u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F8F8u) goto L_08A1F8F8;
    return;
L_08A1F8F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1F904u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F904u) goto L_08A1F904;
    return;
L_08A1F904:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1F914u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 16u, 0x08A1E16Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F914u) goto L_08A1F914;
    return;
L_08A1F914:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F93C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A1F9F0;
      }
      goto L_08A1F970;
    }
L_08A1F970:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1F988u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F988u) goto L_08A1F988;
    return;
L_08A1F988:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
        goto L_08A1F9B8;
    }
    goto L_08A1F990;
L_08A1F990:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1F9B4;
      }
      goto L_08A1F99C;
    }
L_08A1F99C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(316)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(524), aot_gpr[4]);
    aot_gpr[31] = (0x08A1F9ACu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A1F0C8;
L_08A1F9AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
      if (branch_taken) {
          goto L_08A1F9F4;
      }
      goto L_08A1F9B4;
    }
L_08A1F9B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    goto L_08A1F9B8;
L_08A1F9B8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1F9CCu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F9CCu) goto L_08A1F9CC;
    return;
L_08A1F9CC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
        goto L_08A1F9F4;
    }
    goto L_08A1F9D4;
L_08A1F9D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(524)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
        goto L_08A1F9F4;
    }
    goto L_08A1F9E0;
L_08A1F9E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(524), 0u);
    aot_gpr[31] = (0x08A1F9F0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A1F0C8;
L_08A1F9F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    goto L_08A1F9F4;
L_08A1F9F4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1FA08u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1FA08u) goto L_08A1FA08;
    return;
L_08A1FA08:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FB88;
      }
      goto L_08A1FA10;
    }
L_08A1FA10:
    aot_gpr[31] = (0x08A1FA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1FA18u) goto L_08A1FA18;
    return;
L_08A1FA18:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1FA2Cu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FA2Cu) goto L_08A1FA2C;
    return;
L_08A1FA2C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FA4C;
      }
      goto L_08A1FA38;
    }
L_08A1FA38:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1FA48u);
    aot_gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FA48u) goto L_08A1FA48;
    return;
L_08A1FA48:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A1FA4C;
L_08A1FA4C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[4] << 24u);
      if (branch_taken) {
          goto L_08A1FA6C;
      }
      goto L_08A1FA54;
    }
L_08A1FA54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1FAA4;
      }
      goto L_08A1FA60;
    }
L_08A1FA60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1FC88;
      }
      goto L_08A1FA68;
    }
L_08A1FA68:
    aot_gpr[5] = (aot_gpr[4] << 24u);
    goto L_08A1FA6C;
L_08A1FA6C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A1FA80u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 56u, 0x08A1E448u>(ctx, &aot_mem) && ctx.pc == 0x08A1FA80u) goto L_08A1FA80;
    return;
L_08A1FA80:
    aot_gpr[2] = (0u | 1u);
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
L_08A1FAA4:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1FAB0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FAB0u) goto L_08A1FAB0;
    return;
L_08A1FAB0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1FC54;
      }
      goto L_08A1FAB8;
    }
L_08A1FAB8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1FAC8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FAC8u) goto L_08A1FAC8;
    return;
L_08A1FAC8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1FC54;
      }
      goto L_08A1FAD0;
    }
L_08A1FAD0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1FAE0u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FAE0u) goto L_08A1FAE0;
    return;
L_08A1FAE0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1FC54;
      }
      goto L_08A1FAE8;
    }
L_08A1FAE8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1FAF8u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FAF8u) goto L_08A1FAF8;
    return;
L_08A1FAF8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1FC54;
      }
      goto L_08A1FB00;
    }
L_08A1FB00:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1FB10u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FB10u) goto L_08A1FB10;
    return;
L_08A1FB10:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1FC28;
      }
      goto L_08A1FB18;
    }
L_08A1FB18:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1FB28u);
    aot_gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FB28u) goto L_08A1FB28;
    return;
L_08A1FB28:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1FBFC;
      }
      goto L_08A1FB30;
    }
L_08A1FB30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1FB48u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1FB48u) goto L_08A1FB48;
    return;
L_08A1FB48:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1FB88;
      }
      goto L_08A1FB50;
    }
L_08A1FB50:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1FB5Cu);
    aot_gpr[6] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FB5Cu) goto L_08A1FB5C;
    return;
L_08A1FB5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A1FBAC;
      }
      goto L_08A1FB64;
    }
L_08A1FB64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(184));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A1FB88u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1FB88u) goto L_08A1FB88;
    return;
L_08A1FB88:
    aot_gpr[2] = (0u | 1u);
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
L_08A1FBAC:
    aot_gpr[31] = (0x08A1FBB4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 189u, 0x089FEB88u>(ctx, &aot_mem) && ctx.pc == 0x08A1FBB4u) goto L_08A1FBB4;
    return;
L_08A1FBB4:
    aot_gpr[31] = (0x08A1FBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 231u, 0x089FEE74u>(ctx, &aot_mem) && ctx.pc == 0x08A1FBBCu) goto L_08A1FBBC;
    return;
L_08A1FBBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(232)));
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(104));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1FBD8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1FBD8u) goto L_08A1FBD8;
    return;
L_08A1FBD8:
    aot_gpr[2] = (0u | 0u);
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
L_08A1FBFC:
    aot_gpr[31] = (0x08A1FC04u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 161u, 0x08A1ED2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FC04u) goto L_08A1FC04;
    return;
L_08A1FC04:
    aot_gpr[2] = (0u | 0u);
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
L_08A1FC28:
    aot_gpr[31] = (0x08A1FC30u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 152u, 0x08A1EC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FC30u) goto L_08A1FC30;
    return;
L_08A1FC30:
    aot_gpr[2] = (0u | 0u);
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
L_08A1FC54:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1FC64u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FC64u) goto L_08A1FC64;
    return;
L_08A1FC64:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
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
L_08A1FC88:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1FC94u);
    aot_gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FC94u) goto L_08A1FC94;
    return;
L_08A1FC94:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FCCC;
      }
      goto L_08A1FC9C;
    }
L_08A1FC9C:
    aot_gpr[31] = (0x08A1FCA4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 220u, 0x089FEE00u>(ctx, &aot_mem) && ctx.pc == 0x08A1FCA4u) goto L_08A1FCA4;
    return;
L_08A1FCA4:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1FCCC;
      }
      goto L_08A1FCB0;
    }
L_08A1FCB0:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1FCBCu);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FCBCu) goto L_08A1FCBC;
    return;
L_08A1FCBC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FD2C;
      }
      goto L_08A1FCC4;
    }
L_08A1FCC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FD18;
      }
      goto L_08A1FCCC;
    }
L_08A1FCCC:
    aot_gpr[31] = (0x08A1FCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 231u, 0x089FEE74u>(ctx, &aot_mem) && ctx.pc == 0x08A1FCD4u) goto L_08A1FCD4;
    return;
L_08A1FCD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(232)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1FCECu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1FCECu) goto L_08A1FCEC;
    return;
L_08A1FCEC:
    aot_gpr[31] = (0x08A1FCF4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 216u, 0x089FEDB4u>(ctx, &aot_mem) && ctx.pc == 0x08A1FCF4u) goto L_08A1FCF4;
    return;
L_08A1FCF4:
    aot_gpr[2] = (0u | 0u);
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
L_08A1FD18:
    aot_gpr[31] = (0x08A1FD20u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 220u, 0x089FEE00u>(ctx, &aot_mem) && ctx.pc == 0x08A1FD20u) goto L_08A1FD20;
    return;
L_08A1FD20:
    aot_gpr[4] = (0u | 1u);
    if (aot_gpr[2] != aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(232)));
        goto L_08A1FD78;
    }
    goto L_08A1FD2C;
L_08A1FD2C:
    aot_gpr[31] = (0x08A1FD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 231u, 0x089FEE74u>(ctx, &aot_mem) && ctx.pc == 0x08A1FD34u) goto L_08A1FD34;
    return;
L_08A1FD34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(232)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1FD4Cu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1FD4Cu) goto L_08A1FD4C;
    return;
L_08A1FD4C:
    aot_gpr[31] = (0x08A1FD54u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 211u, 0x089FED3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FD54u) goto L_08A1FD54;
    return;
L_08A1FD54:
    aot_gpr[2] = (0u | 0u);
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
L_08A1FD78:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1FD90u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1FD90u) goto L_08A1FD90;
    return;
L_08A1FD90:
    aot_gpr[2] = (0u | 0u);
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
L_08A1FDB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A1FE08;
      }
      goto L_08A1FDF8;
    }
L_08A1FDF8:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (aot_gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[22]);
      if (branch_taken) {
          goto L_08A1FE14;
      }
      goto L_08A1FE08;
    }
L_08A1FE08:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(344)));
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(344));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    goto L_08A1FE14;
L_08A1FE14:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (0u | 32u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[23] = (0u | 10u);
    aot_gpr[30] = (0u | 13u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08A1FE30;
L_08A1FE30:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1FE4C;
      }
      goto L_08A1FE38;
    }
L_08A1FE38:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A1FEF4;
      }
      goto L_08A1FE48;
    }
L_08A1FE48:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    goto L_08A1FE4C;
L_08A1FE4C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1FE60u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 195u, 0x08A1EF98u>(ctx, &aot_mem) && ctx.pc == 0x08A1FE60u) goto L_08A1FE60;
    return;
L_08A1FE60:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A1FEC8;
      }
      goto L_08A1FE6C;
    }
L_08A1FE6C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1FE84u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A1F02C;
L_08A1FE84:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[20] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A1FE90;
L_08A1FE90:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[20] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1FEC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    if (aot_gpr[4] == aot_gpr[18]) {
    aot_gpr[20] = (0u | 0u);
        goto L_08A1FED8;
    }
    goto L_08A1FED8;
L_08A1FED8:
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A1FE90;
      }
      goto L_08A1FEF4;
    }
L_08A1FEF4:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A1FF6C;
      }
      goto L_08A1FEFC;
    }
L_08A1FEFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1FF6C;
      }
      goto L_08A1FF08;
    }
L_08A1FF08:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1FF18u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 195u, 0x08A1EF98u>(ctx, &aot_mem) && ctx.pc == 0x08A1FF18u) goto L_08A1FF18;
    return;
L_08A1FF18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A1FF48;
      }
      goto L_08A1FF20;
    }
L_08A1FF20:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1FF38u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A1F02C;
L_08A1FF38:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[20] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A1FE90;
      }
      goto L_08A1FF48;
    }
L_08A1FF48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A1FE90;
      }
      goto L_08A1FF6C;
    }
L_08A1FF6C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[23];
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1FF80;
      }
      goto L_08A1FF74;
    }
L_08A1FF74:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[30];
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1FFEC;
      }
      goto L_08A1FF7C;
    }
L_08A1FF7C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    goto L_08A1FF80;
L_08A1FF80:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1FF94u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 195u, 0x08A1EF98u>(ctx, &aot_mem) && ctx.pc == 0x08A1FF94u) goto L_08A1FF94;
    return;
L_08A1FF94:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A1FFC4;
      }
      goto L_08A1FF9C;
    }
L_08A1FF9C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1FFB4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A1F02C;
L_08A1FFB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[20] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A1FE90;
      }
      goto L_08A1FFC4;
    }
L_08A1FFC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[20] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A1FE90;
      }
      goto L_08A1FFEC;
    }
L_08A1FFEC:
    aot_gpr[31] = (0x08A1FFF4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 130u, 0x08A46754u>(ctx, &aot_mem) && ctx.pc == 0x08A1FFF4u) goto L_08A1FFF4;
    return;
L_08A1FFF4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[4]);
    ctx.pc = 0x08A20000u; return;
}

void recomp_unit_0539(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0539_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_539(Runtime &runtime) {
    runtime.register_generated_unit(539u, 0x08A1F000u, 4096u, &recomp_unit_0539, &recomp_unit_0539_entry);
    runtime.register_function(0x08A1F004u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F02Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F05Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F064u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F06Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F084u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F094u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F09Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F0A4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F0C8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F0E0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F104u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F10Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F140u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F150u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F160u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F190u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F1A8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F1C8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F1ECu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F220u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F234u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F24Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F258u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F260u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F294u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F2DCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F2E8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F2F0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F2F4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F2FCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F308u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F310u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F324u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F338u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F340u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F348u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F35Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F370u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F378u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F390u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F39Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F3A4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F3ACu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F3B8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F3BCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F3D0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F3F4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F424u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F438u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F44Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F460u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F474u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F488u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F49Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F4B0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F4C4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F4D8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F4ECu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F500u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F514u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F574u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F588u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F59Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F5B0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F5C4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F5D8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F5E8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F5F0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F610u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F624u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F62Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F634u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F65Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F668u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F674u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F684u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F694u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F6A4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F6B0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F6C4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F6CCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F6D8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F6E0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F6E8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F6F0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F6F8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F704u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F708u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F718u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F72Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F734u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F740u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F748u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F750u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F75Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F768u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F76Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F774u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F784u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F78Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F798u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F7A0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F7B4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F7C8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F7DCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F7F0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F82Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F840u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F84Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F85Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F870u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F87Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F88Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F8A0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F8A8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F8B8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F8CCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F8DCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F8F0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F8F8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F904u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F914u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F93Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F970u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F988u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F990u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F99Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F9ACu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F9B4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F9B8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F9CCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F9D4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F9E0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F9F0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1F9F4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FA08u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FA10u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FA18u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FA2Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FA38u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FA48u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FA4Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FA54u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FA60u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FA68u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FA6Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FA80u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FAA4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FAB0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FAB8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FAC8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FAD0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FAE0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FAE8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FAF8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FB00u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FB10u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FB18u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FB28u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FB30u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FB48u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FB50u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FB5Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FB64u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FB88u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FBACu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FBB4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FBBCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FBD8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FBFCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FC04u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FC28u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FC30u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FC54u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FC64u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FC88u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FC94u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FC9Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FCA4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FCB0u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FCBCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FCC4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FCCCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FCD4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FCECu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FCF4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FD18u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FD20u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FD2Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FD34u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FD4Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FD54u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FD78u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FD90u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FDB4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FDF8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FE08u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FE14u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FE30u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FE38u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FE48u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FE4Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FE60u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FE6Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FE84u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FE90u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FEC8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FED8u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FEF4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FEFCu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FF08u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FF18u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FF20u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FF38u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FF48u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FF6Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FF74u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FF7Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FF80u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FF94u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FF9Cu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FFB4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FFC4u, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FFECu, &recomp_unit_0539, "recomp_unit_0539");
    runtime.register_function(0x08A1FFF4u, &recomp_unit_0539, "recomp_unit_0539");
}
} // namespace psprecomp
