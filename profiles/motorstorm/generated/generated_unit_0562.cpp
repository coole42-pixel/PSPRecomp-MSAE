#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0562[1022] = {
    1, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9,
    0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 26,
    0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0,
    34, 0, 35, 0, 0, 36, 0, 0, 0, 37, 38, 0, 0, 39, 0, 0, 0, 40, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0,
    50, 0, 51, 0, 0, 52, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 78, 79, 0, 80, 0, 81, 82, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 91, 92, 0, 93, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0,
    107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0,
    0, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 130, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0,
    143, 144, 0, 0, 145, 0, 146, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 151, 0, 152, 153, 0, 154, 0, 0,
    155, 0, 156, 157, 158, 159, 0, 160, 0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 165, 0, 166, 0, 0, 167, 0, 168, 169, 170, 171, 0, 172, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 192,
    0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 197, 0, 0, 0, 0, 0, 198, 199, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0,
    207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236,
};
void recomp_unit_0562_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A36000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0562[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A36000;
    case 2u: goto L_08A36004;
    case 3u: goto L_08A3600C;
    case 4u: goto L_08A3601C;
    case 5u: goto L_08A3602C;
    case 6u: goto L_08A3604C;
    case 7u: goto L_08A3605C;
    case 8u: goto L_08A36074;
    case 9u: goto L_08A3607C;
    case 10u: goto L_08A36084;
    case 11u: goto L_08A36090;
    case 12u: goto L_08A360A0;
    case 13u: goto L_08A360AC;
    case 14u: goto L_08A360B8;
    case 15u: goto L_08A360D0;
    case 16u: goto L_08A360D8;
    case 17u: goto L_08A360E8;
    case 18u: goto L_08A360F8;
    case 19u: goto L_08A3611C;
    case 20u: goto L_08A3612C;
    case 21u: goto L_08A3614C;
    case 22u: goto L_08A36154;
    case 23u: goto L_08A3615C;
    case 24u: goto L_08A36164;
    case 25u: goto L_08A36174;
    case 26u: goto L_08A3617C;
    case 27u: goto L_08A3618C;
    case 28u: goto L_08A36194;
    case 29u: goto L_08A361A4;
    case 30u: goto L_08A361B4;
    case 31u: goto L_08A361D0;
    case 32u: goto L_08A361E0;
    case 33u: goto L_08A361F8;
    case 34u: goto L_08A36200;
    case 35u: goto L_08A36208;
    case 36u: goto L_08A36214;
    case 37u: goto L_08A36224;
    case 38u: goto L_08A36228;
    case 39u: goto L_08A36234;
    case 40u: goto L_08A36244;
    case 41u: goto L_08A36248;
    case 42u: goto L_08A36254;
    case 43u: goto L_08A36268;
    case 44u: goto L_08A3629C;
    case 45u: goto L_08A362B0;
    case 46u: goto L_08A362CC;
    case 47u: goto L_08A362D8;
    case 48u: goto L_08A362EC;
    case 49u: goto L_08A362F4;
    case 50u: goto L_08A36300;
    case 51u: goto L_08A36308;
    case 52u: goto L_08A36314;
    case 53u: goto L_08A36318;
    case 54u: goto L_08A36320;
    case 55u: goto L_08A36330;
    case 56u: goto L_08A36338;
    case 57u: goto L_08A36348;
    case 58u: goto L_08A36354;
    case 59u: goto L_08A36364;
    case 60u: goto L_08A36374;
    case 61u: goto L_08A36394;
    case 62u: goto L_08A3639C;
    case 63u: goto L_08A363A8;
    case 64u: goto L_08A363B0;
    case 65u: goto L_08A363C0;
    case 66u: goto L_08A363C8;
    case 67u: goto L_08A363D0;
    case 68u: goto L_08A363D8;
    case 69u: goto L_08A363E0;
    case 70u: goto L_08A363E8;
    case 71u: goto L_08A363F0;
    case 72u: goto L_08A363F8;
    case 73u: goto L_08A36408;
    case 74u: goto L_08A36420;
    case 75u: goto L_08A36428;
    case 76u: goto L_08A36438;
    case 77u: goto L_08A36444;
    case 78u: goto L_08A3644C;
    case 79u: goto L_08A36450;
    case 80u: goto L_08A36458;
    case 81u: goto L_08A36460;
    case 82u: goto L_08A36464;
    case 83u: goto L_08A3646C;
    case 84u: goto L_08A3648C;
    case 85u: goto L_08A36498;
    case 86u: goto L_08A364A4;
    case 87u: goto L_08A364B0;
    case 88u: goto L_08A364C4;
    case 89u: goto L_08A364D0;
    case 90u: goto L_08A364D8;
    case 91u: goto L_08A364E4;
    case 92u: goto L_08A364E8;
    case 93u: goto L_08A364F0;
    case 94u: goto L_08A364F8;
    case 95u: goto L_08A3655C;
    case 96u: goto L_08A365BC;
    case 97u: goto L_08A365C0;
    case 98u: goto L_08A365C8;
    case 99u: goto L_08A3660C;
    case 100u: goto L_08A36614;
    case 101u: goto L_08A3662C;
    case 102u: goto L_08A36644;
    case 103u: goto L_08A3664C;
    case 104u: goto L_08A36654;
    case 105u: goto L_08A36660;
    case 106u: goto L_08A36674;
    case 107u: goto L_08A36680;
    case 108u: goto L_08A36698;
    case 109u: goto L_08A366AC;
    case 110u: goto L_08A366C4;
    case 111u: goto L_08A366CC;
    case 112u: goto L_08A366D4;
    case 113u: goto L_08A366E0;
    case 114u: goto L_08A366EC;
    case 115u: goto L_08A366F8;
    case 116u: goto L_08A36708;
    case 117u: goto L_08A3671C;
    case 118u: goto L_08A36724;
    case 119u: goto L_08A36748;
    case 120u: goto L_08A3675C;
    case 121u: goto L_08A36770;
    case 122u: goto L_08A36788;
    case 123u: goto L_08A36790;
    case 124u: goto L_08A36798;
    case 125u: goto L_08A367B4;
    case 126u: goto L_08A367BC;
    case 127u: goto L_08A367C8;
    case 128u: goto L_08A367D0;
    case 129u: goto L_08A367F0;
    case 130u: goto L_08A367F4;
    case 131u: goto L_08A367F8;
    case 132u: goto L_08A36820;
    case 133u: goto L_08A36878;
    case 134u: goto L_08A36888;
    case 135u: goto L_08A368A4;
    case 136u: goto L_08A368AC;
    case 137u: goto L_08A368B4;
    case 138u: goto L_08A368C8;
    case 139u: goto L_08A368DC;
    case 140u: goto L_08A368E8;
    case 141u: goto L_08A368F0;
    case 142u: goto L_08A368F8;
    case 143u: goto L_08A36900;
    case 144u: goto L_08A36904;
    case 145u: goto L_08A36910;
    case 146u: goto L_08A36918;
    case 147u: goto L_08A3691C;
    case 148u: goto L_08A36940;
    case 149u: goto L_08A36948;
    case 150u: goto L_08A36954;
    case 151u: goto L_08A36960;
    case 152u: goto L_08A36968;
    case 153u: goto L_08A3696C;
    case 154u: goto L_08A36974;
    case 155u: goto L_08A36980;
    case 156u: goto L_08A36988;
    case 157u: goto L_08A3698C;
    case 158u: goto L_08A36990;
    case 159u: goto L_08A36994;
    case 160u: goto L_08A3699C;
    case 161u: goto L_08A369A4;
    case 162u: goto L_08A369B0;
    case 163u: goto L_08A369BC;
    case 164u: goto L_08A369C4;
    case 165u: goto L_08A369C8;
    case 166u: goto L_08A369D0;
    case 167u: goto L_08A369DC;
    case 168u: goto L_08A369E4;
    case 169u: goto L_08A369E8;
    case 170u: goto L_08A369EC;
    case 171u: goto L_08A369F0;
    case 172u: goto L_08A369F8;
    case 173u: goto L_08A36A0C;
    case 174u: goto L_08A36A20;
    case 175u: goto L_08A36A38;
    case 176u: goto L_08A36A44;
    case 177u: goto L_08A36A4C;
    case 178u: goto L_08A36A6C;
    case 179u: goto L_08A36A7C;
    case 180u: goto L_08A36AA0;
    case 181u: goto L_08A36AB8;
    case 182u: goto L_08A36AC4;
    case 183u: goto L_08A36AD4;
    case 184u: goto L_08A36ADC;
    case 185u: goto L_08A36B00;
    case 186u: goto L_08A36B08;
    case 187u: goto L_08A36B28;
    case 188u: goto L_08A36B50;
    case 189u: goto L_08A36B5C;
    case 190u: goto L_08A36B68;
    case 191u: goto L_08A36B70;
    case 192u: goto L_08A36B7C;
    case 193u: goto L_08A36B84;
    case 194u: goto L_08A36B8C;
    case 195u: goto L_08A36B94;
    case 196u: goto L_08A36BBC;
    case 197u: goto L_08A36BC0;
    case 198u: goto L_08A36BD8;
    case 199u: goto L_08A36BDC;
    case 200u: goto L_08A36BE4;
    case 201u: goto L_08A36C14;
    case 202u: goto L_08A36C24;
    case 203u: goto L_08A36C44;
    case 204u: goto L_08A36C4C;
    case 205u: goto L_08A36C64;
    case 206u: goto L_08A36C70;
    case 207u: goto L_08A36C80;
    case 208u: goto L_08A36C8C;
    case 209u: goto L_08A36CE0;
    case 210u: goto L_08A36CF8;
    case 211u: goto L_08A36D10;
    case 212u: goto L_08A36D40;
    case 213u: goto L_08A36D48;
    case 214u: goto L_08A36D6C;
    case 215u: goto L_08A36D84;
    case 216u: goto L_08A36DA0;
    case 217u: goto L_08A36DD0;
    case 218u: goto L_08A36DE0;
    case 219u: goto L_08A36E4C;
    case 220u: goto L_08A36E64;
    case 221u: goto L_08A36E6C;
    case 222u: goto L_08A36E78;
    case 223u: goto L_08A36EA8;
    case 224u: goto L_08A36EC8;
    case 225u: goto L_08A36ED0;
    case 226u: goto L_08A36ED8;
    case 227u: goto L_08A36EE0;
    case 228u: goto L_08A36F00;
    case 229u: goto L_08A36F20;
    case 230u: goto L_08A36F34;
    case 231u: goto L_08A36F64;
    case 232u: goto L_08A36F98;
    case 233u: goto L_08A36FA8;
    case 234u: goto L_08A36FC8;
    case 235u: goto L_08A36FE0;
    case 236u: goto L_08A36FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A36000:
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A36004;
L_08A36004:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A36074;
    }
    goto L_08A3600C;
