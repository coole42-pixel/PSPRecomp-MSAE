#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0561[1023] = {
    1, 0, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0,
    0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0,
    0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62,
    0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 78,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0,
    0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93,
    0, 94, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121,
    122, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 127, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 134, 135, 136, 0, 137, 0, 0, 138, 0, 139, 0, 140,
    0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0,
    147, 148, 149, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 164, 0, 165,
    0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172,
    0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189,
    0, 190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0,
    0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0,
    0, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 237, 0, 0, 0, 238,
};
void recomp_unit_0561_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A35000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0561[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A35000;
    case 2u: goto L_08A3500C;
    case 3u: goto L_08A35018;
    case 4u: goto L_08A35020;
    case 5u: goto L_08A35028;
    case 6u: goto L_08A35038;
    case 7u: goto L_08A3504C;
    case 8u: goto L_08A35068;
    case 9u: goto L_08A35070;
    case 10u: goto L_08A35080;
    case 11u: goto L_08A350AC;
    case 12u: goto L_08A350BC;
    case 13u: goto L_08A350C4;
    case 14u: goto L_08A350D0;
    case 15u: goto L_08A350D4;
    case 16u: goto L_08A35100;
    case 17u: goto L_08A35110;
    case 18u: goto L_08A3511C;
    case 19u: goto L_08A3512C;
    case 20u: goto L_08A3513C;
    case 21u: goto L_08A35144;
    case 22u: goto L_08A35150;
    case 23u: goto L_08A35198;
    case 24u: goto L_08A351B0;
    case 25u: goto L_08A351C0;
    case 26u: goto L_08A351C8;
    case 27u: goto L_08A351E8;
    case 28u: goto L_08A351F0;
    case 29u: goto L_08A35208;
    case 30u: goto L_08A35210;
    case 31u: goto L_08A3522C;
    case 32u: goto L_08A35238;
    case 33u: goto L_08A35240;
    case 34u: goto L_08A35248;
    case 35u: goto L_08A3527C;
    case 36u: goto L_08A35290;
    case 37u: goto L_08A35298;
    case 38u: goto L_08A352A4;
    case 39u: goto L_08A352C8;
    case 40u: goto L_08A352D4;
    case 41u: goto L_08A352EC;
    case 42u: goto L_08A352F4;
    case 43u: goto L_08A3530C;
    case 44u: goto L_08A35320;
    case 45u: goto L_08A35338;
    case 46u: goto L_08A35348;
    case 47u: goto L_08A35350;
    case 48u: goto L_08A35370;
    case 49u: goto L_08A35378;
    case 50u: goto L_08A35390;
    case 51u: goto L_08A35398;
    case 52u: goto L_08A353B0;
    case 53u: goto L_08A353BC;
    case 54u: goto L_08A353C4;
    case 55u: goto L_08A353CC;
    case 56u: goto L_08A353DC;
    case 57u: goto L_08A35414;
    case 58u: goto L_08A3543C;
    case 59u: goto L_08A35444;
    case 60u: goto L_08A35450;
    case 61u: goto L_08A35464;
    case 62u: goto L_08A3547C;
    case 63u: goto L_08A35488;
    case 64u: goto L_08A35498;
    case 65u: goto L_08A354A0;
    case 66u: goto L_08A354B8;
    case 67u: goto L_08A354C8;
    case 68u: goto L_08A354E4;
    case 69u: goto L_08A354F8;
    case 70u: goto L_08A35500;
    case 71u: goto L_08A35520;
    case 72u: goto L_08A35528;
    case 73u: goto L_08A35540;
    case 74u: goto L_08A35548;
    case 75u: goto L_08A35560;
    case 76u: goto L_08A3556C;
    case 77u: goto L_08A35574;
    case 78u: goto L_08A3557C;
    case 79u: goto L_08A35590;
    case 80u: goto L_08A355AC;
    case 81u: goto L_08A355C4;
    case 82u: goto L_08A355CC;
    case 83u: goto L_08A355EC;
    case 84u: goto L_08A355F4;
    case 85u: goto L_08A3560C;
    case 86u: goto L_08A35614;
    case 87u: goto L_08A3562C;
    case 88u: goto L_08A35638;
    case 89u: goto L_08A35640;
    case 90u: goto L_08A35648;
    case 91u: goto L_08A3565C;
    case 92u: goto L_08A35674;
    case 93u: goto L_08A3567C;
    case 94u: goto L_08A35684;
    case 95u: goto L_08A35688;
    case 96u: goto L_08A356A0;
    case 97u: goto L_08A356A8;
    case 98u: goto L_08A356C0;
    case 99u: goto L_08A356C8;
    case 100u: goto L_08A356D0;
    case 101u: goto L_08A356D8;
    case 102u: goto L_08A356E0;
    case 103u: goto L_08A356F0;
    case 104u: goto L_08A3570C;
    case 105u: goto L_08A35714;
    case 106u: goto L_08A35720;
    case 107u: goto L_08A35728;
    case 108u: goto L_08A3574C;
    case 109u: goto L_08A35788;
    case 110u: goto L_08A35790;
    case 111u: goto L_08A35798;
    case 112u: goto L_08A357A8;
    case 113u: goto L_08A357B4;
    case 114u: goto L_08A357E0;
    case 115u: goto L_08A357E4;
    case 116u: goto L_08A35820;
    case 117u: goto L_08A35860;
    case 118u: goto L_08A35890;
    case 119u: goto L_08A358C4;
    case 120u: goto L_08A358F4;
    case 121u: goto L_08A358FC;
    case 122u: goto L_08A35900;
    case 123u: goto L_08A35910;
    case 124u: goto L_08A3591C;
    case 125u: goto L_08A35930;
    case 126u: goto L_08A3594C;
    case 127u: goto L_08A35950;
    case 128u: goto L_08A35968;
    case 129u: goto L_08A35970;
    case 130u: goto L_08A359A0;
    case 131u: goto L_08A359B4;
    case 132u: goto L_08A359BC;
    case 133u: goto L_08A359C4;
    case 134u: goto L_08A359D0;
    case 135u: goto L_08A359D4;
    case 136u: goto L_08A359D8;
    case 137u: goto L_08A359E0;
    case 138u: goto L_08A359EC;
    case 139u: goto L_08A359F4;
    case 140u: goto L_08A359FC;
    case 141u: goto L_08A35A0C;
    case 142u: goto L_08A35A1C;
    case 143u: goto L_08A35A40;
    case 144u: goto L_08A35A50;
    case 145u: goto L_08A35A70;
    case 146u: goto L_08A35A78;
    case 147u: goto L_08A35A80;
    case 148u: goto L_08A35A84;
    case 149u: goto L_08A35A88;
    case 150u: goto L_08A35A98;
    case 151u: goto L_08A35AA0;
    case 152u: goto L_08A35AB0;
    case 153u: goto L_08A35AB8;
    case 154u: goto L_08A35AC8;
    case 155u: goto L_08A35AD8;
    case 156u: goto L_08A35B00;
    case 157u: goto L_08A35B0C;
    case 158u: goto L_08A35B30;
    case 159u: goto L_08A35B3C;
    case 160u: goto L_08A35B44;
    case 161u: goto L_08A35B54;
    case 162u: goto L_08A35B64;
    case 163u: goto L_08A35B70;
    case 164u: goto L_08A35B74;
    case 165u: goto L_08A35B7C;
    case 166u: goto L_08A35B84;
    case 167u: goto L_08A35B94;
    case 168u: goto L_08A35BA4;
    case 169u: goto L_08A35BC8;
    case 170u: goto L_08A35BD4;
    case 171u: goto L_08A35BF4;
    case 172u: goto L_08A35BFC;
    case 173u: goto L_08A35C04;
    case 174u: goto L_08A35C10;
    case 175u: goto L_08A35C20;
    case 176u: goto L_08A35C2C;
    case 177u: goto L_08A35C38;
    case 178u: goto L_08A35C44;
    case 179u: goto L_08A35C54;
    case 180u: goto L_08A35C64;
    case 181u: goto L_08A35C88;
    case 182u: goto L_08A35C94;
    case 183u: goto L_08A35CB4;
    case 184u: goto L_08A35CC0;
    case 185u: goto L_08A35CC8;
    case 186u: goto L_08A35CD4;
    case 187u: goto L_08A35CE4;
    case 188u: goto L_08A35CEC;
    case 189u: goto L_08A35CFC;
    case 190u: goto L_08A35D04;
    case 191u: goto L_08A35D0C;
    case 192u: goto L_08A35D14;
    case 193u: goto L_08A35D24;
    case 194u: goto L_08A35D34;
    case 195u: goto L_08A35D58;
    case 196u: goto L_08A35D68;
    case 197u: goto L_08A35D88;
    case 198u: goto L_08A35D90;
    case 199u: goto L_08A35D98;
    case 200u: goto L_08A35DA0;
    case 201u: goto L_08A35DB0;
    case 202u: goto L_08A35DB8;
    case 203u: goto L_08A35DC8;
    case 204u: goto L_08A35DD0;
    case 205u: goto L_08A35DE0;
    case 206u: goto L_08A35DF0;
    case 207u: goto L_08A35E14;
    case 208u: goto L_08A35E20;
    case 209u: goto L_08A35E40;
    case 210u: goto L_08A35E48;
    case 211u: goto L_08A35E50;
    case 212u: goto L_08A35E5C;
    case 213u: goto L_08A35E6C;
    case 214u: goto L_08A35E74;
    case 215u: goto L_08A35E88;
    case 216u: goto L_08A35E90;
    case 217u: goto L_08A35E98;
    case 218u: goto L_08A35EA8;
    case 219u: goto L_08A35EB8;
    case 220u: goto L_08A35EDC;
    case 221u: goto L_08A35EEC;
    case 222u: goto L_08A35F0C;
    case 223u: goto L_08A35F14;
    case 224u: goto L_08A35F1C;
    case 225u: goto L_08A35F24;
    case 226u: goto L_08A35F34;
    case 227u: goto L_08A35F3C;
    case 228u: goto L_08A35F4C;
    case 229u: goto L_08A35F54;
    case 230u: goto L_08A35F64;
    case 231u: goto L_08A35F74;
    case 232u: goto L_08A35F9C;
    case 233u: goto L_08A35FA8;
    case 234u: goto L_08A35FCC;
    case 235u: goto L_08A35FD4;
    case 236u: goto L_08A35FDC;
    case 237u: goto L_08A35FE8;
    case 238u: goto L_08A35FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A35000:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[30]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 229u, 0x08A34F94u>(ctx, &aot_mem); return;
      }
      goto L_08A3500C;
    }
