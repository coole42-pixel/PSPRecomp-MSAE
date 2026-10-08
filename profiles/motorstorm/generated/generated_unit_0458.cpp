#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0458[1024] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 13, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 20,
    0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0,
    31, 0, 0, 0, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0,
    0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0,
    0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0,
    55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0,
    0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77,
    0, 78, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 90, 0, 91, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 109, 0, 0,
    0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    117, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0,
    124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 140, 0, 0, 0, 141, 0, 0, 0,
    0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 146, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 0, 162, 163, 0, 164, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 166, 167, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 171, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0,
    0, 0, 0, 0, 177, 0, 178, 179, 0, 180, 0, 0, 0, 181, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 187, 0, 0, 188,
    0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 198,
    199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 202, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0,
    231, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 235, 236, 0, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 241,
};
void recomp_unit_0458_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089CE000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0458[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089CE000;
    case 2u: goto L_089CE008;
    case 3u: goto L_089CE024;
    case 4u: goto L_089CE034;
    case 5u: goto L_089CE040;
    case 6u: goto L_089CE058;
    case 7u: goto L_089CE060;
    case 8u: goto L_089CE06C;
    case 9u: goto L_089CE098;
    case 10u: goto L_089CE0A8;
    case 11u: goto L_089CE0D8;
    case 12u: goto L_089CE0FC;
    case 13u: goto L_089CE104;
    case 14u: goto L_089CE108;
    case 15u: goto L_089CE130;
    case 16u: goto L_089CE138;
    case 17u: goto L_089CE15C;
    case 18u: goto L_089CE164;
    case 19u: goto L_089CE174;
    case 20u: goto L_089CE17C;
    case 21u: goto L_089CE184;
    case 22u: goto L_089CE194;
    case 23u: goto L_089CE1A4;
    case 24u: goto L_089CE1AC;
    case 25u: goto L_089CE1B8;
    case 26u: goto L_089CE1C0;
    case 27u: goto L_089CE1D4;
    case 28u: goto L_089CE1DC;
    case 29u: goto L_089CE1E4;
    case 30u: goto L_089CE1F4;
    case 31u: goto L_089CE200;
    case 32u: goto L_089CE218;
    case 33u: goto L_089CE220;
    case 34u: goto L_089CE228;
    case 35u: goto L_089CE244;
    case 36u: goto L_089CE24C;
    case 37u: goto L_089CE254;
    case 38u: goto L_089CE264;
    case 39u: goto L_089CE270;
    case 40u: goto L_089CE288;
    case 41u: goto L_089CE290;
    case 42u: goto L_089CE29C;
    case 43u: goto L_089CE2C8;
    case 44u: goto L_089CE2D0;
    case 45u: goto L_089CE2D8;
    case 46u: goto L_089CE2E8;
    case 47u: goto L_089CE2F4;
    case 48u: goto L_089CE30C;
    case 49u: goto L_089CE314;
    case 50u: goto L_089CE328;
    case 51u: goto L_089CE350;
    case 52u: goto L_089CE358;
    case 53u: goto L_089CE360;
    case 54u: goto L_089CE378;
    case 55u: goto L_089CE380;
    case 56u: goto L_089CE394;
    case 57u: goto L_089CE39C;
    case 58u: goto L_089CE3C4;
    case 59u: goto L_089CE3D0;
    case 60u: goto L_089CE3D8;
    case 61u: goto L_089CE3E8;
    case 62u: goto L_089CE3F8;
    case 63u: goto L_089CE404;
    case 64u: goto L_089CE41C;
    case 65u: goto L_089CE42C;
    case 66u: goto L_089CE44C;
    case 67u: goto L_089CE45C;
    case 68u: goto L_089CE46C;
    case 69u: goto L_089CE478;
    case 70u: goto L_089CE494;
    case 71u: goto L_089CE49C;
    case 72u: goto L_089CE4BC;
    case 73u: goto L_089CE4C4;
    case 74u: goto L_089CE4CC;
    case 75u: goto L_089CE4EC;
    case 76u: goto L_089CE4F4;
    case 77u: goto L_089CE4FC;
    case 78u: goto L_089CE504;
    case 79u: goto L_089CE51C;
    case 80u: goto L_089CE524;
    case 81u: goto L_089CE554;
    case 82u: goto L_089CE584;
    case 83u: goto L_089CE59C;
    case 84u: goto L_089CE5A8;
    case 85u: goto L_089CE5B4;
    case 86u: goto L_089CE5CC;
    case 87u: goto L_089CE5D0;
    case 88u: goto L_089CE5E0;
    case 89u: goto L_089CE5EC;
    case 90u: goto L_089CE608;
    case 91u: goto L_089CE610;
    case 92u: goto L_089CE614;
    case 93u: goto L_089CE634;
    case 94u: goto L_089CE66C;
    case 95u: goto L_089CE6A8;
    case 96u: goto L_089CE6B8;
    case 97u: goto L_089CE6BC;
    case 98u: goto L_089CE6CC;
    case 99u: goto L_089CE6DC;
    case 100u: goto L_089CE6E4;
    case 101u: goto L_089CE6EC;
    case 102u: goto L_089CE720;
    case 103u: goto L_089CE730;
    case 104u: goto L_089CE73C;
    case 105u: goto L_089CE744;
    case 106u: goto L_089CE754;
    case 107u: goto L_089CE768;
    case 108u: goto L_089CE770;
    case 109u: goto L_089CE774;
    case 110u: goto L_089CE790;
    case 111u: goto L_089CE798;
    case 112u: goto L_089CE7A8;
    case 113u: goto L_089CE7B4;
    case 114u: goto L_089CE7BC;
    case 115u: goto L_089CE7D0;
    case 116u: goto L_089CE7F8;
    case 117u: goto L_089CE800;
    case 118u: goto L_089CE804;
    case 119u: goto L_089CE80C;
    case 120u: goto L_089CE814;
    case 121u: goto L_089CE858;
    case 122u: goto L_089CE864;
    case 123u: goto L_089CE86C;
    case 124u: goto L_089CE880;
    case 125u: goto L_089CE888;
    case 126u: goto L_089CE890;
    case 127u: goto L_089CE8B8;
    case 128u: goto L_089CE8BC;
    case 129u: goto L_089CE8E4;
    case 130u: goto L_089CE8F4;
    case 131u: goto L_089CE920;
    case 132u: goto L_089CE928;
    case 133u: goto L_089CE964;
    case 134u: goto L_089CE968;
    case 135u: goto L_089CE98C;
    case 136u: goto L_089CE990;
    case 137u: goto L_089CE9A8;
    case 138u: goto L_089CE9C4;
    case 139u: goto L_089CE9DC;
    case 140u: goto L_089CE9E0;
    case 141u: goto L_089CE9F0;
    case 142u: goto L_089CEA04;
    case 143u: goto L_089CEA10;
    case 144u: goto L_089CEA1C;
    case 145u: goto L_089CEA30;
    case 146u: goto L_089CEA34;
    case 147u: goto L_089CEA44;
    case 148u: goto L_089CEA4C;
    case 149u: goto L_089CEA58;
    case 150u: goto L_089CEA80;
    case 151u: goto L_089CEAB8;
    case 152u: goto L_089CEAC4;
    case 153u: goto L_089CEACC;
    case 154u: goto L_089CEAD4;
    case 155u: goto L_089CEAE4;
    case 156u: goto L_089CEAEC;
    case 157u: goto L_089CEAFC;
    case 158u: goto L_089CEB30;
    case 159u: goto L_089CEB38;
    case 160u: goto L_089CEB40;
    case 161u: goto L_089CEB4C;
    case 162u: goto L_089CEB58;
    case 163u: goto L_089CEB5C;
    case 164u: goto L_089CEB64;
    case 165u: goto L_089CEB78;
    case 166u: goto L_089CEB8C;
    case 167u: goto L_089CEB90;
    case 168u: goto L_089CEBA4;
    case 169u: goto L_089CEBB0;
    case 170u: goto L_089CEBBC;
    case 171u: goto L_089CEBC0;
    case 172u: goto L_089CEBC8;
    case 173u: goto L_089CEBD0;
    case 174u: goto L_089CEBE0;
    case 175u: goto L_089CEBF0;
    case 176u: goto L_089CEBF8;
    case 177u: goto L_089CEC10;
    case 178u: goto L_089CEC18;
    case 179u: goto L_089CEC1C;
    case 180u: goto L_089CEC24;
    case 181u: goto L_089CEC34;
    case 182u: goto L_089CEC38;
    case 183u: goto L_089CEC44;
    case 184u: goto L_089CEC4C;
    case 185u: goto L_089CEC64;
    case 186u: goto L_089CEC6C;
    case 187u: goto L_089CEC70;
    case 188u: goto L_089CEC7C;
    case 189u: goto L_089CEC88;
    case 190u: goto L_089CECA0;
    case 191u: goto L_089CECA8;
    case 192u: goto L_089CECBC;
    case 193u: goto L_089CECCC;
    case 194u: goto L_089CECD0;
    case 195u: goto L_089CECD8;
    case 196u: goto L_089CECE0;
    case 197u: goto L_089CECF8;
    case 198u: goto L_089CECFC;
    case 199u: goto L_089CED00;
    case 200u: goto L_089CED18;
    case 201u: goto L_089CED3C;
    case 202u: goto L_089CED40;
    case 203u: goto L_089CED5C;
    case 204u: goto L_089CED64;
    case 205u: goto L_089CED6C;
    case 206u: goto L_089CEDA8;
    case 207u: goto L_089CEDD4;
    case 208u: goto L_089CEDDC;
    case 209u: goto L_089CEDF0;
    case 210u: goto L_089CEE00;
    case 211u: goto L_089CEE28;
    case 212u: goto L_089CEE34;
    case 213u: goto L_089CEE48;
    case 214u: goto L_089CEE4C;
    case 215u: goto L_089CEE78;
    case 216u: goto L_089CEE84;
    case 217u: goto L_089CEE8C;
    case 218u: goto L_089CEEC0;
    case 219u: goto L_089CEECC;
    case 220u: goto L_089CEED8;
    case 221u: goto L_089CEEE8;
    case 222u: goto L_089CEEFC;
    case 223u: goto L_089CEF18;
    case 224u: goto L_089CEF2C;
    case 225u: goto L_089CEF34;
    case 226u: goto L_089CEF44;
    case 227u: goto L_089CEF4C;
    case 228u: goto L_089CEF5C;
    case 229u: goto L_089CEF68;
    case 230u: goto L_089CEF78;
    case 231u: goto L_089CEF80;
    case 232u: goto L_089CEF8C;
    case 233u: goto L_089CEF94;
    case 234u: goto L_089CEFB8;
    case 235u: goto L_089CEFBC;
    case 236u: goto L_089CEFC0;
    case 237u: goto L_089CEFD0;
    case 238u: goto L_089CEFD8;
    case 239u: goto L_089CEFE8;
    case 240u: goto L_089CEFF4;
    case 241u: goto L_089CEFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089CE000:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
      if (branch_taken) {
          goto L_089CE104;
      }
      goto L_089CE008;
    }