L_08A3600C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A3604C;
      }
      goto L_08A3601C;
    }
L_08A3601C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A3602Cu);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A3602Cu) goto L_08A3602C;
    return;
L_08A3602C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A360A0;
      }
      goto L_08A3604C;
    }
L_08A3604C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A3605Cu);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A3605Cu) goto L_08A3605C;
    return;
L_08A3605C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A360A0;
      }
      goto L_08A36074;
    }
L_08A36074:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A36090;
      }
      goto L_08A3607C;
    }
L_08A3607C:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A36090;
      }
      goto L_08A36084;
    }
L_08A36084:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A36090;
L_08A36090:
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A360A0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 194u, 0x08A34C58u>(ctx, &aot_mem) && ctx.pc == 0x08A360A0u) goto L_08A360A0;
    return;
L_08A360A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A36228;
      }
      goto L_08A360AC;
    }
L_08A360AC:
    aot_gpr[16] = (aot_gpr[30] - aot_gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[5] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A36228;
      }
      goto L_08A360B8;
    }
L_08A360B8:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3618C;
      }
      goto L_08A360D0;
    }
L_08A360D0:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A3614C;
    }
    goto L_08A360D8;
L_08A360D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A3611C;
      }
      goto L_08A360E8;
    }
L_08A360E8:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A360F8u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A360F8u) goto L_08A360F8;
    return;
