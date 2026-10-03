#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0402[1020] = {
    1, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0,
    0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 47, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0,
    0, 57, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 64, 65, 0, 0, 66, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0,
    77, 0, 78, 0, 79, 0, 0, 0, 80, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 85,
    0, 86, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93,
    0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 106,
    0, 107, 0, 108, 109, 0, 0, 110, 0, 0, 111, 0, 112, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 0,
    0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 123, 124, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0,
    136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143,
    0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 150, 0, 0, 0, 151, 152, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 190, 191, 0, 192, 0, 0, 193, 0, 0, 194, 0, 195,
    0, 0, 196, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 204, 205, 0, 0, 0, 206, 0, 0, 0, 207, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 218, 0, 219, 0,
    220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 224, 0, 225, 0, 226, 227, 0, 228, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 233, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 240, 0, 0, 241,
};
void recomp_unit_0402_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08996000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0402[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08996000;
    case 2u: goto L_08996008;
    case 3u: goto L_08996014;
    case 4u: goto L_0899601C;
    case 5u: goto L_08996024;
    case 6u: goto L_0899602C;
    case 7u: goto L_0899604C;
    case 8u: goto L_08996054;
    case 9u: goto L_08996060;
    case 10u: goto L_0899608C;
    case 11u: goto L_08996094;
    case 12u: goto L_089960A0;
    case 13u: goto L_089960A8;
    case 14u: goto L_089960BC;
    case 15u: goto L_089960C4;
    case 16u: goto L_089960CC;
    case 17u: goto L_089960D4;
    case 18u: goto L_08996100;
    case 19u: goto L_08996108;
    case 20u: goto L_08996110;
    case 21u: goto L_08996118;
    case 22u: goto L_08996120;
    case 23u: goto L_08996128;
    case 24u: goto L_08996134;
    case 25u: goto L_0899613C;
    case 26u: goto L_08996144;
    case 27u: goto L_0899614C;
    case 28u: goto L_08996154;
    case 29u: goto L_0899615C;
    case 30u: goto L_08996164;
    case 31u: goto L_08996190;
    case 32u: goto L_089961A0;
    case 33u: goto L_089961A8;
    case 34u: goto L_089961D0;
    case 35u: goto L_089961E0;
    case 36u: goto L_089961E8;
    case 37u: goto L_089961F0;
    case 38u: goto L_08996204;
    case 39u: goto L_0899620C;
    case 40u: goto L_08996230;
    case 41u: goto L_08996238;
    case 42u: goto L_08996240;
    case 43u: goto L_08996248;
    case 44u: goto L_08996250;
    case 45u: goto L_08996258;
    case 46u: goto L_08996260;
    case 47u: goto L_08996264;
    case 48u: goto L_0899627C;
    case 49u: goto L_0899629C;
    case 50u: goto L_089962A4;
    case 51u: goto L_089962AC;
    case 52u: goto L_089962B4;
    case 53u: goto L_089962BC;
    case 54u: goto L_089962D0;
    case 55u: goto L_089962E4;
    case 56u: goto L_089962F0;
    case 57u: goto L_08996304;
    case 58u: goto L_0899630C;
    case 59u: goto L_08996314;
    case 60u: goto L_08996324;
    case 61u: goto L_08996330;
    case 62u: goto L_0899633C;
    case 63u: goto L_08996358;
    case 64u: goto L_08996360;
    case 65u: goto L_08996364;
    case 66u: goto L_08996370;
    case 67u: goto L_0899637C;
    case 68u: goto L_089963B4;
    case 69u: goto L_089963BC;
    case 70u: goto L_089963C4;
    case 71u: goto L_089963CC;
    case 72u: goto L_089963D4;
    case 73u: goto L_089963DC;
    case 74u: goto L_089963E4;
    case 75u: goto L_089963EC;
    case 76u: goto L_089963F8;
    case 77u: goto L_08996400;
    case 78u: goto L_08996408;
    case 79u: goto L_08996410;
    case 80u: goto L_08996420;
    case 81u: goto L_08996424;
    case 82u: goto L_0899644C;
    case 83u: goto L_08996460;
    case 84u: goto L_08996468;
    case 85u: goto L_0899647C;
    case 86u: goto L_08996484;
    case 87u: goto L_08996488;
    case 88u: goto L_089964B0;
    case 89u: goto L_089964BC;
    case 90u: goto L_089964D4;
    case 91u: goto L_089964DC;
    case 92u: goto L_089964EC;
    case 93u: goto L_089964FC;
    case 94u: goto L_08996504;
    case 95u: goto L_08996538;
    case 96u: goto L_08996550;
    case 97u: goto L_0899656C;
    case 98u: goto L_08996584;
    case 99u: goto L_08996594;
    case 100u: goto L_089965A4;
    case 101u: goto L_089965AC;
    case 102u: goto L_089965C4;
    case 103u: goto L_089965D8;
    case 104u: goto L_089965E8;
    case 105u: goto L_089965F4;
    case 106u: goto L_089965FC;
    case 107u: goto L_08996604;
    case 108u: goto L_0899660C;
    case 109u: goto L_08996610;
    case 110u: goto L_0899661C;
    case 111u: goto L_08996628;
    case 112u: goto L_08996630;
    case 113u: goto L_08996634;
    case 114u: goto L_08996640;
    case 115u: goto L_0899664C;
    case 116u: goto L_08996658;
    case 117u: goto L_08996664;
    case 118u: goto L_0899666C;
    case 119u: goto L_08996674;
    case 120u: goto L_08996684;
    case 121u: goto L_089966B4;
    case 122u: goto L_089966C0;
    case 123u: goto L_089966C4;
    case 124u: goto L_089966C8;
    case 125u: goto L_089966D4;
    case 126u: goto L_089966E4;
    case 127u: goto L_089966EC;
    case 128u: goto L_089966F8;
    case 129u: goto L_08996718;
    case 130u: goto L_08996720;
    case 131u: goto L_08996738;
    case 132u: goto L_08996748;
    case 133u: goto L_08996758;
    case 134u: goto L_08996760;
    case 135u: goto L_0899676C;
    case 136u: goto L_08996780;
    case 137u: goto L_08996788;
    case 138u: goto L_08996794;
    case 139u: goto L_089967B0;
    case 140u: goto L_089967CC;
    case 141u: goto L_089967E4;
    case 142u: goto L_089967F0;
    case 143u: goto L_089967FC;
    case 144u: goto L_08996808;
    case 145u: goto L_08996810;
    case 146u: goto L_08996818;
    case 147u: goto L_0899684C;
    case 148u: goto L_0899685C;
    case 149u: goto L_08996888;
    case 150u: goto L_0899688C;
    case 151u: goto L_0899689C;
    case 152u: goto L_089968A0;
    case 153u: goto L_089968AC;
    case 154u: goto L_089968B8;
    case 155u: goto L_089968C0;
    case 156u: goto L_089968E4;
    case 157u: goto L_089968EC;
    case 158u: goto L_089968FC;
    case 159u: goto L_08996914;
    case 160u: goto L_089969D0;
    case 161u: goto L_089969E0;
    case 162u: goto L_089969F0;
    case 163u: goto L_08996A00;
    case 164u: goto L_08996A28;
    case 165u: goto L_08996A5C;
    case 166u: goto L_08996A68;
    case 167u: goto L_08996A84;
    case 168u: goto L_08996A94;
    case 169u: goto L_08996AB4;
    case 170u: goto L_08996AE8;
    case 171u: goto L_08996AF4;
    case 172u: goto L_08996B10;
    case 173u: goto L_08996B20;
    case 174u: goto L_08996BD0;
    case 175u: goto L_08996C04;
    case 176u: goto L_08996C10;
    case 177u: goto L_08996C30;
    case 178u: goto L_08996C40;
    case 179u: goto L_08996CE0;
    case 180u: goto L_08996D10;
    case 181u: goto L_08996D18;
    case 182u: goto L_08996D20;
    case 183u: goto L_08996D30;
    case 184u: goto L_08996D3C;
    case 185u: goto L_08996D5C;
    case 186u: goto L_08996D7C;
    case 187u: goto L_08996DB4;
    case 188u: goto L_08996DBC;
    case 189u: goto L_08996DC8;
    case 190u: goto L_08996DD0;
    case 191u: goto L_08996DD4;
    case 192u: goto L_08996DDC;
    case 193u: goto L_08996DE8;
    case 194u: goto L_08996DF4;
    case 195u: goto L_08996DFC;
    case 196u: goto L_08996E08;
    case 197u: goto L_08996E0C;
    case 198u: goto L_08996E14;
    case 199u: goto L_08996E1C;
    case 200u: goto L_08996E24;
    case 201u: goto L_08996E2C;
    case 202u: goto L_08996E34;
    case 203u: goto L_08996E3C;
    case 204u: goto L_08996E48;
    case 205u: goto L_08996E4C;
    case 206u: goto L_08996E5C;
    case 207u: goto L_08996E6C;
    case 208u: goto L_08996E70;
    case 209u: goto L_08996E9C;
    case 210u: goto L_08996EA4;
    case 211u: goto L_08996EAC;
    case 212u: goto L_08996EB0;
    case 213u: goto L_08996EBC;
    case 214u: goto L_08996EC4;
    case 215u: goto L_08996ED0;
    case 216u: goto L_08996EDC;
    case 217u: goto L_08996EE8;
    case 218u: goto L_08996EF0;
    case 219u: goto L_08996EF8;
    case 220u: goto L_08996F00;
    case 221u: goto L_08996F08;
    case 222u: goto L_08996F10;
    case 223u: goto L_08996F18;
    case 224u: goto L_08996F28;
    case 225u: goto L_08996F30;
    case 226u: goto L_08996F38;
    case 227u: goto L_08996F3C;
    case 228u: goto L_08996F44;
    case 229u: goto L_08996F4C;
    case 230u: goto L_08996F54;
    case 231u: goto L_08996F60;
    case 232u: goto L_08996F70;
    case 233u: goto L_08996F78;
    case 234u: goto L_08996F7C;
    case 235u: goto L_08996FAC;
    case 236u: goto L_08996FB4;
    case 237u: goto L_08996FC4;
    case 238u: goto L_08996FCC;
    case 239u: goto L_08996FD8;
    case 240u: goto L_08996FE0;
    case 241u: goto L_08996FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08996000:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_0899604C;
    }
    goto L_08996008;