L_08A3500C:
    aot_gpr[30] = (0u - aot_gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[21] | 4u);
      if (branch_taken) {
          goto L_08A35020;
      }
      goto L_08A35018;
    }
L_08A35018:
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[21] | 4u);
    goto L_08A35020;
L_08A35020:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 229u, 0x08A34F94u>(ctx, &aot_mem); return;
      }
      goto L_08A35028;
    }
L_08A35028:
    aot_gpr[4] = (0u | 43u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 229u, 0x08A34F94u>(ctx, &aot_mem); return;
      }
      goto L_08A35038;
    }
L_08A35038:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u | 42u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A35070;
      }
      goto L_08A3504C;
    }
L_08A3504C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    if (static_cast<std::int32_t>(aot_gpr[5]) < 0) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08A35068;
    }
    goto L_08A35068;
L_08A35068:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 229u, 0x08A34F94u>(ctx, &aot_mem); return;
      }
      goto L_08A35070;
    }
L_08A35070:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A350AC;
      }
      goto L_08A35080;
    }
L_08A35080:
    aot_gpr[4] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A35080;
      }
      goto L_08A350AC;
    }
L_08A350AC:
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(-32));
    aot_gpr[9] = (aot_gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    if (static_cast<std::int32_t>(aot_gpr[5]) < 0) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08A350BC;
    }
    goto L_08A350BC;
