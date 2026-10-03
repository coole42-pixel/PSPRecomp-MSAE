#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0062[1023] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0,
    18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0,
    28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 32, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 36, 0, 37, 0, 38,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 57, 0, 58, 0, 0, 59,
    0, 60, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0,
    69, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 75, 0, 76, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0,
    0, 80, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0,
    0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99,
    0, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 105, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0,
    110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0,
    127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183,
    0, 0, 184, 0, 185, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 206,
    0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 217, 218, 0, 0, 0, 219, 0,
    0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0,
    0, 0, 228, 229, 0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 238, 0, 0, 239, 0, 240,
};
void recomp_unit_0062_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08842000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0062[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08842000;
    case 2u: goto L_0884200C;
    case 3u: goto L_08842020;
    case 4u: goto L_08842028;
    case 5u: goto L_0884203C;
    case 6u: goto L_08842044;
    case 7u: goto L_08842050;
    case 8u: goto L_0884205C;
    case 9u: goto L_08842064;
    case 10u: goto L_0884206C;
    case 11u: goto L_08842084;
    case 12u: goto L_088420A8;
    case 13u: goto L_088420B8;
    case 14u: goto L_088420CC;
    case 15u: goto L_088420D4;
    case 16u: goto L_088420EC;
    case 17u: goto L_088420F4;
    case 18u: goto L_08842100;
    case 19u: goto L_0884210C;
    case 20u: goto L_08842134;
    case 21u: goto L_08842150;
    case 22u: goto L_0884215C;
    case 23u: goto L_08842178;
    case 24u: goto L_088421A0;
    case 25u: goto L_088421C4;
    case 26u: goto L_088421E8;
    case 27u: goto L_088421F0;
    case 28u: goto L_08842200;
    case 29u: goto L_08842214;
    case 30u: goto L_08842220;
    case 31u: goto L_0884223C;
    case 32u: goto L_08842240;
    case 33u: goto L_0884224C;
    case 34u: goto L_08842254;
    case 35u: goto L_08842264;
    case 36u: goto L_0884226C;
    case 37u: goto L_08842274;
    case 38u: goto L_0884227C;
    case 39u: goto L_08842298;
    case 40u: goto L_088422BC;
    case 41u: goto L_088422DC;
    case 42u: goto L_0884230C;
    case 43u: goto L_0884231C;
    case 44u: goto L_08842330;
    case 45u: goto L_08842338;
    case 46u: goto L_0884235C;
    case 47u: goto L_08842364;
    case 48u: goto L_08842370;
    case 49u: goto L_08842380;
    case 50u: goto L_08842394;
    case 51u: goto L_0884239C;
    case 52u: goto L_088423AC;
    case 53u: goto L_088423C0;
    case 54u: goto L_088423CC;
    case 55u: goto L_088423D8;
    case 56u: goto L_088423E4;
    case 57u: goto L_088423E8;
    case 58u: goto L_088423F0;
    case 59u: goto L_088423FC;
    case 60u: goto L_08842404;
    case 61u: goto L_08842414;
    case 62u: goto L_0884241C;
    case 63u: goto L_08842424;
    case 64u: goto L_08842438;
    case 65u: goto L_08842440;
    case 66u: goto L_08842454;
    case 67u: goto L_08842464;
    case 68u: goto L_08842478;
    case 69u: goto L_08842480;
    case 70u: goto L_08842490;
    case 71u: goto L_088424A4;
    case 72u: goto L_088424B0;
    case 73u: goto L_088424BC;
    case 74u: goto L_088424C8;
    case 75u: goto L_088424CC;
    case 76u: goto L_088424D4;
    case 77u: goto L_088424E0;
    case 78u: goto L_088424E8;
    case 79u: goto L_088424F8;
    case 80u: goto L_08842504;
    case 81u: goto L_0884250C;
    case 82u: goto L_08842514;
    case 83u: goto L_08842524;
    case 84u: goto L_08842534;
    case 85u: goto L_0884253C;
    case 86u: goto L_0884254C;
    case 87u: goto L_08842560;
    case 88u: goto L_0884256C;
    case 89u: goto L_08842578;
    case 90u: goto L_0884258C;
    case 91u: goto L_0884259C;
    case 92u: goto L_088425A8;
    case 93u: goto L_088425B4;
    case 94u: goto L_088425C0;
    case 95u: goto L_088425CC;
    case 96u: goto L_088425D4;
    case 97u: goto L_088425E4;
    case 98u: goto L_088425F0;
    case 99u: goto L_088425FC;
    case 100u: goto L_0884260C;
    case 101u: goto L_0884261C;
    case 102u: goto L_08842624;
    case 103u: goto L_08842634;
    case 104u: goto L_08842644;
    case 105u: goto L_0884264C;
    case 106u: goto L_08842650;
    case 107u: goto L_0884265C;
    case 108u: goto L_08842668;
    case 109u: goto L_08842674;
    case 110u: goto L_08842680;
    case 111u: goto L_08842698;
    case 112u: goto L_088426AC;
    case 113u: goto L_088426B8;
    case 114u: goto L_088426C4;
    case 115u: goto L_088426D8;
    case 116u: goto L_088426E0;
    case 117u: goto L_088426EC;
    case 118u: goto L_08842700;
    case 119u: goto L_08842714;
    case 120u: goto L_08842728;
    case 121u: goto L_08842738;
    case 122u: goto L_08842744;
    case 123u: goto L_08842750;
    case 124u: goto L_08842764;
    case 125u: goto L_0884276C;
    case 126u: goto L_08842774;
    case 127u: goto L_08842780;
    case 128u: goto L_08842794;
    case 129u: goto L_0884279C;
    case 130u: goto L_088427B8;
    case 131u: goto L_088427CC;
    case 132u: goto L_088427DC;
    case 133u: goto L_088427E4;
    case 134u: goto L_08842800;
    case 135u: goto L_08842824;
    case 136u: goto L_0884284C;
    case 137u: goto L_0884285C;
    case 138u: goto L_08842864;
    case 139u: goto L_08842894;
    case 140u: goto L_088428D4;
    case 141u: goto L_088428E4;
    case 142u: goto L_08842908;
    case 143u: goto L_08842928;
    case 144u: goto L_08842964;
    case 145u: goto L_0884296C;
    case 146u: goto L_0884298C;
    case 147u: goto L_08842998;
    case 148u: goto L_088429C4;
    case 149u: goto L_088429CC;
    case 150u: goto L_088429E4;
    case 151u: goto L_088429F8;
    case 152u: goto L_08842A04;
    case 153u: goto L_08842A40;
    case 154u: goto L_08842A60;
    case 155u: goto L_08842A78;
    case 156u: goto L_08842A90;
    case 157u: goto L_08842AB0;
    case 158u: goto L_08842AC8;
    case 159u: goto L_08842AE0;
    case 160u: goto L_08842AF8;
    case 161u: goto L_08842B10;
    case 162u: goto L_08842B28;
    case 163u: goto L_08842B40;
    case 164u: goto L_08842B50;
    case 165u: goto L_08842B70;
    case 166u: goto L_08842B90;
    case 167u: goto L_08842B9C;
    case 168u: goto L_08842BA4;
    case 169u: goto L_08842BAC;
    case 170u: goto L_08842BB4;
    case 171u: goto L_08842BBC;
    case 172u: goto L_08842BC4;
    case 173u: goto L_08842BE8;
    case 174u: goto L_08842BF8;
    case 175u: goto L_08842C0C;
    case 176u: goto L_08842C30;
    case 177u: goto L_08842C40;
    case 178u: goto L_08842C4C;
    case 179u: goto L_08842C54;
    case 180u: goto L_08842C60;
    case 181u: goto L_08842C68;
    case 182u: goto L_08842C74;
    case 183u: goto L_08842C7C;
    case 184u: goto L_08842C88;
    case 185u: goto L_08842C90;
    case 186u: goto L_08842C98;
    case 187u: goto L_08842CA4;
    case 188u: goto L_08842CB0;
    case 189u: goto L_08842CBC;
    case 190u: goto L_08842CE0;
    case 191u: goto L_08842D04;
    case 192u: goto L_08842D28;
    case 193u: goto L_08842D3C;
    case 194u: goto L_08842D50;
    case 195u: goto L_08842D68;
    case 196u: goto L_08842D74;
    case 197u: goto L_08842D7C;
    case 198u: goto L_08842D88;
    case 199u: goto L_08842DB4;
    case 200u: goto L_08842DBC;
    case 201u: goto L_08842DDC;
    case 202u: goto L_08842E4C;
    case 203u: goto L_08842E54;
    case 204u: goto L_08842E68;
    case 205u: goto L_08842E70;
    case 206u: goto L_08842E7C;
    case 207u: goto L_08842E84;
    case 208u: goto L_08842E8C;
    case 209u: goto L_08842E98;
    case 210u: goto L_08842EA0;
    case 211u: goto L_08842EA8;
    case 212u: goto L_08842EB0;
    case 213u: goto L_08842EB8;
    case 214u: goto L_08842EC4;
    case 215u: goto L_08842ED0;
    case 216u: goto L_08842EDC;
    case 217u: goto L_08842EE4;
    case 218u: goto L_08842EE8;
    case 219u: goto L_08842EF8;
    case 220u: goto L_08842F04;
    case 221u: goto L_08842F18;
    case 222u: goto L_08842F2C;
    case 223u: goto L_08842F3C;
    case 224u: goto L_08842F4C;
    case 225u: goto L_08842F60;
    case 226u: goto L_08842F70;
    case 227u: goto L_08842F78;
    case 228u: goto L_08842F88;
    case 229u: goto L_08842F8C;
    case 230u: goto L_08842F98;
    case 231u: goto L_08842FA4;
    case 232u: goto L_08842FAC;
    case 233u: goto L_08842FB4;
    case 234u: goto L_08842FC0;
    case 235u: goto L_08842FC8;
    case 236u: goto L_08842FD4;
    case 237u: goto L_08842FDC;
    case 238u: goto L_08842FE4;
    case 239u: goto L_08842FF0;
    case 240u: goto L_08842FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08842000:
    aot_gpr[4] = (0u | 305u);
    aot_gpr[31] = (0x0884200Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884200Cu) goto L_0884200C;
    return;
L_0884200C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08842020u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08842020u) goto L_08842020;
    return;
