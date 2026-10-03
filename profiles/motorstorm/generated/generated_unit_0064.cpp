#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0064[1024] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0,
    0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27,
    0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 38,
    0, 39, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0,
    57, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 73,
    0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0,
    0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0,
    0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 102, 0,
    103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0,
    113, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0,
    0, 129, 0, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 134, 0, 0, 135, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0,
    181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0, 203, 0, 0,
    204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 224, 0, 0,
    225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 236, 0, 0, 237, 0, 238,
    0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 248,
};
void recomp_unit_0064_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08844000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0064[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08844000;
    case 2u: goto L_08844014;
    case 3u: goto L_0884401C;
    case 4u: goto L_08844024;
    case 5u: goto L_0884402C;
    case 6u: goto L_08844038;
    case 7u: goto L_08844044;
    case 8u: goto L_08844058;
    case 9u: goto L_08844064;
    case 10u: goto L_08844070;
    case 11u: goto L_08844084;
    case 12u: goto L_0884408C;
    case 13u: goto L_08844094;
    case 14u: goto L_0884409C;
    case 15u: goto L_088440BC;
    case 16u: goto L_08844174;
    case 17u: goto L_08844184;
    case 18u: goto L_08844190;
    case 19u: goto L_088441A4;
    case 20u: goto L_088441AC;
    case 21u: goto L_088441B4;
    case 22u: goto L_088441BC;
    case 23u: goto L_088441C8;
    case 24u: goto L_088441D0;
    case 25u: goto L_088441DC;
    case 26u: goto L_088441F0;
    case 27u: goto L_088441FC;
    case 28u: goto L_08844204;
    case 29u: goto L_0884420C;
    case 30u: goto L_08844218;
    case 31u: goto L_0884422C;
    case 32u: goto L_08844234;
    case 33u: goto L_0884423C;
    case 34u: goto L_08844248;
    case 35u: goto L_0884425C;
    case 36u: goto L_08844264;
    case 37u: goto L_0884426C;
    case 38u: goto L_0884427C;
    case 39u: goto L_08844284;
    case 40u: goto L_0884428C;
    case 41u: goto L_08844294;
    case 42u: goto L_088442A0;
    case 43u: goto L_088442A8;
    case 44u: goto L_088442BC;
    case 45u: goto L_088442C4;
    case 46u: goto L_088442D4;
    case 47u: goto L_088442DC;
    case 48u: goto L_088442E4;
    case 49u: goto L_08844314;
    case 50u: goto L_08844324;
    case 51u: goto L_0884433C;
    case 52u: goto L_08844348;
    case 53u: goto L_08844354;
    case 54u: goto L_08844368;
    case 55u: goto L_08844370;
    case 56u: goto L_08844378;
    case 57u: goto L_08844380;
    case 58u: goto L_0884438C;
    case 59u: goto L_08844394;
    case 60u: goto L_088443A0;
    case 61u: goto L_088443B4;
    case 62u: goto L_088443C0;
    case 63u: goto L_088443C8;
    case 64u: goto L_088443D0;
    case 65u: goto L_088443E4;
    case 66u: goto L_08844400;
    case 67u: goto L_0884441C;
    case 68u: goto L_0884442C;
    case 69u: goto L_0884443C;
    case 70u: goto L_08844460;
    case 71u: goto L_08844468;
    case 72u: goto L_08844470;
    case 73u: goto L_0884447C;
    case 74u: goto L_08844490;
    case 75u: goto L_08844498;
    case 76u: goto L_088444A0;
    case 77u: goto L_088444A8;
    case 78u: goto L_088444BC;
    case 79u: goto L_088444D4;
    case 80u: goto L_088444E0;
    case 81u: goto L_088444E8;
    case 82u: goto L_088444F4;
    case 83u: goto L_08844508;
    case 84u: goto L_08844514;
    case 85u: goto L_08844520;
    case 86u: goto L_0884452C;
    case 87u: goto L_08844540;
    case 88u: goto L_0884454C;
    case 89u: goto L_08844558;
    case 90u: goto L_0884456C;
    case 91u: goto L_08844578;
    case 92u: goto L_08844584;
    case 93u: goto L_08844598;
    case 94u: goto L_088445A0;
    case 95u: goto L_088445A8;
    case 96u: goto L_088445B0;
    case 97u: goto L_088445BC;
    case 98u: goto L_088445C4;
    case 99u: goto L_088445D8;
    case 100u: goto L_088445E0;
    case 101u: goto L_088445F0;
    case 102u: goto L_088445F8;
    case 103u: goto L_08844600;
    case 104u: goto L_0884460C;
    case 105u: goto L_08844614;
    case 106u: goto L_08844628;
    case 107u: goto L_08844630;
    case 108u: goto L_08844644;
    case 109u: goto L_0884464C;
    case 110u: goto L_08844654;
    case 111u: goto L_0884466C;
    case 112u: goto L_08844678;
    case 113u: goto L_08844680;
    case 114u: goto L_08844688;
    case 115u: goto L_0884469C;
    case 116u: goto L_088446B8;
    case 117u: goto L_088446D4;
    case 118u: goto L_088446E4;
    case 119u: goto L_088446F4;
    case 120u: goto L_08844718;
    case 121u: goto L_08844724;
    case 122u: goto L_0884472C;
    case 123u: goto L_08844734;
    case 124u: goto L_08844748;
    case 125u: goto L_08844750;
    case 126u: goto L_0884475C;
    case 127u: goto L_0884476C;
    case 128u: goto L_08844778;
    case 129u: goto L_08844784;
    case 130u: goto L_08844790;
    case 131u: goto L_08844798;
    case 132u: goto L_088447A4;
    case 133u: goto L_088447AC;
    case 134u: goto L_088447B4;
    case 135u: goto L_088447C0;
    case 136u: goto L_088447C4;
    case 137u: goto L_088447F8;
    case 138u: goto L_08844818;
    case 139u: goto L_08844854;
    case 140u: goto L_0884485C;
    case 141u: goto L_0884487C;
    case 142u: goto L_08844888;
    case 143u: goto L_088448B4;
    case 144u: goto L_088448BC;
    case 145u: goto L_088448D4;
    case 146u: goto L_088448E8;
    case 147u: goto L_088448F4;
    case 148u: goto L_08844930;
    case 149u: goto L_08844950;
    case 150u: goto L_08844968;
    case 151u: goto L_08844980;
    case 152u: goto L_08844998;
    case 153u: goto L_088449B0;
    case 154u: goto L_088449C8;
    case 155u: goto L_088449E0;
    case 156u: goto L_088449F8;
    case 157u: goto L_08844A10;
    case 158u: goto L_08844A28;
    case 159u: goto L_08844A38;
    case 160u: goto L_08844A58;
    case 161u: goto L_08844A78;
    case 162u: goto L_08844A84;
    case 163u: goto L_08844A8C;
    case 164u: goto L_08844A94;
    case 165u: goto L_08844A9C;
    case 166u: goto L_08844AA4;
    case 167u: goto L_08844AAC;
    case 168u: goto L_08844AD0;
    case 169u: goto L_08844AE0;
    case 170u: goto L_08844AF4;
    case 171u: goto L_08844B18;
    case 172u: goto L_08844B28;
    case 173u: goto L_08844B34;
    case 174u: goto L_08844B3C;
    case 175u: goto L_08844B48;
    case 176u: goto L_08844B50;
    case 177u: goto L_08844B5C;
    case 178u: goto L_08844B64;
    case 179u: goto L_08844B70;
    case 180u: goto L_08844B78;
    case 181u: goto L_08844B80;
    case 182u: goto L_08844B8C;
    case 183u: goto L_08844B98;
    case 184u: goto L_08844BA4;
    case 185u: goto L_08844BC8;
    case 186u: goto L_08844BEC;
    case 187u: goto L_08844C10;
    case 188u: goto L_08844C24;
    case 189u: goto L_08844C38;
    case 190u: goto L_08844C50;
    case 191u: goto L_08844C5C;
    case 192u: goto L_08844C64;
    case 193u: goto L_08844C70;
    case 194u: goto L_08844C9C;
    case 195u: goto L_08844CA4;
    case 196u: goto L_08844CC4;
    case 197u: goto L_08844D34;
    case 198u: goto L_08844D3C;
    case 199u: goto L_08844D50;
    case 200u: goto L_08844D58;
    case 201u: goto L_08844D64;
    case 202u: goto L_08844D6C;
    case 203u: goto L_08844D74;
    case 204u: goto L_08844D80;
    case 205u: goto L_08844D88;
    case 206u: goto L_08844D90;
    case 207u: goto L_08844D98;
    case 208u: goto L_08844DA0;
    case 209u: goto L_08844DAC;
    case 210u: goto L_08844DB8;
    case 211u: goto L_08844DC4;
    case 212u: goto L_08844DCC;
    case 213u: goto L_08844DD0;
    case 214u: goto L_08844DE0;
    case 215u: goto L_08844DEC;
    case 216u: goto L_08844E00;
    case 217u: goto L_08844E14;
    case 218u: goto L_08844E24;
    case 219u: goto L_08844E34;
    case 220u: goto L_08844E48;
    case 221u: goto L_08844E58;
    case 222u: goto L_08844E60;
    case 223u: goto L_08844E70;
    case 224u: goto L_08844E74;
    case 225u: goto L_08844E80;
    case 226u: goto L_08844E8C;
    case 227u: goto L_08844E94;
    case 228u: goto L_08844E9C;
    case 229u: goto L_08844EA8;
    case 230u: goto L_08844EB0;
    case 231u: goto L_08844EBC;
    case 232u: goto L_08844EC4;
    case 233u: goto L_08844ECC;
    case 234u: goto L_08844ED8;
    case 235u: goto L_08844EE0;
    case 236u: goto L_08844EE8;
    case 237u: goto L_08844EF4;
    case 238u: goto L_08844EFC;
    case 239u: goto L_08844F18;
    case 240u: goto L_08844F20;
    case 241u: goto L_08844F38;
    case 242u: goto L_08844F6C;
    case 243u: goto L_08844F8C;
    case 244u: goto L_08844FC4;
    case 245u: goto L_08844FD8;
    case 246u: goto L_08844FE0;
    case 247u: goto L_08844FEC;
    case 248u: goto L_08844FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08844000:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08844014u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08844014u) goto L_08844014;
    return;