L_08996008:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_0899601C;
      }
      goto L_08996014;
    }
L_08996014:
    aot_gpr[31] = (0x0899601Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0899601Cu) goto L_0899601C;
    return;
L_0899601C:
    aot_gpr[31] = (0x08996024u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 175u, 0x08995BE0u>(ctx, &aot_mem) && ctx.pc == 0x08996024u) goto L_08996024;
    return;
L_08996024:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    goto L_0899602C;
L_0899602C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_0899604C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089960C4;
      }
      goto L_08996054;
    }
L_08996054:
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[8] = (aot_gpr[20] + static_cast<std::uint32_t>(64));
    goto L_08996060;
L_08996060:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08996060;
      }
      goto L_0899608C;
    }
L_0899608C:
    aot_gpr[31] = (0x08996094u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 175u, 0x08995BE0u>(ctx, &aot_mem) && ctx.pc == 0x08996094u) goto L_08996094;
    return;
L_08996094:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    goto L_0899602C;
L_089960A0:
    aot_gpr[31] = (0x089960A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 194u, 0x08994F48u>(ctx, &aot_mem) && ctx.pc == 0x089960A8u) goto L_089960A8;
    return;
L_089960A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089960BCu);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 207u, 0x08994FFCu>(ctx, &aot_mem) && ctx.pc == 0x089960BCu) goto L_089960BC;
    return;