L_089CE008:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[6] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12728));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE024:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (0u | 65535u);
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (0u + 0u);
        goto L_089CE108;
    }
    goto L_089CE034;
L_089CE034:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE040;
    }
L_089CE040:
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089CE058u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 89u, 0x089CC7B4u>(ctx, &aot_mem) && ctx.pc == 0x089CE058u) goto L_089CE058;
    return;
L_089CE058:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE060;
    }
L_089CE060:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_089CE0D8;
      }
      goto L_089CE06C;
    }
L_089CE06C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089CE0D8;
      }
      goto L_089CE098;
    }
L_089CE098:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[5] << 3u);
      if (branch_taken) {
          goto L_089CE394;
      }
      goto L_089CE0A8;
    }
L_089CE0A8:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089CE0D8;
L_089CE0D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[31] = (0x089CE0FCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0457_entry, 457u, 19u, 0x089CD19Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE0FCu) goto L_089CE0FC;
    return;
L_089CE0FC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE104;
    }
L_089CE104:
    aot_gpr[3] = (0u + 0u);
    goto L_089CE108;
L_089CE108:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE130:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(7));
    goto L_089CE108;
L_089CE138:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    aot_gpr[21] = (aot_gpr[10] & 65535u);
    aot_gpr[31] = (0x089CE15Cu);
    aot_gpr[19] = (aot_gpr[9] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 212u, 0x089CBFE8u>(ctx, &aot_mem) && ctx.pc == 0x089CE15Cu) goto L_089CE15C;
    return;