L_08A350BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 230u, 0x08A34FA4u>(ctx, &aot_mem); return;
      }
      goto L_08A350C4;
    }
L_08A350C4:
    aot_gpr[21] = (aot_gpr[21] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 229u, 0x08A34F94u>(ctx, &aot_mem); return;
      }
      goto L_08A350D0;
    }
L_08A350D0:
    aot_gpr[5] = (0u | 0u);
    goto L_08A350D4;
L_08A350D4:
    aot_gpr[4] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A350D4;
      }
      goto L_08A35100;
    }
L_08A35100:
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(-32));
    aot_gpr[30] = (aot_gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 230u, 0x08A34FA4u>(ctx, &aot_mem); return;
      }
      goto L_08A35110;
    }
L_08A35110:
    aot_gpr[21] = (aot_gpr[21] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 229u, 0x08A34F94u>(ctx, &aot_mem); return;
      }
      goto L_08A3511C;
    }
L_08A3511C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 108u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3513C;
      }
      goto L_08A3512C;
    }
L_08A3512C:
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[21] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 229u, 0x08A34F94u>(ctx, &aot_mem); return;
      }
      goto L_08A3513C;
    }
L_08A3513C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] | 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 229u, 0x08A34F94u>(ctx, &aot_mem); return;
      }
      goto L_08A35144;
    }
L_08A35144:
    aot_gpr[21] = (aot_gpr[21] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 229u, 0x08A34F94u>(ctx, &aot_mem); return;
      }
      goto L_08A35150;
    }
L_08A35150:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[21] & 132u);
    aot_gpr[8] = (aot_gpr[21] & 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    aot_gpr[9] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A359A0;
      }
      goto L_08A35198;
    }
L_08A35198:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[21] | 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7796)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7792)));
      if (branch_taken) {
          goto L_08A351C0;
      }
      goto L_08A351B0;
    }
L_08A351B0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7796)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7792)));
    goto L_08A351C0;
L_08A351C0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 16u);
      if (branch_taken) {
          goto L_08A351E8;
      }
      goto L_08A351C8;
    }
L_08A351C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (aot_gpr[4] & 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A35248;
      }
      goto L_08A351E8;
    }
L_08A351E8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 64u);
      if (branch_taken) {
          goto L_08A35208;
      }
      goto L_08A351F0;
    }
L_08A351F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 31u));
      if (branch_taken) {
          goto L_08A35240;
      }
      goto L_08A35208;
    }
L_08A35208:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08A3522C;
    }
    goto L_08A35210;
L_08A35210:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
      if (branch_taken) {
          goto L_08A35238;
      }
      goto L_08A3522C;
    }
L_08A3522C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    goto L_08A35238;
L_08A35238:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 31u));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    goto L_08A35240;
L_08A35240:
    aot_gpr[11] = (aot_gpr[7] | 0u);
    aot_gpr[10] = (aot_gpr[6] | 0u);
    goto L_08A35248;