L_089960BC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 247u, 0x08995FF0u>(ctx, &aot_mem); return;
L_089960C4:
    aot_gpr[31] = (0x089960CCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x089960CCu) goto L_089960CC;
    return;
L_089960CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08996054;
L_089960D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[31] = (0x08996100u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x08996100u) goto L_08996100;
    return;
L_08996100:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089961A8;
      }
      goto L_08996108;
    }
L_08996108:
    aot_gpr[31] = (0x08996110u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 10u, 0x08995068u>(ctx, &aot_mem) && ctx.pc == 0x08996110u) goto L_08996110;
    return;
L_08996110:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089961A8;
      }
      goto L_08996118;
    }
L_08996118:
    aot_gpr[31] = (0x08996120u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x08996120u) goto L_08996120;
    return;
L_08996120:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089961A8;
      }
      goto L_08996128;
    }
L_08996128:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x08996134u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 10u, 0x08995068u>(ctx, &aot_mem) && ctx.pc == 0x08996134u) goto L_08996134;
    return;
L_08996134:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089961E8;
      }
      goto L_0899613C;
    }
L_0899613C:
    aot_gpr[31] = (0x08996144u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x08996144u) goto L_08996144;
    return;
L_08996144:
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089961D0;
    }
    goto L_0899614C;
L_0899614C:
    aot_gpr[31] = (0x08996154u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08996154u) goto L_08996154;
    return;
L_08996154:
    if (aot_gpr[2] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08996190;
    }
    goto L_0899615C;
L_0899615C:
    aot_gpr[31] = (0x08996164u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 175u, 0x08995BE0u>(ctx, &aot_mem) && ctx.pc == 0x08996164u) goto L_08996164;
    return;
L_08996164:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08996190:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089961A0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 220u, 0x08995DE0u>(ctx, &aot_mem) && ctx.pc == 0x089961A0u) goto L_089961A0;
    return;
L_089961A0:
    // nop
    goto L_0899615C;
L_089961A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089961D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089961E0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 242u, 0x08995FA0u>(ctx, &aot_mem) && ctx.pc == 0x089961E0u) goto L_089961E0;
    return;
L_089961E0:
    // nop
    goto L_0899614C;
L_089961E8:
    aot_gpr[31] = (0x089961F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 194u, 0x08994F48u>(ctx, &aot_mem) && ctx.pc == 0x089961F0u) goto L_089961F0;
    return;
L_089961F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x08996204u);
    aot_gpr[18] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 207u, 0x08994FFCu>(ctx, &aot_mem) && ctx.pc == 0x08996204u) goto L_08996204;
    return;
L_08996204:
    // nop
    goto L_0899613C;
L_0899620C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[31]);
    aot_gpr[31] = (0x08996230u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x08996230u) goto L_08996230;
    return;
L_08996230:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0899627C;
      }
      goto L_08996238;
    }
L_08996238:
    aot_gpr[31] = (0x08996240u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 10u, 0x08995068u>(ctx, &aot_mem) && ctx.pc == 0x08996240u) goto L_08996240;
    return;
L_08996240:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0899627C;
      }
      goto L_08996248;
    }
L_08996248:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899629C;
      }
      goto L_08996250;
    }
L_08996250:
    aot_gpr[31] = (0x08996258u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08996258u) goto L_08996258;
    return;
