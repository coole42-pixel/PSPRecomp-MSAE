#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0507[1024] = {
    1, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 19, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0,
    24, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0,
    39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    49, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 57, 0,
    0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 68, 0, 69, 0, 70, 0, 0, 71, 72, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 79, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 84, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88,
    89, 0, 90, 0, 0, 91, 0, 0, 92, 0, 93, 0, 94, 0, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0,
    111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 123, 0, 0, 0, 0,
    0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0,
    0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 0,
    141, 0, 142, 0, 0, 0, 143, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 163, 0,
    164, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 173, 0, 0, 174, 0,
    175, 0, 176, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207,
    0, 208, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 0, 218, 0, 219, 0, 220, 0,
    0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 228, 0, 229, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0,
    0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 244, 0, 245, 0, 0, 246,
};
void recomp_unit_0507_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089FF000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0507[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089FF000;
    case 2u: goto L_089FF008;
    case 3u: goto L_089FF010;
    case 4u: goto L_089FF01C;
    case 5u: goto L_089FF030;
    case 6u: goto L_089FF038;
    case 7u: goto L_089FF044;
    case 8u: goto L_089FF04C;
    case 9u: goto L_089FF054;
    case 10u: goto L_089FF0AC;
    case 11u: goto L_089FF0B4;
    case 12u: goto L_089FF0E4;
    case 13u: goto L_089FF0F0;
    case 14u: goto L_089FF10C;
    case 15u: goto L_089FF114;
    case 16u: goto L_089FF130;
    case 17u: goto L_089FF138;
    case 18u: goto L_089FF150;
    case 19u: goto L_089FF154;
    case 20u: goto L_089FF15C;
    case 21u: goto L_089FF164;
    case 22u: goto L_089FF16C;
    case 23u: goto L_089FF178;
    case 24u: goto L_089FF180;
    case 25u: goto L_089FF18C;
    case 26u: goto L_089FF194;
    case 27u: goto L_089FF1A4;
    case 28u: goto L_089FF1AC;
    case 29u: goto L_089FF1B4;
    case 30u: goto L_089FF1C8;
    case 31u: goto L_089FF1E4;
    case 32u: goto L_089FF204;
    case 33u: goto L_089FF214;
    case 34u: goto L_089FF21C;
    case 35u: goto L_089FF228;
    case 36u: goto L_089FF254;
    case 37u: goto L_089FF268;
    case 38u: goto L_089FF270;
    case 39u: goto L_089FF280;
    case 40u: goto L_089FF290;
    case 41u: goto L_089FF2A0;
    case 42u: goto L_089FF2B0;
    case 43u: goto L_089FF2BC;
    case 44u: goto L_089FF2C8;
    case 45u: goto L_089FF2E0;
    case 46u: goto L_089FF310;
    case 47u: goto L_089FF344;
    case 48u: goto L_089FF370;
    case 49u: goto L_089FF380;
    case 50u: goto L_089FF388;
    case 51u: goto L_089FF3A4;
    case 52u: goto L_089FF3AC;
    case 53u: goto L_089FF3BC;
    case 54u: goto L_089FF3D8;
    case 55u: goto L_089FF3E8;
    case 56u: goto L_089FF3F0;
    case 57u: goto L_089FF3F8;
    case 58u: goto L_089FF404;
    case 59u: goto L_089FF410;
    case 60u: goto L_089FF448;
    case 61u: goto L_089FF44C;
    case 62u: goto L_089FF468;
    case 63u: goto L_089FF480;
    case 64u: goto L_089FF494;
    case 65u: goto L_089FF4A8;
    case 66u: goto L_089FF4B8;
    case 67u: goto L_089FF4C4;
    case 68u: goto L_089FF4C8;
    case 69u: goto L_089FF4D0;
    case 70u: goto L_089FF4D8;
    case 71u: goto L_089FF4E4;
    case 72u: goto L_089FF4E8;
    case 73u: goto L_089FF4F4;
    case 74u: goto L_089FF514;
    case 75u: goto L_089FF530;
    case 76u: goto L_089FF534;
    case 77u: goto L_089FF540;
    case 78u: goto L_089FF55C;
    case 79u: goto L_089FF560;
    case 80u: goto L_089FF57C;
    case 81u: goto L_089FF594;
    case 82u: goto L_089FF5B0;
    case 83u: goto L_089FF5B8;
    case 84u: goto L_089FF5C8;
    case 85u: goto L_089FF5CC;
    case 86u: goto L_089FF5E4;
    case 87u: goto L_089FF5EC;
    case 88u: goto L_089FF5FC;
    case 89u: goto L_089FF600;
    case 90u: goto L_089FF608;
    case 91u: goto L_089FF614;
    case 92u: goto L_089FF620;
    case 93u: goto L_089FF628;
    case 94u: goto L_089FF630;
    case 95u: goto L_089FF63C;
    case 96u: goto L_089FF640;
    case 97u: goto L_089FF670;
    case 98u: goto L_089FF694;
    case 99u: goto L_089FF6A4;
    case 100u: goto L_089FF6D4;
    case 101u: goto L_089FF6DC;
    case 102u: goto L_089FF6E4;
    case 103u: goto L_089FF6EC;
    case 104u: goto L_089FF6F4;
    case 105u: goto L_089FF714;
    case 106u: goto L_089FF724;
    case 107u: goto L_089FF730;
    case 108u: goto L_089FF744;
    case 109u: goto L_089FF750;
    case 110u: goto L_089FF774;
    case 111u: goto L_089FF780;
    case 112u: goto L_089FF788;
    case 113u: goto L_089FF7AC;
    case 114u: goto L_089FF7C0;
    case 115u: goto L_089FF7E4;
    case 116u: goto L_089FF80C;
    case 117u: goto L_089FF814;
    case 118u: goto L_089FF81C;
    case 119u: goto L_089FF824;
    case 120u: goto L_089FF850;
    case 121u: goto L_089FF85C;
    case 122u: goto L_089FF868;
    case 123u: goto L_089FF86C;
    case 124u: goto L_089FF88C;
    case 125u: goto L_089FF898;
    case 126u: goto L_089FF8B0;
    case 127u: goto L_089FF8B8;
    case 128u: goto L_089FF8CC;
    case 129u: goto L_089FF8D8;
    case 130u: goto L_089FF8F0;
    case 131u: goto L_089FF8F8;
    case 132u: goto L_089FF904;
    case 133u: goto L_089FF90C;
    case 134u: goto L_089FF914;
    case 135u: goto L_089FF940;
    case 136u: goto L_089FF948;
    case 137u: goto L_089FF958;
    case 138u: goto L_089FF964;
    case 139u: goto L_089FF970;
    case 140u: goto L_089FF978;
    case 141u: goto L_089FF980;
    case 142u: goto L_089FF988;
    case 143u: goto L_089FF998;
    case 144u: goto L_089FF99C;
    case 145u: goto L_089FF9A4;
    case 146u: goto L_089FF9AC;
    case 147u: goto L_089FF9B4;
    case 148u: goto L_089FF9BC;
    case 149u: goto L_089FF9C8;
    case 150u: goto L_089FF9D0;
    case 151u: goto L_089FF9D8;
    case 152u: goto L_089FF9E0;
    case 153u: goto L_089FF9EC;
    case 154u: goto L_089FF9F4;
    case 155u: goto L_089FFA20;
    case 156u: goto L_089FFA2C;
    case 157u: goto L_089FFA38;
    case 158u: goto L_089FFA44;
    case 159u: goto L_089FFA54;
    case 160u: goto L_089FFA5C;
    case 161u: goto L_089FFA64;
    case 162u: goto L_089FFA6C;
    case 163u: goto L_089FFA78;
    case 164u: goto L_089FFA80;
    case 165u: goto L_089FFA88;
    case 166u: goto L_089FFA90;
    case 167u: goto L_089FFA98;
    case 168u: goto L_089FFAB8;
    case 169u: goto L_089FFAC0;
    case 170u: goto L_089FFAD0;
    case 171u: goto L_089FFADC;
    case 172u: goto L_089FFAE8;
    case 173u: goto L_089FFAEC;
    case 174u: goto L_089FFAF8;
    case 175u: goto L_089FFB00;
    case 176u: goto L_089FFB08;
    case 177u: goto L_089FFB14;
    case 178u: goto L_089FFB1C;
    case 179u: goto L_089FFB24;
    case 180u: goto L_089FFB2C;
    case 181u: goto L_089FFB34;
    case 182u: goto L_089FFB70;
    case 183u: goto L_089FFB98;
    case 184u: goto L_089FFBA8;
    case 185u: goto L_089FFBB4;
    case 186u: goto L_089FFBC8;
    case 187u: goto L_089FFBD8;
    case 188u: goto L_089FFBEC;
    case 189u: goto L_089FFC10;
    case 190u: goto L_089FFC18;
    case 191u: goto L_089FFC20;
    case 192u: goto L_089FFC30;
    case 193u: goto L_089FFC40;
    case 194u: goto L_089FFC50;
    case 195u: goto L_089FFC60;
    case 196u: goto L_089FFC7C;
    case 197u: goto L_089FFC98;
    case 198u: goto L_089FFCBC;
    case 199u: goto L_089FFCC4;
    case 200u: goto L_089FFCD8;
    case 201u: goto L_089FFCE8;
    case 202u: goto L_089FFCF4;
    case 203u: goto L_089FFD3C;
    case 204u: goto L_089FFD58;
    case 205u: goto L_089FFD64;
    case 206u: goto L_089FFD70;
    case 207u: goto L_089FFD7C;
    case 208u: goto L_089FFD84;
    case 209u: goto L_089FFD8C;
    case 210u: goto L_089FFD98;
    case 211u: goto L_089FFDA4;
    case 212u: goto L_089FFDAC;
    case 213u: goto L_089FFDB4;
    case 214u: goto L_089FFDC0;
    case 215u: goto L_089FFDC8;
    case 216u: goto L_089FFDD0;
    case 217u: goto L_089FFDDC;
    case 218u: goto L_089FFDE8;
    case 219u: goto L_089FFDF0;
    case 220u: goto L_089FFDF8;
    case 221u: goto L_089FFE04;
    case 222u: goto L_089FFE10;
    case 223u: goto L_089FFE28;
    case 224u: goto L_089FFE48;
    case 225u: goto L_089FFE50;
    case 226u: goto L_089FFE70;
    case 227u: goto L_089FFEA4;
    case 228u: goto L_089FFEA8;
    case 229u: goto L_089FFEB0;
    case 230u: goto L_089FFEB4;
    case 231u: goto L_089FFEC0;
    case 232u: goto L_089FFEE4;
    case 233u: goto L_089FFEEC;
    case 234u: goto L_089FFF08;
    case 235u: goto L_089FFF10;
    case 236u: goto L_089FFF2C;
    case 237u: goto L_089FFF3C;
    case 238u: goto L_089FFF6C;
    case 239u: goto L_089FFFAC;
    case 240u: goto L_089FFFBC;
    case 241u: goto L_089FFFC8;
    case 242u: goto L_089FFFD0;
    case 243u: goto L_089FFFDC;
    case 244u: goto L_089FFFE8;
    case 245u: goto L_089FFFF0;
    case 246u: goto L_089FFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089FF000:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF010;
      }
      goto L_089FF008;
    }