L_08A35248:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7764)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7760)));
    aot_gpr[19] = (aot_gpr[11] | 0u);
    aot_gpr[18] = (aot_gpr[10] | 0u);
    aot_gpr[6] = (aot_gpr[19] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u < aot_gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A35290;
      }
      goto L_08A3527C;
    }
L_08A3527C:
    aot_gpr[5] = (0u - aot_gpr[11]);
    aot_gpr[6] = (0u | 45u);
    aot_gpr[18] = (0u - aot_gpr[10]);
    aot_gpr[19] = (aot_gpr[5] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_08A35290;
L_08A35290:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A35688;
      }
      goto L_08A35298;
    }
L_08A35298:
    aot_gpr[4] = (aot_gpr[21] & 32u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08A352C8;
      }
      goto L_08A352A4;
    }
L_08A352A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 31u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 207u, 0x08A34E40u>(ctx, &aot_mem); return;
      }
      goto L_08A352C8;
    }
L_08A352C8:
    aot_gpr[4] = (aot_gpr[21] & 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 64u);
      if (branch_taken) {
          goto L_08A352EC;
      }
      goto L_08A352D4;
    }
L_08A352D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 207u, 0x08A34E40u>(ctx, &aot_mem); return;
      }
      goto L_08A352EC;
    }
L_08A352EC:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08A3530C;
    }
    goto L_08A352F4;
L_08A352F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 207u, 0x08A34E40u>(ctx, &aot_mem); return;
      }
      goto L_08A3530C;
    }
L_08A3530C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 207u, 0x08A34E40u>(ctx, &aot_mem); return;
      }
      goto L_08A35320;
    }
L_08A35320:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[21] | 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7796)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7792)));
      if (branch_taken) {
          goto L_08A35348;
      }
      goto L_08A35338;
    }
L_08A35338:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7796)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7792)));
    goto L_08A35348;
L_08A35348:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 16u);
      if (branch_taken) {
          goto L_08A35370;
      }
      goto L_08A35350;
    }
L_08A35350:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (aot_gpr[4] & 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A353CC;
      }
      goto L_08A35370;
    }
L_08A35370:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 64u);
      if (branch_taken) {
          goto L_08A35390;
      }
      goto L_08A35378;
    }
L_08A35378:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A353C4;
      }
      goto L_08A35390;
    }
L_08A35390:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08A353B0;
    }
    goto L_08A35398;
L_08A35398:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08A353BC;
      }
      goto L_08A353B0;
    }
L_08A353B0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    goto L_08A353BC;
L_08A353BC:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A353C4;
L_08A353C4:
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    goto L_08A353CC;
L_08A353CC:
    aot_gpr[19] = (aot_gpr[9] | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A35684;
      }
      goto L_08A353DC;
    }
L_08A353DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[6]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7796)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[21] = (aot_gpr[21] | 2u);
    aot_gpr[16] = (0u | 120u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7792)));
      if (branch_taken) {
          goto L_08A35684;
      }
      goto L_08A35414;
    }
L_08A35414:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (aot_gpr[21] & 132u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[21] & 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[4]);
    if (aot_gpr[23] == 0u) {
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08A3543C;
    }
    goto L_08A3543C;
L_08A3543C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[22]) < 0;
    aot_gpr[4] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A35498;
      }
      goto L_08A35444;
    }
L_08A35444:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A35450u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 153u, 0x08A3A7A8u>(ctx, &aot_mem) && ctx.pc == 0x08A35450u) goto L_08A35450;
    return;
L_08A35450:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08A35488;
      }
      goto L_08A35464;
    }
L_08A35464:
    aot_gpr[9] = (aot_gpr[7] - aot_gpr[23]);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[7] = (aot_gpr[9] | 0u);
        goto L_08A3547C;
    }
    goto L_08A3547C;
L_08A3547C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A354B8;
      }
      goto L_08A35488;
    }
L_08A35488:
    aot_gpr[7] = (aot_gpr[22] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A354B8;
      }
      goto L_08A35498;
    }
L_08A35498:
    aot_gpr[31] = (0x08A354A0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A354A0u) goto L_08A354A0;
    return;
L_08A354A0:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < 0 ? 1u : 0u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08A354B8;
L_08A354B8:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[12]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A359A0;
      }
      goto L_08A354C8;
    }
L_08A354C8:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[21] | 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7796)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7792)));
      if (branch_taken) {
          goto L_08A354F8;
      }
      goto L_08A354E4;
    }
L_08A354E4:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7796)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7792)));
    goto L_08A354F8;
L_08A354F8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 16u);
      if (branch_taken) {
          goto L_08A35520;
      }
      goto L_08A35500;
    }
L_08A35500:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (aot_gpr[4] & 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3557C;
      }
      goto L_08A35520;
    }
L_08A35520:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 64u);
      if (branch_taken) {
          goto L_08A35540;
      }
      goto L_08A35528;
    }
L_08A35528:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A35574;
      }
      goto L_08A35540;
    }
L_08A35540:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08A35560;
    }
    goto L_08A35548;
L_08A35548:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08A3556C;
      }
      goto L_08A35560;
    }
