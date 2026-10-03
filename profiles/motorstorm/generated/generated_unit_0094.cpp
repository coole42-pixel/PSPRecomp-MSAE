#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0094[1020] = {
    1, 0, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 24, 0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0,
    0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0,
    0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 61, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0,
    94, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 107,
    0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 117, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0,
    140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 147, 0, 148, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 161, 0, 162, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0,
    0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0,
    0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0,
    0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 200, 201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 220,
};
void recomp_unit_0094_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08862004u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0094[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08862004;
    case 2u: goto L_08862010;
    case 3u: goto L_08862018;
    case 4u: goto L_08862020;
    case 5u: goto L_0886202C;
    case 6u: goto L_0886204C;
    case 7u: goto L_08862058;
    case 8u: goto L_08862060;
    case 9u: goto L_08862068;
    case 10u: goto L_08862074;
    case 11u: goto L_08862094;
    case 12u: goto L_088620A0;
    case 13u: goto L_088620A8;
    case 14u: goto L_088620B0;
    case 15u: goto L_088620BC;
    case 16u: goto L_088620DC;
    case 17u: goto L_088620E8;
    case 18u: goto L_088620F0;
    case 19u: goto L_088620F8;
    case 20u: goto L_08862104;
    case 21u: goto L_08862124;
    case 22u: goto L_0886212C;
    case 23u: goto L_08862134;
    case 24u: goto L_08862138;
    case 25u: goto L_08862144;
    case 26u: goto L_08862158;
    case 27u: goto L_08862160;
    case 28u: goto L_08862168;
    case 29u: goto L_08862170;
    case 30u: goto L_08862178;
    case 31u: goto L_08862180;
    case 32u: goto L_088621BC;
    case 33u: goto L_088621F8;
    case 34u: goto L_08862208;
    case 35u: goto L_08862210;
    case 36u: goto L_0886221C;
    case 37u: goto L_0886222C;
    case 38u: goto L_08862234;
    case 39u: goto L_08862240;
    case 40u: goto L_08862250;
    case 41u: goto L_08862258;
    case 42u: goto L_08862264;
    case 43u: goto L_08862274;
    case 44u: goto L_0886227C;
    case 45u: goto L_0886228C;
    case 46u: goto L_0886229C;
    case 47u: goto L_088622A8;
    case 48u: goto L_088622BC;
    case 49u: goto L_088622D4;
    case 50u: goto L_088622E8;
    case 51u: goto L_088622FC;
    case 52u: goto L_08862308;
    case 53u: goto L_08862314;
    case 54u: goto L_0886232C;
    case 55u: goto L_08862340;
    case 56u: goto L_0886234C;
    case 57u: goto L_0886236C;
    case 58u: goto L_08862380;
    case 59u: goto L_088623CC;
    case 60u: goto L_088623D8;
    case 61u: goto L_088623E0;
    case 62u: goto L_088623E4;
    case 63u: goto L_08862424;
    case 64u: goto L_08862430;
    case 65u: goto L_08862454;
    case 66u: goto L_08862460;
    case 67u: goto L_0886247C;
    case 68u: goto L_08862498;
    case 69u: goto L_088624B0;
    case 70u: goto L_088624BC;
    case 71u: goto L_088624CC;
    case 72u: goto L_088624E8;
    case 73u: goto L_088624F0;
    case 74u: goto L_08862510;
    case 75u: goto L_08862524;
    case 76u: goto L_08862534;
    case 77u: goto L_08862544;
    case 78u: goto L_08862554;
    case 79u: goto L_0886255C;
    case 80u: goto L_08862580;
    case 81u: goto L_0886258C;
    case 82u: goto L_08862594;
    case 83u: goto L_0886259C;
    case 84u: goto L_088625A4;
    case 85u: goto L_088625AC;
    case 86u: goto L_088625B8;
    case 87u: goto L_088625C0;
    case 88u: goto L_088625CC;
    case 89u: goto L_088625D4;
    case 90u: goto L_088625E0;
    case 91u: goto L_088625E8;
    case 92u: goto L_088625F0;
    case 93u: goto L_088625F8;
    case 94u: goto L_08862604;
    case 95u: goto L_0886260C;
    case 96u: goto L_08862618;
    case 97u: goto L_08862620;
    case 98u: goto L_08862628;
    case 99u: goto L_08862634;
    case 100u: goto L_0886263C;
    case 101u: goto L_08862648;
    case 102u: goto L_08862650;
    case 103u: goto L_08862658;
    case 104u: goto L_08862664;
    case 105u: goto L_0886266C;
    case 106u: goto L_08862674;
    case 107u: goto L_08862680;
    case 108u: goto L_08862688;
    case 109u: goto L_08862694;
    case 110u: goto L_088626CC;
    case 111u: goto L_088626D4;
    case 112u: goto L_088626DC;
    case 113u: goto L_0886270C;
    case 114u: goto L_0886272C;
    case 115u: goto L_08862734;
    case 116u: goto L_0886273C;
    case 117u: goto L_08862740;
    case 118u: goto L_08862748;
    case 119u: goto L_08862764;
    case 120u: goto L_08862774;
    case 121u: goto L_08862790;
    case 122u: goto L_088627A0;
    case 123u: goto L_088627BC;
    case 124u: goto L_088627CC;
    case 125u: goto L_088627E8;
    case 126u: goto L_088627F8;
    case 127u: goto L_08862814;
    case 128u: goto L_08862824;
    case 129u: goto L_08862840;
    case 130u: goto L_0886284C;
    case 131u: goto L_08862868;
    case 132u: goto L_08862878;
    case 133u: goto L_08862894;
    case 134u: goto L_088628A4;
    case 135u: goto L_088628AC;
    case 136u: goto L_088628CC;
    case 137u: goto L_088628D8;
    case 138u: goto L_088628F4;
    case 139u: goto L_088628FC;
    case 140u: goto L_08862904;
    case 141u: goto L_08862914;
    case 142u: goto L_08862930;
    case 143u: goto L_08862940;
    case 144u: goto L_08862960;
    case 145u: goto L_08862968;
    case 146u: goto L_08862970;
    case 147u: goto L_08862974;
    case 148u: goto L_0886297C;
    case 149u: goto L_08862998;
    case 150u: goto L_088629A8;
    case 151u: goto L_088629B8;
    case 152u: goto L_088629D4;
    case 153u: goto L_088629E4;
    case 154u: goto L_08862A00;
    case 155u: goto L_08862A10;
    case 156u: goto L_08862A2C;
    case 157u: goto L_08862A3C;
    case 158u: goto L_08862A5C;
    case 159u: goto L_08862A64;
    case 160u: goto L_08862A6C;
    case 161u: goto L_08862A70;
    case 162u: goto L_08862A78;
    case 163u: goto L_08862A94;
    case 164u: goto L_08862AA4;
    case 165u: goto L_08862AC4;
    case 166u: goto L_08862ACC;
    case 167u: goto L_08862AD4;
    case 168u: goto L_08862AD8;
    case 169u: goto L_08862AE0;
    case 170u: goto L_08862AFC;
    case 171u: goto L_08862B0C;
    case 172u: goto L_08862B28;
    case 173u: goto L_08862B3C;
    case 174u: goto L_08862B54;
    case 175u: goto L_08862B60;
    case 176u: goto L_08862B68;
    case 177u: goto L_08862B70;
    case 178u: goto L_08862B78;
    case 179u: goto L_08862B90;
    case 180u: goto L_08862B9C;
    case 181u: goto L_08862BA4;
    case 182u: goto L_08862BAC;
    case 183u: goto L_08862BB4;
    case 184u: goto L_08862BCC;
    case 185u: goto L_08862BD8;
    case 186u: goto L_08862BE0;
    case 187u: goto L_08862BE8;
    case 188u: goto L_08862BF0;
    case 189u: goto L_08862C0C;
    case 190u: goto L_08862C14;
    case 191u: goto L_08862C1C;
    case 192u: goto L_08862C24;
    case 193u: goto L_08862C54;
    case 194u: goto L_08862E70;
    case 195u: goto L_08862E7C;
    case 196u: goto L_08862E88;
    case 197u: goto L_08862E94;
    case 198u: goto L_08862EA4;
    case 199u: goto L_08862EAC;
    case 200u: goto L_08862EB4;
    case 201u: goto L_08862EB8;
    case 202u: goto L_08862EC0;
    case 203u: goto L_08862ED4;
    case 204u: goto L_08862EE8;
    case 205u: goto L_08862EF0;
    case 206u: goto L_08862EF8;
    case 207u: goto L_08862F00;
    case 208u: goto L_08862F0C;
    case 209u: goto L_08862F28;
    case 210u: goto L_08862F30;
    case 211u: goto L_08862F38;
    case 212u: goto L_08862F54;
    case 213u: goto L_08862F74;
    case 214u: goto L_08862F84;
    case 215u: goto L_08862F94;
    case 216u: goto L_08862F9C;
    case 217u: goto L_08862FBC;
    case 218u: goto L_08862FD0;
    case 219u: goto L_08862FE8;
    case 220u: goto L_08862FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08862004:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_08862020;
      }
      goto L_08862010;
    }