L_089CE15C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE164;
    }
L_089CE164:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(6)));
    aot_gpr[2] = (0u | 65533u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u | 65534u);
      if (branch_taken) {
          goto L_089CE44C;
      }
      goto L_089CE174;
    }
L_089CE174:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u | 65532u);
      if (branch_taken) {
          goto L_089CE49C;
      }
      goto L_089CE17C;
    }
L_089CE17C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CE4CC;
      }
      goto L_089CE184;
    }
L_089CE184:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(104)));
    aot_gpr[6] = (aot_gpr[19] & 65535u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CE130;
      }
      goto L_089CE194;
    }
L_089CE194:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (0u | 65535u);
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (0u + 0u);
        goto L_089CE108;
    }
    goto L_089CE1A4;
L_089CE1A4:
    if (aot_gpr[5] == aot_gpr[3]) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(188)));
        goto L_089CE504;
    }
    goto L_089CE1AC;
L_089CE1AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE1B8;
    }
L_089CE1B8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089CE328;
L_089CE1C0:
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[10] + 0u);
    aot_gpr[31] = (0x089CE1D4u);
    aot_gpr[7] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0457_entry, 457u, 37u, 0x089CD2CCu>(ctx, &aot_mem) && ctx.pc == 0x089CE1D4u) goto L_089CE1D4;
    return;
L_089CE1D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE1DC;
    }
L_089CE1DC:
    aot_gpr[3] = (0u + 0u);
    goto L_089CE108;
L_089CE1E4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (0u | 65535u);
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (0u + 0u);
        goto L_089CE108;
    }
    goto L_089CE1F4;
L_089CE1F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(22)));
    if (aot_gpr[2] != aot_gpr[3]) {
    aot_gpr[3] = (0u + 0u);
        goto L_089CE108;
    }
    goto L_089CE200;
L_089CE200:
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089CE218u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 137u, 0x089CCB70u>(ctx, &aot_mem) && ctx.pc == 0x089CE218u) goto L_089CE218;
    return;
L_089CE218:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE220;
    }
L_089CE220:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089CE228;
L_089CE228:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[31] = (0x089CE244u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0457_entry, 457u, 19u, 0x089CD19Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE244u) goto L_089CE244;
    return;
L_089CE244:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE24C;
    }
L_089CE24C:
    aot_gpr[3] = (0u + 0u);
    goto L_089CE108;
L_089CE254:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (0u | 65535u);
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (0u + 0u);
        goto L_089CE108;
    }
    goto L_089CE264;
L_089CE264:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE270;
    }
L_089CE270:
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089CE288u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 102u, 0x089CC8C8u>(ctx, &aot_mem) && ctx.pc == 0x089CE288u) goto L_089CE288;
    return;
L_089CE288:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE290;
    }