L_08842020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842064;
      }
      goto L_08842028;
    }
L_08842028:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08842064;
      }
      goto L_0884203C;
    }
L_0884203C:
    aot_gpr[31] = (0x08842044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08842044u) goto L_08842044;
    return;
L_08842044:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08842064;
      }
      goto L_08842050;
    }
L_08842050:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0884205Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 19u, 0x0889B120u>(ctx, &aot_mem) && ctx.pc == 0x0884205Cu) goto L_0884205C;
    return;
L_0884205C:
    aot_gpr[31] = (0x08842064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 14u, 0x0889B0E0u>(ctx, &aot_mem) && ctx.pc == 0x08842064u) goto L_08842064;
    return;
L_08842064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088428E4;
      }
      goto L_0884206C;
    }
L_0884206C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5808));
    aot_gpr[31] = (0x08842084u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5748));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842084u) goto L_08842084;
    return;
L_08842084:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088420D4;
      }
      goto L_088420A8;
    }
L_088420A8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088420B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5736));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088420B8u) goto L_088420B8;
    return;
L_088420B8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088420CCu);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 19u, 0x0889B120u>(ctx, &aot_mem) && ctx.pc == 0x088420CCu) goto L_088420CC;
    return;
L_088420CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088428E4;
      }
      goto L_088420D4;
    }