L_08996258:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_0899627C;
      }
      goto L_08996260;
    }
L_08996260:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_08996264;
L_08996264:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899627C:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899629C:
    aot_gpr[31] = (0x089962A4u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x089962A4u) goto L_089962A4;
    return;
L_089962A4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08996250;
      }
      goto L_089962AC;
    }
L_089962AC:
    aot_gpr[31] = (0x089962B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x089962B4u) goto L_089962B4;
    return;
L_089962B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08996314;
      }
      goto L_089962BC;
    }
L_089962BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x089962D0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 35u, 0x089951E8u>(ctx, &aot_mem) && ctx.pc == 0x089962D0u) goto L_089962D0;
    return;
L_089962D0:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089962E4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 86u, 0x089998ECu>(ctx, &aot_mem) && ctx.pc == 0x089962E4u) goto L_089962E4;
    return;
L_089962E4:
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[29]);
    goto L_089962F0;
L_089962F0:
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899627C;
      }
      goto L_08996304;
    }
L_08996304:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[29]);
      if (branch_taken) {
          goto L_089962F0;
      }
      goto L_0899630C;
    }
L_0899630C:
    aot_gpr[16] = (0u + 0u);
    goto L_08996260;
L_08996314:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1024));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
        goto L_08996364;
    }
    goto L_08996324;
L_08996324:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1536));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
        goto L_08996364;
    }
    goto L_08996330;
L_08996330:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_08996360;
      }
      goto L_0899633C;
    }
L_0899633C:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[2] = (32768u << 16u);
    aot_gpr[31] = (0x08996358u);
    aot_gpr[16] = (aot_gpr[8] | aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 86u, 0x089998ECu>(ctx, &aot_mem) && ctx.pc == 0x08996358u) goto L_08996358;
    return;
L_08996358:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_08996264;
L_08996360:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08996364;
L_08996364:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08996370u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08996370u) goto L_08996370;
    return;
L_08996370:
    aot_gpr[8] = (aot_gpr[2] + 0u);
    aot_gpr[8] = ((aot_gpr[8] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    goto L_0899633C;
L_0899637C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
      if (branch_taken) {
          goto L_08996420;
      }
      goto L_089963B4;
    }
L_089963B4:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08996424;
      }
      goto L_089963BC;
    }
L_089963BC:
    aot_gpr[31] = (0x089963C4u);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x089963C4u) goto L_089963C4;
    return;
L_089963C4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08996420;
      }
      goto L_089963CC;
    }
L_089963CC:
    aot_gpr[31] = (0x089963D4u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x089963D4u) goto L_089963D4;
    return;
L_089963D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08996424;
      }
      goto L_089963DC;
    }
L_089963DC:
    aot_gpr[31] = (0x089963E4u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x089963E4u) goto L_089963E4;
    return;
L_089963E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08996424;
      }
      goto L_089963EC;
    }
L_089963EC:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089963F8u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 10u, 0x08995068u>(ctx, &aot_mem) && ctx.pc == 0x089963F8u) goto L_089963F8;
    return;
L_089963F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08996420;
      }
      goto L_08996400;
    }
L_08996400:
    aot_gpr[31] = (0x08996408u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08996408u) goto L_08996408;
    return;
L_08996408:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_0899644C;
      }
      goto L_08996410;
    }
L_08996410:
    aot_gpr[3] = ((aot_gpr[3] & ~0x1FFFFFFFu) | ((0u & 0x1FFFFFFFu) << 0u));
    aot_gpr[2] = (32768u << 16u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_08996468;
      }
      goto L_08996420;
    }
L_08996420:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08996424;
L_08996424:
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
L_0899644C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08996460u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 35u, 0x089951E8u>(ctx, &aot_mem) && ctx.pc == 0x08996460u) goto L_08996460;
    return;
L_08996460:
    aot_gpr[20] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    goto L_08996468;
L_08996468:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899647Cu);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 95u, 0x08999A18u>(ctx, &aot_mem) && ctx.pc == 0x0899647Cu) goto L_0899647C;
    return;
L_0899647C:
    if (aot_gpr[20] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
        goto L_089964B0;
    }
    goto L_08996484;
L_08996484:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08996488;
L_08996488:
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
L_089964B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089964BCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089964BCu) goto L_089964BC;
    return;
L_089964BC:
    aot_gpr[19] = (aot_gpr[20] + 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    aot_gpr[19] = ((aot_gpr[19] & ~0x1FFFFFFFu) | ((0u & 0x1FFFFFFFu) << 0u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[19]);
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08996484;
      }
      goto L_089964D4;
    }
L_089964D4:
    aot_gpr[31] = (0x089964DCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 110u, 0x08999C08u>(ctx, &aot_mem) && ctx.pc == 0x089964DCu) goto L_089964DC;
    return;
L_089964DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089964ECu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089964ECu) goto L_089964EC;
    return;