L_08862010:
    aot_gpr[31] = (0x08862018u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08862018u) goto L_08862018;
    return;
L_08862018:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    goto L_08862020;
L_08862020:
    aot_gpr[5] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(5280), aot_gpr[4]);
      if (branch_taken) {
          goto L_08862058;
      }
      goto L_0886202C;
    }
L_0886202C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0886204Cu);
    aot_gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886204Cu) goto L_0886204C;
    return;
L_0886204C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_08862068;
      }
      goto L_08862058;
    }
L_08862058:
    aot_gpr[31] = (0x08862060u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08862060u) goto L_08862060;
    return;
L_08862060:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    goto L_08862068;
L_08862068:
    aot_gpr[5] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(5284), aot_gpr[4]);
      if (branch_taken) {
          goto L_088620A0;
      }
      goto L_08862074;
    }
L_08862074:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08862094u);
    aot_gpr[6] = (0u | 68u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862094u) goto L_08862094;
    return;
L_08862094:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_088620B0;
      }
      goto L_088620A0;
    }
L_088620A0:
    aot_gpr[31] = (0x088620A8u);
    aot_gpr[4] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088620A8u) goto L_088620A8;
    return;
L_088620A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    goto L_088620B0;
L_088620B0:
    aot_gpr[5] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1900), aot_gpr[4]);
      if (branch_taken) {
          goto L_088620E8;
      }
      goto L_088620BC;
    }