L_088420D4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5808));
    aot_gpr[31] = (0x088420ECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5760));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088420ECu) goto L_088420EC;
    return;
L_088420EC:
    aot_gpr[31] = (0x088420F4u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x088420F4u) goto L_088420F4;
    return;
L_088420F4:
    aot_gpr[4] = (0u | 40u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0884210C;
      }
      goto L_08842100;
    }
L_08842100:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26500)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842338;
      }
      goto L_0884210C;
    }
L_0884210C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08842424;
      }
      goto L_08842134;
    }
L_08842134:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (16752u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0884215C;
      }
      goto L_08842150;
    }
L_08842150:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26500)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884227C;
      }
      goto L_0884215C;
    }
L_0884215C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-5808));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08842178u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5780));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842178u) goto L_08842178;
    return;
L_08842178:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088421A0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088421A0u) goto L_088421A0;
    return;
L_088421A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088421C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5768));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088421C4u) goto L_088421C4;
    return;
L_088421C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08842264;
      }
      goto L_088421E8;
    }
L_088421E8:
    aot_gpr[31] = (0x088421F0u);
    aot_gpr[4] = (aot_gpr[19] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 190u, 0x0889AB48u>(ctx, &aot_mem) && ctx.pc == 0x088421F0u) goto L_088421F0;
    return;
L_088421F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842254;
      }
      goto L_08842200;
    }
L_08842200:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842254;
      }
      goto L_08842214;
    }
L_08842214:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842254;
      }
      goto L_08842220;
    }
L_08842220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(7976)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08842240;
      }
      goto L_0884223C;
    }
L_0884223C:
    aot_gpr[4] = (0u - aot_gpr[4]);
    goto L_08842240;
L_08842240:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842254;
      }
      goto L_0884224C;
    }
L_0884224C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08842264;
      }
      goto L_08842254;
    }
L_08842254:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088421E8;
      }
      goto L_08842264;
    }
L_08842264:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08842274;
      }
      goto L_0884226C;
    }