L_089FF008:
    aot_gpr[31] = (0x089FF010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 226u, 0x08A04DA4u>(ctx, &aot_mem) && ctx.pc == 0x089FF010u) goto L_089FF010;
    return;
L_089FF010:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF01C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF038;
      }
      goto L_089FF030;
    }
L_089FF030:
    aot_gpr[31] = (0x089FF038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 229u, 0x08A04DD4u>(ctx, &aot_mem) && ctx.pc == 0x089FF038u) goto L_089FF038;
    return;
L_089FF038:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF044:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF04C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF054:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[5] = (8u << 16u);
    aot_gpr[6] = (0u | 40960u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[5] = (0u | 256u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF0AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12440)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF0B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF1E4;
      }
      goto L_089FF0E4;
    }
L_089FF0E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF1E4;
      }
      goto L_089FF0F0;
    }
L_089FF0F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FF10Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF10Cu) goto L_089FF10C;
    return;
L_089FF10C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_089FF138;
    }
    goto L_089FF114;
L_089FF114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FF130u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF130u) goto L_089FF130;
    return;
L_089FF130:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089FF154;
      }
      goto L_089FF138;
    }
L_089FF138:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FF150u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF150u) goto L_089FF150;
    return;
L_089FF150:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_089FF154;
L_089FF154:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_089FF1E4;
      }
      goto L_089FF15C;
    }