L_089CE290:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_089CE2C8;
      }
      goto L_089CE29C;
    }
L_089CE29C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[8]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_089CE3D8;
    }
    goto L_089CE2C8;
L_089CE2C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089CE2D0;
L_089CE2D0:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    goto L_089CE228;
L_089CE2D8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (0u | 65535u);
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (0u + 0u);
        goto L_089CE108;
    }
    goto L_089CE2E8;
L_089CE2E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE2F4;
    }
L_089CE2F4:
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089CE30Cu);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 95u, 0x089CC838u>(ctx, &aot_mem) && ctx.pc == 0x089CE30Cu) goto L_089CE30C;
    return;
L_089CE30C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE314;
    }
L_089CE314:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[5];
    aot_gpr[6] = (0u | 61440u);
      if (branch_taken) {
          goto L_089CE104;
      }
      goto L_089CE328;
    }
L_089CE328:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[10] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[31] = (0x089CE350u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE350u) goto L_089CE350;
    return;
L_089CE350:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE358;
    }
L_089CE358:
    aot_gpr[3] = (0u + 0u);
    goto L_089CE108;
L_089CE360:
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089CE378u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 186u, 0x089CBD6Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE378u) goto L_089CE378;
    return;
L_089CE378:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE380;
    }
L_089CE380:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(6)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (aot_gpr[4] << 6u);
        goto L_089CE39C;
    }
    goto L_089CE394;
L_089CE394:
    aot_gpr[3] = (0u | 54508u);
    goto L_089CE108;
L_089CE39C:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(152)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089CE3C4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE3C4u) goto L_089CE3C4;
    return;
L_089CE3C4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089CE3D0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 137u, 0x089C5AECu>(ctx, &aot_mem) && ctx.pc == 0x089CE3D0u) goto L_089CE3D0;
    return;
L_089CE3D0:
    aot_gpr[3] = (0u + 0u);
    goto L_089CE108;
L_089CE3D8:
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(3));
    goto L_089CE3E8;
L_089CE3E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[5] & 65535u);
    if (aot_gpr[2] == aot_gpr[3]) {
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[10]));
        goto L_089CE4FC;
    }
    goto L_089CE3F8;
L_089CE3F8:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[9];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CE3E8;
      }
      goto L_089CE404;
    }
L_089CE404:
    aot_gpr[4] = (aot_gpr[5] & 65535u);
    aot_gpr[2] = (aot_gpr[4] << 2u);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[4] = (aot_gpr[17] + 0u);
        goto L_089CE2D0;
    }
    goto L_089CE41C;
L_089CE41C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 54508u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE42C;
    }
L_089CE42C:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    goto L_089CE228;
L_089CE44C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(104)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CE130;
      }
      goto L_089CE45C;
    }
L_089CE45C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (0u | 65535u);
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (0u + 0u);
        goto L_089CE108;
    }
    goto L_089CE46C;
L_089CE46C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(22)));
    if (aot_gpr[2] != aot_gpr[3]) {
    aot_gpr[3] = (0u + 0u);
        goto L_089CE108;
    }
    goto L_089CE478;
L_089CE478:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(156)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[18] - aot_gpr[5]);
    aot_gpr[7] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CE494u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE494u) goto L_089CE494;
    return;
L_089CE494:
    aot_gpr[3] = (0u + 0u);
    goto L_089CE108;
L_089CE49C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089CE4BCu);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 153u, 0x089CCCB8u>(ctx, &aot_mem) && ctx.pc == 0x089CE4BCu) goto L_089CE4BC;
    return;
L_089CE4BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE4C4;
    }
L_089CE4C4:
    aot_gpr[3] = (0u + 0u);
    goto L_089CE108;
L_089CE4CC:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089CE4ECu);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 173u, 0x089CCE88u>(ctx, &aot_mem) && ctx.pc == 0x089CE4ECu) goto L_089CE4EC;
    return;
L_089CE4EC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE108;
      }
      goto L_089CE4F4;
    }
L_089CE4F4:
    aot_gpr[3] = (0u + 0u);
    goto L_089CE108;
L_089CE4FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089CE3F8;
L_089CE504:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(156)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[18] - aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[7]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CE51Cu);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE51Cu) goto L_089CE51C;
    return;
L_089CE51C:
    aot_gpr[3] = (0u + 0u);
    goto L_089CE108;
L_089CE524:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[3] = (0u | 54509u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089CE614;
      }
      goto L_089CE554;
    }
L_089CE554:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089CE614;
      }
      goto L_089CE584;
    }
L_089CE584:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(18)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[6] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CE59Cu);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE59Cu) goto L_089CE59C;
    return;
L_089CE59C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089CE608;
      }
      goto L_089CE5A8;
    }
L_089CE5A8:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(3));
    goto L_089CE5CC;
L_089CE5B4:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE608;
      }
      goto L_089CE5CC;
    }
L_089CE5CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089CE5D0;
L_089CE5D0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(584));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089CE5B4;
      }
      goto L_089CE5E0;
    }
L_089CE5E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CE5ECu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE5ECu) goto L_089CE5EC;
    return;
L_089CE5EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089CE5D0;
    }
    goto L_089CE608;