L_0884226C:
    aot_gpr[31] = (0x08842274u);
    aot_gpr[4] = (aot_gpr[18] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 194u, 0x0889AB84u>(ctx, &aot_mem) && ctx.pc == 0x08842274u) goto L_08842274;
    return;
L_08842274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842424;
      }
      goto L_0884227C;
    }
L_0884227C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-5808));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08842298u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5780));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842298u) goto L_08842298;
    return;
L_08842298:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088422BCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088422BCu) goto L_088422BC;
    return;
L_088422BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088422DCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5768));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088422DCu) goto L_088422DC;
    return;
L_088422DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (16784u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08842424;
      }
      goto L_0884230C;
    }
L_0884230C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884231Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5736));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884231Cu) goto L_0884231C;
    return;
L_0884231C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x08842330u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 19u, 0x0889B120u>(ctx, &aot_mem) && ctx.pc == 0x08842330u) goto L_08842330;
    return;
L_08842330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842424;
      }
      goto L_08842338;
    }
L_08842338:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842424;
      }
      goto L_0884235C;
    }
L_0884235C:
    aot_gpr[31] = (0x08842364u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x08842364u) goto L_08842364;
    return;
L_08842364:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08842424;
      }
      goto L_08842370;
    }
L_08842370:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08842380u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 193u, 0x0888CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08842380u) goto L_08842380;
    return;
L_08842380:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08842414;
      }
      goto L_08842394;
    }
L_08842394:
    aot_gpr[31] = (0x0884239Cu);
    aot_gpr[4] = (aot_gpr[19] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 190u, 0x0889AB48u>(ctx, &aot_mem) && ctx.pc == 0x0884239Cu) goto L_0884239C;
    return;
L_0884239C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842404;
      }
      goto L_088423AC;
    }
L_088423AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842404;
      }
      goto L_088423C0;
    }
L_088423C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842404;
      }
      goto L_088423CC;
    }
L_088423CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(304)));
        goto L_088423E8;
    }
    goto L_088423D8;
L_088423D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088423FC;
      }
      goto L_088423E4;
    }
L_088423E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    goto L_088423E8;
L_088423E8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842404;
      }
      goto L_088423F0;
    }
L_088423F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08842404;
      }
      goto L_088423FC;
    }
L_088423FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08842414;
      }
      goto L_08842404;
    }
L_08842404:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842394;
      }
      goto L_08842414;
    }
L_08842414:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08842424;
      }
      goto L_0884241C;
    }
L_0884241C:
    aot_gpr[31] = (0x08842424u);
    aot_gpr[4] = (aot_gpr[18] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 194u, 0x0889AB84u>(ctx, &aot_mem) && ctx.pc == 0x08842424u) goto L_08842424;
    return;
L_08842424:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26496)));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088427DC;
      }
      goto L_08842438;
    }
L_08842438:
    aot_gpr[31] = (0x08842440u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08842440u) goto L_08842440;
    return;
L_08842440:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842524;
      }
      goto L_08842454;
    }
L_08842454:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08842464u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 193u, 0x0888CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08842464u) goto L_08842464;
    return;
L_08842464:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088424F8;
      }
      goto L_08842478;
    }
L_08842478:
    aot_gpr[31] = (0x08842480u);
    aot_gpr[4] = (aot_gpr[21] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 190u, 0x0889AB48u>(ctx, &aot_mem) && ctx.pc == 0x08842480u) goto L_08842480;
    return;
L_08842480:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088424E8;
      }
      goto L_08842490;
    }
L_08842490:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088424E8;
      }
      goto L_088424A4;
    }
L_088424A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088424E8;
      }
      goto L_088424B0;
    }
L_088424B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(304)));
        goto L_088424CC;
    }
    goto L_088424BC;
L_088424BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088424E0;
      }
      goto L_088424C8;
    }
L_088424C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    goto L_088424CC;
L_088424CC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088424E8;
      }
      goto L_088424D4;
    }
L_088424D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088424E8;
      }
      goto L_088424E0;
    }
L_088424E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_088424F8;
      }
      goto L_088424E8;
    }
L_088424E8:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842478;
      }
      goto L_088424F8;
    }
L_088424F8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08842514;
      }
      goto L_08842504;
    }
L_08842504:
    aot_gpr[31] = (0x0884250Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x0884250Cu) goto L_0884250C;
    return;
L_0884250C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842524;
      }
      goto L_08842514;
    }
L_08842514:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842454;
      }
      goto L_08842524;
    }
L_08842524:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088427DC;
      }
      goto L_08842534;
    }