L_08A35560:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    goto L_08A3556C;
L_08A3556C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A35574;
L_08A35574:
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    goto L_08A3557C;
L_08A3557C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[12]);
    aot_gpr[19] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A35684;
      }
      goto L_08A35590;
    }
L_08A35590:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7796)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    aot_gpr[9] = (aot_gpr[21] & 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7792)));
      if (branch_taken) {
          goto L_08A355C4;
      }
      goto L_08A355AC;
    }
L_08A355AC:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7796)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    aot_gpr[9] = (aot_gpr[21] & 1u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7792)));
    goto L_08A355C4;
L_08A355C4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 16u);
      if (branch_taken) {
          goto L_08A355EC;
      }
      goto L_08A355CC;
    }
L_08A355CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (aot_gpr[4] & 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A35648;
      }
      goto L_08A355EC;
    }
L_08A355EC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 64u);
      if (branch_taken) {
          goto L_08A3560C;
      }
      goto L_08A355F4;
    }
L_08A355F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A35640;
      }
      goto L_08A3560C;
    }
L_08A3560C:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08A3562C;
    }
    goto L_08A35614;
L_08A35614:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08A35638;
      }
      goto L_08A3562C;
    }
L_08A3562C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    goto L_08A35638;
L_08A35638:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A35640;
L_08A35640:
    aot_gpr[3] = (aot_gpr[7] | 0u);
    aot_gpr[2] = (aot_gpr[6] | 0u);
    goto L_08A35648;
L_08A35648:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[12]);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A35684;
      }
      goto L_08A3565C;
    }
L_08A3565C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[12]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7764)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7760)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3567C;
      }
      goto L_08A35674;
    }
L_08A35674:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A35684;
      }
      goto L_08A3567C;
    }
L_08A3567C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[12]);
    aot_gpr[21] = (aot_gpr[21] | 2u);
    goto L_08A35684;
L_08A35684:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08A35688;
L_08A35688:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[22]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7764)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7760)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[22]) < 0;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08A356A8;
      }
      goto L_08A356A0;
    }
L_08A356A0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr[21] = (aot_gpr[21] & aot_gpr[4]);
    goto L_08A356A8;
L_08A356A8:
    aot_gpr[4] = (aot_gpr[21] & 132u);
    aot_gpr[8] = (aot_gpr[21] & 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A356D0;
      }
      goto L_08A356C0;
    }
L_08A356C0:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A356D0;
      }
      goto L_08A356C8;
    }
L_08A356C8:
    { const bool branch_taken = aot_gpr[22] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A358FC;
      }
      goto L_08A356D0;
    }
L_08A356D0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3570C;
      }
      goto L_08A356D8;
    }
L_08A356D8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A35728;
      }
      goto L_08A356E0;
    }
L_08A356E0:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[12]);
    aot_gpr[31] = (0x08A356F0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A356F0u) goto L_08A356F0;
    return;
L_08A356F0:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A359A0;
      }
      goto L_08A3570C;
    }
L_08A3570C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A357B4;
      }
      goto L_08A35714;
    }
L_08A35714:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A356E0;
      }
      goto L_08A35720;
    }
L_08A35720:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[14]);
      if (branch_taken) {
          goto L_08A358C4;
      }
      goto L_08A35728;
    }
L_08A35728:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[12]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7780)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7776)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7772)));
    aot_gpr[5] = (aot_gpr[21] & 1u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7768)));
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[14]);
    goto L_08A3574C;
L_08A3574C:
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[19] & aot_gpr[15]);
    aot_gpr[10] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[1] = (aot_gpr[19] << 29u);
    aot_gpr[18] = (aot_gpr[18] >> 3u);
    aot_gpr[19] = (aot_gpr[19] >> 3u);
    aot_gpr[18] = (aot_gpr[1] | aot_gpr[18]);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[6];
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[14]);
      if (branch_taken) {
          goto L_08A3574C;
      }
      goto L_08A35788;
    }
L_08A35788:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[7];
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[14]);
      if (branch_taken) {
          goto L_08A3574C;
      }
      goto L_08A35790;
    }
L_08A35790:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08A358FC;
      }
      goto L_08A35798;
    }
L_08A35798:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 48u);
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08A35900;
    }
    goto L_08A357A8;
L_08A357A8:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08A358FC;
      }
      goto L_08A357B4;
    }
L_08A357B4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7788)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7784)));
    aot_gpr[6] = (aot_gpr[19] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[12]);
      if (branch_taken) {
          goto L_08A35890;
      }
      goto L_08A357E0;
    }
L_08A357E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[19]);
    goto L_08A357E4;
L_08A357E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7788)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7784)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A35820u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 145u, 0x08A3EBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A35820u) goto L_08A35820;
    return;
L_08A35820:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7780)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7776)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A35860u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 75u, 0x08A3E668u>(ctx, &aot_mem) && ctx.pc == 0x08A35860u) goto L_08A35860;
    return;
L_08A35860:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[19] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[19]);
        goto L_08A357E4;
    }
    goto L_08A35890;
L_08A35890:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7780)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7776)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08A358FC;
      }
      goto L_08A358C4;
    }
