#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0115[1013] = {
    1, 2, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 7, 8, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 13, 14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 21, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 30, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 38,
    39, 0, 40, 41, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 47, 48, 0, 49, 0, 0,
    50, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 57, 0, 58, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73,
    0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 89, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 0, 0, 0, 94, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0,
    0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105,
    106, 0, 107, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 111, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 119, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 123, 0, 124, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 128, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0,
    0, 134, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0,
    0, 0, 0, 140, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145,
    0, 0, 0, 0, 0, 146, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0,
    0, 151, 0, 0, 0, 0, 0, 152, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    156, 0, 0, 157, 0, 0, 0, 0, 0, 158, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 170, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 177, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 183, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190, 191, 0, 192, 0, 0, 0, 0, 0, 0, 193, 194, 0, 195, 0, 0, 196, 0, 0, 197,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 202, 0, 0, 203, 0, 0, 0, 204, 205, 0, 206, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 211, 0, 0, 212, 0, 0, 0, 213, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221,
};
void recomp_unit_0115_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08877000u;
        entry_id = (entry_delta < 4052u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0115[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08877000;
    case 2u: goto L_08877004;
    case 3u: goto L_0887700C;
    case 4u: goto L_08877020;
    case 5u: goto L_08877028;
    case 6u: goto L_08877038;
    case 7u: goto L_08877040;
    case 8u: goto L_08877044;
    case 9u: goto L_0887704C;
    case 10u: goto L_08877060;
    case 11u: goto L_08877068;
    case 12u: goto L_08877080;
    case 13u: goto L_08877094;
    case 14u: goto L_08877098;
    case 15u: goto L_088770A0;
    case 16u: goto L_088770A8;
    case 17u: goto L_088770DC;
    case 18u: goto L_08877148;
    case 19u: goto L_08877154;
    case 20u: goto L_0887715C;
    case 21u: goto L_0887716C;
    case 22u: goto L_08877170;
    case 23u: goto L_08877194;
    case 24u: goto L_08877198;
    case 25u: goto L_088771B4;
    case 26u: goto L_088771C0;
    case 27u: goto L_088771CC;
    case 28u: goto L_088771D8;
    case 29u: goto L_088771F8;
    case 30u: goto L_0887720C;
    case 31u: goto L_08877210;
    case 32u: goto L_08877218;
    case 33u: goto L_08877224;
    case 34u: goto L_08877238;
    case 35u: goto L_08877244;
    case 36u: goto L_08877268;
    case 37u: goto L_08877270;
    case 38u: goto L_0887727C;
    case 39u: goto L_08877280;
    case 40u: goto L_08877288;
    case 41u: goto L_0887728C;
    case 42u: goto L_08877298;
    case 43u: goto L_088772A4;
    case 44u: goto L_088772AC;
    case 45u: goto L_088772D4;
    case 46u: goto L_088772E0;
    case 47u: goto L_088772E8;
    case 48u: goto L_088772EC;
    case 49u: goto L_088772F4;
    case 50u: goto L_08877300;
    case 51u: goto L_0887730C;
    case 52u: goto L_08877318;
    case 53u: goto L_08877320;
    case 54u: goto L_08877348;
    case 55u: goto L_08877354;
    case 56u: goto L_08877360;
    case 57u: goto L_08877364;
    case 58u: goto L_0887736C;
    case 59u: goto L_08877370;
    case 60u: goto L_088773A4;
    case 61u: goto L_088773BC;
    case 62u: goto L_088773CC;
    case 63u: goto L_088773D8;
    case 64u: goto L_088773E0;
    case 65u: goto L_088773FC;
    case 66u: goto L_08877408;
    case 67u: goto L_08877414;
    case 68u: goto L_0887741C;
    case 69u: goto L_08877430;
    case 70u: goto L_08877444;
    case 71u: goto L_08877460;
    case 72u: goto L_0887746C;
    case 73u: goto L_0887747C;
    case 74u: goto L_08877488;
    case 75u: goto L_08877490;
    case 76u: goto L_0887749C;
    case 77u: goto L_088774C0;
    case 78u: goto L_088774CC;
    case 79u: goto L_088774DC;
    case 80u: goto L_08877524;
    case 81u: goto L_08877534;
    case 82u: goto L_08877544;
    case 83u: goto L_08877550;
    case 84u: goto L_0887755C;
    case 85u: goto L_08877588;
    case 86u: goto L_0887758C;
    case 87u: goto L_08877594;
    case 88u: goto L_088775BC;
    case 89u: goto L_088775C0;
    case 90u: goto L_088775C8;
    case 91u: goto L_088775D4;
    case 92u: goto L_088775DC;
    case 93u: goto L_088775E8;
    case 94u: goto L_088775F8;
    case 95u: goto L_088775FC;
    case 96u: goto L_08877624;
    case 97u: goto L_08877664;
    case 98u: goto L_08877674;
    case 99u: goto L_08877684;
    case 100u: goto L_08877690;
    case 101u: goto L_0887769C;
    case 102u: goto L_088776C8;
    case 103u: goto L_088776CC;
    case 104u: goto L_088776D4;
    case 105u: goto L_088776FC;
    case 106u: goto L_08877700;
    case 107u: goto L_08877708;
    case 108u: goto L_08877714;
    case 109u: goto L_0887771C;
    case 110u: goto L_08877728;
    case 111u: goto L_08877738;
    case 112u: goto L_0887773C;
    case 113u: goto L_08877760;
    case 114u: goto L_088777A0;
    case 115u: goto L_088777B0;
    case 116u: goto L_088777C0;
    case 117u: goto L_088777CC;
    case 118u: goto L_088777D8;
    case 119u: goto L_08877804;
    case 120u: goto L_08877808;
    case 121u: goto L_08877810;
    case 122u: goto L_08877838;
    case 123u: goto L_0887783C;
    case 124u: goto L_08877844;
    case 125u: goto L_08877850;
    case 126u: goto L_08877858;
    case 127u: goto L_08877864;
    case 128u: goto L_08877874;
    case 129u: goto L_08877878;
    case 130u: goto L_0887789C;
    case 131u: goto L_088778D8;
    case 132u: goto L_088778E4;
    case 133u: goto L_088778F0;
    case 134u: goto L_08877904;
    case 135u: goto L_08877908;
    case 136u: goto L_08877920;
    case 137u: goto L_0887795C;
    case 138u: goto L_08877968;
    case 139u: goto L_08877974;
    case 140u: goto L_0887798C;
    case 141u: goto L_08877990;
    case 142u: goto L_088779A8;
    case 143u: goto L_088779E4;
    case 144u: goto L_088779F0;
    case 145u: goto L_088779FC;
    case 146u: goto L_08877A14;
    case 147u: goto L_08877A18;
    case 148u: goto L_08877A30;
    case 149u: goto L_08877A6C;
    case 150u: goto L_08877A78;
    case 151u: goto L_08877A84;
    case 152u: goto L_08877A9C;
    case 153u: goto L_08877AA0;
    case 154u: goto L_08877AB8;
    case 155u: goto L_08877AF4;
    case 156u: goto L_08877B00;
    case 157u: goto L_08877B0C;
    case 158u: goto L_08877B24;
    case 159u: goto L_08877B28;
    case 160u: goto L_08877B40;
    case 161u: goto L_08877B8C;
    case 162u: goto L_08877B98;
    case 163u: goto L_08877BA4;
    case 164u: goto L_08877BC4;
    case 165u: goto L_08877BC8;
    case 166u: goto L_08877BE8;
    case 167u: goto L_08877C24;
    case 168u: goto L_08877C30;
    case 169u: goto L_08877C3C;
    case 170u: goto L_08877C54;
    case 171u: goto L_08877C58;
    case 172u: goto L_08877C70;
    case 173u: goto L_08877CAC;
    case 174u: goto L_08877CB8;
    case 175u: goto L_08877CC4;
    case 176u: goto L_08877CDC;
    case 177u: goto L_08877CE0;
    case 178u: goto L_08877CF8;
    case 179u: goto L_08877D34;
    case 180u: goto L_08877D40;
    case 181u: goto L_08877D4C;
    case 182u: goto L_08877D64;
    case 183u: goto L_08877D68;
    case 184u: goto L_08877D80;
    case 185u: goto L_08877DBC;
    case 186u: goto L_08877DD8;
    case 187u: goto L_08877DE4;
    case 188u: goto L_08877E1C;
    case 189u: goto L_08877E28;
    case 190u: goto L_08877E30;
    case 191u: goto L_08877E34;
    case 192u: goto L_08877E3C;
    case 193u: goto L_08877E58;
    case 194u: goto L_08877E5C;
    case 195u: goto L_08877E64;
    case 196u: goto L_08877E70;
    case 197u: goto L_08877E7C;
    case 198u: goto L_08877E90;
    case 199u: goto L_08877EB0;
    case 200u: goto L_08877EB8;
    case 201u: goto L_08877EC0;
    case 202u: goto L_08877EC4;
    case 203u: goto L_08877ED0;
    case 204u: goto L_08877EE0;
    case 205u: goto L_08877EE4;
    case 206u: goto L_08877EEC;
    case 207u: goto L_08877EF8;
    case 208u: goto L_08877F18;
    case 209u: goto L_08877F20;
    case 210u: goto L_08877F28;
    case 211u: goto L_08877F2C;
    case 212u: goto L_08877F38;
    case 213u: goto L_08877F48;
    case 214u: goto L_08877F4C;
    case 215u: goto L_08877F54;
    case 216u: goto L_08877F7C;
    case 217u: goto L_08877F98;
    case 218u: goto L_08877FA4;
    case 219u: goto L_08877FB4;
    case 220u: goto L_08877FC4;
    case 221u: goto L_08877FD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08877000:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), 0u);
    goto L_08877004;