L_08842534:
    aot_gpr[31] = (0x0884253Cu);
    aot_gpr[4] = (aot_gpr[17] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 190u, 0x0889AB48u>(ctx, &aot_mem) && ctx.pc == 0x0884253Cu) goto L_0884253C;
    return;
L_0884253C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088427CC;
      }
      goto L_0884254C;
    }
L_0884254C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088427CC;
      }
      goto L_08842560;
    }
L_08842560:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088427CC;
      }
      goto L_0884256C;
    }
L_0884256C:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08842578u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08842578u) goto L_08842578;
    return;
L_08842578:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088425E4;
      }
      goto L_0884258C;
    }
L_0884258C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884259Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 193u, 0x0888CCBCu>(ctx, &aot_mem) && ctx.pc == 0x0884259Cu) goto L_0884259C;
    return;
L_0884259C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088425B4;
      }
      goto L_088425A8;
    }
L_088425A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088425CC;
      }
      goto L_088425B4;
    }
L_088425B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088425D4;
      }
      goto L_088425C0;
    }
L_088425C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088425D4;
      }
      goto L_088425CC;
    }
L_088425CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_088425E4;
      }
      goto L_088425D4;
    }
L_088425D4:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884258C;
      }
      goto L_088425E4;
    }
L_088425E4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08842650;
      }
      goto L_088425F0;
    }
L_088425F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842624;
      }
      goto L_088425FC;
    }
L_088425FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884260Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x0884260Cu) goto L_0884260C;
    return;
L_0884260C:
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(308));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884261Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0884261Cu) goto L_0884261C;
    return;
L_0884261C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842644;
      }
      goto L_08842624;
    }
L_08842624:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(392)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08842634u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x08842634u) goto L_08842634;
    return;
L_08842634:
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(308));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08842644u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08842644u) goto L_08842644;
    return;
L_08842644:
    aot_gpr[31] = (0x0884264Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0884264Cu) goto L_0884264C;
    return;
L_0884264C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08842650;
L_08842650:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x0884265Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 152u, 0x0881CAA0u>(ctx, &aot_mem) && ctx.pc == 0x0884265Cu) goto L_0884265C;
    return;
L_0884265C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08842668u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 153u, 0x0881CABCu>(ctx, &aot_mem) && ctx.pc == 0x08842668u) goto L_08842668;
    return;
L_08842668:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088426AC;
      }
      goto L_08842674;
    }
L_08842674:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088426AC;
      }
      goto L_08842680;
    }
L_08842680:
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x08842698u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08842698u) goto L_08842698;
    return;
L_08842698:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[31] = (0x088426ACu);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x088426ACu) goto L_088426AC;
    return;
L_088426AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088426E0;
      }
      goto L_088426B8;
    }
L_088426B8:
    aot_gpr[4] = (0u | 92u);
    aot_gpr[31] = (0x088426C4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088426C4u) goto L_088426C4;
    return;
L_088426C4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 3u);
    aot_gpr[31] = (0x088426D8u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x088426D8u) goto L_088426D8;
    return;
L_088426D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842700;
      }
      goto L_088426E0;
    }
L_088426E0:
    aot_gpr[4] = (0u | 93u);
    aot_gpr[31] = (0x088426ECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088426ECu) goto L_088426EC;
    return;
L_088426EC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 3u);
    aot_gpr[31] = (0x08842700u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x08842700u) goto L_08842700;
    return;
L_08842700:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08842714u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5720));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08842714u) goto L_08842714;
    return;
L_08842714:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08842728u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x08842728u) goto L_08842728;
    return;
L_08842728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 7 ? 1u : 0u);
        goto L_0884276C;
    }
    goto L_08842738;
L_08842738:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884279C;
      }
      goto L_08842744;
    }
L_08842744:
    aot_gpr[4] = (0u | 51u);
    aot_gpr[31] = (0x08842750u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08842750u) goto L_08842750;
    return;
L_08842750:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 5u);
    aot_gpr[31] = (0x08842764u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x08842764u) goto L_08842764;
    return;
L_08842764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884279C;
      }
      goto L_0884276C;
    }
L_0884276C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884279C;
      }
      goto L_08842774;
    }
L_08842774:
    aot_gpr[4] = (0u | 52u);
    aot_gpr[31] = (0x08842780u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08842780u) goto L_08842780;
    return;
L_08842780:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 5u);
    aot_gpr[31] = (0x08842794u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x08842794u) goto L_08842794;
    return;
L_08842794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884279C;
      }
      goto L_0884279C;
    }
L_0884279C:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088427B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5716));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088427B8u) goto L_088427B8;
    return;
L_088427B8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 6u);
    aot_gpr[31] = (0x088427CCu);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x088427CCu) goto L_088427CC;
    return;