L_08A360F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A3617C;
      }
      goto L_08A3611C;
    }
L_08A3611C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A3612Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A3612Cu) goto L_08A3612C;
    return;
L_08A3612C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A3617C;
      }
      goto L_08A3614C;
    }
L_08A3614C:
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A36164;
    }
    goto L_08A36154;
L_08A36154:
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A36164;
    }
    goto L_08A3615C;
L_08A3615C:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[21]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08A36164;
L_08A36164:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08A36174u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 194u, 0x08A34C58u>(ctx, &aot_mem) && ctx.pc == 0x08A36174u) goto L_08A36174;
    return;
L_08A36174:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A3617C;
L_08A3617C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A360D0;
      }
      goto L_08A3618C;
    }
L_08A3618C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A361F8;
    }
    goto L_08A36194;
L_08A36194:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A361D0;
      }
      goto L_08A361A4;
    }
L_08A361A4:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A361B4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A361B4u) goto L_08A361B4;
    return;
L_08A361B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A36224;
      }
      goto L_08A361D0;
    }
L_08A361D0:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A361E0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A361E0u) goto L_08A361E0;
    return;
L_08A361E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A36224;
      }
      goto L_08A361F8;
    }
L_08A361F8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A36214;
      }
      goto L_08A36200;
    }
L_08A36200:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A36214;
      }
      goto L_08A36208;
    }
L_08A36208:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[21]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A36214;
L_08A36214:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A36224u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 194u, 0x08A34C58u>(ctx, &aot_mem) && ctx.pc == 0x08A36224u) goto L_08A36224;
    return;
L_08A36224:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08A36228;
L_08A36228:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[30]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (aot_gpr[30] | 0u);
        goto L_08A36234;
    }
    goto L_08A36234;
L_08A36234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 207u, 0x08A34E40u>(ctx, &aot_mem); return;
      }
      goto L_08A36244;
    }
L_08A36244:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    goto L_08A36248;
L_08A36248:
    aot_gpr[4] = (aot_gpr[4] & 512u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36268;
      }
      goto L_08A36254;
    }
L_08A36254:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A36268u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 194u, 0x08A34C58u>(ctx, &aot_mem) && ctx.pc == 0x08A36268u) goto L_08A36268;
    return;
L_08A36268:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3629C:
    aot_gpr[10] = (2215u << 16u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(8160));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08A362B0;
L_08A362B0:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[11]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[2] & 8u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[3] | 0u);
      if (branch_taken) {
          goto L_08A362B0;
      }
      goto L_08A362CC;
    }
L_08A362CC:
    aot_gpr[2] = (0u | 45u);
    { const bool branch_taken = aot_gpr[11] != aot_gpr[2];
    aot_gpr[2] = (0u | 43u);
      if (branch_taken) {
          goto L_08A362EC;
      }
      goto L_08A362D8;
    }
L_08A362D8:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[3] | 0u);
      if (branch_taken) {
          goto L_08A36300;
      }
      goto L_08A362EC;
    }
L_08A362EC:
    { const bool branch_taken = aot_gpr[11] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A36300;
      }
      goto L_08A362F4;
    }
L_08A362F4:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[3] | 0u);
    goto L_08A36300;
L_08A36300:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u | 48u);
      if (branch_taken) {
          goto L_08A36318;
      }
      goto L_08A36308;
    }
L_08A36308:
    aot_gpr[2] = (0u | 16u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[2];
    aot_gpr[14] = (aot_gpr[10] + aot_gpr[11]);
      if (branch_taken) {
          goto L_08A36348;
      }
      goto L_08A36314;
    }
L_08A36314:
    aot_gpr[2] = (0u | 48u);
    goto L_08A36318;
L_08A36318:
    { const bool branch_taken = aot_gpr[11] != aot_gpr[2];
    aot_gpr[14] = (aot_gpr[10] + aot_gpr[11]);
      if (branch_taken) {
          goto L_08A36348;
      }
      goto L_08A36320;
    }
L_08A36320:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[12] = (0u | 120u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[12];
    aot_gpr[12] = (0u | 88u);
      if (branch_taken) {
          goto L_08A36338;
      }
      goto L_08A36330;
    }
L_08A36330:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[12];
    aot_gpr[14] = (aot_gpr[10] + aot_gpr[11]);
      if (branch_taken) {
          goto L_08A36348;
      }
      goto L_08A36338;
    }