L_089CE608:
    aot_gpr[31] = (0x089CE610u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 108u, 0x089C280Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE610u) goto L_089CE610;
    return;
L_089CE610:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089CE614;
L_089CE614:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE634:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[6] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089CE6BC;
      }
      goto L_089CE66C;
    }
L_089CE66C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(6)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_089CE6BC;
      }
      goto L_089CE6A8;
    }
L_089CE6A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CE6B8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(188)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE6B8u) goto L_089CE6B8;
    return;
L_089CE6B8:
    aot_gpr[9] = (0u + 0u);
    goto L_089CE6BC;
L_089CE6BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[9] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE6CC:
    aot_gpr[2] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[6] & 65535u);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 155u, 0x089C2C30u>(ctx, &aot_mem); return;
L_089CE6DC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE6E4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE6EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[18] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089CE770;
      }
      goto L_089CE720;
    }
L_089CE720:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CE770;
      }
      goto L_089CE730;
    }
L_089CE730:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CE790;
      }
      goto L_089CE73C;
    }
L_089CE73C:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[4] = (0u | 54512u);
      if (branch_taken) {
          goto L_089CE754;
      }
      goto L_089CE744;
    }
L_089CE744:
    aot_gpr[4] = (0u | 54511u);
    aot_gpr[3] = (aot_gpr[6] ^ 3u);
    aot_gpr[2] = (0u | 54509u);
    if (aot_gpr[3] != 0u) aot_gpr[4] = (aot_gpr[2]);
    goto L_089CE754;
L_089CE754:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CE768u);
    aot_gpr[18] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE768u) goto L_089CE768;
    return;
L_089CE768:
    aot_gpr[31] = (0x089CE770u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 11u, 0x089C605Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE770u) goto L_089CE770;
    return;
L_089CE770:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089CE774;
L_089CE774:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089CE790:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CE7A8;
      }
      goto L_089CE798;
    }
L_089CE798:
    aot_gpr[3] = (aot_gpr[6] ^ 3u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[3] != 0u) aot_gpr[19] = (aot_gpr[2]);
    goto L_089CE7A8;
L_089CE7A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CE7B4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 183u, 0x089C3D70u>(ctx, &aot_mem) && ctx.pc == 0x089CE7B4u) goto L_089CE7B4;
    return;
L_089CE7B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE770;
      }
      goto L_089CE7BC;
    }
L_089CE7BC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089CE7D0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE7D0u) goto L_089CE7D0;
    return;
L_089CE7D0:
    aot_gpr[3] = (aot_gpr[17] << 6u);
    aot_gpr[2] = (aot_gpr[17] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089CE804;
      }
      goto L_089CE7F8;
    }
L_089CE7F8:
    aot_gpr[31] = (0x089CE800u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 2u, 0x089C10C8u>(ctx, &aot_mem) && ctx.pc == 0x089CE800u) goto L_089CE800;
    return;
L_089CE800:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089CE804;
L_089CE804:
    aot_gpr[31] = (0x089CE80Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 137u, 0x089C5AECu>(ctx, &aot_mem) && ctx.pc == 0x089CE80Cu) goto L_089CE80C;
    return;
L_089CE80C:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089CE774;
L_089CE814:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089CE890;
      }
      goto L_089CE858;
    }
L_089CE858:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[20];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089CE8BC;
      }
      goto L_089CE864;
    }
L_089CE864:
    aot_gpr[31] = (0x089CE86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 147u, 0x089C2BCCu>(ctx, &aot_mem) && ctx.pc == 0x089CE86Cu) goto L_089CE86C;
    return;
L_089CE86C:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[20];
    aot_gpr[7] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089CE8E4;
      }
      goto L_089CE880;
    }
L_089CE880:
    aot_gpr[31] = (0x089CE888u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    goto L_089CE6EC;
L_089CE888:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE8B8;
      }
      goto L_089CE890;
    }
L_089CE890:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE8B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089CE8BC;
L_089CE8BC:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE8E4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CE8F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE8F4u) goto L_089CE8F4;
    return;
L_089CE8F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE920:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE928:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[30]);
    aot_gpr[12] = (aot_gpr[4] + 0u);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089CE968;
      }
      goto L_089CE964;
    }
L_089CE964:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(76)));
    goto L_089CE968;
L_089CE968:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[12] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[9] & 65535u);
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? aot_gpr[2] : aot_gpr[3]);
    aot_gpr[14] = (aot_gpr[2] & 255u);
    { const bool branch_taken = aot_gpr[14] != 0u;
    aot_gpr[2] = (aot_gpr[4] << 1u);
      if (branch_taken) {
          goto L_089CE9A8;
      }
      goto L_089CE98C;
    }
L_089CE98C:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089CE990;
L_089CE990:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE9A8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[24] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089CEA30;
      }
      goto L_089CE9C4;
    }
L_089CE9C4:
    aot_gpr[8] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[13] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[11] = (aot_gpr[29] + 0u);
    goto L_089CE9F0;
L_089CE9DC:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089CE9E0;
L_089CE9E0:
    aot_gpr[2] = (aot_gpr[9] & 65535u);
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089CEA34;
      }
      goto L_089CE9F0;
    }
L_089CE9F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[10];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089CE9DC;
      }
      goto L_089CEA04;
    }