L_089FF15C:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-6472));
    goto L_089FF164;
L_089FF164:
    aot_gpr[31] = (0x089FF16Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x089FF16Cu) goto L_089FF16C;
    return;
L_089FF16C:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FF1E4;
      }
      goto L_089FF178;
    }
L_089FF178:
    aot_gpr[31] = (0x089FF180u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x089FF180u) goto L_089FF180;
    return;
L_089FF180:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF1AC;
      }
      goto L_089FF18C;
    }
L_089FF18C:
    aot_gpr[31] = (0x089FF194u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x089FF194u) goto L_089FF194;
    return;
L_089FF194:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FF1A4u);
    aot_gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089FF1A4u) goto L_089FF1A4;
    return;
L_089FF1A4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
        goto L_089FF1B4;
    }
    goto L_089FF1AC;
L_089FF1AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089FF164;
      }
      goto L_089FF1B4;
    }
L_089FF1B4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FF1C8u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF1C8u) goto L_089FF1C8;
    return;
L_089FF1C8:
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
L_089FF1E4:
    aot_gpr[2] = (0u | 0u);
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
L_089FF204:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089FF214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x089FF214u) goto L_089FF214;
    return;
L_089FF214:
    aot_gpr[31] = (0x089FF21Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 162u, 0x08A039E0u>(ctx, &aot_mem) && ctx.pc == 0x089FF21Cu) goto L_089FF21C;
    return;
L_089FF21C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF228:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    aot_gpr[31] = (0x089FF254u);
    aot_gpr[6] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF254u) goto L_089FF254;
    return;
L_089FF254:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FF268u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF268u) goto L_089FF268;
    return;
L_089FF268:
    aot_gpr[31] = (0x089FF270u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 171u, 0x08A44D78u>(ctx, &aot_mem) && ctx.pc == 0x089FF270u) goto L_089FF270;
    return;
L_089FF270:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FF280u);
    aot_gpr[6] = (0u | 513u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 172u, 0x08A44DB4u>(ctx, &aot_mem) && ctx.pc == 0x089FF280u) goto L_089FF280;
    return;
L_089FF280:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1028));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FF290u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 172u, 0x08A44DB4u>(ctx, &aot_mem) && ctx.pc == 0x089FF290u) goto L_089FF290;
    return;
L_089FF290:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1036)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1032)));
    aot_gpr[31] = (0x089FF2A0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 172u, 0x08A44DB4u>(ctx, &aot_mem) && ctx.pc == 0x089FF2A0u) goto L_089FF2A0;
    return;
L_089FF2A0:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1032));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FF2B0u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 172u, 0x08A44DB4u>(ctx, &aot_mem) && ctx.pc == 0x089FF2B0u) goto L_089FF2B0;
    return;
L_089FF2B0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FF2BCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0577_entry, 577u, 2u, 0x08A45DE0u>(ctx, &aot_mem) && ctx.pc == 0x089FF2BCu) goto L_089FF2BC;
    return;
L_089FF2BC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089FF2C8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 185u, 0x08A44EB4u>(ctx, &aot_mem) && ctx.pc == 0x089FF2C8u) goto L_089FF2C8;
    return;
L_089FF2C8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF2E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12436), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089FF310u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12480), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 3u, 0x089FE018u>(ctx, &aot_mem) && ctx.pc == 0x089FF310u) goto L_089FF310;
    return;
L_089FF310:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12448), 0u);
    aot_gpr[4] = (0u | 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12440), 0u);
    aot_gpr[5] = (0u | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12452), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12456), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12460), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12476), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF344:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[31] = (0x089FF370u);
    aot_gpr[7] = (0u | 33u);
    goto L_089FF228;