L_08844014:
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884401C;
L_0884401C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884408C;
      }
      goto L_08844024;
    }
L_08844024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884408C;
      }
      goto L_0884402C;
    }
L_0884402C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884408C;
      }
      goto L_08844038;
    }
L_08844038:
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x08844044u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08844044u) goto L_08844044;
    return;
L_08844044:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08844058u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08844058u) goto L_08844058;
    return;
L_08844058:
    aot_gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884408C;
      }
      goto L_08844064;
    }
L_08844064:
    aot_gpr[4] = (0u | 33u);
    aot_gpr[31] = (0x08844070u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08844070u) goto L_08844070;
    return;
L_08844070:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08844084u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08844084u) goto L_08844084;
    return;
L_08844084:
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884408C;
L_0884408C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_08844094;
    }
L_08844094:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844184;
      }
      goto L_0884409C;
    }
L_0884409C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(24776));
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(1336));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088440BCu);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088440BCu) goto L_088440BC;
    return;
L_088440BC:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(25)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(26)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08844174u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08844174u) goto L_08844174;
    return;
L_08844174:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[17]);
      if (branch_taken) {
          goto L_088441AC;
      }
      goto L_08844184;
    }
L_08844184:
    aot_gpr[4] = (0u | 293u);
    aot_gpr[31] = (0x08844190u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08844190u) goto L_08844190;
    return;