L_08A358C4:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[4] = (aot_gpr[12] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (aot_gpr[19] & aot_gpr[15]);
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[1] = (aot_gpr[19] << 28u);
    aot_gpr[18] = (aot_gpr[18] >> 4u);
    aot_gpr[19] = (aot_gpr[19] >> 4u);
    aot_gpr[18] = (aot_gpr[1] | aot_gpr[18]);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[6];
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[14]);
      if (branch_taken) {
          goto L_08A358C4;
      }
      goto L_08A358F4;
    }
L_08A358F4:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[7];
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[14]);
      if (branch_taken) {
          goto L_08A358C4;
      }
      goto L_08A358FC;
    }
L_08A358FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08A35900;
L_08A35900:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[12]);
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A3594C;
      }
      goto L_08A35910;
    }
L_08A35910:
    aot_gpr[4] = (aot_gpr[21] & 512u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[11] - aot_gpr[23]);
      if (branch_taken) {
          goto L_08A35950;
      }
      goto L_08A3591C;
    }
L_08A3591C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A35930u);
    aot_gpr[6] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 167u, 0x08A34A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A35930u) goto L_08A35930;
    return;
L_08A35930:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A359A0;
      }
      goto L_08A3594C;
    }
L_08A3594C:
    aot_gpr[7] = (aot_gpr[11] - aot_gpr[23]);
    goto L_08A35950;
L_08A35950:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A359A0;
      }
      goto L_08A35968;
    }
L_08A35968:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 40u, 0x08A36244u>(ctx, &aot_mem); return;
      }
      goto L_08A35970;
    }
L_08A35970:
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[21] & 132u);
    aot_gpr[8] = (aot_gpr[21] & 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    aot_gpr[9] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[8]);
    goto L_08A359A0;
L_08A359A0:
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    if (aot_gpr[8] == 0u) {
    aot_gpr[9] = (aot_gpr[7] | 0u);
        goto L_08A359B4;
    }
    goto L_08A359B4;
L_08A359B4:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[19] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A359C4;
      }
      goto L_08A359BC;
    }
L_08A359BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A359D4;
      }
      goto L_08A359C4;
    }
L_08A359C4:
    aot_gpr[4] = (aot_gpr[21] & 2u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_08A359D8;
    }
    goto L_08A359D0;
L_08A359D0:
    aot_gpr[19] = (aot_gpr[9] + static_cast<std::uint32_t>(2));
    goto L_08A359D4;
L_08A359D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_08A359D8;
L_08A359D8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A35B74;
      }
      goto L_08A359E0;
    }
L_08A359E0:
    aot_gpr[18] = (aot_gpr[30] - aot_gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A35B70;
      }
      goto L_08A359EC;
    }
L_08A359EC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A35AB0;
      }
      goto L_08A359F4;
    }
L_08A359F4:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A35A70;
    }
    goto L_08A359FC;
L_08A359FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A35A40;
      }
      goto L_08A35A0C;
    }
L_08A35A0C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (0x08A35A1Cu);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35A1Cu) goto L_08A35A1C;
    return;
L_08A35A1C:
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
          goto L_08A35AA0;
      }
      goto L_08A35A40;
    }
L_08A35A40:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A35A50u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35A50u) goto L_08A35A50;
    return;
L_08A35A50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A35AA0;
      }
      goto L_08A35A70;
    }
L_08A35A70:
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A35A88;
    }
    goto L_08A35A78;
L_08A35A78:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A35A84;
      }
      goto L_08A35A80;
    }
L_08A35A80:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_08A35A84;
L_08A35A84:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08A35A88;
L_08A35A88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08A35A98u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 194u, 0x08A34C58u>(ctx, &aot_mem) && ctx.pc == 0x08A35A98u) goto L_08A35A98;
    return;
L_08A35A98:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A35AA0;
L_08A35AA0:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A359F4;
      }
      goto L_08A35AB0;
    }
L_08A35AB0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A35B30;
      }
      goto L_08A35AB8;
    }
L_08A35AB8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A35B00;
      }
      goto L_08A35AC8;
    }
L_08A35AC8:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08A35AD8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35AD8u) goto L_08A35AD8;
    return;
L_08A35AD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A35B70;
      }
      goto L_08A35B00;
    }
L_08A35B00:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A35B0Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35B0Cu) goto L_08A35B0C;
    return;
L_08A35B0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A35B70;
      }
      goto L_08A35B30;
    }
L_08A35B30:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A35B54;
      }
      goto L_08A35B3C;
    }
L_08A35B3C:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A35B54;
      }
      goto L_08A35B44;
    }
L_08A35B44:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A35B54;
L_08A35B54:
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A35B64u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 194u, 0x08A34C58u>(ctx, &aot_mem) && ctx.pc == 0x08A35B64u) goto L_08A35B64;
    return;
L_08A35B64:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A35B70;
L_08A35B70:
    aot_gpr[18] = (0u | 1u);
    goto L_08A35B74;
L_08A35B74:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A35C2C;
      }
      goto L_08A35B7C;
    }
L_08A35B7C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A35BF4;
    }
    goto L_08A35B84;