L_088427CC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842534;
      }
      goto L_088427DC;
    }
L_088427DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088428E4;
      }
      goto L_088427E4;
    }
L_088427E4:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-5808));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08842800u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5780));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842800u) goto L_08842800;
    return;
L_08842800:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08842824u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842824u) goto L_08842824;
    return;
L_08842824:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884284Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5768));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884284Cu) goto L_0884284C;
    return;
L_0884284C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088428E4;
      }
      goto L_0884285C;
    }
L_0884285C:
    aot_gpr[31] = (0x08842864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 183u, 0x0889AB08u>(ctx, &aot_mem) && ctx.pc == 0x08842864u) goto L_08842864;
    return;
L_08842864:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1904), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7488), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2168), aot_gpr[4]);
    aot_gpr[31] = (0x08842894u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x0881CA68u>(ctx, &aot_mem) && ctx.pc == 0x08842894u) goto L_08842894;
    return;
L_08842894:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25340), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2176), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2172), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2192), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088428D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5708));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088428D4u) goto L_088428D4;
    return;
L_088428D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x088428E4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 19u, 0x0889B120u>(ctx, &aot_mem) && ctx.pc == 0x088428E4u) goto L_088428E4;
    return;
L_088428E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842908:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23880), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842928:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-5660));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08842964u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5648));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842964u) goto L_08842964;
    return;
L_08842964:
    aot_gpr[31] = (0x0884296Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x0884296Cu) goto L_0884296C;
    return;
L_0884296C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4888)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884298Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5640));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884298Cu) goto L_0884298C;
    return;
L_0884298C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08842998u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08842998u) goto L_08842998;
    return;
L_08842998:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
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
L_088429C4:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088429CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088429F8;
      }
      goto L_088429E4;
    }
L_088429E4:
    aot_gpr[4] = (17264u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17184u << 16u);
    aot_gpr[31] = (0x088429F8u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 103u, 0x0889A594u>(ctx, &aot_mem) && ctx.pc == 0x088429F8u) goto L_088429F8;
    return;
L_088429F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842A04:
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
    aot_gpr[31] = (0x08842A40u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x08842A40u) goto L_08842A40;
    return;
L_08842A40:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-5660));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08842A60u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5648));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842A60u) goto L_08842A60;
    return;
L_08842A60:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08842A78u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5640));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842A78u) goto L_08842A78;
    return;
L_08842A78:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08842A90u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5628));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842A90u) goto L_08842A90;
    return;
L_08842A90:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-5616));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08842AB0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5596));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842AB0u) goto L_08842AB0;
    return;
L_08842AB0:
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08842AC8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5572));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842AC8u) goto L_08842AC8;
    return;
L_08842AC8:
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08842AE0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5548));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842AE0u) goto L_08842AE0;
    return;
L_08842AE0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08842AF8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5532));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842AF8u) goto L_08842AF8;
    return;
L_08842AF8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08842B10u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5516));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842B10u) goto L_08842B10;
    return;
L_08842B10:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08842B28u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5504));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842B28u) goto L_08842B28;
    return;
L_08842B28:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08842B40u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5492));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08842B40u) goto L_08842B40;
    return;
L_08842B40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08842B70;
      }
      goto L_08842B50;
    }
L_08842B50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08842B90;
      }
      goto L_08842B70;
    }
L_08842B70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_08842B90;
L_08842B90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr[5]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
        goto L_08842BAC;
    }
    goto L_08842B9C;
L_08842B9C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08842F8C;
      }
      goto L_08842BA4;
    }
L_08842BA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842BC4;
      }
      goto L_08842BAC;
    }
L_08842BAC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08842D7C;
      }
      goto L_08842BB4;
    }
L_08842BB4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842E70;
      }
      goto L_08842BBC;
    }
L_08842BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842F8C;
      }
      goto L_08842BC4;
    }
L_08842BC4:
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
          goto L_08842C0C;
      }
      goto L_08842BE8;
    }
L_08842BE8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08842BF8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5480));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08842BF8u) goto L_08842BF8;
    return;
L_08842BF8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08842D74;
      }
      goto L_08842C0C;
    }
L_08842C0C:
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
          goto L_08842C54;
      }
      goto L_08842C30;
    }
L_08842C30:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08842C40u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5660));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08842C40u) goto L_08842C40;
    return;
L_08842C40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08842C4Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08842C4Cu) goto L_08842C4C;
    return;
L_08842C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842D74;
      }
      goto L_08842C54;
    }
L_08842C54:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08842C60u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08842C60u) goto L_08842C60;
    return;