L_08844190:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088441A4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088441A4u) goto L_088441A4;
    return;
L_088441A4:
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088441AC;
L_088441AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_088441B4;
    }
L_088441B4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884423C;
      }
      goto L_088441BC;
    }
L_088441BC:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1336));
    aot_gpr[31] = (0x088441C8u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 59u, 0x0889F48Cu>(ctx, &aot_mem) && ctx.pc == 0x088441C8u) goto L_088441C8;
    return;
L_088441C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088441FC;
      }
      goto L_088441D0;
    }
L_088441D0:
    aot_gpr[4] = (0u | 293u);
    aot_gpr[31] = (0x088441DCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088441DCu) goto L_088441DC;
    return;
L_088441DC:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088441F0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088441F0u) goto L_088441F0;
    return;
L_088441F0:
    aot_gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08844234;
      }
      goto L_088441FC;
    }
L_088441FC:
    aot_gpr[31] = (0x08844204u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 58u, 0x0889F47Cu>(ctx, &aot_mem) && ctx.pc == 0x08844204u) goto L_08844204;
    return;
L_08844204:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844234;
      }
      goto L_0884420C;
    }
L_0884420C:
    aot_gpr[4] = (0u | 294u);
    aot_gpr[31] = (0x08844218u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08844218u) goto L_08844218;
    return;
L_08844218:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884422Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884422Cu) goto L_0884422C;
    return;
L_0884422C:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08844234;
L_08844234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844264;
      }
      goto L_0884423C;
    }
L_0884423C:
    aot_gpr[4] = (0u | 293u);
    aot_gpr[31] = (0x08844248u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08844248u) goto L_08844248;
    return;
L_08844248:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884425Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884425Cu) goto L_0884425C;
    return;