L_08877004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877020;
      }
      goto L_0887700C;
    }
L_0887700C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7288));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08877020;
L_08877020:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088770A8;
      }
      goto L_08877028;
    }
L_08877028:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 2u);
        goto L_08877038;
    }
    goto L_08877038;
L_08877038:
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877044;
      }
      goto L_08877040;
    }
L_08877040:
    aot_gpr[4] = (aot_gpr[4] | 1u);
    goto L_08877044;
L_08877044:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877068;
      }
      goto L_0887704C;
    }
L_0887704C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08877060u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 2u, 0x08924030u>(ctx, &aot_mem) && ctx.pc == 0x08877060u) goto L_08877060;
    return;
L_08877060:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08877098;
      }
      goto L_08877068;
    }
L_08877068:
    aot_gpr[5] = (65535u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32767));
    aot_gpr[17] = (0u | 3u);
    aot_gpr[5] = (aot_gpr[22] & aot_gpr[5]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[17] = (0u | 2u);
        goto L_08877080;
    }
    goto L_08877080;
L_08877080:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08877094u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 226u, 0x08933DB4u>(ctx, &aot_mem) && ctx.pc == 0x08877094u) goto L_08877094;
    return;
L_08877094:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08877098;
L_08877098:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088770A8;
      }
      goto L_088770A0;
    }