L_088620BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088620DCu);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088620DCu) goto L_088620DC;
    return;
L_088620DC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_088620F8;
      }
      goto L_088620E8;
    }
L_088620E8:
    aot_gpr[31] = (0x088620F0u);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088620F0u) goto L_088620F0;
    return;
L_088620F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    goto L_088620F8;
L_088620F8:
    aot_gpr[5] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2092), aot_gpr[4]);
      if (branch_taken) {
          goto L_0886212C;
      }
      goto L_08862104;
    }
L_08862104:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08862124u);
    aot_gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862124u) goto L_08862124;
    return;
L_08862124:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08862138;
      }
      goto L_0886212C;
    }
L_0886212C:
    aot_gpr[31] = (0x08862134u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08862134u) goto L_08862134;
    return;
L_08862134:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_08862138;
L_08862138:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5276), aot_gpr[16]);
    aot_gpr[16] = (0u | 0u);
    goto L_08862144;
L_08862144:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08862144;
      }
      goto L_08862158;
    }
L_08862158:
    aot_gpr[31] = (0x08862160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0326_entry, 326u, 86u, 0x0894AAB4u>(ctx, &aot_mem) && ctx.pc == 0x08862160u) goto L_08862160;
    return;
L_08862160:
    aot_gpr[31] = (0x08862168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 77u, 0x088D37BCu>(ctx, &aot_mem) && ctx.pc == 0x08862168u) goto L_08862168;
    return;
L_08862168:
    aot_gpr[31] = (0x08862170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 110u, 0x0882F950u>(ctx, &aot_mem) && ctx.pc == 0x08862170u) goto L_08862170;
    return;
L_08862170:
    aot_gpr[31] = (0x08862178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 53u, 0x0882B954u>(ctx, &aot_mem) && ctx.pc == 0x08862178u) goto L_08862178;
    return;