L_0884425C:
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08844264;
L_08844264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_0884426C;
    }
L_0884426C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08844284;
      }
      goto L_0884427C;
    }
L_0884427C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08844284;
L_08844284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_0884428C;
    }
L_0884428C:
    aot_gpr[31] = (0x08844294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08844294u) goto L_08844294;
    return;
L_08844294:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_088442BC;
    }
    goto L_088442A0;
L_088442A0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088442D4;
      }
      goto L_088442A8;
    }
L_088442A8:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088442D4;
      }
      goto L_088442BC;
    }
L_088442BC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088442D4;
      }
      goto L_088442C4;
    }
L_088442C4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088442D4;
L_088442D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_088442DC;
    }
L_088442DC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844348;
      }
      goto L_088442E4;
    }
L_088442E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(1292));
    aot_gpr[31] = (0x08844314u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x08844314u) goto L_08844314;
    return;
L_08844314:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08844324u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 193u, 0x0888CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08844324u) goto L_08844324;
    return;
L_08844324:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    aot_gpr[31] = (0x0884433Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 164u, 0x0889FD70u>(ctx, &aot_mem) && ctx.pc == 0x0884433Cu) goto L_0884433C;
    return;
L_0884433C:
    aot_gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08844370;
      }
      goto L_08844348;
    }
L_08844348:
    aot_gpr[4] = (0u | 52u);
    aot_gpr[31] = (0x08844354u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08844354u) goto L_08844354;
    return;
L_08844354:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08844368u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08844368u) goto L_08844368;
    return;
L_08844368:
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08844370;
L_08844370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_08844378;
    }
L_08844378:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844470;
      }
      goto L_08844380;
    }
L_08844380:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1292));
    aot_gpr[31] = (0x0884438Cu);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 59u, 0x0889F48Cu>(ctx, &aot_mem) && ctx.pc == 0x0884438Cu) goto L_0884438C;
    return;
L_0884438C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088443C0;
      }
      goto L_08844394;
    }
L_08844394:
    aot_gpr[4] = (0u | 52u);
    aot_gpr[31] = (0x088443A0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088443A0u) goto L_088443A0;
    return;
L_088443A0:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088443B4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088443B4u) goto L_088443B4;
    return;
L_088443B4:
    aot_gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08844468;
      }
      goto L_088443C0;
    }
L_088443C0:
    aot_gpr[31] = (0x088443C8u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 58u, 0x0889F47Cu>(ctx, &aot_mem) && ctx.pc == 0x088443C8u) goto L_088443C8;
    return;
L_088443C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844468;
      }
      goto L_088443D0;
    }
L_088443D0:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088443E4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5192));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088443E4u) goto L_088443E4;
    return;
L_088443E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[31] = (0x08844400u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 59u, 0x088C647Cu>(ctx, &aot_mem) && ctx.pc == 0x08844400u) goto L_08844400;
    return;
L_08844400:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    aot_gpr[4] = (0u | 87u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0884441Cu);
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(-5176));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884441Cu) goto L_0884441C;
    return;
L_0884441C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884442Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884442Cu) goto L_0884442C;
    return;
L_0884442C:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(164));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884443Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 25u, 0x08843214u>(ctx, &aot_mem) && ctx.pc == 0x0884443Cu) goto L_0884443C;
    return;
L_0884443C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08844460u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 124u, 0x08888C78u>(ctx, &aot_mem) && ctx.pc == 0x08844460u) goto L_08844460;
    return;
L_08844460:
    aot_gpr[4] = (0u | 10u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08844468;
L_08844468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844498;
      }
      goto L_08844470;
    }
L_08844470:
    aot_gpr[4] = (0u | 52u);
    aot_gpr[31] = (0x0884447Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884447Cu) goto L_0884447C;
    return;
L_0884447C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08844490u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08844490u) goto L_08844490;
    return;
L_08844490:
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08844498;
L_08844498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_088444A0;
    }
L_088444A0:
    aot_gpr[31] = (0x088444A8u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x088444A8u) goto L_088444A8;
    return;
L_088444A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-3));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08844578;
      }
      goto L_088444BC;
    }
L_088444BC:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-5024)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088444D4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088445A0;
      }
      goto L_088444E0;
    }
L_088444E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088445A0;
      }
      goto L_088444E8;
    }
L_088444E8:
    aot_gpr[4] = (0u | 100u);
    aot_gpr[31] = (0x088444F4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088444F4u) goto L_088444F4;
    return;
L_088444F4:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08844508u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08844508u) goto L_08844508;
    return;