L_088770A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088770A8;
L_088770A8:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088770DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[11] | 0u);
    aot_gpr[16] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[10] | 0u);
    aot_gpr[18] = (aot_gpr[9] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[21] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    aot_gpr[31] = (0x08877148u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 255u, 0x08876EA0u>(ctx, &aot_mem) && ctx.pc == 0x08877148u) goto L_08877148;
    return;
L_08877148:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08877198;
      }
      goto L_08877154;
    }
L_08877154:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877198;
      }
      goto L_0887715C;
    }
L_0887715C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25548)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08877170;
      }
      goto L_0887716C;
    }
L_0887716C:
    aot_gpr[21] = (0u | 0u);
    goto L_08877170;
L_08877170:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08877194u);
    aot_gpr[10] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 255u, 0x08876EA0u>(ctx, &aot_mem) && ctx.pc == 0x08877194u) goto L_08877194;
    return;
L_08877194:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08877198;
L_08877198:
    aot_gpr[7] = (2213u << 16u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 8u);
    aot_gpr[31] = (0x088771B4u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-10100));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x088771B4u) goto L_088771B4;
    return;
L_088771B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    { const bool branch_taken = aot_gpr[30] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_08877210;
      }
      goto L_088771C0;
    }
L_088771C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088771F8;
      }
      goto L_088771CC;
    }
L_088771CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088771F8;
      }
      goto L_088771D8;
    }
L_088771D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887720C;
      }
      goto L_088771F8;
    }
L_088771F8:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_0887720C;
L_0887720C:
    aot_gpr[16] = (0u | 1u);
    goto L_08877210;
L_08877210:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887728C;
      }
      goto L_08877218;
    }
L_08877218:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887728C;
      }
      goto L_08877224;
    }
L_08877224:
    aot_gpr[5] = (aot_gpr[16] << 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08877268;
      }
      goto L_08877238;
    }