L_08A35B84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A35BC8;
      }
      goto L_08A35B94;
    }
L_08A35B94:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A35BA4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35BA4u) goto L_08A35BA4;
    return;
L_08A35BA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A35CEC;
      }
      goto L_08A35BC8;
    }
L_08A35BC8:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A35BD4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35BD4u) goto L_08A35BD4;
    return;
L_08A35BD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A35CEC;
      }
      goto L_08A35BF4;
    }
L_08A35BF4:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A35C10;
      }
      goto L_08A35BFC;
    }
L_08A35BFC:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A35C10;
      }
      goto L_08A35C04;
    }
L_08A35C04:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A35C10;
L_08A35C10:
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08A35C20u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 194u, 0x08A34C58u>(ctx, &aot_mem) && ctx.pc == 0x08A35C20u) goto L_08A35C20;
    return;
L_08A35C20:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A35CEC;
      }
      goto L_08A35C2C;
    }
L_08A35C2C:
    aot_gpr[4] = (aot_gpr[21] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08A35CEC;
      }
      goto L_08A35C38;
    }
L_08A35C38:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr[16]));
      if (branch_taken) {
          goto L_08A35CB4;
      }
      goto L_08A35C44;
    }
L_08A35C44:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A35C88;
      }
      goto L_08A35C54;
    }
L_08A35C54:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08A35C64u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35C64u) goto L_08A35C64;
    return;
L_08A35C64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A35CEC;
      }
      goto L_08A35C88;
    }
L_08A35C88:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A35C94u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35C94u) goto L_08A35C94;
    return;
L_08A35C94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A35CEC;
      }
      goto L_08A35CB4;
    }
L_08A35CB4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A35CD4;
      }
      goto L_08A35CC0;
    }
L_08A35CC0:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A35CD4;
      }
      goto L_08A35CC8;
    }
L_08A35CC8:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A35CD4;
L_08A35CD4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (0u | 2u);
    aot_gpr[31] = (0x08A35CE4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 194u, 0x08A34C58u>(ctx, &aot_mem) && ctx.pc == 0x08A35CE4u) goto L_08A35CE4;
    return;
L_08A35CE4:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A35CEC;
L_08A35CEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[7] = (0u | 128u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    aot_gpr[16] = (aot_gpr[30] - aot_gpr[19]);
      if (branch_taken) {
          goto L_08A35E74;
      }
      goto L_08A35CFC;
    }
L_08A35CFC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A35E74;
      }
      goto L_08A35D04;
    }
L_08A35D04:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A35DC8;
      }
      goto L_08A35D0C;
    }
L_08A35D0C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A35D88;
    }
    goto L_08A35D14;
L_08A35D14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A35D58;
      }
      goto L_08A35D24;
    }
L_08A35D24:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A35D34u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35D34u) goto L_08A35D34;
    return;
L_08A35D34:
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
          goto L_08A35DB8;
      }
      goto L_08A35D58;
    }
L_08A35D58:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A35D68u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35D68u) goto L_08A35D68;
    return;
L_08A35D68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A35DB8;
      }
      goto L_08A35D88;
    }
L_08A35D88:
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A35DA0;
    }
    goto L_08A35D90;
L_08A35D90:
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A35DA0;
    }
    goto L_08A35D98;
L_08A35D98:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08A35DA0;
L_08A35DA0:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08A35DB0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 194u, 0x08A34C58u>(ctx, &aot_mem) && ctx.pc == 0x08A35DB0u) goto L_08A35DB0;
    return;
L_08A35DB0:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A35DB8;
L_08A35DB8:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35D0C;
      }
      goto L_08A35DC8;
    }
L_08A35DC8:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A35E40;
    }
    goto L_08A35DD0;
L_08A35DD0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A35E14;
      }
      goto L_08A35DE0;
    }
L_08A35DE0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A35DF0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35DF0u) goto L_08A35DF0;
    return;
L_08A35DF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A35E74;
      }
      goto L_08A35E14;
    }
L_08A35E14:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A35E20u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35E20u) goto L_08A35E20;
    return;
L_08A35E20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A35E74;
      }
      goto L_08A35E40;
    }
L_08A35E40:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A35E5C;
      }
      goto L_08A35E48;
    }
L_08A35E48:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A35E5C;
      }
      goto L_08A35E50;
    }
L_08A35E50:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A35E5C;
L_08A35E5C:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A35E6Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 194u, 0x08A34C58u>(ctx, &aot_mem) && ctx.pc == 0x08A35E6Cu) goto L_08A35E6C;
    return;
L_08A35E6C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A35E74;
L_08A35E74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 2u, 0x08A36004u>(ctx, &aot_mem); return;
      }
      goto L_08A35E88;
    }
L_08A35E88:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A35F4C;
      }
      goto L_08A35E90;
    }
L_08A35E90:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A35F0C;
    }
    goto L_08A35E98;
L_08A35E98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A35EDC;
      }
      goto L_08A35EA8;
    }
L_08A35EA8:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A35EB8u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35EB8u) goto L_08A35EB8;
    return;