L_089CEA04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] != aot_gpr[13]) {
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089CE9E0;
    }
    goto L_089CEA10;
L_089CEA10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089CE9E0;
    }
    goto L_089CEA1C;
L_089CEA1C:
    PSPRECOMP_AOT_STORE16(aot_gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(2));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[12] + static_cast<std::uint32_t>(16)));
    goto L_089CE9DC;
L_089CEA30:
    aot_gpr[3] = (0u < aot_gpr[6] ? 1u : 0u);
    goto L_089CEA34;
L_089CEA34:
    aot_gpr[2] = (0u < aot_gpr[14] ? 1u : 0u);
    aot_gpr[25] = (aot_gpr[3] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[25] == 0u;
    aot_gpr[15] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CE98C;
      }
      goto L_089CEA44;
    }
L_089CEA44:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[15];
    aot_gpr[13] = (aot_gpr[6] - aot_gpr[15]);
      if (branch_taken) {
          goto L_089CEAE4;
      }
      goto L_089CEA4C;
    }
L_089CEA4C:
    aot_gpr[10] = (aot_gpr[24] + 0u);
    aot_gpr[11] = (0u + 0u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
    goto L_089CEA58;
L_089CEA58:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[12] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] << 6u);
    aot_gpr[3] = (aot_gpr[8] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089CEAC4;
      }
      goto L_089CEA80;
    }
L_089CEA80:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[9] << 6u);
    aot_gpr[2] = (aot_gpr[9] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEAC4;
      }
      goto L_089CEAB8;
    }
L_089CEAB8:
    aot_gpr[17] = (0u + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[9]));
    goto L_089CEAC4;
L_089CEAC4:
    { const bool branch_taken = aot_gpr[11] != aot_gpr[13];
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CEA58;
      }
      goto L_089CEACC;
    }
L_089CEACC:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[2] = (aot_gpr[15] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089CEAE4;
      }
      goto L_089CEAD4;
    }
L_089CEAD4:
    aot_gpr[3] = (aot_gpr[15] < aot_gpr[14] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CEA44;
      }
      goto L_089CEAE4;
    }
L_089CEAE4:
    { const bool branch_taken = aot_gpr[25] == 0u;
    aot_gpr[2] = (aot_gpr[6] << 1u);
      if (branch_taken) {
          goto L_089CE98C;
      }
      goto L_089CEAEC;
    }
L_089CEAEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[24]);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-2)));
    goto L_089CEAFC;
L_089CEAFC:
    aot_gpr[2] = (aot_gpr[4] & 255u);
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[8] < aot_gpr[14] ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CE98C;
      }
      goto L_089CEB30;
    }
L_089CEB30:
    if (aot_gpr[9] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-2)));
        goto L_089CEAFC;
    }
    goto L_089CEB38;
L_089CEB38:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089CE990;
L_089CEB40:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(116));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_089CEBC8;
      }
      goto L_089CEB4C;
    }
L_089CEB4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CEBC8;
      }
      goto L_089CEB58;
    }
L_089CEB58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CEB5C;
L_089CEB5C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_089CEBC0;
    }
    goto L_089CEB64;
L_089CEB64:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(27)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[2] = (aot_gpr[8] << 1u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[10] = (aot_gpr[7] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089CEBBC;
      }
      goto L_089CEB78;
    }
L_089CEB78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(34));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[5];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089CEBB0;
      }
      goto L_089CEB8C;
    }
L_089CEB8C:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089CEB90;
L_089CEB90:
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[6] + 0u);
    aot_gpr[9] = (aot_gpr[3] << 1u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CEBBC;
      }
      goto L_089CEBA4;
    }
L_089CEBA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != aot_gpr[5]) {
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089CEB90;
    }
    goto L_089CEBB0;
L_089CEBB0:
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[11]));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_089CEBBC;
L_089CEBBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089CEBC0;
L_089CEBC0:
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089CEB5C;
    }
    goto L_089CEBC8;
L_089CEBC8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEBD0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[13] = (0u + 0u);
      if (branch_taken) {
          goto L_089CEC18;
      }
      goto L_089CEBE0;
    }
L_089CEBE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(3));
    goto L_089CEBF8;
L_089CEBF0:
    if (aot_gpr[8] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(68)));
        goto L_089CEC1C;
    }
    goto L_089CEBF8;
L_089CEBF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[6] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[7];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089CEBF0;
      }
      goto L_089CEC10;
    }
L_089CEC10:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[2];
    aot_gpr[13] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_089CEBF8;
      }
      goto L_089CEC18;
    }
L_089CEC18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(68)));
    goto L_089CEC1C;
L_089CEC1C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[10] = (0u | 65535u);
      if (branch_taken) {
          goto L_089CEC38;
      }
      goto L_089CEC24;
    }
L_089CEC24:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[10] << 6u);
      if (branch_taken) {
          goto L_089CED18;
      }
      goto L_089CEC34;
    }
L_089CEC34:
    aot_gpr[10] = (0u | 65535u);
    goto L_089CEC38;
L_089CEC38:
    aot_gpr[14] = (0u + 0u);
    aot_gpr[12] = (0u | 65535u);
    aot_gpr[9] = (0u + 0u);
    goto L_089CEC44;