L_08842C60:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08842C90;
      }
      goto L_08842C68;
    }
L_08842C68:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08842C74u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08842C74u) goto L_08842C74;
    return;
L_08842C74:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08842C90;
      }
      goto L_08842C7C;
    }
L_08842C7C:
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(5))))));
    aot_gpr[31] = (0x08842C88u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08842C88u) goto L_08842C88;
    return;
L_08842C88:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08842CBC;
      }
      goto L_08842C90;
    }
L_08842C90:
    aot_gpr[31] = (0x08842C98u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08842C98u) goto L_08842C98;
    return;
L_08842C98:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08842CA4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08842CA4u) goto L_08842CA4;
    return;
L_08842CA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[31] = (0x08842CB0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08842CB0u) goto L_08842CB0;
    return;
L_08842CB0:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08842CBC;
L_08842CBC:
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
          goto L_08842D28;
      }
      goto L_08842CE0;
    }
L_08842CE0:
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
          goto L_08842D28;
      }
      goto L_08842D04;
    }
L_08842D04:
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
          goto L_08842D74;
      }
      goto L_08842D28;
    }
L_08842D28:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-5660));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08842D3Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08842D3Cu) goto L_08842D3C;
    return;
L_08842D3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[31] = (0x08842D50u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08842D50u) goto L_08842D50;
    return;
L_08842D50:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08842D68u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5648));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08842D68u) goto L_08842D68;
    return;
L_08842D68:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08842D74u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08842D74u) goto L_08842D74;
    return;
L_08842D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842F8C;
      }
      goto L_08842D7C;
    }
L_08842D7C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x08842D88u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 35u, 0x0889F2BCu>(ctx, &aot_mem) && ctx.pc == 0x08842D88u) goto L_08842D88;
    return;
L_08842D88:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(5))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08842DBC;
    }
    goto L_08842DB4;
L_08842DB4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08842DDC;
      }
      goto L_08842DBC;
    }
L_08842DBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08842DDC;
L_08842DDC:
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
    aot_gpr[31] = (0x08842E4Cu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08842E4Cu) goto L_08842E4C;
    return;
L_08842E4C:
    aot_gpr[31] = (0x08842E54u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08842E54u) goto L_08842E54;
    return;
L_08842E54:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08842E68u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 36u, 0x0889F2D8u>(ctx, &aot_mem) && ctx.pc == 0x08842E68u) goto L_08842E68;
    return;
L_08842E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842F8C;
      }
      goto L_08842E70;
    }
L_08842E70:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x08842E7Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 59u, 0x0889F48Cu>(ctx, &aot_mem) && ctx.pc == 0x08842E7Cu) goto L_08842E7C;
    return;
L_08842E7C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08842EA8;
      }
      goto L_08842E84;
    }
L_08842E84:
    aot_gpr[31] = (0x08842E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 60u, 0x0889F49Cu>(ctx, &aot_mem) && ctx.pc == 0x08842E8Cu) goto L_08842E8C;
    return;
L_08842E8C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08842EA0;
      }
      goto L_08842E98;
    }
L_08842E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842EA0;
      }
      goto L_08842EA0;
    }
L_08842EA0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08842F8C;
      }
      goto L_08842EA8;
    }
L_08842EA8:
    aot_gpr[31] = (0x08842EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 58u, 0x0889F47Cu>(ctx, &aot_mem) && ctx.pc == 0x08842EB0u) goto L_08842EB0;
    return;
L_08842EB0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842F8C;
      }
      goto L_08842EB8;
    }
L_08842EB8:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842F88;
      }
      goto L_08842EC4;
    }
L_08842EC4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08842ED0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x0888CB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08842ED0u) goto L_08842ED0;
    return;
L_08842ED0:
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842EE8;
      }
      goto L_08842EDC;
    }
L_08842EDC:
    aot_gpr[31] = (0x08842EE4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x0888CB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08842EE4u) goto L_08842EE4;
    return;
L_08842EE4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08842EE8;
L_08842EE8:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842F88;
      }
      goto L_08842EF8;
    }
L_08842EF8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08842F04u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 21u, 0x0889F150u>(ctx, &aot_mem) && ctx.pc == 0x08842F04u) goto L_08842F04;
    return;
L_08842F04:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08842F18u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x08842F18u) goto L_08842F18;
    return;
L_08842F18:
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08842F2Cu);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 110u, 0x08A329CCu>(ctx, &aot_mem) && ctx.pc == 0x08842F2Cu) goto L_08842F2C;
    return;
L_08842F2C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08842F3Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08842F3Cu) goto L_08842F3C;
    return;