L_08862178:
    aot_gpr[31] = (0x08862180u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5104)));
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 145u, 0x088CDB68u>(ctx, &aot_mem) && ctx.pc == 0x08862180u) goto L_08862180;
    return;
L_08862180:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3952), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7028), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088621BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[5] = (24948u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24932));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (28787u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28767));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (28261u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(19804));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (92u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29557));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
      if (branch_taken) {
          goto L_08862210;
      }
      goto L_088621F8;
    }
L_088621F8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08862208u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4432));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08862208u) goto L_08862208;
    return;
L_08862208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886228C;
      }
      goto L_08862210;
    }
L_08862210:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08862234;
      }
      goto L_0886221C;
    }
L_0886221C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0886222Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4440));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0886222Cu) goto L_0886222C;
    return;
L_0886222C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886228C;
      }
      goto L_08862234;
    }
L_08862234:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08862258;
      }
      goto L_08862240;
    }
L_08862240:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08862250u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4452));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08862250u) goto L_08862250;
    return;
L_08862250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886228C;
      }
      goto L_08862258;
    }
L_08862258:
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886227C;
      }
      goto L_08862264;
    }
L_08862264:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08862274u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4460));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08862274u) goto L_08862274;
    return;
L_08862274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886228C;
      }
      goto L_0886227C;
    }
L_0886227C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0886228Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4468));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0886228Cu) goto L_0886228C;
    return;
L_0886228C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0886229Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4476));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0886229Cu) goto L_0886229C;
    return;
L_0886229C:
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[31] = (0x088622A8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 130u, 0x0887789Cu>(ctx, &aot_mem) && ctx.pc == 0x088622A8u) goto L_088622A8;
    return;
L_088622A8:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7028), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088622BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088622D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x088622D4u) goto L_088622D4;
    return;
L_088622D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-7028), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088622E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088622FCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24616));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 128u, 0x088C48D0u>(ctx, &aot_mem) && ctx.pc == 0x088622FCu) goto L_088622FC;
    return;
L_088622FC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08862308u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24644));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 246u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08862308u) goto L_08862308;
    return;
L_08862308:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08862314u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24676));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 47u, 0x088C3348u>(ctx, &aot_mem) && ctx.pc == 0x08862314u) goto L_08862314;
    return;
L_08862314:
    aot_gpr[4] = (0u | 11u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24852), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886232C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08862340u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24644));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 246u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08862340u) goto L_08862340;
    return;
L_08862340:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0886234Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24676));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 47u, 0x088C3348u>(ctx, &aot_mem) && ctx.pc == 0x0886234Cu) goto L_0886234C;
    return;
L_0886234C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (aot_gpr[5] ^ 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (0u | 12u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 13u);
        goto L_0886236C;
    }
    goto L_0886236C;
L_0886236C:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24852), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862380:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23220)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088623CCu);
    aot_gpr[6] = (0u | 32u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088623CCu) goto L_088623CC;
    return;
L_088623CC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          goto L_088623E4;
      }
      goto L_088623D8;
    }
L_088623D8:
    aot_gpr[31] = (0x088623E0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 238u, 0x088B7FB0u>(ctx, &aot_mem) && ctx.pc == 0x088623E0u) goto L_088623E0;
    return;
L_088623E0:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_088623E4;
L_088623E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(5288), aot_gpr[18]);
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5260)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(312)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(280)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(304)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08862430;
      }
      goto L_08862424;
    }
L_08862424:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_08862430;
L_08862430:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(288)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(312)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08862460;
      }
      goto L_08862454;
    }
L_08862454:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_08862460;
L_08862460:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(300)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5288)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[31] = (0x0886247Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 22u, 0x088B8230u>(ctx, &aot_mem) && ctx.pc == 0x0886247Cu) goto L_0886247C;
    return;
L_0886247C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862498:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088624B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5288)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 34u, 0x088B8374u>(ctx, &aot_mem) && ctx.pc == 0x088624B0u) goto L_088624B0;
    return;
L_088624B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5288)));
    aot_gpr[31] = (0x088624BCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 240u, 0x088B7FE8u>(ctx, &aot_mem) && ctx.pc == 0x088624BCu) goto L_088624BC;
    return;
L_088624BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088624CC:
    aot_gpr[11] = (2218u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08862554;
      }
      goto L_088624E8;
    }