L_08844508:
    aot_gpr[4] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088445A0;
      }
      goto L_08844514;
    }
L_08844514:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088445A0;
      }
      goto L_08844520;
    }
L_08844520:
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x0884452Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884452Cu) goto L_0884452C;
    return;
L_0884452C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08844540u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08844540u) goto L_08844540;
    return;
L_08844540:
    aot_gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088445A0;
      }
      goto L_0884454C;
    }
L_0884454C:
    aot_gpr[4] = (0u | 38u);
    aot_gpr[31] = (0x08844558u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08844558u) goto L_08844558;
    return;
L_08844558:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884456Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884456Cu) goto L_0884456C;
    return;
L_0884456C:
    aot_gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088445A0;
      }
      goto L_08844578;
    }
L_08844578:
    aot_gpr[4] = (0u | 35u);
    aot_gpr[31] = (0x08844584u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08844584u) goto L_08844584;
    return;
L_08844584:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08844598u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08844598u) goto L_08844598;
    return;
L_08844598:
    aot_gpr[4] = (0u | 11u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088445A0;
L_088445A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_088445A8;
    }
L_088445A8:
    aot_gpr[31] = (0x088445B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x088445B0u) goto L_088445B0;
    return;
L_088445B0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_088445D8;
    }
    goto L_088445BC;
L_088445BC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088445F0;
      }
      goto L_088445C4;
    }
L_088445C4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088445F0;
      }
      goto L_088445D8;
    }
L_088445D8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088445F0;
      }
      goto L_088445E0;
    }
L_088445E0:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088445F0;
L_088445F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_088445F8;
    }
L_088445F8:
    aot_gpr[31] = (0x08844600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08844600u) goto L_08844600;
    return;
L_08844600:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08844628;
    }
    goto L_0884460C;
L_0884460C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0884464C;
      }
      goto L_08844614;
    }
L_08844614:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884464C;
      }
      goto L_08844628;
    }
L_08844628:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884464C;
      }
      goto L_08844630;
    }
L_08844630:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08844644u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 2u, 0x0888900Cu>(ctx, &aot_mem) && ctx.pc == 0x08844644u) goto L_08844644;
    return;
L_08844644:
    aot_gpr[4] = (0u | 13u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884464C;
L_0884464C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_08844654;
    }
L_08844654:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 13 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
        goto L_08844680;
    }
    goto L_0884466C;
L_0884466C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884472C;
      }
      goto L_08844678;
    }
L_08844678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844724;
      }
      goto L_08844680;
    }
L_08844680:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884472C;
      }
      goto L_08844688;
    }
L_08844688:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(420));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884469Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5192));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884469Cu) goto L_0884469C;
    return;
L_0884469C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[31] = (0x088446B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 59u, 0x088C647Cu>(ctx, &aot_mem) && ctx.pc == 0x088446B8u) goto L_088446B8;
    return;
L_088446B8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(436));
    aot_gpr[4] = (0u | 87u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088446D4u);
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(-5176));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088446D4u) goto L_088446D4;
    return;
L_088446D4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088446E4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088446E4u) goto L_088446E4;
    return;
L_088446E4:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(500));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088446F4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 25u, 0x08843214u>(ctx, &aot_mem) && ctx.pc == 0x088446F4u) goto L_088446F4;
    return;
L_088446F4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08844718u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 124u, 0x08888C78u>(ctx, &aot_mem) && ctx.pc == 0x08844718u) goto L_08844718;
    return;
L_08844718:
    aot_gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884472C;
      }
      goto L_08844724;
    }
L_08844724:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884472C;
L_0884472C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_08844734;
    }
L_08844734:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_08844748;
    }
L_08844748:
    aot_gpr[31] = (0x08844750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08844750u) goto L_08844750;
    return;
L_08844750:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_0884475C;
    }
L_0884475C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884476C;
L_0884476C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(780)));
    aot_gpr[31] = (0x08844778u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08844778u) goto L_08844778;
    return;
L_08844778:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08844784u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(776)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844784u) goto L_08844784;
    return;
L_08844784:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088447AC;
      }
      goto L_08844790;
    }
L_08844790:
    aot_gpr[31] = (0x08844798u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(772)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844798u) goto L_08844798;
    return;
L_08844798:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088447A4u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088447A4u) goto L_088447A4;
    return;
L_088447A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088447C4;
      }
      goto L_088447AC;
    }
L_088447AC:
    aot_gpr[31] = (0x088447B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(772)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088447B4u) goto L_088447B4;
    return;