L_08A36338:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr[8] = (aot_gpr[3] + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (0u | 16u);
    aot_gpr[14] = (aot_gpr[10] + aot_gpr[11]);
    goto L_08A36348;
L_08A36348:
    aot_gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[15] = (aot_gpr[14] & 4u);
      if (branch_taken) {
          goto L_08A36364;
      }
      goto L_08A36354;
    }
L_08A36354:
    aot_gpr[7] = (0u | 10u);
    aot_gpr[2] = (0u | 48u);
    if (aot_gpr[11] == aot_gpr[2]) {
    aot_gpr[7] = (0u | 8u);
        goto L_08A36364;
    }
    goto L_08A36364;
L_08A36364:
    aot_gpr[12] = (32768u << 16u);
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(-1));
    if (aot_gpr[9] != 0u) {
    aot_gpr[12] = (32768u << 16u);
        goto L_08A36374;
    }
    goto L_08A36374;
L_08A36374:
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[3] = (0u | 0u);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[13] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[12] = (ctx.lo);
    goto L_08A36394;
L_08A36394:
    { const bool branch_taken = aot_gpr[15] == 0u;
    aot_gpr[15] = (aot_gpr[14] & 3u);
      if (branch_taken) {
          goto L_08A363A8;
      }
      goto L_08A3639C;
    }
L_08A3639C:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A363C8;
      }
      goto L_08A363A8;
    }
L_08A363A8:
    { const bool branch_taken = aot_gpr[15] == 0u;
    aot_gpr[15] = (aot_gpr[14] | 0u);
      if (branch_taken) {
          goto L_08A36420;
      }
      goto L_08A363B0;
    }
L_08A363B0:
    aot_gpr[14] = (0u | 87u);
    aot_gpr[15] = (aot_gpr[15] & 1u);
    if (aot_gpr[15] != 0u) {
    aot_gpr[14] = (0u | 55u);
        goto L_08A363C0;
    }
    goto L_08A363C0;
L_08A363C0:
    aot_gpr[11] = (aot_gpr[11] - aot_gpr[14]);
    aot_gpr[14] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    goto L_08A363C8;
L_08A363C8:
    { const bool branch_taken = aot_gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36420;
      }
      goto L_08A363D0;
    }
L_08A363D0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (aot_gpr[12] < aot_gpr[3] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A363F0;
      }
      goto L_08A363D8;
    }
L_08A363D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A363F0;
      }
      goto L_08A363E0;
    }
L_08A363E0:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[12];
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[13]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A363F8;
      }
      goto L_08A363E8;
    }
L_08A363E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A363F8;
      }
      goto L_08A363F0;
    }
L_08A363F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A36408;
      }
      goto L_08A363F8;
    }
L_08A363F8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (0u | 1u);
    aot_gpr[3] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[11]);
    goto L_08A36408;
L_08A36408:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[14] = (aot_gpr[10] + aot_gpr[11]);
    aot_gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[15] = (aot_gpr[14] & 4u);
      if (branch_taken) {
          goto L_08A36394;
      }
      goto L_08A36420;
    }
L_08A36420:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A36444;
      }
      goto L_08A36428;
    }
L_08A36428:
    aot_gpr[3] = (32768u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    if (aot_gpr[9] != 0u) {
    aot_gpr[3] = (32768u << 16u);
        goto L_08A36438;
    }
    goto L_08A36438;
L_08A36438:
    aot_gpr[7] = (0u | 34u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A36450;
      }
      goto L_08A36444;
    }
L_08A36444:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36450;
      }
      goto L_08A3644C;
    }
L_08A3644C:
    aot_gpr[3] = (0u - aot_gpr[3]);
    goto L_08A36450;
L_08A36450:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A36464;
      }
      goto L_08A36458;
    }
L_08A36458:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
        goto L_08A36460;
    }
    goto L_08A36460;
L_08A36460:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A36464;
L_08A36464:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3646C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A3648Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    goto L_08A3629C;
L_08A3648C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36498:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A364A4:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A364B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A364C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    goto L_08A364A4;
L_08A364C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A364D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A364E8;
      }
      goto L_08A364D8;
    }
L_08A364D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(0u + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A364F0;
      }
      goto L_08A364E4;
    }
L_08A364E4:
    aot_gpr[4] = (2216u << 16u);
    goto L_08A364E8;
L_08A364E8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A364F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A364F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[23]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[25]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[27]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[29]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[31]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3655C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[29] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_fpr[23] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_fpr[25] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_fpr[27] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_fpr[29] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_fpr[31] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08A365C0;
      }
      goto L_08A365BC;
    }
L_08A365BC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    goto L_08A365C0;
L_08A365C0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A365C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 20u));
    aot_gpr[18] = (aot_gpr[6] & 2047u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1023));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[18]) < 20 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A366EC;
      }
      goto L_08A3660C;
    }
L_08A3660C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) >= 0;
    aot_gpr[4] = (16u << 16u);
      if (branch_taken) {
          goto L_08A36680;
      }
      goto L_08A36614;
    }
L_08A36614:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8508)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8504)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3662Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A3662Cu) goto L_08A3662C;
    return;
L_08A3662C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8620)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8616)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A36644u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A36644u) goto L_08A36644;
    return;
L_08A36644:
    if (static_cast<std::int32_t>(aot_gpr[2]) <= 0) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
        goto L_08A367F8;
    }
    goto L_08A3664C;
L_08A3664C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    aot_gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_08A36660;
      }
      goto L_08A36654;
    }
L_08A36654:
    aot_gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A367F4;
      }
      goto L_08A36660;
    }
L_08A36660:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[16] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
        goto L_08A367F8;
    }
    goto L_08A36674;