L_088624E8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    goto L_088624F0;
L_088624F0:
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(1364)));
    aot_gpr[3] = (0u < aot_gpr[3] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[3] & 255u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08862524;
      }
      goto L_08862510;
    }
L_08862510:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(500), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(504), aot_gpr[5]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-7508)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08862544;
      }
      goto L_08862524;
    }
L_08862524:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08862544;
      }
      goto L_08862534;
    }
L_08862534:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(500), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(504), aot_gpr[5]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_08862544;
L_08862544:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[2] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_088624F0;
      }
      goto L_08862554;
    }
L_08862554:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886255C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-2072)));
      if (branch_taken) {
          goto L_08862688;
      }
      goto L_08862580;
    }
L_08862580:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088625C0;
      }
      goto L_0886258C;
    }
L_0886258C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088625C0;
      }
      goto L_08862594;
    }
L_08862594:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08862628;
      }
      goto L_0886259C;
    }
L_0886259C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08862628;
      }
      goto L_088625A4;
    }
L_088625A4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08862674;
      }
      goto L_088625AC;
    }
L_088625AC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x088625B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4492));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088625B8u) goto L_088625B8;
    return;
L_088625B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862688;
      }
      goto L_088625C0;
    }
L_088625C0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088625E8;
      }
      goto L_088625CC;
    }
L_088625CC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08862620;
      }
      goto L_088625D4;
    }
L_088625D4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x088625E0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4492));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088625E0u) goto L_088625E0;
    return;
L_088625E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862620;
      }
      goto L_088625E8;
    }
L_088625E8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886260C;
      }
      goto L_088625F0;
    }
L_088625F0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862620;
      }
      goto L_088625F8;
    }
L_088625F8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08862604u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4532));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08862604u) goto L_08862604;
    return;
L_08862604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862620;
      }
      goto L_0886260C;
    }
L_0886260C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08862618u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4572));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08862618u) goto L_08862618;
    return;
L_08862618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862620;
      }
      goto L_08862620;
    }
L_08862620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862688;
      }
      goto L_08862628;
    }
L_08862628:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08862650;
      }
      goto L_08862634;
    }
L_08862634:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0886266C;
      }
      goto L_0886263C;
    }
L_0886263C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08862648u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4612));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08862648u) goto L_08862648;
    return;
L_08862648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886266C;
      }
      goto L_08862650;
    }
L_08862650:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886266C;
      }
      goto L_08862658;
    }
L_08862658:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08862664u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4652));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08862664u) goto L_08862664;
    return;
L_08862664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886266C;
      }
      goto L_0886266C;
    }
L_0886266C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862688;
      }
      goto L_08862674;
    }
L_08862674:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08862680u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4692));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08862680u) goto L_08862680;
    return;
L_08862680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862688;
      }
      goto L_08862688;
    }
L_08862688:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862694:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x088626CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5104)));
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 151u, 0x088CDBF0u>(ctx, &aot_mem) && ctx.pc == 0x088626CCu) goto L_088626CC;
    return;
L_088626CC:
    aot_gpr[31] = (0x088626D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 70u, 0x0882BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x088626D4u) goto L_088626D4;
    return;
L_088626D4:
    aot_gpr[31] = (0x088626DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 112u, 0x0882FA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088626DCu) goto L_088626DC;
    return;
L_088626DC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5276)));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[23] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[30] = (2218u << 16u);
      if (branch_taken) {
          goto L_08862734;
      }
      goto L_0886270C;
    }
L_0886270C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0886272Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886272Cu) goto L_0886272C;
    return;
L_0886272C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5236)));
      if (branch_taken) {
          goto L_08862740;
      }
      goto L_08862734;
    }
L_08862734:
    aot_gpr[31] = (0x0886273Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0886273Cu) goto L_0886273C;
    return;
L_0886273C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5236)));
    goto L_08862740;
L_08862740:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862764;
      }
      goto L_08862748;
    }
L_08862748:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862764u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862764u) goto L_08862764;
    return;
L_08862764:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4024)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862790;
      }
      goto L_08862774;
    }
L_08862774:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862790u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862790u) goto L_08862790;
    return;