L_088447B4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088447C0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088447C0u) goto L_088447C0;
    return;
L_088447C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088447C4;
L_088447C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(792)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(796)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(800)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(804)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(808)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(812)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(816)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(820)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(824)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(828)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(832));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088447F8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23896), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844818:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-4980));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08844854u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4960));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08844854u) goto L_08844854;
    return;
L_08844854:
    aot_gpr[31] = (0x0884485Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x0884485Cu) goto L_0884485C;
    return;
L_0884485C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4888)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884487Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4952));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884487Cu) goto L_0884487C;
    return;
L_0884487C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08844888u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08844888u) goto L_08844888;
    return;
L_08844888:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
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
L_088448B4:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088448BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(27)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088448E8;
      }
      goto L_088448D4;
    }
L_088448D4:
    aot_gpr[4] = (17264u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17184u << 16u);
    aot_gpr[31] = (0x088448E8u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 103u, 0x0889A594u>(ctx, &aot_mem) && ctx.pc == 0x088448E8u) goto L_088448E8;
    return;
L_088448E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088448F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[19]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    aot_gpr[31] = (0x08844930u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x08844930u) goto L_08844930;
    return;
L_08844930:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-4980));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08844950u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4960));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08844950u) goto L_08844950;
    return;
L_08844950:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08844968u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4952));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08844968u) goto L_08844968;
    return;
L_08844968:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08844980u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4940));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08844980u) goto L_08844980;
    return;
L_08844980:
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08844998u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4928));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08844998u) goto L_08844998;
    return;
L_08844998:
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088449B0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4904));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088449B0u) goto L_088449B0;
    return;
L_088449B0:
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088449C8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4880));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088449C8u) goto L_088449C8;
    return;
L_088449C8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088449E0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4864));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088449E0u) goto L_088449E0;
    return;
L_088449E0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088449F8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4848));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088449F8u) goto L_088449F8;
    return;
L_088449F8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08844A10u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4836));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08844A10u) goto L_08844A10;
    return;
L_08844A10:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08844A28u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4824));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08844A28u) goto L_08844A28;
    return;
L_08844A28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08844A58;
      }
      goto L_08844A38;
    }
L_08844A38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08844A78;
      }
      goto L_08844A58;
    }
L_08844A58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_08844A78;
L_08844A78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(27)));
    if (static_cast<std::int32_t>(aot_gpr[5]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
        goto L_08844A94;
    }
    goto L_08844A84;
L_08844A84:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08844E74;
      }
      goto L_08844A8C;
    }
L_08844A8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844AAC;
      }
      goto L_08844A94;
    }
L_08844A94:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08844C64;
      }
      goto L_08844A9C;
    }
L_08844A9C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08844D58;
      }
      goto L_08844AA4;
    }
L_08844AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844E74;
      }
      goto L_08844AAC;
    }
L_08844AAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844AF4;
      }
      goto L_08844AD0;
    }
L_08844AD0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08844AE0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4812));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08844AE0u) goto L_08844AE0;
    return;
L_08844AE0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08844C5C;
      }
      goto L_08844AF4;
    }
L_08844AF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844B3C;
      }
      goto L_08844B18;
    }
L_08844B18:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08844B28u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4980));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08844B28u) goto L_08844B28;
    return;
L_08844B28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08844B34u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08844B34u) goto L_08844B34;
    return;
L_08844B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844C5C;
      }
      goto L_08844B3C;
    }
L_08844B3C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08844B48u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844B48u) goto L_08844B48;
    return;
L_08844B48:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08844B78;
      }
      goto L_08844B50;
    }
L_08844B50:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08844B5Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844B5Cu) goto L_08844B5C;
    return;
L_08844B5C:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08844B78;
      }
      goto L_08844B64;
    }
L_08844B64:
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(24))))));
    aot_gpr[31] = (0x08844B70u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844B70u) goto L_08844B70;
    return;
L_08844B70:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08844BA4;
      }
      goto L_08844B78;
    }
L_08844B78:
    aot_gpr[31] = (0x08844B80u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844B80u) goto L_08844B80;
    return;
L_08844B80:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08844B8Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844B8Cu) goto L_08844B8C;
    return;
L_08844B8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[31] = (0x08844B98u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844B98u) goto L_08844B98;
    return;
L_08844B98:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08844BA4;
L_08844BA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08844C10;
      }
      goto L_08844BC8;
    }
L_08844BC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08844C10;
      }
      goto L_08844BEC;
    }
L_08844BEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844C5C;
      }
      goto L_08844C10;
    }