L_089FF370:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1040));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FF380u);
    aot_gpr[6] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089FF380u) goto L_089FF380;
    return;
L_089FF380:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF44C;
      }
      goto L_089FF388;
    }
L_089FF388:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1036)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1028), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089FF3A4u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089FF3A4u) goto L_089FF3A4;
    return;
L_089FF3A4:
    aot_gpr[31] = (0x089FF3ACu);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FF3ACu) goto L_089FF3AC;
    return;
L_089FF3AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FF3BCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 109u, 0x089F3710u>(ctx, &aot_mem) && ctx.pc == 0x089FF3BCu) goto L_089FF3BC;
    return;
L_089FF3BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089FF3D8u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089FF3D8u) goto L_089FF3D8;
    return;
L_089FF3D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x089FF3E8u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 37u, 0x08A082E4u>(ctx, &aot_mem) && ctx.pc == 0x089FF3E8u) goto L_089FF3E8;
    return;
L_089FF3E8:
    aot_gpr[31] = (0x089FF3F0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FF3F0u) goto L_089FF3F0;
    return;
L_089FF3F0:
    aot_gpr[31] = (0x089FF3F8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF3F8u) goto L_089FF3F8;
    return;
L_089FF3F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1036)));
    aot_gpr[31] = (0x089FF404u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FF404u) goto L_089FF404;
    return;
L_089FF404:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1036), 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1032), 0u);
      if (branch_taken) {
          goto L_089FF448;
      }
      goto L_089FF410;
    }
L_089FF410:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-6460));
    aot_gpr[6] = (0u | 8u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x089FF448u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF448u) goto L_089FF448;
    return;
L_089FF448:
    aot_gpr[18] = (0u | 1u);
    goto L_089FF44C;
L_089FF44C:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF468:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-18572)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089FF4C8;
      }
      goto L_089FF480;
    }
L_089FF480:
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x089FF494u);
    aot_gpr[4] = (0u | 680u);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 198u, 0x08A05CFCu>(ctx, &aot_mem) && ctx.pc == 0x089FF494u) goto L_089FF494;
    return;
L_089FF494:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_089FF4C4;
      }
      goto L_089FF4A8;
    }
L_089FF4A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x089FF4B8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 206u, 0x08A05D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF4B8u) goto L_089FF4B8;
    return;
L_089FF4B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2216u << 16u);
    goto L_089FF4C4;
L_089FF4C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-18572), aot_gpr[4]);
    goto L_089FF4C8;
L_089FF4C8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4E8;
      }
      goto L_089FF4D0;
    }
L_089FF4D0:
    aot_gpr[31] = (0x089FF4D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 232u, 0x08A05F58u>(ctx, &aot_mem) && ctx.pc == 0x089FF4D8u) goto L_089FF4D8;
    return;
L_089FF4D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089FF4E8;
      }
      goto L_089FF4E4;
    }
L_089FF4E4:
    aot_gpr[2] = (0u | 1u);
    goto L_089FF4E8;
L_089FF4E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF4F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18576)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2216u << 16u);
      if (branch_taken) {
          goto L_089FF534;
      }
      goto L_089FF514;
    }
L_089FF514:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FF530u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF530u) goto L_089FF530;
    return;
L_089FF530:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-18576), 0u);
    goto L_089FF534;
L_089FF534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-18572)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF560;
      }
      goto L_089FF540;
    }
L_089FF540:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FF55Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF55Cu) goto L_089FF55C;
    return;
L_089FF55C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-18572), 0u);
    goto L_089FF560;
L_089FF560:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF57C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FF694;
      }
      goto L_089FF594;
    }
L_089FF594:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FF5B0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF5B0u) goto L_089FF5B0;
    return;
L_089FF5B0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_089FF5CC;
    }
    goto L_089FF5B8;
L_089FF5B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FF5C8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 63u, 0x08A073C4u>(ctx, &aot_mem) && ctx.pc == 0x089FF5C8u) goto L_089FF5C8;
    return;
L_089FF5C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_089FF5CC;
L_089FF5CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FF5E4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF5E4u) goto L_089FF5E4;
    return;
L_089FF5E4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12436)));
        goto L_089FF600;
    }
    goto L_089FF5EC;
L_089FF5EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089FF5FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 63u, 0x08A073C4u>(ctx, &aot_mem) && ctx.pc == 0x089FF5FCu) goto L_089FF5FC;
    return;
L_089FF5FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12436)));
    goto L_089FF600;
L_089FF600:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF620;
      }
      goto L_089FF608;
    }
L_089FF608:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF620;
      }
      goto L_089FF614;
    }
L_089FF614:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12480)));
    aot_gpr[31] = (0x089FF620u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 167u, 0x08A049B0u>(ctx, &aot_mem) && ctx.pc == 0x089FF620u) goto L_089FF620;
    return;
L_089FF620:
    aot_gpr[31] = (0x089FF628u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 81u, 0x089FE658u>(ctx, &aot_mem) && ctx.pc == 0x089FF628u) goto L_089FF628;
    return;
L_089FF628:
    if (aot_gpr[2] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089FF640;
    }
    goto L_089FF630;
L_089FF630:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12448)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089FF694;
      }
      goto L_089FF63C;
    }
L_089FF63C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089FF640;
L_089FF640:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (18371u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 20480u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[31] = (0x089FF670u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x089FF670u) goto L_089FF670;
    return;
L_089FF670:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(264));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089FF694u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF694u) goto L_089FF694;
    return;