L_08877238:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08877268;
      }
      goto L_08877244;
    }
L_08877244:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[16] << 2u);
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08877288;
      }
      goto L_08877268;
    }
L_08877268:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0887727C;
      }
      goto L_08877270;
    }
L_08877270:
    aot_gpr[4] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29060)));
      if (branch_taken) {
          goto L_08877280;
      }
      goto L_0887727C;
    }
L_0887727C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    goto L_08877280;
L_08877280:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_08877288;
L_08877288:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0887728C;
L_0887728C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088772F4;
      }
      goto L_08877298;
    }
L_08877298:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (2216u << 16u);
        goto L_088772AC;
    }
    goto L_088772A4;
L_088772A4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08877370;
      }
      goto L_088772AC;
    }
L_088772AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088772D4u);
    aot_gpr[6] = (0u | 32u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088772D4u) goto L_088772D4;
    return;
L_088772D4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_088772EC;
      }
      goto L_088772E0;
    }
L_088772E0:
    aot_gpr[31] = (0x088772E8u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 53u, 0x08927540u>(ctx, &aot_mem) && ctx.pc == 0x088772E8u) goto L_088772E8;
    return;
L_088772E8:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    goto L_088772EC;
L_088772EC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08877370;
      }
      goto L_088772F4;
    }
L_088772F4:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887736C;
      }
      goto L_08877300;
    }
L_08877300:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (2216u << 16u);
        goto L_08877320;
    }
    goto L_0887730C;
L_0887730C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[4] = (2216u << 16u);
        goto L_08877320;
    }
    goto L_08877318;
L_08877318:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08877370;
      }
      goto L_08877320;
    }
L_08877320:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08877348u);
    aot_gpr[6] = (0u | 32u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08877348u) goto L_08877348;
    return;
L_08877348:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08877364;
      }
      goto L_08877354;
    }
L_08877354:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08877360u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 56u, 0x089275A4u>(ctx, &aot_mem) && ctx.pc == 0x08877360u) goto L_08877360;
    return;
L_08877360:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    goto L_08877364;
L_08877364:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08877370;
      }
      goto L_0887736C;
    }
L_0887736C:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), 0u);
    goto L_08877370;
L_08877370:
    aot_gpr[2] = (aot_gpr[30] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088773A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877430;
      }
      goto L_088773BC;
    }
L_088773BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088773E0;
      }
      goto L_088773CC;
    }
L_088773CC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088773D8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 63u, 0x08927680u>(ctx, &aot_mem) && ctx.pc == 0x088773D8u) goto L_088773D8;
    return;
L_088773D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877430;
      }
      goto L_088773E0;
    }
L_088773E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088773FCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088773FCu) goto L_088773FC;
    return;
L_088773FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08877430;
      }
      goto L_08877408;
    }
L_08877408:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08877414u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x08877414u) goto L_08877414;
    return;
L_08877414:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08877430;
      }
      goto L_0887741C;
    }
L_0887741C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08877430u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 63u, 0x08927680u>(ctx, &aot_mem) && ctx.pc == 0x08877430u) goto L_08877430;
    return;
L_08877430:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877444:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08877460u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_08877460:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887746C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877490;
      }
      goto L_0887747C;
    }
L_0887747C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08877490;
      }
      goto L_08877488;
    }
L_08877488:
    aot_gpr[31] = (0x08877490u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 63u, 0x08927680u>(ctx, &aot_mem) && ctx.pc == 0x08877490u) goto L_08877490;
    return;
L_08877490:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887749C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (aot_gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[10] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088774C0u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 255u, 0x08876EA0u>(ctx, &aot_mem) && ctx.pc == 0x088774C0u) goto L_088774C0;
    return;
L_088774C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088774CCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 246u, 0x08876DE4u>(ctx, &aot_mem) && ctx.pc == 0x088774CCu) goto L_088774CC;
    return;
L_088774CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088774DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[7] & 255u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[18] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08877594;
      }
      goto L_08877524;
    }
L_08877524:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08877534u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08877534u) goto L_08877534;
    return;
L_08877534:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08877544u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7712));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08877544u) goto L_08877544;
    return;
L_08877544:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887758C;
      }
      goto L_08877550;
    }
L_08877550:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887755Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7728));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0887755Cu) goto L_0887755C;
    return;