L_08862790:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5260)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088627BC;
      }
      goto L_088627A0;
    }
L_088627A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088627BCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088627BCu) goto L_088627BC;
    return;
L_088627BC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4020)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088627E8;
      }
      goto L_088627CC;
    }
L_088627CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088627E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088627E8u) goto L_088627E8;
    return;
L_088627E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862814;
      }
      goto L_088627F8;
    }
L_088627F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862814u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862814u) goto L_08862814;
    return;
L_08862814:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862840;
      }
      goto L_08862824;
    }
L_08862824:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862840u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862840u) goto L_08862840;
    return;
L_08862840:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5104)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862868;
      }
      goto L_0886284C;
    }
L_0886284C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08862868u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862868u) goto L_08862868;
    return;
L_08862868:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7520)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862894;
      }
      goto L_08862878;
    }
L_08862878:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862894u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862894u) goto L_08862894;
    return;
L_08862894:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8184));
      if (branch_taken) {
          goto L_08862904;
      }
      goto L_088628A4;
    }
L_088628A4:
    aot_gpr[31] = (0x088628ACu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 62u, 0x089356ACu>(ctx, &aot_mem) && ctx.pc == 0x088628ACu) goto L_088628AC;
    return;
L_088628AC:
    aot_gpr[7] = (2195u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8000));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 92u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088628CCu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(22188));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 105u, 0x08A2D81Cu>(ctx, &aot_mem) && ctx.pc == 0x088628CCu) goto L_088628CC;
    return;
L_088628CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088628FC;
      }
      goto L_088628D8;
    }
L_088628D8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088628F4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088628F4u) goto L_088628F4;
    return;
L_088628F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862904;
      }
      goto L_088628FC;
    }
L_088628FC:
    aot_gpr[31] = (0x08862904u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08862904u) goto L_08862904;
    return;
L_08862904:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7340)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862930;
      }
      goto L_08862914;
    }
L_08862914:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862930u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862930u) goto L_08862930;
    return;
L_08862930:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2096)));
      if (branch_taken) {
          goto L_08862968;
      }
      goto L_08862940;
    }
L_08862940:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08862960u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862960u) goto L_08862960;
    return;
L_08862960:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-4016)));
      if (branch_taken) {
          goto L_08862974;
      }
      goto L_08862968;
    }
L_08862968:
    aot_gpr[31] = (0x08862970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08862970u) goto L_08862970;
    return;
L_08862970:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-4016)));
    goto L_08862974;
L_08862974:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862998;
      }
      goto L_0886297C;
    }
L_0886297C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862998u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862998u) goto L_08862998;
    return;
L_08862998:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[31] = (0x088629A8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 100u, 0x0882C7D4u>(ctx, &aot_mem) && ctx.pc == 0x088629A8u) goto L_088629A8;
    return;
L_088629A8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5264)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088629D4;
      }
      goto L_088629B8;
    }
L_088629B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088629D4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088629D4u) goto L_088629D4;
    return;
L_088629D4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5244)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862A00;
      }
      goto L_088629E4;
    }
L_088629E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862A00u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862A00u) goto L_08862A00;
    return;
L_08862A00:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7512)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862A2C;
      }
      goto L_08862A10;
    }
L_08862A10:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862A2Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862A2Cu) goto L_08862A2C;
    return;
L_08862A2C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6936)));
      if (branch_taken) {
          goto L_08862A64;
      }
      goto L_08862A3C;
    }
L_08862A3C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08862A5Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862A5Cu) goto L_08862A5C;
    return;
L_08862A5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(5268)));
      if (branch_taken) {
          goto L_08862A70;
      }
      goto L_08862A64;
    }
L_08862A64:
    aot_gpr[31] = (0x08862A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08862A6Cu) goto L_08862A6C;
    return;
L_08862A6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(5268)));
    goto L_08862A70;
L_08862A70:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862A94;
      }
      goto L_08862A78;
    }
L_08862A78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862A94u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862A94u) goto L_08862A94;
    return;
L_08862A94:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7476)));
      if (branch_taken) {
          goto L_08862ACC;
      }
      goto L_08862AA4;
    }
L_08862AA4:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08862AC4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862AC4u) goto L_08862AC4;
    return;