L_089FF694:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF6A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089FF6D4u);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FF6D4u) goto L_089FF6D4;
    return;
L_089FF6D4:
    aot_gpr[31] = (0x089FF6DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF6DCu) goto L_089FF6DC;
    return;
L_089FF6DC:
    aot_gpr[31] = (0x089FF6E4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x089FF6E4u) goto L_089FF6E4;
    return;
L_089FF6E4:
    aot_gpr[31] = (0x089FF6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FF6ECu) goto L_089FF6EC;
    return;
L_089FF6EC:
    aot_gpr[31] = (0x089FF6F4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF6F4u) goto L_089FF6F4;
    return;
L_089FF6F4:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-6700));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 12484u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 207u);
    aot_gpr[31] = (0x089FF714u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089FF714u) goto L_089FF714;
    return;
L_089FF714:
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-18568), aot_gpr[2]);
    aot_gpr[31] = (0x089FF724u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_089FF2E0;
L_089FF724:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
        goto L_089FF750;
    }
    goto L_089FF730;
L_089FF730:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089FF744u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 40u, 0x08A0E238u>(ctx, &aot_mem) && ctx.pc == 0x089FF744u) goto L_089FF744;
    return;
L_089FF744:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12480), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    goto L_089FF750;
L_089FF750:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(44)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
        goto L_089FF780;
    }
    goto L_089FF774;
L_089FF774:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(12436), 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_089FF780;
L_089FF780:
    aot_gpr[31] = (0x089FF788u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FF788u) goto L_089FF788;
    return;
L_089FF788:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6456));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6448));
    aot_gpr[31] = (0x089FF7ACu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-6420));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 6u, 0x089F0064u>(ctx, &aot_mem) && ctx.pc == 0x089FF7ACu) goto L_089FF7AC;
    return;
L_089FF7AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12464));
    aot_gpr[31] = (0x089FF7C0u);
    aot_gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089FF7C0u) goto L_089FF7C0;
    return;
L_089FF7C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12432), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[6] = (0u | 12288u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12360), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[31] = (0x089FF7E4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF7E4u) goto L_089FF7E4;
    return;
L_089FF7E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12364), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
      if (branch_taken) {
          goto L_089FF850;
      }
      goto L_089FF80C;
    }
L_089FF80C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089FF81C;
      }
      goto L_089FF814;
    }
L_089FF814:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 40728u);
      if (branch_taken) {
          goto L_089FF86C;
      }
      goto L_089FF81C;
    }
L_089FF81C:
    aot_gpr[31] = (0x089FF824u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 98u, 0x089FE764u>(ctx, &aot_mem) && ctx.pc == 0x089FF824u) goto L_089FF824;
    return;
L_089FF824:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF850:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF81C;
      }
      goto L_089FF85C;
    }
L_089FF85C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (0u | 40728u);
      if (branch_taken) {
          goto L_089FF86C;
      }
      goto L_089FF868;
    }
L_089FF868:
    aot_gpr[17] = (0u | 1u);
    goto L_089FF86C;
L_089FF86C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089FF88Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 148u, 0x08A07854u>(ctx, &aot_mem) && ctx.pc == 0x089FF88Cu) goto L_089FF88C;
    return;
L_089FF88C:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    if (aot_gpr[22] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
        goto L_089FF8B8;
    }
    goto L_089FF898;
L_089FF898:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089FF8B0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 185u, 0x08A06BB0u>(ctx, &aot_mem) && ctx.pc == 0x089FF8B0u) goto L_089FF8B0;
    return;
L_089FF8B0:
    aot_gpr[20] = (aot_gpr[22] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    goto L_089FF8B8;
L_089FF8B8:
    aot_gpr[22] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[31] = (0x089FF8CCu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 148u, 0x08A07854u>(ctx, &aot_mem) && ctx.pc == 0x089FF8CCu) goto L_089FF8CC;
    return;
L_089FF8CC:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    if (aot_gpr[21] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
        goto L_089FF8F8;
    }
    goto L_089FF8D8;
L_089FF8D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089FF8F0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 185u, 0x08A06BB0u>(ctx, &aot_mem) && ctx.pc == 0x089FF8F0u) goto L_089FF8F0;
    return;
L_089FF8F0:
    aot_gpr[22] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    goto L_089FF8F8;
L_089FF8F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[31] = (0x089FF904u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    goto L_089FF468;
L_089FF904:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF940;
      }
      goto L_089FF90C;
    }
L_089FF90C:
    aot_gpr[31] = (0x089FF914u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 98u, 0x089FE764u>(ctx, &aot_mem) && ctx.pc == 0x089FF914u) goto L_089FF914;
    return;
L_089FF914:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF940:
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
        goto L_089FFA20;
    }
    goto L_089FF948;
L_089FF948:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089FF958u);
    aot_gpr[5] = (0u | 336u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x089FF958u) goto L_089FF958;
    return;
L_089FF958:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FF964u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FF964u) goto L_089FF964;
    return;
L_089FF964:
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (aot_gpr[18] + aot_gpr[17]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_089FF970;
L_089FF970:
    aot_gpr[31] = (0x089FF978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 97u, 0x089F057Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF978u) goto L_089FF978;
    return;
L_089FF978:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_089FF998;
      }
      goto L_089FF980;
    }
L_089FF980:
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
        goto L_089FF99C;
    }
    goto L_089FF988;
L_089FF988:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089FF970;
      }
      goto L_089FF998;
    }