L_0887755C:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08877588u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_088770DC;
L_08877588:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_0887758C;
L_0887758C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088775C0;
      }
      goto L_08877594;
    }
L_08877594:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x088775BCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_088775BC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_088775C0;
L_088775C0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088775FC;
      }
      goto L_088775C8;
    }
L_088775C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088775DC;
      }
      goto L_088775D4;
    }
L_088775D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088775FC;
      }
      goto L_088775DC;
    }
L_088775DC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088775FC;
      }
      goto L_088775E8;
    }
L_088775E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x088775F8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 203u, 0x08943F50u>(ctx, &aot_mem) && ctx.pc == 0x088775F8u) goto L_088775F8;
    return;
L_088775F8:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_088775FC;
L_088775FC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877624:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[18] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088776D4;
      }
      goto L_08877664;
    }
L_08877664:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08877674u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08877674u) goto L_08877674;
    return;
L_08877674:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08877684u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7740));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08877684u) goto L_08877684;
    return;
L_08877684:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088776CC;
      }
      goto L_08877690;
    }
L_08877690:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887769Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7760));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0887769Cu) goto L_0887769C;
    return;
L_0887769C:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088776C8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_088770DC;
L_088776C8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_088776CC;
L_088776CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877700;
      }
      goto L_088776D4;
    }
L_088776D4:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x088776FCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_088776FC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_08877700;
L_08877700:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887773C;
      }
      goto L_08877708;
    }
L_08877708:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887771C;
      }
      goto L_08877714;
    }
L_08877714:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0887773C;
      }
      goto L_0887771C;
    }
L_0887771C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0887773C;
      }
      goto L_08877728;
    }
L_08877728:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08877738u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 133u, 0x08928CB4u>(ctx, &aot_mem) && ctx.pc == 0x08877738u) goto L_08877738;
    return;
L_08877738:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0887773C;
L_0887773C:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877760:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[18] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08877810;
      }
      goto L_088777A0;
    }
L_088777A0:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088777B0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088777B0u) goto L_088777B0;
    return;
L_088777B0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088777C0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7780));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x088777C0u) goto L_088777C0;
    return;
L_088777C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877808;
      }
      goto L_088777CC;
    }
L_088777CC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x088777D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7796));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088777D8u) goto L_088777D8;
    return;
L_088777D8:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08877804u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_088770DC;
L_08877804:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_08877808;
L_08877808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887783C;
      }
      goto L_08877810;
    }
L_08877810:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x08877838u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_08877838:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_0887783C;
L_0887783C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877878;
      }
      goto L_08877844;
    }
L_08877844:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877858;
      }
      goto L_08877850;
    }
L_08877850:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08877878;
      }
      goto L_08877858;
    }
L_08877858:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08877878;
      }
      goto L_08877864;
    }
L_08877864:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08877874u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 83u, 0x08920718u>(ctx, &aot_mem) && ctx.pc == 0x08877874u) goto L_08877874;
    return;
L_08877874:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08877878;
L_08877878:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887789C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088778D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_088778D8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08877908;
      }
      goto L_088778E4;
    }
L_088778E4:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08877908;
      }
      goto L_088778F0;
    }
L_088778F0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08877904u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 119u, 0x08892A94u>(ctx, &aot_mem) && ctx.pc == 0x08877904u) goto L_08877904;
    return;
L_08877904:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08877908;
L_08877908:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877920:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x0887795Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_0887795C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08877990;
      }
      goto L_08877968;
    }
L_08877968:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08877990;
      }
      goto L_08877974;
    }
L_08877974:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887798Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0271_entry, 271u, 10u, 0x08913304u>(ctx, &aot_mem) && ctx.pc == 0x0887798Cu) goto L_0887798C;
    return;
L_0887798C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08877990;
L_08877990:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088779A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088779E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_088779E4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08877A18;
      }
      goto L_088779F0;
    }
L_088779F0:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08877A18;
      }
      goto L_088779FC;
    }
L_088779FC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08877A14u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 19u, 0x08826128u>(ctx, &aot_mem) && ctx.pc == 0x08877A14u) goto L_08877A14;
    return;
L_08877A14:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08877A18;
L_08877A18:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877A30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08877A6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_08877A6C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08877AA0;
      }
      goto L_08877A78;
    }
L_08877A78:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08877AA0;
      }
      goto L_08877A84;
    }