L_08844C10:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-4980));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08844C24u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08844C24u) goto L_08844C24;
    return;
L_08844C24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[31] = (0x08844C38u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08844C38u) goto L_08844C38;
    return;
L_08844C38:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08844C50u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4960));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08844C50u) goto L_08844C50;
    return;
L_08844C50:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08844C5Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08844C5Cu) goto L_08844C5C;
    return;
L_08844C5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844E74;
      }
      goto L_08844C64;
    }
L_08844C64:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x08844C70u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 35u, 0x0889F2BCu>(ctx, &aot_mem) && ctx.pc == 0x08844C70u) goto L_08844C70;
    return;
L_08844C70:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(24))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08844CA4;
    }
    goto L_08844C9C;
L_08844C9C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08844CC4;
      }
      goto L_08844CA4;
    }
L_08844CA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08844CC4;
L_08844CC4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 24u));
    aot_gpr[5] = (aot_gpr[8] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08844D34u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08844D34u) goto L_08844D34;
    return;
L_08844D34:
    aot_gpr[31] = (0x08844D3Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08844D3Cu) goto L_08844D3C;
    return;
L_08844D3C:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08844D50u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 36u, 0x0889F2D8u>(ctx, &aot_mem) && ctx.pc == 0x08844D50u) goto L_08844D50;
    return;
L_08844D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844E74;
      }
      goto L_08844D58;
    }
L_08844D58:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x08844D64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 59u, 0x0889F48Cu>(ctx, &aot_mem) && ctx.pc == 0x08844D64u) goto L_08844D64;
    return;
L_08844D64:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08844D90;
      }
      goto L_08844D6C;
    }
L_08844D6C:
    aot_gpr[31] = (0x08844D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 60u, 0x0889F49Cu>(ctx, &aot_mem) && ctx.pc == 0x08844D74u) goto L_08844D74;
    return;
L_08844D74:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08844D88;
      }
      goto L_08844D80;
    }
L_08844D80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844D88;
      }
      goto L_08844D88;
    }
L_08844D88:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08844E74;
      }
      goto L_08844D90;
    }
L_08844D90:
    aot_gpr[31] = (0x08844D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 58u, 0x0889F47Cu>(ctx, &aot_mem) && ctx.pc == 0x08844D98u) goto L_08844D98;
    return;
L_08844D98:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844E74;
      }
      goto L_08844DA0;
    }
L_08844DA0:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844E70;
      }
      goto L_08844DAC;
    }
L_08844DAC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08844DB8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x0888CB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08844DB8u) goto L_08844DB8;
    return;
L_08844DB8:
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844DD0;
      }
      goto L_08844DC4;
    }
L_08844DC4:
    aot_gpr[31] = (0x08844DCCu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x0888CB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08844DCCu) goto L_08844DCC;
    return;
L_08844DCC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08844DD0;
L_08844DD0:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844E70;
      }
      goto L_08844DE0;
    }
L_08844DE0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08844DECu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 21u, 0x0889F150u>(ctx, &aot_mem) && ctx.pc == 0x08844DECu) goto L_08844DEC;
    return;
L_08844DEC:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08844E00u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x08844E00u) goto L_08844E00;
    return;
L_08844E00:
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08844E14u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 110u, 0x08A329CCu>(ctx, &aot_mem) && ctx.pc == 0x08844E14u) goto L_08844E14;
    return;
L_08844E14:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08844E24u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08844E24u) goto L_08844E24;
    return;
L_08844E24:
    aot_gpr[6] = (aot_gpr[21] + static_cast<std::uint32_t>(21));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08844E34u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08844E34u) goto L_08844E34;
    return;
L_08844E34:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08844E48u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4984));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08844E48u) goto L_08844E48;
    return;
L_08844E48:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08844E58u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08844E58u) goto L_08844E58;
    return;
L_08844E58:
    aot_gpr[31] = (0x08844E60u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08844E60u) goto L_08844E60;
    return;
L_08844E60:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08844DE0;
      }
      goto L_08844E70;
    }
L_08844E70:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    goto L_08844E74;
L_08844E74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x08844E80u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08844E80u) goto L_08844E80;
    return;
L_08844E80:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08844E8Cu);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844E8Cu) goto L_08844E8C;
    return;
L_08844E8C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844EE0;
      }
      goto L_08844E94;
    }
L_08844E94:
    aot_gpr[31] = (0x08844E9Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844E9Cu) goto L_08844E9C;
    return;
L_08844E9C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08844EC4;
      }
      goto L_08844EA8;
    }