L_089FF998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    goto L_089FF99C;
L_089FF99C:
    aot_gpr[31] = (0x089FF9A4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 139u, 0x089FE930u>(ctx, &aot_mem) && ctx.pc == 0x089FF9A4u) goto L_089FF9A4;
    return;
L_089FF9A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF9D0;
      }
      goto L_089FF9AC;
    }
L_089FF9AC:
    aot_gpr[31] = (0x089FF9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FF9B4u) goto L_089FF9B4;
    return;
L_089FF9B4:
    aot_gpr[31] = (0x089FF9BCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF9BCu) goto L_089FF9BC;
    return;
L_089FF9BC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FF9C8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FF9C8u) goto L_089FF9C8;
    return;
L_089FF9C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
      if (branch_taken) {
          goto L_089FFA20;
      }
      goto L_089FF9D0;
    }
L_089FF9D0:
    aot_gpr[31] = (0x089FF9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FF9D8u) goto L_089FF9D8;
    return;
L_089FF9D8:
    aot_gpr[31] = (0x089FF9E0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF9E0u) goto L_089FF9E0;
    return;
L_089FF9E0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FF9ECu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FF9ECu) goto L_089FF9EC;
    return;
L_089FF9EC:
    aot_gpr[31] = (0x089FF9F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 98u, 0x089FE764u>(ctx, &aot_mem) && ctx.pc == 0x089FF9F4u) goto L_089FF9F4;
    return;
L_089FF9F4:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFA20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12436)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089FFA64;
      }
      goto L_089FFA2C;
    }
L_089FFA2C:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x089FFA38u);
    aot_gpr[4] = (0u | 1844u);
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 218u, 0x08A04D24u>(ctx, &aot_mem) && ctx.pc == 0x089FFA38u) goto L_089FFA38;
    return;
L_089FFA38:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
      if (branch_taken) {
          goto L_089FFA5C;
      }
      goto L_089FFA44;
    }
L_089FFA44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x089FFA54u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 145u, 0x08A04810u>(ctx, &aot_mem) && ctx.pc == 0x089FFA54u) goto L_089FFA54;
    return;
L_089FFA54:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    goto L_089FFA5C;
L_089FFA5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    goto L_089FFA64;
L_089FFA64:
    aot_gpr[31] = (0x089FFA6Cu);
    aot_gpr[4] = (0u | 516u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 67u, 0x08A463D8u>(ctx, &aot_mem) && ctx.pc == 0x089FFA6Cu) goto L_089FFA6C;
    return;
L_089FFA6C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
        goto L_089FFA88;
    }
    goto L_089FFA78;
L_089FFA78:
    aot_gpr[31] = (0x089FFA80u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 41u, 0x08A4623Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFA80u) goto L_089FFA80;
    return;
L_089FFA80:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    goto L_089FFA88;
L_089FFA88:
    aot_gpr[31] = (0x089FFA90u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12440), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 53u, 0x08A003BCu>(ctx, &aot_mem) && ctx.pc == 0x089FFA90u) goto L_089FFA90;
    return;
L_089FFA90:
    aot_gpr[31] = (0x089FFA98u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 137u, 0x089FE91Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFA98u) goto L_089FFA98;
    return;
L_089FFA98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[31] = (0x089FFAB8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x089FFAB8u) goto L_089FFAB8;
    return;
L_089FFAB8:
    aot_gpr[31] = (0x089FFAC0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 127u, 0x08A037B0u>(ctx, &aot_mem) && ctx.pc == 0x089FFAC0u) goto L_089FFAC0;
    return;
L_089FFAC0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12480)));
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_089FFAEC;
    }
    goto L_089FFAD0;
L_089FFAD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x089FFADCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 52u, 0x08A0E30Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFADCu) goto L_089FFADC;
    return;
L_089FFADC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[31] = (0x089FFAE8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12480)));
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 55u, 0x08A0E340u>(ctx, &aot_mem) && ctx.pc == 0x089FFAE8u) goto L_089FFAE8;
    return;
L_089FFAE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_089FFAEC;
L_089FFAEC:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (2220u << 16u);
        goto L_089FFB34;
    }
    goto L_089FFAF8;
L_089FFAF8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_089FFB34;
      }
      goto L_089FFB00;
    }
L_089FFB00:
    aot_gpr[31] = (0x089FFB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x089FFB08u) goto L_089FFB08;
    return;
L_089FFB08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x089FFB14u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_089FF344;
L_089FFB14:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_089FFB34;
      }
      goto L_089FFB1C;
    }
L_089FFB1C:
    aot_gpr[31] = (0x089FFB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x089FFB24u) goto L_089FFB24;
    return;
L_089FFB24:
    aot_gpr[31] = (0x089FFB2Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 98u, 0x089FE764u>(ctx, &aot_mem) && ctx.pc == 0x089FFB2Cu) goto L_089FFB2C;
    return;
L_089FFB2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-18568), 0u);
    aot_gpr[4] = (2220u << 16u);
    goto L_089FFB34;
L_089FFB34:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-27840), 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18564), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFB70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(668));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(668));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089FFB98u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089FFB98u) goto L_089FFB98;
    return;
L_089FFB98:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(925));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(925));
    aot_gpr[31] = (0x089FFBA8u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089FFBA8u) goto L_089FFBA8;
    return;
L_089FFBA8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FFBB4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x089FFBB4u) goto L_089FFBB4;
    return;
L_089FFBB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFBC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089FFBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 206u, 0x089F0B5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFBD8u) goto L_089FFBD8;
    return;