L_08A35EB8:
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
          goto L_08A35F3C;
      }
      goto L_08A35EDC;
    }
L_08A35EDC:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A35EECu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35EECu) goto L_08A35EEC;
    return;
L_08A35EEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A35F3C;
      }
      goto L_08A35F0C;
    }
L_08A35F0C:
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A35F24;
    }
    goto L_08A35F14;
L_08A35F14:
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A35F24;
    }
    goto L_08A35F1C;
L_08A35F1C:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08A35F24;
L_08A35F24:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08A35F34u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 194u, 0x08A34C58u>(ctx, &aot_mem) && ctx.pc == 0x08A35F34u) goto L_08A35F34;
    return;
L_08A35F34:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A35F3C;
L_08A35F3C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35E90;
      }
      goto L_08A35F4C;
    }
L_08A35F4C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A35FCC;
    }
    goto L_08A35F54;
L_08A35F54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A35F9C;
      }
      goto L_08A35F64;
    }
L_08A35F64:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A35F74u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35F74u) goto L_08A35F74;
    return;
L_08A35F74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 2u, 0x08A36004u>(ctx, &aot_mem); return;
      }
      goto L_08A35F9C;
    }
L_08A35F9C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A35FA8u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A35FA8u) goto L_08A35FA8;
    return;
L_08A35FA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 2u, 0x08A36004u>(ctx, &aot_mem); return;
      }
      goto L_08A35FCC;
    }
L_08A35FCC:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A35FE8;
      }
      goto L_08A35FD4;
    }
L_08A35FD4:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A35FE8;
      }
      goto L_08A35FDC;
    }
L_08A35FDC:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_08A35FE8;
L_08A35FE8:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A35FF8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 194u, 0x08A34C58u>(ctx, &aot_mem) && ctx.pc == 0x08A35FF8u) goto L_08A35FF8;
    return;
L_08A35FF8:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A36000u; return;
}

void recomp_unit_0561(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0561_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_561(Runtime &runtime) {
    runtime.register_generated_unit(561u, 0x08A35000u, 4096u, &recomp_unit_0561, &recomp_unit_0561_entry);
    runtime.register_function(0x08A35000u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3500Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35018u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35020u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35028u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35038u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3504Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35068u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35070u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35080u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A350ACu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A350BCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A350C4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A350D0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A350D4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35100u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35110u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3511Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3512Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3513Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35144u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35150u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35198u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A351B0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A351C0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A351C8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A351E8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A351F0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35208u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35210u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3522Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35238u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35240u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35248u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3527Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35290u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35298u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A352A4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A352C8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A352D4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A352ECu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A352F4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3530Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35320u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35338u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35348u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35350u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35370u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35378u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35390u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35398u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A353B0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A353BCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A353C4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A353CCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A353DCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35414u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3543Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35444u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35450u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35464u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3547Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35488u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35498u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A354A0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A354B8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A354C8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A354E4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A354F8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35500u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35520u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35528u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35540u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35548u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35560u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3556Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35574u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3557Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35590u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A355ACu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A355C4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A355CCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A355ECu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A355F4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3560Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35614u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3562Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35638u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35640u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35648u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3565Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35674u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3567Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35684u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35688u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A356A0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A356A8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A356C0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A356C8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A356D0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A356D8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A356E0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A356F0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3570Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35714u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35720u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35728u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3574Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35788u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35790u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35798u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A357A8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A357B4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A357E0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A357E4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35820u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35860u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35890u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A358C4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A358F4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A358FCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35900u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35910u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3591Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35930u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A3594Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35950u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35968u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35970u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A359A0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A359B4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A359BCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A359C4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A359D0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A359D4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A359D8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A359E0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A359ECu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A359F4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A359FCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35A0Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35A1Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35A40u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35A50u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35A70u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35A78u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35A80u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35A84u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35A88u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35A98u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35AA0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35AB0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35AB8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35AC8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35AD8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35B00u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35B0Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35B30u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35B3Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35B44u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35B54u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35B64u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35B70u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35B74u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35B7Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35B84u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35B94u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35BA4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35BC8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35BD4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35BF4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35BFCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35C04u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35C10u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35C20u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35C2Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35C38u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35C44u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35C54u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35C64u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35C88u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35C94u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35CB4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35CC0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35CC8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35CD4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35CE4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35CECu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35CFCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35D04u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35D0Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35D14u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35D24u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35D34u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35D58u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35D68u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35D88u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35D90u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35D98u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35DA0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35DB0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35DB8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35DC8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35DD0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35DE0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35DF0u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35E14u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35E20u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35E40u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35E48u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35E50u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35E5Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35E6Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35E74u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35E88u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35E90u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35E98u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35EA8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35EB8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35EDCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35EECu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35F0Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35F14u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35F1Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35F24u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35F34u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35F3Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35F4Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35F54u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35F64u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35F74u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35F9Cu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35FA8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35FCCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35FD4u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35FDCu, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35FE8u, &recomp_unit_0561, "recomp_unit_0561");
    runtime.register_function(0x08A35FF8u, &recomp_unit_0561, "recomp_unit_0561");
}
} // namespace psprecomp