L_089964EC:
    aot_gpr[2] = ((aot_gpr[2] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    aot_gpr[2] = (aot_gpr[19] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[20] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08996424;
      }
      goto L_089964FC;
    }
L_089964FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08996488;
L_08996504:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[31]);
    aot_gpr[31] = (0x08996538u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 170u, 0x08995B58u>(ctx, &aot_mem) && ctx.pc == 0x08996538u) goto L_08996538;
    return;
L_08996538:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08996550u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    goto L_0899637C;
L_08996550:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899656C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x08996584u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x08996584u) goto L_08996584;
    return;
L_08996584:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08996594u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 10u, 0x08995068u>(ctx, &aot_mem) && ctx.pc == 0x08996594u) goto L_08996594;
    return;
L_08996594:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089965C4;
      }
      goto L_089965A4;
    }
L_089965A4:
    aot_gpr[31] = (0x089965ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 18u, 0x089950A8u>(ctx, &aot_mem) && ctx.pc == 0x089965ACu) goto L_089965AC;
    return;
L_089965AC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 199u, 0x08994FA4u>(ctx, &aot_mem); return;
L_089965C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089965D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089965E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x089965E8u) goto L_089965E8;
    return;
L_089965E8:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08996610;
      }
      goto L_089965F4;
    }
L_089965F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089966C8;
L_089965FC:
    aot_gpr[31] = (0x08996604u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 18u, 0x089950A8u>(ctx, &aot_mem) && ctx.pc == 0x08996604u) goto L_08996604;
    return;
L_08996604:
    aot_gpr[31] = (0x0899660Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 199u, 0x08994FA4u>(ctx, &aot_mem) && ctx.pc == 0x0899660Cu) goto L_0899660C;
    return;
L_0899660C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08996610;
L_08996610:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089965FC;
      }
      goto L_0899661C;
    }
L_0899661C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08996634;
      }
      goto L_08996628;
    }
L_08996628:
    aot_gpr[31] = (0x08996630u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08996630u) goto L_08996630;
    return;
L_08996630:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08996634;
L_08996634:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08996658;
      }
      goto L_08996640;
    }
L_08996640:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899664Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x0899664Cu) goto L_0899664C;
    return;
L_0899664C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08996658;
L_08996658:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08996674;
      }
      goto L_08996664;
    }
L_08996664:
    aot_gpr[31] = (0x0899666Cu);
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x0899666Cu) goto L_0899666C;
    return;
L_0899666C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2216u << 16u);
    goto L_08996674;
L_08996674:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == aot_gpr[3]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
        goto L_089966EC;
    }
    goto L_08996684;
L_08996684:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == aot_gpr[3]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
        goto L_089966D4;
    }
    goto L_089966B4;
L_089966B4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089966C0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089966C0u) goto L_089966C0;
    return;
L_089966C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089966C4;
L_089966C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089966C8;
L_089966C8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089966D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089966E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089966E4u) goto L_089966E4;
    return;
L_089966E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089966C4;
L_089966EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08996684;
L_089966F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08996718;
L_08996718:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08996748;
      }
      goto L_08996720;
    }
L_08996720:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[2] ^ aot_gpr[17]);
    aot_gpr[2] = ((aot_gpr[2] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26176)));
      if (branch_taken) {
          goto L_08996758;
      }
      goto L_08996738;
    }
L_08996738:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08996718;
      }
      goto L_08996748;
    }
L_08996748:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08996758:
    aot_gpr[31] = (0x08996760u);
    // nop
    goto L_089965D8;
L_08996760:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08996718;
L_0899676C:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(15716)));
    aot_gpr[4] = (861u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] | 8997u);
      if (branch_taken) {
          goto L_08996788;
      }
      goto L_08996780;
    }
L_08996780:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08996788:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(15716), static_cast<std::uint8_t>(aot_gpr[2]));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 55u, 0x08990534u>(ctx, &aot_mem); return;
L_08996794:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089967B0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    goto L_0899676C;
L_089967B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 104u, 0x08999B50u>(ctx, &aot_mem); return;
L_089967CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_0899688C;
      }
      goto L_089967E4;
    }
L_089967E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0899689C;
      }
      goto L_089967F0;
    }
L_089967F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089968A0;
    }
    goto L_089967FC;
L_089967FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089968A0;
    }
    goto L_08996808;
L_08996808:
    aot_gpr[31] = (0x08996810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 181u, 0x08994CD8u>(ctx, &aot_mem) && ctx.pc == 0x08996810u) goto L_08996810;
    return;
L_08996810:
    aot_gpr[31] = (0x08996818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 196u, 0x0899785Cu>(ctx, &aot_mem) && ctx.pc == 0x08996818u) goto L_08996818;
    return;
L_08996818:
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(156), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(164), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(14476)));
        goto L_089968AC;
    }
    goto L_0899684C;
L_0899684C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(14476)));
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    aot_gpr[7] = (aot_gpr[2] + static_cast<std::uint32_t>(168));
    goto L_0899685C;
L_0899685C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899685C;
      }
      goto L_08996888;
    }
L_08996888:
    aot_gpr[2] = (0u + 0u);
    goto L_0899688C;
L_0899688C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899689C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089968A0;
L_089968A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089968AC:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(232));
    aot_gpr[31] = (0x089968B8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(168));
    goto L_08996794;