L_08877A84:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08877A9Cu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 4u, 0x088CD0F4u>(ctx, &aot_mem) && ctx.pc == 0x08877A9Cu) goto L_08877A9C;
    return;
L_08877A9C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08877AA0;
L_08877AA0:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877AB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08877AF4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_08877AF4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08877B28;
      }
      goto L_08877B00;
    }
L_08877B00:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08877B28;
      }
      goto L_08877B0C;
    }
L_08877B0C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08877B24u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 45u, 0x0891935Cu>(ctx, &aot_mem) && ctx.pc == 0x08877B24u) goto L_08877B24;
    return;
L_08877B24:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08877B28;
L_08877B28:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877B40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08877B8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_08877B8C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08877BC8;
      }
      goto L_08877B98;
    }
L_08877B98:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08877BC8;
      }
      goto L_08877BA4;
    }
L_08877BA4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08877BC4u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 155u, 0x088CCC2Cu>(ctx, &aot_mem) && ctx.pc == 0x08877BC4u) goto L_08877BC4;
    return;
L_08877BC4:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08877BC8;
L_08877BC8:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877BE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08877C24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_08877C24:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08877C58;
      }
      goto L_08877C30;
    }
L_08877C30:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08877C58;
      }
      goto L_08877C3C;
    }
L_08877C3C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08877C54u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 54u, 0x088A8378u>(ctx, &aot_mem) && ctx.pc == 0x08877C54u) goto L_08877C54;
    return;
L_08877C54:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08877C58;
L_08877C58:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877C70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08877CACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_08877CAC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08877CE0;
      }
      goto L_08877CB8;
    }
L_08877CB8:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08877CE0;
      }
      goto L_08877CC4;
    }
L_08877CC4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08877CDCu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 61u, 0x0881D3B4u>(ctx, &aot_mem) && ctx.pc == 0x08877CDCu) goto L_08877CDC;
    return;
L_08877CDC:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08877CE0;
L_08877CE0:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877CF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08877D34u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088770DC;
L_08877D34:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08877D68;
      }
      goto L_08877D40;
    }
L_08877D40:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08877D68;
      }
      goto L_08877D4C;
    }
L_08877D4C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08877D64u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 73u, 0x0892464Cu>(ctx, &aot_mem) && ctx.pc == 0x08877D64u) goto L_08877D64;
    return;
L_08877D64:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08877D68;
L_08877D68:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877D80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[7] & 255u);
    aot_gpr[17] = (aot_gpr[8] & 255u);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08877E3C;
      }
      goto L_08877DBC;
    }
L_08877DBC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08877DD8u);
    aot_gpr[9] = (0u | 0u);
    goto L_0887749C;
L_08877DD8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08877E5C;
      }
      goto L_08877DE4;
    }
L_08877DE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08877E1Cu);
    aot_gpr[6] = (0u | 32u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08877E1Cu) goto L_08877E1C;
    return;
L_08877E1C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08877E34;
      }
      goto L_08877E28;
    }
L_08877E28:
    aot_gpr[31] = (0x08877E30u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 53u, 0x08927540u>(ctx, &aot_mem) && ctx.pc == 0x08877E30u) goto L_08877E30;
    return;
L_08877E30:
    aot_gpr[20] = (aot_gpr[21] | 0u);
    goto L_08877E34;
L_08877E34:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
      if (branch_taken) {
          goto L_08877E5C;
      }
      goto L_08877E3C;
    }
L_08877E3C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08877E58u);
    aot_gpr[9] = (0u | 0u);
    goto L_08877444;
L_08877E58:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08877E5C;
L_08877E5C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877F54;
      }
      goto L_08877E64;
    }
L_08877E64:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2216u << 16u);
      if (branch_taken) {
          goto L_08877EEC;
      }
      goto L_08877E70;
    }
L_08877E70:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08877E7Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x08877E7Cu) goto L_08877E7C;
    return;
L_08877E7C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-30480), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08877EB8;
      }
      goto L_08877E90;
    }
L_08877E90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08877EB0u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08877EB0u) goto L_08877EB0;
    return;
L_08877EB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08877EC4;
      }
      goto L_08877EB8;
    }
L_08877EB8:
    aot_gpr[31] = (0x08877EC0u);
    aot_gpr[4] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08877EC0u) goto L_08877EC0;
    return;