L_08844EA8:
    aot_gpr[31] = (0x08844EB0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844EB0u) goto L_08844EB0;
    return;
L_08844EB0:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08844EBCu);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08844EBCu) goto L_08844EBC;
    return;
L_08844EBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08844F38;
      }
      goto L_08844EC4;
    }
L_08844EC4:
    aot_gpr[31] = (0x08844ECCu);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844ECCu) goto L_08844ECC;
    return;
L_08844ECC:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08844ED8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08844ED8u) goto L_08844ED8;
    return;
L_08844ED8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08844F38;
      }
      goto L_08844EE0;
    }
L_08844EE0:
    aot_gpr[31] = (0x08844EE8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08844EE8u) goto L_08844EE8;
    return;
L_08844EE8:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08844F18;
      }
      goto L_08844EF4;
    }
L_08844EF4:
    aot_gpr[31] = (0x08844EFCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 76u, 0x0888D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08844EFCu) goto L_08844EFC;
    return;
L_08844EFC:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08844F38;
      }
      goto L_08844F18;
    }
L_08844F18:
    aot_gpr[31] = (0x08844F20u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 76u, 0x0888D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08844F20u) goto L_08844F20;
    return;
L_08844F20:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08844F38;
L_08844F38:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844F6C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23904), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844F8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(26492)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08844FE0;
      }
      goto L_08844FC4;
    }
L_08844FC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26528)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844FE0;
      }
      goto L_08844FD8;
    }
L_08844FD8:
    aot_gpr[31] = (0x08844FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 135u, 0x08899F18u>(ctx, &aot_mem) && ctx.pc == 0x08844FE0u) goto L_08844FE0;
    return;
L_08844FE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 2u, 0x08845010u>(ctx, &aot_mem); return;
      }
      goto L_08844FEC;
    }
L_08844FEC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08844FFCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08844FFCu) goto L_08844FFC;
    return;
L_08844FFC:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    ctx.pc = 0x08845000u; return;
}

void recomp_unit_0064(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0064_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_64(Runtime &runtime) {
    runtime.register_generated_unit(64u, 0x08844000u, 4096u, &recomp_unit_0064, &recomp_unit_0064_entry);
    runtime.register_function(0x08844000u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844014u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884401Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844024u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884402Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844038u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844044u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844058u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844064u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844070u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844084u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884408Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844094u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884409Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088440BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844174u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844184u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844190u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088441A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088441ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088441B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088441BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088441C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088441D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088441DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088441F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088441FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844204u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884420Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844218u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884422Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844234u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884423Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844248u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884425Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844264u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884426Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884427Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844284u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884428Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844294u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088442A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088442A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088442BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088442C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088442D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088442DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088442E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844314u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844324u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884433Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844348u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844354u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844368u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844370u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844378u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844380u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884438Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844394u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088443A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088443B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088443C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088443C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088443D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088443E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844400u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884441Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884442Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884443Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844460u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844468u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844470u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884447Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844490u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844498u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088444A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088444A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088444BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088444D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088444E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088444E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088444F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844508u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844514u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844520u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884452Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844540u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884454Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844558u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884456Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844578u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844584u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844598u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088445A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088445A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088445B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088445BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088445C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088445D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088445E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088445F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088445F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844600u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884460Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844614u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844628u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844630u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844644u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884464Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844654u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884466Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844678u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844680u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844688u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884469Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088446B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088446D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088446E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088446F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844718u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844724u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884472Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844734u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844748u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844750u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884475Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884476Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844778u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844784u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844790u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844798u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088447A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088447ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088447B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088447C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088447C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088447F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844818u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844854u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884485Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0884487Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844888u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088448B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088448BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088448D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088448E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088448F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844930u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844950u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844968u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844980u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844998u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088449B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088449C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088449E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x088449F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844A10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844A28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844A38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844A58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844A78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844A84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844A8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844A94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844A9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844AA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844AACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844AD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844AE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844AF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844B98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844BA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844BC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844BECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844C10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844C24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844C38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844C50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844C5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844C64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844C70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844C9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844CA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844CC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844D34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844D3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844D50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844D58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844D64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844D6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844D74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844D80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844D88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844D90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844D98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844DA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844DACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844DB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844DC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844DCCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844DD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844DE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844DECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844E9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844EA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844EB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844EBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844EC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844ECCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844ED8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844EE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844EE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844EF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844EFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844F18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844F20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844F38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844F6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844F8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844FC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844FD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844FE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844FECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08844FFCu, &recomp_unit_0064, "recomp_unit_0064");
}
} // namespace psprecomp