L_08862AC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(5240)));
      if (branch_taken) {
          goto L_08862AD8;
      }
      goto L_08862ACC;
    }
L_08862ACC:
    aot_gpr[31] = (0x08862AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08862AD4u) goto L_08862AD4;
    return;
L_08862AD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(5240)));
    goto L_08862AD8;
L_08862AD8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862AFC;
      }
      goto L_08862AE0;
    }
L_08862AE0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862AFCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862AFCu) goto L_08862AFC;
    return;
L_08862AFC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5272)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862B28;
      }
      goto L_08862B0C;
    }
L_08862B0C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862B28u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862B28u) goto L_08862B28;
    return;
L_08862B28:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5280)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862B60;
      }
      goto L_08862B3C;
    }
L_08862B3C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862B54u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862B54u) goto L_08862B54;
    return;
L_08862B54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(5284)));
      if (branch_taken) {
          goto L_08862B70;
      }
      goto L_08862B60;
    }
L_08862B60:
    aot_gpr[31] = (0x08862B68u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08862B68u) goto L_08862B68;
    return;
L_08862B68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(5284)));
    goto L_08862B70;
L_08862B70:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862B9C;
      }
      goto L_08862B78;
    }
L_08862B78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862B90u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862B90u) goto L_08862B90;
    return;
L_08862B90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1900)));
      if (branch_taken) {
          goto L_08862BAC;
      }
      goto L_08862B9C;
    }
L_08862B9C:
    aot_gpr[31] = (0x08862BA4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08862BA4u) goto L_08862BA4;
    return;
L_08862BA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1900)));
    goto L_08862BAC;
L_08862BAC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862BD8;
      }
      goto L_08862BB4;
    }
L_08862BB4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862BCCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862BCCu) goto L_08862BCC;
    return;
L_08862BCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2092)));
      if (branch_taken) {
          goto L_08862BE8;
      }
      goto L_08862BD8;
    }
L_08862BD8:
    aot_gpr[31] = (0x08862BE0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08862BE0u) goto L_08862BE0;
    return;
L_08862BE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2092)));
    goto L_08862BE8;
L_08862BE8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862C14;
      }
      goto L_08862BF0;
    }
L_08862BF0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08862C0Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08862C0Cu) goto L_08862C0C;
    return;
L_08862C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862C1C;
      }
      goto L_08862C14;
    }
L_08862C14:
    aot_gpr[31] = (0x08862C1Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08862C1Cu) goto L_08862C1C;
    return;
L_08862C1C:
    aot_gpr[31] = (0x08862C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0326_entry, 326u, 94u, 0x0894AB5Cu>(ctx, &aot_mem) && ctx.pc == 0x08862C24u) goto L_08862C24;
    return;
L_08862C24:
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
L_08862C54:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(24452));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24448), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(24452), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2752));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24464));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24464), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2704));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24476));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24476), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2656));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24488));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24488), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2608));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24500));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24500), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2464));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24516));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24516), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2560));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24528));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24528), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2512));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24540));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24540), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1984));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24576));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24576), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2416));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24588));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24588), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2320));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24600));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24600), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2080));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24616));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24616), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2128));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24644));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24644), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2368));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24676));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24676), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2272));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24692));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24692), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2224));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24712));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24712), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2176));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24728));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24728), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2032));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24744));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24744), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1936));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862E70:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5304));
    aot_gpr[6] = (0u | 0u);
    goto L_08862E7C;
L_08862E7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862E94;
      }
      goto L_08862E88;
    }
L_08862E88:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08862EAC;
      }
      goto L_08862E94;
    }
L_08862E94:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08862E7C;
      }
      goto L_08862EA4;
    }
L_08862EA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862EB4;
      }
      goto L_08862EAC;
    }
L_08862EAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862EB8;
      }
      goto L_08862EB4;
    }
L_08862EB4:
    aot_gpr[2] = (0u | 0u);
    goto L_08862EB8;
L_08862EB8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862EC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_08862F00;
      }
      goto L_08862ED4;
    }
L_08862ED4:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08862EF8;
      }
      goto L_08862EE8;
    }
L_08862EE8:
    aot_gpr[31] = (0x08862EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 43u, 0x0892A384u>(ctx, &aot_mem) && ctx.pc == 0x08862EF0u) goto L_08862EF0;
    return;