L_089968B8:
    aot_gpr[2] = (0u + 0u);
    goto L_0899688C;
L_089968C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089968E4u);
    aot_gpr[16] = (0u + 0u);
    goto L_0899676C;
L_089968E4:
    aot_gpr[31] = (0x089968ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089968ECu) goto L_089968EC;
    return;
L_089968EC:
    aot_gpr[3] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[18];
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089968E4;
      }
      goto L_089968FC;
    }
L_089968FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08996914:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(7), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(11), aot_gpr[10]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[11] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(15), aot_gpr[11]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[11]));
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[8] + 0u);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(7), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(11), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(15), aot_gpr[11]);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[11]);
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[9]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[7]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[9]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[8]));
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(7), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(11), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(15), aot_gpr[9]);
    aot_gpr[31] = (0x089969D0u);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 30u, 0x08995180u>(ctx, &aot_mem) && ctx.pc == 0x089969D0u) goto L_089969D0;
    return;
L_089969D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089969E0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 30u, 0x08995180u>(ctx, &aot_mem) && ctx.pc == 0x089969E0u) goto L_089969E0;
    return;
L_089969E0:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089969F0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 30u, 0x08995180u>(ctx, &aot_mem) && ctx.pc == 0x089969F0u) goto L_089969F0;
    return;
L_089969F0:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08996A00u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 30u, 0x08995180u>(ctx, &aot_mem) && ctx.pc == 0x08996A00u) goto L_08996A00;
    return;
L_08996A00:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 30u, 0x08995180u>(ctx, &aot_mem); return;
L_08996A28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-304));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[17] = (24576u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[31]);
      if (branch_taken) {
          goto L_08996A94;
      }
      goto L_08996A5C;
    }
L_08996A5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08996A68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08996A68u) goto L_08996A68;
    return;
L_08996A68:
    aot_gpr[2] = ((aot_gpr[2] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (24576u << 16u);
    aot_gpr[17] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08996A84u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 31u, 0x08999250u>(ctx, &aot_mem) && ctx.pc == 0x08996A84u) goto L_08996A84;
    return;
L_08996A84:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08996A94u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 38u, 0x08999350u>(ctx, &aot_mem) && ctx.pc == 0x08996A94u) goto L_08996A94;
    return;
L_08996A94:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08996AB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[17] = (24576u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
      if (branch_taken) {
          goto L_08996B20;
      }
      goto L_08996AE8;
    }
L_08996AE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08996AF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08996AF4u) goto L_08996AF4;
    return;
L_08996AF4:
    aot_gpr[2] = ((aot_gpr[2] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (24576u << 16u);
    aot_gpr[17] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08996B10u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 9u, 0x0899D854u>(ctx, &aot_mem) && ctx.pc == 0x08996B10u) goto L_08996B10;
    return;
L_08996B10:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08996B20u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 12u, 0x0899D8D0u>(ctx, &aot_mem) && ctx.pc == 0x08996B20u) goto L_08996B20;
    return;
L_08996B20:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08996BD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[17] = (24576u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
      if (branch_taken) {
          goto L_08996C40;
      }
      goto L_08996C04;
    }
L_08996C04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08996C10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08996C10u) goto L_08996C10;
    return;
L_08996C10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = ((aot_gpr[2] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    aot_gpr[3] = (24576u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08996C30u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 9u, 0x0899D854u>(ctx, &aot_mem) && ctx.pc == 0x08996C30u) goto L_08996C30;
    return;
L_08996C30:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08996C40u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 12u, 0x0899D8D0u>(ctx, &aot_mem) && ctx.pc == 0x08996C40u) goto L_08996C40;
    return;
L_08996C40:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08996CE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x08996D10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 170u, 0x08995B58u>(ctx, &aot_mem) && ctx.pc == 0x08996D10u) goto L_08996D10;
    return;
L_08996D10:
    aot_gpr[31] = (0x08996D18u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x08996D18u) goto L_08996D18;
    return;
L_08996D18:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_08996D5C;
      }
      goto L_08996D20;
    }
L_08996D20:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (32768u << 16u);
      if (branch_taken) {
          goto L_08996D5C;
      }
      goto L_08996D30;
    }
L_08996D30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08996D3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08996D3Cu) goto L_08996D3C;
    return;
L_08996D3C:
    aot_gpr[2] = ((aot_gpr[2] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    aot_gpr[3] = (32768u << 16u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08996D5Cu);
    aot_gpr[16] = (aot_gpr[2] | aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 86u, 0x089998ECu>(ctx, &aot_mem) && ctx.pc == 0x08996D5Cu) goto L_08996D5C;
    return;
L_08996D5C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08996D7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-448));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(428), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(412), aot_gpr[19]);
    aot_gpr[31] = (0x08996DB4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x08996DB4u) goto L_08996DB4;
    return;
L_08996DB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08996F78;
      }
      goto L_08996DBC;
    }
L_08996DBC:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x08996DC8u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 10u, 0x08995068u>(ctx, &aot_mem) && ctx.pc == 0x08996DC8u) goto L_08996DC8;
    return;