L_089CEC44:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_089CECD0;
      }
      goto L_089CEC4C;
    }
L_089CEC4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[11] = (aot_gpr[13] + 0u);
    aot_gpr[15] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[13] = (0u + static_cast<std::uint32_t>(3));
    goto L_089CEC7C;
L_089CEC64:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[15];
    // nop
      if (branch_taken) {
          goto L_089CECD8;
      }
      goto L_089CEC6C;
    }
L_089CEC6C:
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089CEC70;
L_089CEC70:
    aot_gpr[7] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089CECCC;
      }
      goto L_089CEC7C;
    }
L_089CEC7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[13];
    // nop
      if (branch_taken) {
          goto L_089CEC64;
      }
      goto L_089CEC88;
    }
L_089CEC88:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[11] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[2] != 0u) aot_gpr[6] = (aot_gpr[11]);
    aot_gpr[3] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(468)));
        goto L_089CECFC;
    }
    goto L_089CECA0;
L_089CECA0:
    { const bool branch_taken = aot_gpr[9] != aot_gpr[6];
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CEC70;
      }
      goto L_089CECA8;
    }
L_089CECA8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(468)));
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[12] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_089CED00;
    }
    goto L_089CECBC;
L_089CECBC:
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089CEC7C;
      }
      goto L_089CECCC;
    }
L_089CECCC:
    aot_gpr[2] = (0u | 65535u);
    goto L_089CECD0;
L_089CECD0:
    jump_target = aot_gpr[31];
    if (aot_gpr[14] != 0u) aot_gpr[2] = (aot_gpr[10]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CECD8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CEC70;
      }
      goto L_089CECE0;
    }
L_089CECE0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[11] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[2] != 0u) aot_gpr[6] = (aot_gpr[11]);
    aot_gpr[3] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CECA0;
      }
      goto L_089CECF8;
    }
L_089CECF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(468)));
    goto L_089CECFC;
L_089CECFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089CED00;
L_089CED00:
    aot_gpr[12] = (aot_gpr[3] & 65535u);
    aot_gpr[9] = (aot_gpr[6] + 0u);
    aot_gpr[2] = (aot_gpr[2] ^ 6u);
    aot_gpr[10] = (aot_gpr[7] + 0u);
    aot_gpr[14] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089CEC6C;
L_089CED18:
    aot_gpr[2] = (aot_gpr[10] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[13] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CED5C;
      }
      goto L_089CED3C;
    }
L_089CED3C:
    aot_gpr[2] = (aot_gpr[3] + 0u);
    goto L_089CED40;
L_089CED40:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(468)));
    aot_gpr[3] = (aot_gpr[13] + 0u);
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[13] ? 1u : 0u);
    if (aot_gpr[4] != 0u) aot_gpr[3] = (aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[3] + 0u);
    aot_gpr[14] = (0u + static_cast<std::uint32_t>(1));
    goto L_089CEC44;
L_089CED5C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[10] = (0u | 65535u);
        goto L_089CEC38;
    }
    goto L_089CED64;
L_089CED64:
    aot_gpr[2] = (aot_gpr[3] + 0u);
    goto L_089CED40;
L_089CED6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089CEDDC;
      }
      goto L_089CEDA8;
    }
L_089CEDA8:
    aot_gpr[3] = (aot_gpr[6] << 6u);
    aot_gpr[2] = (aot_gpr[6] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089CEE78;
      }
      goto L_089CEDD4;
    }
L_089CEDD4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089CEE84;
      }
      goto L_089CEDDC;
    }
L_089CEDDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089CEE8C;
      }
      goto L_089CEDF0;
    }
L_089CEDF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 54509u);
      if (branch_taken) {
          goto L_089CEE4C;
      }
      goto L_089CEE00;
    }
L_089CEE00:
    aot_gpr[3] = (aot_gpr[17] << 6u);
    aot_gpr[2] = (aot_gpr[17] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    goto L_089CEE28;
L_089CEE28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CEE34u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CEE34u) goto L_089CEE34;
    return;
L_089CEE34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CEE48u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CEE48u) goto L_089CEE48;
    return;
L_089CEE48:
    aot_gpr[3] = (0u + 0u);
    goto L_089CEE4C;
L_089CEE4C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEE78:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089CEDDC;
L_089CEE84:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089CEDDC;
L_089CEE8C:
    aot_gpr[3] = (aot_gpr[17] << 6u);
    aot_gpr[2] = (aot_gpr[17] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
        goto L_089CEE28;
    }
    goto L_089CEEC0;
L_089CEEC0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    if (aot_gpr[2] != aot_gpr[3]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
        goto L_089CEE28;
    }
    goto L_089CEECC;
L_089CEECC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
        goto L_089CEE28;
    }
    goto L_089CEED8;
L_089CEED8:
    aot_gpr[20] = (0u + 0u);
    aot_gpr[21] = (0u + 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(7));
    goto L_089CEEFC;
L_089CEEE8:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
        goto L_089CEE28;
    }
    goto L_089CEEFC;
L_089CEEFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[3] + aot_gpr[21]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089CEEE8;
      }
      goto L_089CEF18;
    }