L_08862EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862F00;
      }
      goto L_08862EF8;
    }
L_08862EF8:
    aot_gpr[31] = (0x08862F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 38u, 0x0892A318u>(ctx, &aot_mem) && ctx.pc == 0x08862F00u) goto L_08862F00;
    return;
L_08862F00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862F0C:
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24865), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5360)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862F30;
      }
      goto L_08862F28;
    }
L_08862F28:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_08862F30;
L_08862F30:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862F38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(5356)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862FBC;
      }
      goto L_08862F54;
    }
L_08862F54:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24880)));
    aot_gpr[5] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08862F94;
      }
      goto L_08862F74;
    }
L_08862F74:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08862F84u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08862EC0;
L_08862F84:
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24880), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_08862F94;
L_08862F94:
    aot_gpr[31] = (0x08862F9Cu);
    aot_gpr[4] = (0u | 0u);
    goto L_08862F0C;
L_08862F9C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (16000u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7908)));
    aot_gpr[31] = (0x08862FBCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 5u, 0x08866050u>(ctx, &aot_mem) && ctx.pc == 0x08862FBCu) goto L_08862FBC;
    return;
L_08862FBC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5356), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862FD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 2u, 0x08863010u>(ctx, &aot_mem); return;
      }
      goto L_08862FE8;
    }
L_08862FE8:
    aot_gpr[31] = (0x08862FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 44u, 0x088643B4u>(ctx, &aot_mem) && ctx.pc == 0x08862FF0u) goto L_08862FF0;
    return;
L_08862FF0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5360)));
    aot_gpr[6] = (16076u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.pc = 0x08863000u; return;
}

void recomp_unit_0094(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0094_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_94(Runtime &runtime) {
    runtime.register_generated_unit(94u, 0x08862000u, 4096u, &recomp_unit_0094, &recomp_unit_0094_entry);
    runtime.register_function(0x08862004u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862010u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862018u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862020u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886202Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886204Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862058u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862060u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862068u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862074u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862094u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088620A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088620A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088620B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088620BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088620DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088620E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088620F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088620F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862104u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862124u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886212Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862134u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862138u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862144u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862158u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862160u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862168u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862170u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862178u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862180u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088621BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088621F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862208u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862210u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886221Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886222Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862234u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862240u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862250u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862258u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862264u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862274u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886227Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886228Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886229Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088622A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088622BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088622D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088622E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088622FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862308u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862314u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886232Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862340u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886234Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886236Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862380u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088623CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088623D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088623E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088623E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862424u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862430u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862454u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862460u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886247Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862498u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088624B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088624BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088624CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088624E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088624F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862510u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862524u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862534u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862544u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862554u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886255Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862580u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886258Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862594u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886259Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088625A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088625ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088625B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088625C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088625CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088625D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088625E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088625E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088625F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088625F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862604u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886260Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862618u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862620u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862628u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862634u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886263Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862648u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862650u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862658u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862664u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886266Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862674u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862680u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862688u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862694u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088626CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088626D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088626DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886270Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886272Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862734u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886273Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862740u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862748u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862764u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862774u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862790u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088627A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088627BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088627CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088627E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088627F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862814u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862824u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862840u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886284Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862868u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862878u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862894u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088628A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088628ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088628CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088628D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088628F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088628FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862904u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862914u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862930u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862940u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862960u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862968u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862970u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862974u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0886297Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862998u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088629A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088629B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088629D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x088629E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862A00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862A10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862A2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862A3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862A5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862A64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862A6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862A70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862A78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862A94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862AA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862AC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862ACCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862AD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862AD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862AE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862AFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862B0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862B28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862B3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862B54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862B60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862B68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862B70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862B78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862B90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862B9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862BA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862BACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862BB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862BCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862BD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862BE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862BE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862BF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862C0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862C14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862C1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862C24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862C54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862E70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862E7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862E88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862E94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862EA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862EACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862EB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862EB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862EC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862ED4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862EE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862EF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862EF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862F00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862F0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862F28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862F30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862F38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862F54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862F74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862F84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862F94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862F9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862FBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862FD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862FE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x08862FF0u, &recomp_unit_0094, "recomp_unit_0094");
}
} // namespace psprecomp