L_08842F3C:
    aot_gpr[6] = (aot_gpr[21] + static_cast<std::uint32_t>(21));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08842F4Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08842F4Cu) goto L_08842F4C;
    return;
L_08842F4C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08842F60u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5664));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08842F60u) goto L_08842F60;
    return;
L_08842F60:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08842F70u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08842F70u) goto L_08842F70;
    return;
L_08842F70:
    aot_gpr[31] = (0x08842F78u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08842F78u) goto L_08842F78;
    return;
L_08842F78:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842EF8;
      }
      goto L_08842F88;
    }
L_08842F88:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_08842F8C;
L_08842F8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x08842F98u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08842F98u) goto L_08842F98;
    return;
L_08842F98:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08842FA4u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08842FA4u) goto L_08842FA4;
    return;
L_08842FA4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842FF8;
      }
      goto L_08842FAC;
    }
L_08842FAC:
    aot_gpr[31] = (0x08842FB4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08842FB4u) goto L_08842FB4;
    return;
L_08842FB4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08842FDC;
      }
      goto L_08842FC0;
    }
L_08842FC0:
    aot_gpr[31] = (0x08842FC8u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08842FC8u) goto L_08842FC8;
    return;
L_08842FC8:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08842FD4u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08842FD4u) goto L_08842FD4;
    return;
L_08842FD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 6u, 0x08843050u>(ctx, &aot_mem); return;
      }
      goto L_08842FDC;
    }
L_08842FDC:
    aot_gpr[31] = (0x08842FE4u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08842FE4u) goto L_08842FE4;
    return;
L_08842FE4:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08842FF0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08842FF0u) goto L_08842FF0;
    return;
L_08842FF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 6u, 0x08843050u>(ctx, &aot_mem); return;
      }
      goto L_08842FF8;
    }
L_08842FF8:
    aot_gpr[31] = (0x08843000u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0062(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0062_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_62(Runtime &runtime) {
    runtime.register_generated_unit(62u, 0x08842000u, 4096u, &recomp_unit_0062, &recomp_unit_0062_entry);
    runtime.register_function(0x08842000u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884200Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842020u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842028u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884203Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842044u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842050u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884205Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842064u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884206Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842084u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088420A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088420B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088420CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088420D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088420ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088420F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842100u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884210Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842134u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842150u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884215Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842178u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088421A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088421C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088421E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088421F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842200u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842214u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842220u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884223Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842240u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884224Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842254u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842264u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884226Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842274u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884227Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842298u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088422BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088422DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884230Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884231Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842330u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842338u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884235Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842364u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842370u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842380u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842394u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884239Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088423ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088423C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088423CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088423D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088423E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088423E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088423F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088423FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842404u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842414u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884241Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842424u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842438u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842440u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842454u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842464u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842478u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842480u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842490u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088424A4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088424B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088424BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088424C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088424CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088424D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088424E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088424E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088424F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842504u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884250Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842514u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842524u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842534u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884253Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884254Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842560u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884256Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842578u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884258Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884259Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088425A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088425B4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088425C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088425CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088425D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088425E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088425F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088425FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884260Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884261Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842624u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842634u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842644u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884264Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842650u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884265Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842668u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842674u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842680u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842698u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088426ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088426B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088426C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088426D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088426E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088426ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842700u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842714u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842728u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842738u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842744u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842750u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842764u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884276Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842774u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842780u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842794u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884279Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088427B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088427CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088427DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088427E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842800u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842824u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884284Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884285Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842864u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842894u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088428D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088428E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842908u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842928u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842964u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884296Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x0884298Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842998u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088429C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088429CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088429E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088429F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842A04u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842A40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842A60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842A78u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842A90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842AB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842AC8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842AE0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842AF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842B10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842B28u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842B40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842B50u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842B70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842B90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842B9Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842BA4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842BACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842BB4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842BBCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842BC4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842BE8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842BF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842C0Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842C30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842C40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842C4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842C54u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842C60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842C68u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842C74u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842C7Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842C88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842C90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842C98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842CA4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842CB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842CBCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842CE0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842D04u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842D28u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842D3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842D50u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842D68u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842D74u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842D7Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842D88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842DB4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842DBCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842DDCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842E4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842E54u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842E68u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842E70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842E7Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842E84u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842E8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842E98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842EA0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842EA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842EB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842EB8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842EC4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842ED0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842EDCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842EE4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842EE8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842EF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842F04u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842F18u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842F2Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842F3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842F4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842F60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842F70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842F78u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842F88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842F8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842F98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842FA4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842FACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842FB4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842FC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842FC8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842FD4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842FDCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842FE4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842FF0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x08842FF8u, &recomp_unit_0062, "recomp_unit_0062");
}
} // namespace psprecomp