L_08996DC8:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08996E9C;
      }
      goto L_08996DD0;
    }
L_08996DD0:
    aot_gpr[22] = (0u + 0u);
    goto L_08996DD4;
L_08996DD4:
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (0u + 0u);
    goto L_08996DDC;
L_08996DDC:
    aot_gpr[2] = (0u | 65534u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 1u, 0x08997000u>(ctx, &aot_mem); return;
      }
      goto L_08996DE8;
    }
L_08996DE8:
    aot_gpr[2] = (0u | 65533u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 7u, 0x0899703Cu>(ctx, &aot_mem); return;
      }
      goto L_08996DF4;
    }
L_08996DF4:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08996E0C;
      }
      goto L_08996DFC;
    }
L_08996DFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    aot_gpr[2] = (aot_gpr[16] ^ 65535u);
      if (branch_taken) {
          goto L_08996E1C;
      }
      goto L_08996E08;
    }
L_08996E08:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_08996E0C;
L_08996E0C:
    aot_gpr[31] = (0x08996E14u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 10u, 0x08995068u>(ctx, &aot_mem) && ctx.pc == 0x08996E14u) goto L_08996E14;
    return;
L_08996E14:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[16] ^ 65535u);
    goto L_08996E1C;
L_08996E1C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[19] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08996EE8;
      }
      goto L_08996E24;
    }
L_08996E24:
    aot_gpr[31] = (0x08996E2Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08996E2Cu) goto L_08996E2C;
    return;
L_08996E2C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (24576u << 16u);
      if (branch_taken) {
          goto L_08996EF0;
      }
      goto L_08996E34;
    }
L_08996E34:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (aot_gpr[22] | aot_gpr[2]);
      if (branch_taken) {
          goto L_08996E6C;
      }
      goto L_08996E3C;
    }
L_08996E3C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[23] == aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
        (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 18u, 0x0899709Cu>(ctx, &aot_mem); return;
    }
    goto L_08996E48;
L_08996E48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_08996E4C;
L_08996E4C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08996E5Cu);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 9u, 0x0899D854u>(ctx, &aot_mem) && ctx.pc == 0x08996E5Cu) goto L_08996E5C;
    return;
L_08996E5C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08996E6Cu);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 12u, 0x0899D8D0u>(ctx, &aot_mem) && ctx.pc == 0x08996E6Cu) goto L_08996E6C;
    return;
L_08996E6C:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    goto L_08996E70;
L_08996E70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(428)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08996E9C:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[22] = (0u + 0u);
      if (branch_taken) {
          goto L_08996DD4;
      }
      goto L_08996EA4;
    }
L_08996EA4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
        goto L_08996EB0;
    }
    goto L_08996EAC;
L_08996EAC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    goto L_08996EB0;
L_08996EB0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1024));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1536));
      if (branch_taken) {
          goto L_08996FE0;
      }
      goto L_08996EBC;
    }
L_08996EBC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996FE0;
      }
      goto L_08996EC4;
    }
L_08996EC4:
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[22] = (0u + 0u);
      if (branch_taken) {
          goto L_08996DDC;
      }
      goto L_08996ED0;
    }
L_08996ED0:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08996EDCu);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 26u, 0x089950F8u>(ctx, &aot_mem) && ctx.pc == 0x08996EDCu) goto L_08996EDC;
    return;
L_08996EDC:
    aot_gpr[22] = (aot_gpr[2] + 0u);
    aot_gpr[22] = ((aot_gpr[22] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    goto L_08996DDC;
L_08996EE8:
    if (aot_gpr[19] == 0u) {
    aot_gpr[19] = (0u + 0u);
        goto L_08996F7C;
    }
    goto L_08996EF0;
L_08996EF0:
    aot_gpr[31] = (0x08996EF8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08996EF8u) goto L_08996EF8;
    return;
L_08996EF8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996FAC;
      }
      goto L_08996F00;
    }
L_08996F00:
    if (aot_gpr[18] == 0u) {
    aot_gpr[18] = (0u | 65535u);
        goto L_08996F3C;
    }
    goto L_08996F08;
L_08996F08:
    aot_gpr[31] = (0x08996F10u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x08996F10u) goto L_08996F10;
    return;
L_08996F10:
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (0u | 65535u);
        goto L_08996F3C;
    }
    goto L_08996F18;
L_08996F18:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (57344u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 4u, 0x08997018u>(ctx, &aot_mem); return;
      }
      goto L_08996F28;
    }
L_08996F28:
    aot_gpr[31] = (0x08996F30u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08996F30u) goto L_08996F30;
    return;
L_08996F30:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (57344u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 4u, 0x08997018u>(ctx, &aot_mem); return;
      }
      goto L_08996F38;
    }
L_08996F38:
    aot_gpr[18] = (0u | 65535u);
    goto L_08996F3C;
L_08996F3C:
    if (aot_gpr[16] == aot_gpr[18]) {
    aot_gpr[19] = (0u + 0u);
        goto L_08996F7C;
    }
    goto L_08996F44;