L_08A36674:
    aot_gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (49136u << 16u);
      if (branch_taken) {
          goto L_08A367F4;
      }
      goto L_08A36680;
    }
L_08A36680:
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> (aot_gpr[18] & 31u)));
    aot_gpr[4] = (aot_gpr[16] & aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A36798;
      }
      goto L_08A36698;
    }
L_08A36698:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8508)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8504)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A366ACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A366ACu) goto L_08A366AC;
    return;
L_08A366AC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8620)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8616)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A366C4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A366C4u) goto L_08A366C4;
    return;
L_08A366C4:
    if (static_cast<std::int32_t>(aot_gpr[2]) <= 0) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
        goto L_08A367F8;
    }
    goto L_08A366CC;
L_08A366CC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    aot_gpr[19] = (~(aot_gpr[19] | 0u));
      if (branch_taken) {
          goto L_08A366E0;
      }
      goto L_08A366D4;
    }
L_08A366D4:
    aot_gpr[4] = (16u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> (aot_gpr[18] & 31u)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    goto L_08A366E0;
L_08A366E0:
    aot_gpr[16] = (aot_gpr[16] & aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A367F4;
      }
      goto L_08A366EC;
    }
L_08A366EC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 52 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08A36748;
      }
      goto L_08A366F8;
    }
L_08A366F8:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[6] = (0u | 1024u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A36724;
      }
      goto L_08A36708;
    }
L_08A36708:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A3671Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A3671Cu) goto L_08A3671C;
    return;
L_08A3671C:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A36724;
L_08A36724:
    aot_gpr[3] = (aot_gpr[5] | 0u);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36748:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (aot_gpr[4] >> (aot_gpr[19] & 31u));
    aot_gpr[4] = (aot_gpr[17] & aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A36798;
      }
      goto L_08A3675C;
    }
L_08A3675C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8508)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8504)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A36770u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A36770u) goto L_08A36770;
    return;
L_08A36770:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8620)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8616)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A36788u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A36788u) goto L_08A36788;
    return;
L_08A36788:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A367B4;
      }
      goto L_08A36790;
    }
L_08A36790:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A367F8;
      }
      goto L_08A36798;
    }
L_08A36798:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A367B4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    aot_gpr[19] = (~(aot_gpr[19] | 0u));
      if (branch_taken) {
          goto L_08A367F0;
      }
      goto L_08A367BC;
    }
L_08A367BC:
    aot_gpr[4] = (0u | 20u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    aot_gpr[4] = (0u | 52u);
      if (branch_taken) {
          goto L_08A367D0;
      }
      goto L_08A367C8;
    }
L_08A367C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A367F0;
      }
      goto L_08A367D0;
    }
L_08A367D0:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[18]);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[6] << (aot_gpr[4] & 31u));
    aot_gpr[17] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08A367F0;
    }
    goto L_08A367F0;
L_08A367F0:
    aot_gpr[17] = (aot_gpr[17] & aot_gpr[19]);
    goto L_08A367F4;
L_08A367F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    goto L_08A367F8;
L_08A367F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36820:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (32768u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[12] = (32768u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[12] = (aot_gpr[13] & aot_gpr[12]);
    aot_gpr[14] = (aot_gpr[14] & aot_gpr[8]);
    aot_gpr[13] = (aot_gpr[13] ^ aot_gpr[12]);
    aot_gpr[3] = (aot_gpr[5] | 0u);
    aot_gpr[15] = (aot_gpr[14] | aot_gpr[11]);
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[15] == 0u;
    aot_gpr[8] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A368B4;
      }
      goto L_08A36878;
    }
L_08A36878:
    aot_gpr[4] = (32752u << 16u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[13]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u - aot_gpr[11]);
      if (branch_taken) {
          goto L_08A368B4;
      }
      goto L_08A36888;
    }
L_08A36888:
    aot_gpr[4] = (aot_gpr[11] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[14] | aot_gpr[4]);
    aot_gpr[5] = (32752u << 16u);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[14]) < static_cast<std::int32_t>(aot_gpr[13]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A368B4;
      }
      goto L_08A368A4;
    }
L_08A368A4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[13]) < static_cast<std::int32_t>(aot_gpr[14]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A368E8;
      }
      goto L_08A368AC;
    }
L_08A368AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (16u << 16u);
      if (branch_taken) {
          goto L_08A36904;
      }
      goto L_08A368B4;
    }
L_08A368B4:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A368C8u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A368C8u) goto L_08A368C8;
    return;
L_08A368C8:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A368DCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A368DCu) goto L_08A368DC;
    return;
L_08A368DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A368E8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[10] < aot_gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A36C80;
      }
      goto L_08A368F0;
    }
L_08A368F0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36C80;
      }
      goto L_08A368F8;
    }
L_08A368F8:
    { const bool branch_taken = aot_gpr[10] == aot_gpr[11];
    aot_gpr[4] = (aot_gpr[12] >> 31u);
      if (branch_taken) {
          goto L_08A3691C;
      }
      goto L_08A36900;
    }
L_08A36900:
    aot_gpr[4] = (16u << 16u);
    goto L_08A36904;
L_08A36904:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[13]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36940;
      }
      goto L_08A36910;
    }
L_08A36910:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[13]) >> 20u));
      if (branch_taken) {
          goto L_08A3698C;
      }
      goto L_08A36918;
    }
L_08A36918:
    aot_gpr[4] = (aot_gpr[12] >> 31u);
    goto L_08A3691C;
L_08A3691C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8520));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36940:
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[5] = (aot_gpr[13] << 11u);
      if (branch_taken) {
          goto L_08A3696C;
      }
      goto L_08A36948;
    }