L_089FFBD8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(257));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(257));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFBEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089FFC10u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 210u, 0x089F0B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFC10u) goto L_089FFC10;
    return;
L_089FFC10:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC7C;
      }
      goto L_089FFC18;
    }
L_089FFC18:
    aot_gpr[31] = (0x089FFC20u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 206u, 0x089F0B5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFC20u) goto L_089FFC20;
    return;
L_089FFC20:
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089FFC7C;
      }
      goto L_089FFC30;
    }
L_089FFC30:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(668));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FFC40u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089FFC40u) goto L_089FFC40;
    return;
L_089FFC40:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-257));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(257));
      if (branch_taken) {
          goto L_089FFC7C;
      }
      goto L_089FFC50;
    }
L_089FFC50:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(925));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FFC60u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089FFC60u) goto L_089FFC60;
    return;
L_089FFC60:
    aot_gpr[2] = (0u | 1u);
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
L_089FFC7C:
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
L_089FFC98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 32u);
    aot_gpr[6] = (0u | 1184u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FFCBCu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-25668));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x089FFCBCu) goto L_089FFCBC;
    return;
L_089FFCBC:
    aot_gpr[31] = (0x089FFCC4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 51u, 0x08A00384u>(ctx, &aot_mem) && ctx.pc == 0x089FFCC4u) goto L_089FFCC4;
    return;
L_089FFCC4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFCD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089FFCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 51u, 0x08A00384u>(ctx, &aot_mem) && ctx.pc == 0x089FFCE8u) goto L_089FFCE8;
    return;
L_089FFCE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFCF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (1u << 16u);
    aot_gpr[19] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27648)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) < 0;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FFEB4;
      }
      goto L_089FFD3C;
    }
L_089FFD3C:
    aot_gpr[4] = (aot_gpr[20] << 5u);
    aot_gpr[5] = (0u + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[21] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[16] + aot_gpr[21]);
    goto L_089FFD58;
L_089FFD58:
    aot_gpr[22] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089FFD64u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 236u, 0x089F0D34u>(ctx, &aot_mem) && ctx.pc == 0x089FFD64u) goto L_089FFD64;
    return;
L_089FFD64:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FFD70u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 236u, 0x089F0D34u>(ctx, &aot_mem) && ctx.pc == 0x089FFD70u) goto L_089FFD70;
    return;
L_089FFD70:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x089FFD7Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFD7Cu) goto L_089FFD7C;
    return;
L_089FFD7C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
        goto L_089FFEA8;
    }
    goto L_089FFD84;
L_089FFD84:
    aot_gpr[31] = (0x089FFD8Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 237u, 0x089F0D3Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFD8Cu) goto L_089FFD8C;
    return;
L_089FFD8C:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FFD98u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 237u, 0x089F0D3Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFD98u) goto L_089FFD98;
    return;
L_089FFD98:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x089FFDA4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFDA4u) goto L_089FFDA4;
    return;
L_089FFDA4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
        goto L_089FFEA8;
    }
    goto L_089FFDAC;
L_089FFDAC:
    aot_gpr[31] = (0x089FFDB4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 238u, 0x089F0D44u>(ctx, &aot_mem) && ctx.pc == 0x089FFDB4u) goto L_089FFDB4;
    return;
L_089FFDB4:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FFDC0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 238u, 0x089F0D44u>(ctx, &aot_mem) && ctx.pc == 0x089FFDC0u) goto L_089FFDC0;
    return;
L_089FFDC0:
    if (aot_gpr[23] != aot_gpr[2]) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
        goto L_089FFEA8;
    }
    goto L_089FFDC8;
L_089FFDC8:
    aot_gpr[31] = (0x089FFDD0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFDD0u) goto L_089FFDD0;
    return;
L_089FFDD0:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FFDDCu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFDDCu) goto L_089FFDDC;
    return;
L_089FFDDC:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x089FFDE8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFDE8u) goto L_089FFDE8;
    return;
L_089FFDE8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_089FFEA4;
      }
      goto L_089FFDF0;
    }
L_089FFDF0:
    aot_gpr[31] = (0x089FFDF8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x089FFDF8u) goto L_089FFDF8;
    return;
L_089FFDF8:
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(668));
    aot_gpr[31] = (0x089FFE04u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(668));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x089FFE04u) goto L_089FFE04;
    return;
L_089FFE04:
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(925));
    aot_gpr[31] = (0x089FFE10u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(925));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x089FFE10u) goto L_089FFE10;
    return;
L_089FFE10:
    aot_gpr[17] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27648)));
    aot_gpr[18] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] << 5u);
      if (branch_taken) {
          goto L_089FFE70;
      }
      goto L_089FFE28;
    }
L_089FFE28:
    aot_gpr[5] = (0u + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[20] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    goto L_089FFE48;
L_089FFE48:
    aot_gpr[31] = (0x089FFE50u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 134u, 0x089F0784u>(ctx, &aot_mem) && ctx.pc == 0x089FFE50u) goto L_089FFE50;
    return;
L_089FFE50:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(668), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(925), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27648)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1184));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1184));
      if (branch_taken) {
          goto L_089FFE48;
      }
      goto L_089FFE70;
    }
L_089FFE70:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-27648), aot_gpr[17]);
    aot_gpr[2] = (0u | 1u);
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
L_089FFEA4:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_089FFEA8;
L_089FFEA8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) >= 0;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1184));
      if (branch_taken) {
          goto L_089FFD58;
      }
      goto L_089FFEB0;
    }