L_089CEF18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[20] & 65535u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[22];
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089CEEE8;
      }
      goto L_089CEF2C;
    }
L_089CEF2C:
    aot_gpr[31] = (0x089CEF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 183u, 0x089C3D70u>(ctx, &aot_mem) && ctx.pc == 0x089CEF34u) goto L_089CEF34;
    return;
L_089CEF34:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089CEE4C;
      }
      goto L_089CEF44;
    }
L_089CEF44:
    aot_gpr[31] = (0x089CEF4Cu);
    // nop
    goto L_089CEB40;
L_089CEF4C:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CEE4C;
      }
      goto L_089CEF5C;
    }
L_089CEF5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CEF68u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CEF68u) goto L_089CEF68;
    return;
L_089CEF68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(436)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089CEF80;
      }
      goto L_089CEF78;
    }
L_089CEF78:
    aot_gpr[31] = (0x089CEF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 2u, 0x089C10C8u>(ctx, &aot_mem) && ctx.pc == 0x089CEF80u) goto L_089CEF80;
    return;
L_089CEF80:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089CEF8Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 137u, 0x089C5AECu>(ctx, &aot_mem) && ctx.pc == 0x089CEF8Cu) goto L_089CEF8C;
    return;
L_089CEF8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089CEEE8;
L_089CEF94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[5] & 65535u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089CEFD0;
      }
      goto L_089CEFB8;
    }
L_089CEFB8:
    aot_gpr[2] = (0u + 0u);
    goto L_089CEFBC;
L_089CEFBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089CEFC0;
L_089CEFC0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEFD0:
    aot_gpr[31] = (0x089CEFD8u);
    // nop
    goto L_089CEBD0;
L_089CEFD8:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089CEFBC;
      }
      goto L_089CEFE8;
    }
L_089CEFE8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[3];
    aot_gpr[5] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089CEFBC;
      }
      goto L_089CEFF4;
    }
L_089CEFF4:
    aot_gpr[31] = (0x089CEFFCu);
    // nop
    goto L_089CED6C;
L_089CEFFC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089CEFC0;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 1u, 0x089CF004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0458(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0458_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_458(Runtime &runtime) {
    runtime.register_generated_unit(458u, 0x089CE000u, 4096u, &recomp_unit_0458, &recomp_unit_0458_entry);
    runtime.register_function(0x089CE000u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE008u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE024u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE034u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE040u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE058u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE060u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE06Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE098u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE0A8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE0D8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE0FCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE104u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE108u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE130u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE138u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE15Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE164u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE174u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE17Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE184u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE194u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE1A4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE1ACu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE1B8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE1C0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE1D4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE1DCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE1E4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE1F4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE200u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE218u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE220u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE228u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE244u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE24Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE254u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE264u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE270u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE288u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE290u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE29Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE2C8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE2D0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE2D8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE2E8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE2F4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE30Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE314u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE328u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE350u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE358u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE360u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE378u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE380u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE394u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE39Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE3C4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE3D0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE3D8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE3E8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE3F8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE404u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE41Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE42Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE44Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE45Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE46Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE478u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE494u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE49Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE4BCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE4C4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE4CCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE4ECu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE4F4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE4FCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE504u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE51Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE524u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE554u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE584u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE59Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE5A8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE5B4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE5CCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE5D0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE5E0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE5ECu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE608u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE610u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE614u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE634u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE66Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE6A8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE6B8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE6BCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE6CCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE6DCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE6E4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE6ECu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE720u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE730u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE73Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE744u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE754u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE768u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE770u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE774u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE790u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE798u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE7A8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE7B4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE7BCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE7D0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE7F8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE800u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE804u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE80Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE814u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE858u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE864u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE86Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE880u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE888u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE890u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE8B8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE8BCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE8E4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE8F4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE920u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE928u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE964u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE968u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE98Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE990u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE9A8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE9C4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE9DCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE9E0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CE9F0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEA04u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEA10u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEA1Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEA30u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEA34u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEA44u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEA4Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEA58u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEA80u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEAB8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEAC4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEACCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEAD4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEAE4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEAECu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEAFCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEB30u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEB38u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEB40u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEB4Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEB58u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEB5Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEB64u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEB78u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEB8Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEB90u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEBA4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEBB0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEBBCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEBC0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEBC8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEBD0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEBE0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEBF0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEBF8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC10u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC18u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC1Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC24u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC34u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC38u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC44u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC4Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC64u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC6Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC70u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC7Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEC88u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CECA0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CECA8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CECBCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CECCCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CECD0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CECD8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CECE0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CECF8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CECFCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CED00u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CED18u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CED3Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CED40u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CED5Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CED64u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CED6Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEDA8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEDD4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEDDCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEDF0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEE00u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEE28u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEE34u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEE48u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEE4Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEE78u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEE84u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEE8Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEEC0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEECCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEED8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEEE8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEEFCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEF18u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEF2Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEF34u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEF44u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEF4Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEF5Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEF68u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEF78u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEF80u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEF8Cu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEF94u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEFB8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEFBCu, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEFC0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEFD0u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEFD8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEFE8u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEFF4u, &recomp_unit_0458, "recomp_unit_0458");
    runtime.register_function(0x089CEFFCu, &recomp_unit_0458, "recomp_unit_0458");
}
} // namespace psprecomp