L_08A36948:
    aot_gpr[5] = (aot_gpr[10] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1043));
      if (branch_taken) {
          goto L_08A36990;
      }
      goto L_08A36954;
    }
L_08A36954:
    aot_gpr[5] = (aot_gpr[5] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A36954;
      }
      goto L_08A36960;
    }
L_08A36960:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[14]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A36994;
      }
      goto L_08A36968;
    }
L_08A36968:
    aot_gpr[5] = (aot_gpr[13] << 11u);
    goto L_08A3696C;
L_08A3696C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08A36990;
      }
      goto L_08A36974;
    }
L_08A36974:
    aot_gpr[5] = (aot_gpr[5] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A36974;
      }
      goto L_08A36980;
    }
L_08A36980:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[14]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A36994;
      }
      goto L_08A36988;
    }
L_08A36988:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[13]) >> 20u));
    goto L_08A3698C;
L_08A3698C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1023));
    goto L_08A36990;
L_08A36990:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[14]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    goto L_08A36994;
L_08A36994:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[14]) >> 20u));
      if (branch_taken) {
          goto L_08A369E8;
      }
      goto L_08A3699C;
    }
L_08A3699C:
    { const bool branch_taken = aot_gpr[14] != 0u;
    aot_gpr[7] = (aot_gpr[14] << 11u);
      if (branch_taken) {
          goto L_08A369C8;
      }
      goto L_08A369A4;
    }
L_08A369A4:
    aot_gpr[7] = (aot_gpr[11] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1043));
      if (branch_taken) {
          goto L_08A369EC;
      }
      goto L_08A369B0;
    }
L_08A369B0:
    aot_gpr[7] = (aot_gpr[7] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) > 0;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A369B0;
      }
      goto L_08A369BC;
    }
L_08A369BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A369F0;
      }
      goto L_08A369C4;
    }
L_08A369C4:
    aot_gpr[7] = (aot_gpr[14] << 11u);
    goto L_08A369C8;
L_08A369C8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08A369EC;
      }
      goto L_08A369D0;
    }
L_08A369D0:
    aot_gpr[7] = (aot_gpr[7] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) > 0;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A369D0;
      }
      goto L_08A369DC;
    }
L_08A369DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A369F0;
      }
      goto L_08A369E4;
    }
L_08A369E4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[14]) >> 20u));
    goto L_08A369E8;
L_08A369E8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1023));
    goto L_08A369EC;
L_08A369EC:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < -1022 ? 1u : 0u);
    goto L_08A369F0;
L_08A369F0:
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A36A0C;
      }
      goto L_08A369F8;
    }
L_08A369F8:
    aot_gpr[8] = (16u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[13] = (aot_gpr[13] & aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[4]);
      if (branch_taken) {
          goto L_08A36A44;
      }
      goto L_08A36A0C;
    }
L_08A36A0C:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1022));
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[6]);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (0u | 32u);
      if (branch_taken) {
          goto L_08A36A38;
      }
      goto L_08A36A20;
    }
L_08A36A20:
    aot_gpr[9] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[13] = (aot_gpr[13] << (aot_gpr[8] & 31u));
    aot_gpr[9] = (aot_gpr[10] >> (aot_gpr[9] & 31u));
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[10] << (aot_gpr[8] & 31u));
      if (branch_taken) {
          goto L_08A36A44;
      }
      goto L_08A36A38;
    }
L_08A36A38:
    aot_gpr[13] = (aot_gpr[8] + static_cast<std::uint32_t>(-32));
    aot_gpr[13] = (aot_gpr[10] << (aot_gpr[13] & 31u));
    aot_gpr[10] = (0u | 0u);
    goto L_08A36A44;
L_08A36A44:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08A36A6C;
      }
      goto L_08A36A4C;
    }
L_08A36A4C:
    aot_gpr[8] = (16u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[14] = (aot_gpr[14] & aot_gpr[8]);
    aot_gpr[14] = (aot_gpr[14] | aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[10] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[13] - aot_gpr[14]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[10] - aot_gpr[11]);
      if (branch_taken) {
          goto L_08A36AB8;
      }
      goto L_08A36A6C;
    }
L_08A36A6C:
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[5]);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (0u | 32u);
      if (branch_taken) {
          goto L_08A36AA0;
      }
      goto L_08A36A7C;
    }
L_08A36A7C:
    aot_gpr[9] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[14] = (aot_gpr[14] << (aot_gpr[8] & 31u));
    aot_gpr[9] = (aot_gpr[11] >> (aot_gpr[9] & 31u));
    aot_gpr[14] = (aot_gpr[14] | aot_gpr[9]);
    aot_gpr[11] = (aot_gpr[11] << (aot_gpr[8] & 31u));
    aot_gpr[8] = (aot_gpr[10] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[13] - aot_gpr[14]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[10] - aot_gpr[11]);
      if (branch_taken) {
          goto L_08A36AB8;
      }
      goto L_08A36AA0;
    }
L_08A36AA0:
    aot_gpr[14] = (aot_gpr[8] + static_cast<std::uint32_t>(-32));
    aot_gpr[14] = (aot_gpr[11] << (aot_gpr[14] & 31u));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[10] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[13] - aot_gpr[14]);
    aot_gpr[2] = (aot_gpr[10] | 0u);
    goto L_08A36AB8;
L_08A36AB8:
    aot_gpr[3] = (aot_gpr[6] - aot_gpr[5]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A36B5C;
      }
      goto L_08A36AC4;
    }