L_08877EC0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08877EC4;
L_08877EC4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877EE4;
      }
      goto L_08877ED0;
    }
L_08877ED0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08877EE0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 69u, 0x08928714u>(ctx, &aot_mem) && ctx.pc == 0x08877EE0u) goto L_08877EE0;
    return;
L_08877EE0:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_08877EE4;
L_08877EE4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-30480), aot_gpr[17]);
      if (branch_taken) {
          goto L_08877F4C;
      }
      goto L_08877EEC;
    }
L_08877EEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08877F20;
      }
      goto L_08877EF8;
    }
L_08877EF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08877F18u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08877F18u) goto L_08877F18;
    return;
L_08877F18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08877F2C;
      }
      goto L_08877F20;
    }
L_08877F20:
    aot_gpr[31] = (0x08877F28u);
    aot_gpr[4] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08877F28u) goto L_08877F28;
    return;
L_08877F28:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_08877F2C;
L_08877F2C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877F4C;
      }
      goto L_08877F38;
    }
L_08877F38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08877F48u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 69u, 0x08928714u>(ctx, &aot_mem) && ctx.pc == 0x08877F48u) goto L_08877F48;
    return;
L_08877F48:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    goto L_08877F4C;
L_08877F4C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7268), aot_gpr[18]);
    goto L_08877F54;
L_08877F54:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877F7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08877F98u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0887746C;
L_08877F98:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08877FA4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 79u, 0x08928870u>(ctx, &aot_mem) && ctx.pc == 0x08877FA4u) goto L_08877FA4;
    return;
L_08877FA4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877FB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08877FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 86u, 0x089288D0u>(ctx, &aot_mem) && ctx.pc == 0x08877FC4u) goto L_08877FC4;
    return;
L_08877FC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877FD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-352));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7288));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[18] = (0u | 0u);
    ctx.pc = 0x08878000u; return;
}

void recomp_unit_0115(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0115_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_115(Runtime &runtime) {
    runtime.register_generated_unit(115u, 0x08877000u, 4096u, &recomp_unit_0115, &recomp_unit_0115_entry);
    runtime.register_function(0x08877000u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877004u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887700Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877020u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877028u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877038u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877040u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877044u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887704Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877060u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877068u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877080u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877094u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877098u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088770A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088770A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088770DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877148u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877154u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887715Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887716Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877170u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877194u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877198u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088771B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088771C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088771CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088771D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088771F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887720Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877210u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877218u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877224u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877238u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877244u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877268u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877270u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887727Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877280u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877288u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887728Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877298u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088772A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088772ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088772D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088772E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088772E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088772ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088772F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877300u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887730Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877318u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877320u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877348u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877354u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877360u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877364u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887736Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877370u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088773A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088773BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088773CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088773D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088773E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088773FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877408u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877414u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887741Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877430u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877444u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877460u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887746Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887747Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877488u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877490u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887749Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088774C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088774CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088774DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877524u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877534u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877544u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877550u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887755Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877588u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887758Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877594u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088775BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088775C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088775C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088775D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088775DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088775E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088775F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088775FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877624u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877664u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877674u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877684u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877690u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887769Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088776C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088776CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088776D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088776FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877700u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877708u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877714u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887771Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877728u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877738u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887773Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877760u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088777A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088777B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088777C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088777CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088777D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877804u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877808u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877810u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877838u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887783Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877844u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877850u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877858u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877864u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877874u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877878u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887789Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088778D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088778E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088778F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877904u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877908u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877920u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887795Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877968u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877974u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x0887798Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877990u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088779A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088779E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088779F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x088779FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877A14u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877A18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877A30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877A6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877A78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877A84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877A9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877AA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877AB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877AF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877B00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877B0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877B24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877B28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877B40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877B8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877B98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877BA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877BC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877BC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877BE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877C24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877C30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877C3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877C54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877C58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877C70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877CACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877CB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877CC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877CDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877CE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877CF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877D34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877D40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877D4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877D64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877D68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877D80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877DBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877DD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877DE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877E1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877E28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877E30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877E34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877E3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877E58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877E5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877E64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877E70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877E7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877E90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877EB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877EB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877EC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877EC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877ED0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877EE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877EE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877EECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877EF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877F18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877F20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877F28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877F2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877F38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877F48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877F4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877F54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877F7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877F98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877FA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877FB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877FC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x08877FD0u, &recomp_unit_0115, "recomp_unit_0115");
}
} // namespace psprecomp