L_08996F44:
    aot_gpr[31] = (0x08996F4Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x08996F4Cu) goto L_08996F4C;
    return;
L_08996F4C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (0u + 0u);
        goto L_08996F7C;
    }
    goto L_08996F54;
L_08996F54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[2] = (16384u << 16u);
      if (branch_taken) {
          goto L_08996F78;
      }
      goto L_08996F60;
    }
L_08996F60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = ((aot_gpr[4] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[4] = (aot_gpr[29] + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 8u, 0x08997040u>(ctx, &aot_mem); return;
    }
    goto L_08996F70;
L_08996F70:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 8u, 0x08997040u>(ctx, &aot_mem); return;
      }
      goto L_08996F78;
    }
L_08996F78:
    aot_gpr[19] = (0u + 0u);
    goto L_08996F7C;
L_08996F7C:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(428)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08996FAC:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[2] = (8192u << 16u);
      if (branch_taken) {
          goto L_08996FC4;
      }
      goto L_08996FB4;
    }
L_08996FB4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = ((aot_gpr[2] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (8192u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 14u, 0x0899707Cu>(ctx, &aot_mem); return;
      }
      goto L_08996FC4;
    }
L_08996FC4:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (aot_gpr[22] | aot_gpr[2]);
      if (branch_taken) {
          goto L_08996E6C;
      }
      goto L_08996FCC;
    }
L_08996FCC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[23] == aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
        (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 18u, 0x0899709Cu>(ctx, &aot_mem); return;
    }
    goto L_08996FD8;
L_08996FD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    goto L_08996E4C;
L_08996FE0:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08996FECu);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 6u, 0x0899D7F4u>(ctx, &aot_mem) && ctx.pc == 0x08996FECu) goto L_08996FEC;
    return;
L_08996FEC:
    aot_gpr[22] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 65534u);
    aot_gpr[22] = ((aot_gpr[22] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(1024));
      if (branch_taken) {
          goto L_08996DE8;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 1u, 0x08997000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0402(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0402_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_402(Runtime &runtime) {
    runtime.register_generated_unit(402u, 0x08996000u, 4096u, &recomp_unit_0402, &recomp_unit_0402_entry);
    runtime.register_function(0x08996000u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996008u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996014u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899601Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996024u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899602Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899604Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996054u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996060u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899608Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996094u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089960A0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089960A8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089960BCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089960C4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089960CCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089960D4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996100u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996108u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996110u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996118u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996120u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996128u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996134u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899613Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996144u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899614Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996154u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899615Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996164u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996190u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089961A0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089961A8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089961D0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089961E0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089961E8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089961F0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996204u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899620Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996230u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996238u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996240u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996248u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996250u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996258u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996260u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996264u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899627Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899629Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089962A4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089962ACu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089962B4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089962BCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089962D0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089962E4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089962F0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996304u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899630Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996314u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996324u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996330u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899633Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996358u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996360u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996364u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996370u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899637Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089963B4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089963BCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089963C4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089963CCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089963D4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089963DCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089963E4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089963ECu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089963F8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996400u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996408u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996410u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996420u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996424u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899644Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996460u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996468u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899647Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996484u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996488u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089964B0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089964BCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089964D4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089964DCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089964ECu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089964FCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996504u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996538u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996550u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899656Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996584u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996594u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089965A4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089965ACu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089965C4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089965D8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089965E8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089965F4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089965FCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996604u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899660Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996610u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899661Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996628u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996630u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996634u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996640u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899664Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996658u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996664u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899666Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996674u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996684u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089966B4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089966C0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089966C4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089966C8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089966D4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089966E4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089966ECu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089966F8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996718u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996720u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996738u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996748u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996758u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996760u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899676Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996780u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996788u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996794u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089967B0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089967CCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089967E4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089967F0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089967FCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996808u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996810u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996818u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899684Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899685Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996888u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899688Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x0899689Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089968A0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089968ACu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089968B8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089968C0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089968E4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089968ECu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089968FCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996914u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089969D0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089969E0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x089969F0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996A00u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996A28u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996A5Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996A68u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996A84u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996A94u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996AB4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996AE8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996AF4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996B10u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996B20u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996BD0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996C04u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996C10u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996C30u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996C40u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996CE0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996D10u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996D18u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996D20u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996D30u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996D3Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996D5Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996D7Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996DB4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996DBCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996DC8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996DD0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996DD4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996DDCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996DE8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996DF4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996DFCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E08u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E0Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E14u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E1Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E24u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E2Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E34u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E3Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E48u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E4Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E5Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E6Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E70u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996E9Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996EA4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996EACu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996EB0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996EBCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996EC4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996ED0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996EDCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996EE8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996EF0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996EF8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F00u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F08u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F10u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F18u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F28u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F30u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F38u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F3Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F44u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F4Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F54u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F60u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F70u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F78u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996F7Cu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996FACu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996FB4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996FC4u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996FCCu, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996FD8u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996FE0u, &recomp_unit_0402, "recomp_unit_0402");
    runtime.register_function(0x08996FECu, &recomp_unit_0402, "recomp_unit_0402");
}
} // namespace psprecomp