L_08A36AC4:
    aot_gpr[3] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
        goto L_08A36AD4;
    }
    goto L_08A36AD4;
L_08A36AD4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    aot_gpr[9] = (aot_gpr[8] | aot_gpr[2]);
      if (branch_taken) {
          goto L_08A36B00;
      }
      goto L_08A36ADC;
    }
L_08A36ADC:
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[13]);
    aot_gpr[8] = (aot_gpr[10] >> 31u);
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[10] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (aot_gpr[13] - aot_gpr[14]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[10] - aot_gpr[11]);
      if (branch_taken) {
          goto L_08A36B50;
      }
      goto L_08A36B00;
    }
L_08A36B00:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[13] = (aot_gpr[8] + aot_gpr[8]);
      if (branch_taken) {
          goto L_08A36B28;
      }
      goto L_08A36B08;
    }
L_08A36B08:
    aot_gpr[8] = (aot_gpr[2] >> 31u);
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[2] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[10] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (aot_gpr[13] - aot_gpr[14]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[10] - aot_gpr[11]);
      if (branch_taken) {
          goto L_08A36B50;
      }
      goto L_08A36B28;
    }
L_08A36B28:
    aot_gpr[4] = (aot_gpr[12] >> 31u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8520));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36B50:
    aot_gpr[15] = (aot_gpr[6] | 0u);
    { const bool branch_taken = aot_gpr[15] != 0u;
    aot_gpr[6] = (aot_gpr[3] | 0u);
      if (branch_taken) {
          goto L_08A36AC4;
      }
      goto L_08A36B5C;
    }
L_08A36B5C:
    aot_gpr[6] = (aot_gpr[9] | 0u);
    if (aot_gpr[8] != 0u) {
    aot_gpr[6] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
        goto L_08A36B68;
    }
    goto L_08A36B68;
L_08A36B68:
    if (static_cast<std::int32_t>(aot_gpr[6]) < 0) {
    aot_gpr[6] = (aot_gpr[13] | aot_gpr[10]);
        goto L_08A36B7C;
    }
    goto L_08A36B70;
L_08A36B70:
    aot_gpr[13] = (aot_gpr[6] | 0u);
    aot_gpr[10] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[13] | aot_gpr[10]);
    goto L_08A36B7C;
L_08A36B7C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[13]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A36B94;
      }
      goto L_08A36B84;
    }
L_08A36B84:
    if (aot_gpr[6] != 0u) {
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[13]);
        goto L_08A36BC0;
    }
    goto L_08A36B8C;
L_08A36B8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36BDC;
      }
      goto L_08A36B94;
    }
L_08A36B94:
    aot_gpr[4] = (aot_gpr[12] >> 31u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8520));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36BBC:
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[13]);
    goto L_08A36BC0;
L_08A36BC0:
    aot_gpr[6] = (aot_gpr[10] >> 31u);
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[10]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[13]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A36BBC;
      }
      goto L_08A36BD8;
    }
L_08A36BD8:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < -1022 ? 1u : 0u);
    goto L_08A36BDC;
L_08A36BDC:
    if (aot_gpr[7] != 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1022));
        goto L_08A36C14;
    }
    goto L_08A36BE4;
L_08A36BE4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1023));
    aot_gpr[4] = (aot_gpr[13] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 20u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[10]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36C14:
    aot_gpr[5] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A36C44;
      }
      goto L_08A36C24;
    }
L_08A36C24:
    aot_gpr[4] = (0u | 32u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[13] << (aot_gpr[4] & 31u));
    aot_gpr[10] = (aot_gpr[10] >> (aot_gpr[5] & 31u));
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[13]) >> (aot_gpr[5] & 31u)));
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[12]);
      if (branch_taken) {
          goto L_08A36C70;
      }
      goto L_08A36C44;
    }
L_08A36C44:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08A36C64;
      }
      goto L_08A36C4C;
    }
L_08A36C4C:
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[13] << (aot_gpr[4] & 31u));
    aot_gpr[10] = (aot_gpr[10] >> (aot_gpr[5] & 31u));
    aot_gpr[10] = (aot_gpr[4] | aot_gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[13] = (aot_gpr[12] | aot_gpr[12]);
      if (branch_taken) {
          goto L_08A36C70;
      }
      goto L_08A36C64;
    }
L_08A36C64:
    aot_gpr[10] = (aot_gpr[5] + static_cast<std::uint32_t>(-32));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[13]) >> (aot_gpr[10] & 31u)));
    aot_gpr[13] = (aot_gpr[12] | aot_gpr[12]);
    goto L_08A36C70;
L_08A36C70:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A36C80;
L_08A36C80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36C8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[18]);
    aot_gpr[18] = (16u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[16]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A36DD0;
      }
      goto L_08A36CE0;
    }
L_08A36CE0:
    aot_gpr[4] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[8] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A36D40;
      }
      goto L_08A36CF8;
    }
L_08A36CF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8660)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8656)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8620)));
    aot_gpr[31] = (0x08A36D10u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8616)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A36D10u) goto L_08A36D10;
    return;
L_08A36D10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36D40:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) < 0;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A36D84;
      }
      goto L_08A36D48;
    }
L_08A36D48:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8556)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8552)));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-54));
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08A36D6Cu);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A36D6Cu) goto L_08A36D6C;
    return;
L_08A36D6C:
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A36DD0;
      }
      goto L_08A36D84;
    }
L_08A36D84:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8620)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8616)));
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x08A36DA0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A36DA0u) goto L_08A36DA0;
    return;
L_08A36DA0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36DD0:
    aot_gpr[4] = (32752u << 16u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (16u << 16u);
      if (branch_taken) {
          goto L_08A36E6C;
      }
      goto L_08A36DE0;
    }