L_089FFEB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27648)));
    goto L_089FFEB4;
L_089FFEB4:
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] << 5u);
      if (branch_taken) {
          goto L_089FFF3C;
      }
      goto L_089FFEC0;
    }
L_089FFEC0:
    aot_gpr[5] = (0u + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089FFEE4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x089FFEE4u) goto L_089FFEE4;
    return;
L_089FFEE4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[17]);
    goto L_089FFEEC;
L_089FFEEC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(668))))));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(668), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 257 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089FFEEC;
      }
      goto L_089FFF08;
    }
L_089FFF08:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[17]);
    goto L_089FFF10;
L_089FFF10:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(925))))));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(925), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 257 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089FFF10;
      }
      goto L_089FFF2C;
    }
L_089FFF2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27648)));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-27648), aot_gpr[4]);
    goto L_089FFF3C;
L_089FFF3C:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_089FFF6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1904));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1856), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1860), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1872), aot_gpr[20]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1864), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1868), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1876), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1880), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1884), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1888), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1892), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1852), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 30u, 0x08A001A4u>(ctx, &aot_mem); return;
      }
      goto L_089FFFAC;
    }
L_089FFFAC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FFFBCu);
    aot_gpr[6] = (0u | 513u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FFFBCu) goto L_089FFFBC;
    return;
L_089FFFBC:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (0u | 63u);
    aot_gpr[21] = (0u | 35u);
    goto L_089FFFC8;
L_089FFFC8:
    aot_gpr[31] = (0x089FFFD0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FFFD0u) goto L_089FFFD0;
    return;
L_089FFFD0:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[18]);
      if (branch_taken) {
          goto L_089FFFFC;
      }
      goto L_089FFFDC;
    }
L_089FFFDC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[4] == aot_gpr[19]) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 1u, 0x08A00000u>(ctx, &aot_mem); return;
    }
    goto L_089FFFE8;
L_089FFFE8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[18]);
      if (branch_taken) {
          goto L_089FFFFC;
      }
      goto L_089FFFF0;
    }
L_089FFFF0:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089FFFC8;
      }
      goto L_089FFFFC;
    }
L_089FFFFC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.pc = 0x08A00000u; return;
}

void recomp_unit_0507(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0507_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_507(Runtime &runtime) {
    runtime.register_generated_unit(507u, 0x089FF000u, 4096u, &recomp_unit_0507, &recomp_unit_0507_entry);
    runtime.register_function(0x089FF000u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF008u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF010u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF01Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF030u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF038u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF044u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF04Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF054u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF0ACu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF0B4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF0E4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF0F0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF10Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF114u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF130u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF138u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF150u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF154u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF15Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF164u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF16Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF178u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF180u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF18Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF194u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF1A4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF1ACu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF1B4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF1C8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF1E4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF204u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF214u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF21Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF228u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF254u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF268u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF270u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF280u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF290u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF2A0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF2B0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF2BCu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF2C8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF2E0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF310u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF344u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF370u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF380u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF388u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF3A4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF3ACu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF3BCu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF3D8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF3E8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF3F0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF3F8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF404u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF410u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF448u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF44Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF468u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF480u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF494u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF4A8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF4B8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF4C4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF4C8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF4D0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF4D8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF4E4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF4E8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF4F4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF514u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF530u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF534u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF540u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF55Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF560u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF57Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF594u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF5B0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF5B8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF5C8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF5CCu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF5E4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF5ECu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF5FCu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF600u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF608u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF614u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF620u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF628u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF630u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF63Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF640u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF670u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF694u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF6A4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF6D4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF6DCu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF6E4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF6ECu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF6F4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF714u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF724u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF730u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF744u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF750u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF774u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF780u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF788u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF7ACu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF7C0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF7E4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF80Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF814u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF81Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF824u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF850u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF85Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF868u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF86Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF88Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF898u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF8B0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF8B8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF8CCu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF8D8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF8F0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF8F8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF904u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF90Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF914u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF940u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF948u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF958u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF964u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF970u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF978u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF980u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF988u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF998u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF99Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF9A4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF9ACu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF9B4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF9BCu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF9C8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF9D0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF9D8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF9E0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF9ECu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FF9F4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA20u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA2Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA38u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA44u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA54u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA5Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA64u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA6Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA78u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA80u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA88u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA90u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFA98u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFAB8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFAC0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFAD0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFADCu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFAE8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFAECu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFAF8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFB00u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFB08u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFB14u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFB1Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFB24u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFB2Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFB34u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFB70u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFB98u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFBA8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFBB4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFBC8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFBD8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFBECu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFC10u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFC18u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFC20u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFC30u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFC40u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFC50u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFC60u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFC7Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFC98u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFCBCu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFCC4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFCD8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFCE8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFCF4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFD3Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFD58u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFD64u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFD70u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFD7Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFD84u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFD8Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFD98u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFDA4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFDACu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFDB4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFDC0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFDC8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFDD0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFDDCu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFDE8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFDF0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFDF8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFE04u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFE10u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFE28u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFE48u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFE50u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFE70u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFEA4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFEA8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFEB0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFEB4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFEC0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFEE4u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFEECu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFF08u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFF10u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFF2Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFF3Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFF6Cu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFFACu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFFBCu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFFC8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFFD0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFFDCu, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFFE8u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFFF0u, &recomp_unit_0507, "recomp_unit_0507");
    runtime.register_function(0x089FFFFCu, &recomp_unit_0507, "recomp_unit_0507");
}
} // namespace psprecomp