L_08A36DE0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[8]) >> 20u));
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (9u << 16u);
    aot_gpr[16] = (aot_gpr[8] & aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24420));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-1023));
    aot_gpr[4] = (16368u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[5] ^ aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[16] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 20u));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8516)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8512)));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08A36E4Cu);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A36E4Cu) goto L_08A36E4C;
    return;
L_08A36E4C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[17]);
    aot_gpr[21] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A36EA8;
      }
      goto L_08A36E64;
    }
L_08A36E64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 10u, 0x08A370F8u>(ctx, &aot_mem); return;
      }
      goto L_08A36E6C;
    }
L_08A36E6C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08A36E78u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A36E78u) goto L_08A36E78;
    return;
L_08A36E78:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36EA8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8620)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8616)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A36EC8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A36EC8u) goto L_08A36EC8;
    return;
L_08A36EC8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (aot_gpr[21] | 0u);
        goto L_08A36F98;
    }
    goto L_08A36ED0;
L_08A36ED0:
    if (aot_gpr[18] == 0u) {
    aot_gpr[3] = (aot_gpr[17] | 0u);
        goto L_08A36F64;
    }
    goto L_08A36ED8;
L_08A36ED8:
    aot_gpr[31] = (0x08A36EE0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 192u, 0x08A3FE28u>(ctx, &aot_mem) && ctx.pc == 0x08A36EE0u) goto L_08A36EE0;
    return;
L_08A36EE0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8540)));
    aot_gpr[17] = (aot_gpr[3] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8536)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A36F00u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A36F00u) goto L_08A36F00;
    return;
L_08A36F00:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8548)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8544)));
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A36F20u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A36F20u) goto L_08A36F20;
    return;
L_08A36F20:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A36F34u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A36F34u) goto L_08A36F34;
    return;
L_08A36F34:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36F64:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36F98:
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A36FA8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A36FA8u) goto L_08A36FA8;
    return;
L_08A36FA8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8668)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8664)));
    aot_gpr[17] = (aot_gpr[3] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A36FC8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A36FC8u) goto L_08A36FC8;
    return;
L_08A36FC8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8676)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8672)));
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A36FE0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A36FE0u) goto L_08A36FE0;
    return;
L_08A36FE0:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A36FF4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A36FF4u) goto L_08A36FF4;
    return;
L_08A36FF4:
    aot_gpr[17] = (aot_gpr[3] | 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 3u, 0x08A37044u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 1u, 0x08A37000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0562(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0562_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_562(Runtime &runtime) {
    runtime.register_generated_unit(562u, 0x08A36000u, 4096u, &recomp_unit_0562, &recomp_unit_0562_entry);
    runtime.register_function(0x08A36000u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36004u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3600Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3601Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3602Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3604Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3605Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36074u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3607Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36084u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36090u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A360A0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A360ACu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A360B8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A360D0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A360D8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A360E8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A360F8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3611Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3612Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3614Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36154u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3615Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36164u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36174u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3617Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3618Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36194u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A361A4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A361B4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A361D0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A361E0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A361F8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36200u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36208u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36214u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36224u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36228u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36234u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36244u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36248u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36254u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36268u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3629Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A362B0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A362CCu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A362D8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A362ECu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A362F4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36300u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36308u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36314u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36318u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36320u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36330u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36338u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36348u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36354u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36364u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36374u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36394u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3639Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A363A8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A363B0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A363C0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A363C8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A363D0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A363D8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A363E0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A363E8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A363F0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A363F8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36408u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36420u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36428u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36438u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36444u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3644Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36450u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36458u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36460u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36464u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3646Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3648Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36498u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A364A4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A364B0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A364C4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A364D0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A364D8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A364E4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A364E8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A364F0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A364F8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3655Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A365BCu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A365C0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A365C8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3660Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36614u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3662Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36644u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3664Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36654u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36660u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36674u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36680u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36698u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A366ACu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A366C4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A366CCu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A366D4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A366E0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A366ECu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A366F8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36708u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3671Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36724u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36748u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3675Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36770u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36788u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36790u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36798u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A367B4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A367BCu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A367C8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A367D0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A367F0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A367F4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A367F8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36820u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36878u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36888u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A368A4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A368ACu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A368B4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A368C8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A368DCu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A368E8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A368F0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A368F8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36900u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36904u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36910u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36918u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3691Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36940u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36948u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36954u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36960u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36968u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3696Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36974u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36980u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36988u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3698Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36990u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36994u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A3699Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A369A4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A369B0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A369BCu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A369C4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A369C8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A369D0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A369DCu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A369E4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A369E8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A369ECu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A369F0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A369F8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36A0Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36A20u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36A38u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36A44u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36A4Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36A6Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36A7Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36AA0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36AB8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36AC4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36AD4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36ADCu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36B00u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36B08u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36B28u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36B50u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36B5Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36B68u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36B70u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36B7Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36B84u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36B8Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36B94u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36BBCu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36BC0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36BD8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36BDCu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36BE4u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36C14u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36C24u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36C44u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36C4Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36C64u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36C70u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36C80u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36C8Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36CE0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36CF8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36D10u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36D40u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36D48u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36D6Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36D84u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36DA0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36DD0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36DE0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36E4Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36E64u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36E6Cu, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36E78u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36EA8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36EC8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36ED0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36ED8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36EE0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36F00u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36F20u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36F34u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36F64u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36F98u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36FA8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36FC8u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36FE0u, &recomp_unit_0562, "recomp_unit_0562");
    runtime.register_function(0x08A36FF4u, &recomp_unit_0562, "recomp_unit_0562");
}
} // namespace psprecomp
