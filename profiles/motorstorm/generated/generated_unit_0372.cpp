#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0372[1018] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15,
    0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31,
    0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40,
    0, 0, 0, 0, 41, 0, 0, 42, 0, 43, 44, 0, 45, 0, 46, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0,
    69, 70, 0, 71, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 77, 0, 78, 79, 0, 80, 0, 81, 0, 0, 82, 0, 83,
    0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 93,
    0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0,
    0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 114, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122,
    0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 0,
    0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 0,
    143, 0, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0,
    162, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0,
    173, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 194, 0,
    0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0,
    212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 226,
    0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 229, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 236, 237,
    0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 242, 0, 243, 244, 0, 245, 0, 0, 0, 246, 0, 247, 248, 0, 249, 0, 0, 0, 250, 0,
    251, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0, 261, 0, 0, 0,
    0, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 276, 0, 0,
    277, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289,
};
void recomp_unit_0372_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08978004u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0372[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08978004;
    case 2u: goto L_08978014;
    case 3u: goto L_08978020;
    case 4u: goto L_08978030;
    case 5u: goto L_08978040;
    case 6u: goto L_08978044;
    case 7u: goto L_0897805C;
    case 8u: goto L_08978088;
    case 9u: goto L_08978094;
    case 10u: goto L_089780A4;
    case 11u: goto L_089780AC;
    case 12u: goto L_089780C8;
    case 13u: goto L_089780D0;
    case 14u: goto L_089780F8;
    case 15u: goto L_08978100;
    case 16u: goto L_08978108;
    case 17u: goto L_08978114;
    case 18u: goto L_0897811C;
    case 19u: goto L_08978130;
    case 20u: goto L_08978138;
    case 21u: goto L_08978148;
    case 22u: goto L_08978150;
    case 23u: goto L_08978154;
    case 24u: goto L_08978174;
    case 25u: goto L_089781B4;
    case 26u: goto L_089781BC;
    case 27u: goto L_089781CC;
    case 28u: goto L_089781D8;
    case 29u: goto L_089781F0;
    case 30u: goto L_089781F8;
    case 31u: goto L_08978200;
    case 32u: goto L_08978210;
    case 33u: goto L_0897821C;
    case 34u: goto L_08978234;
    case 35u: goto L_0897823C;
    case 36u: goto L_08978244;
    case 37u: goto L_0897824C;
    case 38u: goto L_08978268;
    case 39u: goto L_08978270;
    case 40u: goto L_08978280;
    case 41u: goto L_08978294;
    case 42u: goto L_089782A0;
    case 43u: goto L_089782A8;
    case 44u: goto L_089782AC;
    case 45u: goto L_089782B4;
    case 46u: goto L_089782BC;
    case 47u: goto L_089782C0;
    case 48u: goto L_089782C8;
    case 49u: goto L_089782D8;
    case 50u: goto L_089782E0;
    case 51u: goto L_089782F8;
    case 52u: goto L_08978300;
    case 53u: goto L_08978318;
    case 54u: goto L_08978330;
    case 55u: goto L_08978338;
    case 56u: goto L_08978340;
    case 57u: goto L_08978350;
    case 58u: goto L_08978358;
    case 59u: goto L_08978370;
    case 60u: goto L_08978378;
    case 61u: goto L_08978390;
    case 62u: goto L_089783A8;
    case 63u: goto L_089783B0;
    case 64u: goto L_089783CC;
    case 65u: goto L_089783D4;
    case 66u: goto L_089783E0;
    case 67u: goto L_089783F0;
    case 68u: goto L_089783FC;
    case 69u: goto L_08978404;
    case 70u: goto L_08978408;
    case 71u: goto L_08978410;
    case 72u: goto L_08978418;
    case 73u: goto L_08978424;
    case 74u: goto L_08978430;
    case 75u: goto L_0897843C;
    case 76u: goto L_08978444;
    case 77u: goto L_08978450;
    case 78u: goto L_08978458;
    case 79u: goto L_0897845C;
    case 80u: goto L_08978464;
    case 81u: goto L_0897846C;
    case 82u: goto L_08978478;
    case 83u: goto L_08978480;
    case 84u: goto L_08978488;
    case 85u: goto L_08978490;
    case 86u: goto L_0897849C;
    case 87u: goto L_089784A4;
    case 88u: goto L_089784C0;
    case 89u: goto L_089784C8;
    case 90u: goto L_089784D0;
    case 91u: goto L_089784EC;
    case 92u: goto L_089784F4;
    case 93u: goto L_08978500;
    case 94u: goto L_08978508;
    case 95u: goto L_08978514;
    case 96u: goto L_0897851C;
    case 97u: goto L_08978528;
    case 98u: goto L_08978530;
    case 99u: goto L_08978538;
    case 100u: goto L_08978544;
    case 101u: goto L_0897854C;
    case 102u: goto L_08978568;
    case 103u: goto L_08978574;
    case 104u: goto L_0897858C;
    case 105u: goto L_08978598;
    case 106u: goto L_089785A4;
    case 107u: goto L_089785AC;
    case 108u: goto L_089785B8;
    case 109u: goto L_089785C0;
    case 110u: goto L_089785C8;
    case 111u: goto L_089785D4;
    case 112u: goto L_089785DC;
    case 113u: goto L_089785E4;
    case 114u: goto L_089785EC;
    case 115u: goto L_089785F0;
    case 116u: goto L_08978614;
    case 117u: goto L_08978638;
    case 118u: goto L_08978644;
    case 119u: goto L_08978654;
    case 120u: goto L_08978660;
    case 121u: goto L_08978670;
    case 122u: goto L_08978680;
    case 123u: goto L_08978694;
    case 124u: goto L_089786A0;
    case 125u: goto L_089786A8;
    case 126u: goto L_089786B0;
    case 127u: goto L_089786C0;
    case 128u: goto L_089786CC;
    case 129u: goto L_089786DC;
    case 130u: goto L_089786E4;
    case 131u: goto L_089786EC;
    case 132u: goto L_089786F8;
    case 133u: goto L_08978710;
    case 134u: goto L_08978718;
    case 135u: goto L_08978728;
    case 136u: goto L_08978734;
    case 137u: goto L_08978744;
    case 138u: goto L_08978748;
    case 139u: goto L_0897875C;
    case 140u: goto L_08978768;
    case 141u: goto L_08978774;
    case 142u: goto L_0897877C;
    case 143u: goto L_08978784;
    case 144u: goto L_08978790;
    case 145u: goto L_0897879C;
    case 146u: goto L_089787A4;
    case 147u: goto L_089787AC;
    case 148u: goto L_089787B8;
    case 149u: goto L_089787C4;
    case 150u: goto L_089787DC;
    case 151u: goto L_089787E4;
    case 152u: goto L_089787F4;
    case 153u: goto L_08978800;
    case 154u: goto L_08978824;
    case 155u: goto L_08978830;
    case 156u: goto L_08978840;
    case 157u: goto L_08978848;
    case 158u: goto L_08978850;
    case 159u: goto L_0897885C;
    case 160u: goto L_08978870;
    case 161u: goto L_0897887C;
    case 162u: goto L_08978884;
    case 163u: goto L_0897888C;
    case 164u: goto L_08978894;
    case 165u: goto L_089788A0;
    case 166u: goto L_089788B0;
    case 167u: goto L_089788C0;
    case 168u: goto L_089788C8;
    case 169u: goto L_089788D0;
    case 170u: goto L_089788D8;
    case 171u: goto L_089788E0;
    case 172u: goto L_089788EC;
    case 173u: goto L_08978904;
    case 174u: goto L_0897890C;
    case 175u: goto L_0897891C;
    case 176u: goto L_08978928;
    case 177u: goto L_08978938;
    case 178u: goto L_08978948;
    case 179u: goto L_08978950;
    case 180u: goto L_0897895C;
    case 181u: goto L_08978964;
    case 182u: goto L_08978988;
    case 183u: goto L_08978994;
    case 184u: goto L_089789B8;
    case 185u: goto L_089789C4;
    case 186u: goto L_089789CC;
    case 187u: goto L_089789FC;
    case 188u: goto L_08978A0C;
    case 189u: goto L_08978A24;
    case 190u: goto L_08978A40;
    case 191u: goto L_08978A5C;
    case 192u: goto L_08978A68;
    case 193u: goto L_08978A74;
    case 194u: goto L_08978A7C;
    case 195u: goto L_08978A90;
    case 196u: goto L_08978A98;
    case 197u: goto L_08978AA8;
    case 198u: goto L_08978AB4;
    case 199u: goto L_08978AC4;
    case 200u: goto L_08978AD0;
    case 201u: goto L_08978AE4;
    case 202u: goto L_08978AEC;
    case 203u: goto L_08978B00;
    case 204u: goto L_08978B14;
    case 205u: goto L_08978B1C;
    case 206u: goto L_08978B30;
    case 207u: goto L_08978B38;
    case 208u: goto L_08978B4C;
    case 209u: goto L_08978B54;
    case 210u: goto L_08978B68;
    case 211u: goto L_08978B78;
    case 212u: goto L_08978B84;
    case 213u: goto L_08978B94;
    case 214u: goto L_08978BA0;
    case 215u: goto L_08978BB0;
    case 216u: goto L_08978BC0;
    case 217u: goto L_08978BE4;
    case 218u: goto L_08978C00;
    case 219u: goto L_08978C20;
    case 220u: goto L_08978C44;
    case 221u: goto L_08978C54;
    case 222u: goto L_08978C5C;
    case 223u: goto L_08978C64;
    case 224u: goto L_08978C6C;
    case 225u: goto L_08978C78;
    case 226u: goto L_08978C80;
    case 227u: goto L_08978C88;
    case 228u: goto L_08978CA4;
    case 229u: goto L_08978CAC;
    case 230u: goto L_08978CB0;
    case 231u: goto L_08978CC8;
    case 232u: goto L_08978CD8;
    case 233u: goto L_08978CE0;
    case 234u: goto L_08978CEC;
    case 235u: goto L_08978CF4;
    case 236u: goto L_08978CFC;
    case 237u: goto L_08978D00;
    case 238u: goto L_08978D08;
    case 239u: goto L_08978D18;
    case 240u: goto L_08978D20;
    case 241u: goto L_08978D2C;
    case 242u: goto L_08978D34;
    case 243u: goto L_08978D3C;
    case 244u: goto L_08978D40;
    case 245u: goto L_08978D48;
    case 246u: goto L_08978D58;
    case 247u: goto L_08978D60;
    case 248u: goto L_08978D64;
    case 249u: goto L_08978D6C;
    case 250u: goto L_08978D7C;
    case 251u: goto L_08978D84;
    case 252u: goto L_08978D88;
    case 253u: goto L_08978D90;
    case 254u: goto L_08978DA8;
    case 255u: goto L_08978DB4;
    case 256u: goto L_08978DBC;
    case 257u: goto L_08978DC4;
    case 258u: goto L_08978DDC;
    case 259u: goto L_08978DE4;
    case 260u: goto L_08978DEC;
    case 261u: goto L_08978DF4;
    case 262u: goto L_08978E0C;
    case 263u: goto L_08978E14;
    case 264u: goto L_08978E1C;
    case 265u: goto L_08978E34;
    case 266u: goto L_08978E3C;
    case 267u: goto L_08978E48;
    case 268u: goto L_08978E58;
    case 269u: goto L_08978E64;
    case 270u: goto L_08978E74;
    case 271u: goto L_08978E90;
    case 272u: goto L_08978EB4;
    case 273u: goto L_08978EC4;
    case 274u: goto L_08978EE4;
    case 275u: goto L_08978EEC;
    case 276u: goto L_08978EF8;
    case 277u: goto L_08978F04;
    case 278u: goto L_08978F0C;
    case 279u: goto L_08978F14;
    case 280u: goto L_08978F20;
    case 281u: goto L_08978F38;
    case 282u: goto L_08978F54;
    case 283u: goto L_08978F68;
    case 284u: goto L_08978F70;
    case 285u: goto L_08978F78;
    case 286u: goto L_08978F94;
    case 287u: goto L_08978FB8;
    case 288u: goto L_08978FCC;
    case 289u: goto L_08978FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08978004:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08978014u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08978014u) goto L_08978014;
    return;
L_08978014:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08978020u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08978020u) goto L_08978020;
    return;
L_08978020:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08978030u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x08978030u) goto L_08978030;
    return;
L_08978030:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1424), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08978040u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08978040u) goto L_08978040;
    return;
L_08978040:
    aot_gpr[2] = (0u | 0u);
    goto L_08978044;
L_08978044:
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
L_0897805C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08978088u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0371_entry, 371u, 70u, 0x089774C0u>(ctx, &aot_mem) && ctx.pc == 0x08978088u) goto L_08978088;
    return;
L_08978088:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089780A4;
      }
      goto L_08978094;
    }
L_08978094:
    aot_gpr[20] = (15u << 16u);
    aot_gpr[17] = (0u | 10000u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(16960));
      if (branch_taken) {
          goto L_089780AC;
      }
      goto L_089780A4;
    }
L_089780A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_08978154;
      }
      goto L_089780AC;
    }
L_089780AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1424)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(296));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089780C8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089780C8u) goto L_089780C8;
    return;
L_089780C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978114;
      }
      goto L_089780D0;
    }
L_089780D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(272));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (0u | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x089780F8u);
    aot_gpr[9] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089780F8u) goto L_089780F8;
    return;
L_089780F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978108;
      }
      goto L_08978100;
    }
L_08978100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978150;
      }
      goto L_08978108;
    }
L_08978108:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08978138;
      }
      goto L_08978114;
    }
L_08978114:
    aot_gpr[31] = (0x0897811Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_0897811C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08978138;
      }
      goto L_08978130;
    }
L_08978130:
    aot_gpr[17] = (15u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16960));
    goto L_08978138;
L_08978138:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978148u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978148u) goto L_08978148;
    return;
L_08978148:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089780AC;
      }
      goto L_08978150;
    }
L_08978150:
    aot_gpr[2] = (0u | 0u);
    goto L_08978154;
L_08978154:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978174:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089781B4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089781B4u) goto L_089781B4;
    return;
L_089781B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978270;
      }
      goto L_089781BC;
    }
L_089781BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089781CCu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x089781CCu) goto L_089781CC;
    return;
L_089781CC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978200;
      }
      goto L_089781D8;
    }
L_089781D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089781F0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089781F0u) goto L_089781F0;
    return;
L_089781F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978200;
      }
      goto L_089781F8;
    }
L_089781F8:
    aot_gpr[31] = (0x08978200u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 125u, 0x0897F78Cu>(ctx, &aot_mem) && ctx.pc == 0x08978200u) goto L_08978200;
    return;
L_08978200:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08978210u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08978210u) goto L_08978210;
    return;
L_08978210:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978244;
      }
      goto L_0897821C;
    }
L_0897821C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978234u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978234u) goto L_08978234;
    return;
L_08978234:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978244;
      }
      goto L_0897823C;
    }
L_0897823C:
    aot_gpr[31] = (0x08978244u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 125u, 0x0897F78Cu>(ctx, &aot_mem) && ctx.pc == 0x08978244u) goto L_08978244;
    return;
L_08978244:
    aot_gpr[31] = (0x0897824Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0371_entry, 371u, 136u, 0x089778D0u>(ctx, &aot_mem) && ctx.pc == 0x0897824Cu) goto L_0897824C;
    return;
L_0897824C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(312));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08978268u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978268u) goto L_08978268;
    return;
L_08978268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089785F0;
      }
      goto L_08978270;
    }
L_08978270:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08978280u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08978280u) goto L_08978280;
    return;
L_08978280:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08978294u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08978294u) goto L_08978294;
    return;
L_08978294:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089782AC;
      }
      goto L_089782A0;
    }
L_089782A0:
    aot_gpr[31] = (0x089782A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 53u, 0x08975314u>(ctx, &aot_mem) && ctx.pc == 0x089782A8u) goto L_089782A8;
    return;
L_089782A8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_089782AC;
L_089782AC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089782C0;
      }
      goto L_089782B4;
    }
L_089782B4:
    aot_gpr[31] = (0x089782BCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 93u, 0x089754F4u>(ctx, &aot_mem) && ctx.pc == 0x089782BCu) goto L_089782BC;
    return;
L_089782BC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_089782C0;
L_089782C0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978338;
      }
      goto L_089782C8;
    }
L_089782C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978338;
      }
      goto L_089782D8;
    }
L_089782D8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978318;
      }
      goto L_089782E0;
    }
L_089782E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089782F8u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089782F8u) goto L_089782F8;
    return;
L_089782F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978318;
      }
      goto L_08978300;
    }
L_08978300:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978318u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978318u) goto L_08978318;
    return;
L_08978318:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978330u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978330u) goto L_08978330;
    return;
L_08978330:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    goto L_08978338;
L_08978338:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089783B0;
      }
      goto L_08978340;
    }
L_08978340:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089783B0;
      }
      goto L_08978350;
    }
L_08978350:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978390;
      }
      goto L_08978358;
    }
L_08978358:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978370u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978370u) goto L_08978370;
    return;
L_08978370:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978390;
      }
      goto L_08978378;
    }
L_08978378:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978390u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978390u) goto L_08978390;
    return;
L_08978390:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089783A8u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089783A8u) goto L_089783A8;
    return;
L_089783A8:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    goto L_089783B0;
L_089783B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 2048u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089783CCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089783CCu) goto L_089783CC;
    return;
L_089783CC:
    aot_gpr[31] = (0x089783D4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 210u, 0x08976D24u>(ctx, &aot_mem) && ctx.pc == 0x089783D4u) goto L_089783D4;
    return;
L_089783D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[31] = (0x089783E0u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 128u, 0x08974784u>(ctx, &aot_mem) && ctx.pc == 0x089783E0u) goto L_089783E0;
    return;
L_089783E0:
    aot_gpr[5] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[21] == aot_gpr[6];
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08978404;
      }
      goto L_089783F0;
    }
L_089783F0:
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[21] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08978408;
      }
      goto L_089783FC;
    }
L_089783FC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978408;
      }
      goto L_08978404;
    }
L_08978404:
    aot_gpr[4] = (0u | 1u);
    goto L_08978408;
L_08978408:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[21] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08978424;
      }
      goto L_08978410;
    }
L_08978410:
    aot_gpr[31] = (0x08978418u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 122u, 0x0897F75Cu>(ctx, &aot_mem) && ctx.pc == 0x08978418u) goto L_08978418;
    return;
L_08978418:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08978430;
      }
      goto L_08978424;
    }
L_08978424:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21036)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21040)));
    goto L_08978430;
L_08978430:
    aot_gpr[6] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08978458;
      }
      goto L_0897843C;
    }
L_0897843C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08978458;
      }
      goto L_08978444;
    }
L_08978444:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08978450u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 14u, 0x089790B0u>(ctx, &aot_mem) && ctx.pc == 0x08978450u) goto L_08978450;
    return;
L_08978450:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897845C;
      }
      goto L_08978458;
    }
L_08978458:
    aot_gpr[17] = (0u | 1u);
    goto L_0897845C;
L_0897845C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08978478;
      }
      goto L_08978464;
    }
L_08978464:
    aot_gpr[31] = (0x0897846Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 122u, 0x0897F75Cu>(ctx, &aot_mem) && ctx.pc == 0x0897846Cu) goto L_0897846C;
    return;
L_0897846C:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08978480;
      }
      goto L_08978478;
    }
L_08978478:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21036)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21040)));
    goto L_08978480;
L_08978480:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897849C;
      }
      goto L_08978488;
    }
L_08978488:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897849C;
      }
      goto L_08978490;
    }
L_08978490:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0897849Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 14u, 0x089790B0u>(ctx, &aot_mem) && ctx.pc == 0x0897849Cu) goto L_0897849C;
    return;
L_0897849C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089785DC;
      }
      goto L_089784A4;
    }
L_089784A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 256u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089784C0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089784C0u) goto L_089784C0;
    return;
L_089784C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089785DC;
      }
      goto L_089784C8;
    }
L_089784C8:
    aot_gpr[31] = (0x089784D0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1256));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 123u, 0x08979824u>(ctx, &aot_mem) && ctx.pc == 0x089784D0u) goto L_089784D0;
    return;
L_089784D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089784ECu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089784ECu) goto L_089784EC;
    return;
L_089784EC:
    aot_gpr[31] = (0x089784F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0371_entry, 371u, 46u, 0x08977370u>(ctx, &aot_mem) && ctx.pc == 0x089784F4u) goto L_089784F4;
    return;
L_089784F4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978538;
      }
      goto L_08978500;
    }
L_08978500:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978514;
      }
      goto L_08978508;
    }
L_08978508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897854C;
      }
      goto L_08978514;
    }
L_08978514:
    aot_gpr[31] = (0x0897851Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 197u, 0x08975B64u>(ctx, &aot_mem) && ctx.pc == 0x0897851Cu) goto L_0897851C;
    return;
L_0897851C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x08978528u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x08978528u) goto L_08978528;
    return;
L_08978528:
    aot_gpr[31] = (0x08978530u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 105u, 0x08974624u>(ctx, &aot_mem) && ctx.pc == 0x08978530u) goto L_08978530;
    return;
L_08978530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089785F0;
      }
      goto L_08978538;
    }
L_08978538:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x08978544u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x08978544u) goto L_08978544;
    return;
L_08978544:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089785F0;
      }
      goto L_0897854C;
    }
L_0897854C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(312));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08978568u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978568u) goto L_08978568;
    return;
L_08978568:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089785AC;
      }
      goto L_08978574;
    }
L_08978574:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897858Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897858Cu) goto L_0897858C;
    return;
L_0897858C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089785C0;
      }
      goto L_08978598;
    }
L_08978598:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x089785A4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x089785A4u) goto L_089785A4;
    return;
L_089785A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089785F0;
      }
      goto L_089785AC;
    }
L_089785AC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x089785B8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x089785B8u) goto L_089785B8;
    return;
L_089785B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089785F0;
      }
      goto L_089785C0;
    }
L_089785C0:
    aot_gpr[31] = (0x089785C8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 197u, 0x08975B64u>(ctx, &aot_mem) && ctx.pc == 0x089785C8u) goto L_089785C8;
    return;
L_089785C8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x089785D4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x089785D4u) goto L_089785D4;
    return;
L_089785D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089785F0;
      }
      goto L_089785DC;
    }
L_089785DC:
    aot_gpr[31] = (0x089785E4u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_089785E4:
    aot_gpr[31] = (0x089785ECu);
    // nop
    ctx.pc = 0x08A5B034u;
    return;
L_089785EC:
    aot_gpr[2] = (0u | 0u);
    goto L_089785F0;
L_089785F0:
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
L_08978614:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08978638u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08978638u) goto L_08978638;
    return;
L_08978638:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08978644u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 242u, 0x0897AEA0u>(ctx, &aot_mem) && ctx.pc == 0x08978644u) goto L_08978644;
    return;
L_08978644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08978660;
      }
      goto L_08978654;
    }
L_08978654:
    aot_gpr[4] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20876)));
      if (branch_taken) {
          goto L_08978670;
      }
      goto L_08978660;
    }
L_08978660:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08978670u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 148u, 0x08974910u>(ctx, &aot_mem) && ctx.pc == 0x08978670u) goto L_08978670;
    return;
L_08978670:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978680:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089786A8;
      }
      goto L_08978694;
    }
L_08978694:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089786B0;
      }
      goto L_089786A0;
    }
L_089786A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_089786C0;
      }
      goto L_089786A8;
    }
L_089786A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_089786C0;
      }
      goto L_089786B0;
    }
L_089786B0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089786C0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 190u, 0x08974BC0u>(ctx, &aot_mem) && ctx.pc == 0x089786C0u) goto L_089786C0;
    return;
L_089786C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089786CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089786E4;
      }
      goto L_089786DC;
    }
L_089786DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_089786EC;
      }
      goto L_089786E4;
    }
L_089786E4:
    aot_gpr[31] = (0x089786ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 149u, 0x08975810u>(ctx, &aot_mem) && ctx.pc == 0x089786ECu) goto L_089786EC;
    return;
L_089786EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089786F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08978718;
      }
      goto L_08978710;
    }
L_08978710:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_08978728;
      }
      goto L_08978718;
    }
L_08978718:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08978728u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 252u, 0x08976F40u>(ctx, &aot_mem) && ctx.pc == 0x08978728u) goto L_08978728;
    return;
L_08978728:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978734:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978748;
      }
      goto L_08978744;
    }
L_08978744:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08978748;
L_08978748:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897875Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897875Cu) goto L_0897875C;
    return;
L_0897875C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08978768u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 243u, 0x0897AEA8u>(ctx, &aot_mem) && ctx.pc == 0x08978768u) goto L_08978768;
    return;
L_08978768:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08978790;
      }
      goto L_08978774;
    }
L_08978774:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978784;
      }
      goto L_0897877C;
    }
L_0897877C:
    aot_gpr[4] = (0u | 33u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08978784;
L_08978784:
    aot_gpr[4] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20880)));
      if (branch_taken) {
          goto L_089787B8;
      }
      goto L_08978790;
    }
L_08978790:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089787B8;
      }
      goto L_0897879C;
    }
L_0897879C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089787AC;
      }
      goto L_089787A4;
    }
L_089787A4:
    aot_gpr[4] = (0u | 33u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089787AC;
L_089787AC:
    aot_gpr[4] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20880)));
      if (branch_taken) {
          goto L_089787B8;
      }
      goto L_089787B8;
    }
L_089787B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089787C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089787E4;
      }
      goto L_089787DC;
    }
L_089787DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_089787F4;
      }
      goto L_089787E4;
    }
L_089787E4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089787F4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 226u, 0x08976DE4u>(ctx, &aot_mem) && ctx.pc == 0x089787F4u) goto L_089787F4;
    return;
L_089787F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978800:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08978824u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08978824u) goto L_08978824;
    return;
L_08978824:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08978830u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 243u, 0x0897AEA8u>(ctx, &aot_mem) && ctx.pc == 0x08978830u) goto L_08978830;
    return;
L_08978830:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0897885C;
      }
      goto L_08978840;
    }
L_08978840:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978850;
      }
      goto L_08978848;
    }
L_08978848:
    aot_gpr[5] = (0u | 33u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08978850;
L_08978850:
    aot_gpr[4] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20872)));
      if (branch_taken) {
          goto L_089788A0;
      }
      goto L_0897885C;
    }
L_0897885C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08978870u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 239u, 0x08976EC4u>(ctx, &aot_mem) && ctx.pc == 0x08978870u) goto L_08978870;
    return;
L_08978870:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897887C;
      }
      goto L_0897887C;
    }
L_0897887C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089788A0;
      }
      goto L_08978884;
    }
L_08978884:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978894;
      }
      goto L_0897888C;
    }
L_0897888C:
    aot_gpr[5] = (0u | 44u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08978894;
L_08978894:
    aot_gpr[4] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20872)));
      if (branch_taken) {
          goto L_089788A0;
      }
      goto L_089788A0;
    }
L_089788A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089788B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089788D0;
      }
      goto L_089788C0;
    }
L_089788C0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089788D8;
      }
      goto L_089788C8;
    }
L_089788C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 44u);
      if (branch_taken) {
          goto L_089788E0;
      }
      goto L_089788D0;
    }
L_089788D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_089788E0;
      }
      goto L_089788D8;
    }
L_089788D8:
    aot_gpr[31] = (0x089788E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 94u, 0x089754FCu>(ctx, &aot_mem) && ctx.pc == 0x089788E0u) goto L_089788E0;
    return;
L_089788E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089788EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0897890C;
      }
      goto L_08978904;
    }
L_08978904:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_0897891C;
      }
      goto L_0897890C;
    }
L_0897890C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0897891Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 211u, 0x08976D2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897891Cu) goto L_0897891C;
    return;
L_0897891C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978928:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978948;
      }
      goto L_08978938;
    }
L_08978938:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20860)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20864)));
      if (branch_taken) {
          goto L_08978950;
      }
      goto L_08978948;
    }
L_08978948:
    aot_gpr[31] = (0x08978950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 214u, 0x08976D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08978950u) goto L_08978950;
    return;
L_08978950:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897895C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978964:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978988u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978988u) goto L_08978988;
    return;
L_08978988:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978994:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089789B8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089789B8u) goto L_089789B8;
    return;
L_089789B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089789C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089789CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7136));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089789FCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20848));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 127u, 0x0897985Cu>(ctx, &aot_mem) && ctx.pc == 0x089789FCu) goto L_089789FC;
    return;
L_089789FC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(188));
    aot_gpr[31] = (0x08978A0Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20836));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 127u, 0x0897985Cu>(ctx, &aot_mem) && ctx.pc == 0x08978A0Cu) goto L_08978A0C;
    return;
L_08978A0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978A24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08978A7C;
      }
      goto L_08978A40;
    }
L_08978A40:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7136));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(188));
    aot_gpr[31] = (0x08978A5Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 156u, 0x08979A74u>(ctx, &aot_mem) && ctx.pc == 0x08978A5Cu) goto L_08978A5C;
    return;
L_08978A5C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08978A68u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 156u, 0x08979A74u>(ctx, &aot_mem) && ctx.pc == 0x08978A68u) goto L_08978A68;
    return;
L_08978A68:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978A7C;
      }
      goto L_08978A74;
    }
L_08978A74:
    aot_gpr[31] = (0x08978A7Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08978A7Cu) goto L_08978A7C;
    return;
L_08978A7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978A90:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978A98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08978AA8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x08978AA8u) goto L_08978AA8;
    return;
L_08978AA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978AB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08978AC4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x08978AC4u) goto L_08978AC4;
    return;
L_08978AC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978AD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08978AE4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08978A98;
L_08978AE4:
    aot_gpr[31] = (0x08978AECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08978AB4;
L_08978AEC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978B00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08978B14u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08978A98;
L_08978B14:
    aot_gpr[31] = (0x08978B1Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08978AB4;
L_08978B1C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978B30:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978B38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08978B4Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08978A98;
L_08978B4C:
    aot_gpr[31] = (0x08978B54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08978AB4;
L_08978B54:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978B68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08978B78u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 163u, 0x08979AE0u>(ctx, &aot_mem) && ctx.pc == 0x08978B78u) goto L_08978B78;
    return;
L_08978B78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978B84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08978B94u);
    aot_gpr[4] = (0u | 40000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08978B94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978BA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08978BB0u);
    // nop
    goto L_08978B84;
L_08978BB0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978BC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978C5C;
      }
      goto L_08978BE4;
    }
L_08978BE4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978C00u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978C00u) goto L_08978C00;
    return;
L_08978C00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(504)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08978C20u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978C20u) goto L_08978C20;
    return;
L_08978C20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(504)));
    aot_gpr[18] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 256u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978C44u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978C44u) goto L_08978C44;
    return;
L_08978C44:
    aot_gpr[4] = (aot_gpr[17] | aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978C78;
      }
      goto L_08978C54;
    }
L_08978C54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
      if (branch_taken) {
          goto L_08978C64;
      }
      goto L_08978C5C;
    }
L_08978C5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08978CB0;
      }
      goto L_08978C64;
    }
L_08978C64:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978C78;
      }
      goto L_08978C6C;
    }
L_08978C6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978C88;
      }
      goto L_08978C78;
    }
L_08978C78:
    aot_gpr[31] = (0x08978C80u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08978C80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08978CB0;
      }
      goto L_08978C88;
    }
L_08978C88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08978CA4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978CA4u) goto L_08978CA4;
    return;
L_08978CA4:
    aot_gpr[31] = (0x08978CACu);
    aot_gpr[4] = (0u | 4000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08978CAC:
    aot_gpr[2] = (0u | 0u);
    goto L_08978CB0;
L_08978CB0:
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
L_08978CC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08978CEC;
      }
      goto L_08978CD8;
    }
L_08978CD8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08978CF4;
      }
      goto L_08978CE0;
    }
L_08978CE0:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08978CFC;
      }
      goto L_08978CEC;
    }
L_08978CEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08978D00;
      }
      goto L_08978CF4;
    }
L_08978CF4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08978CEC;
      }
      goto L_08978CFC;
    }
L_08978CFC:
    aot_gpr[2] = (0u | 1u);
    goto L_08978D00;
L_08978D00:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978D08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08978D2C;
      }
      goto L_08978D18;
    }
L_08978D18:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 10 ? 1u : 0u);
        goto L_08978D34;
    }
    goto L_08978D20;
L_08978D20:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978D3C;
      }
      goto L_08978D2C;
    }
L_08978D2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08978D40;
      }
      goto L_08978D34;
    }
L_08978D34:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978D2C;
      }
      goto L_08978D3C;
    }
L_08978D3C:
    aot_gpr[2] = (0u | 1u);
    goto L_08978D40;
L_08978D40:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978D48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    aot_gpr[5] = (0u | 13u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08978D60;
      }
      goto L_08978D58;
    }
L_08978D58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08978D64;
      }
      goto L_08978D60;
    }
L_08978D60:
    aot_gpr[2] = (0u | 0u);
    goto L_08978D64;
L_08978D64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978D6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    aot_gpr[5] = (0u | 14u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08978D84;
      }
      goto L_08978D7C;
    }
L_08978D7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08978D88;
      }
      goto L_08978D84;
    }
L_08978D84:
    aot_gpr[2] = (0u | 0u);
    goto L_08978D88;
L_08978D88:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978D90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08978DDC;
      }
      goto L_08978DA8;
    }
L_08978DA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978DDC;
      }
      goto L_08978DB4;
    }
L_08978DB4:
    aot_gpr[31] = (0x08978DBCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08978CC8;
L_08978DBC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978DE4;
      }
      goto L_08978DC4;
    }
L_08978DC4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20824));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_08978E64;
      }
      goto L_08978DDC;
    }
L_08978DDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 44u);
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978DE4;
    }
L_08978DE4:
    aot_gpr[31] = (0x08978DECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08978D08;
L_08978DEC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978E0C;
      }
      goto L_08978DF4;
    }
L_08978DF4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20812));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_08978E64;
      }
      goto L_08978E0C;
    }
L_08978E0C:
    aot_gpr[31] = (0x08978E14u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08978D48;
L_08978E14:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978E34;
      }
      goto L_08978E1C;
    }
L_08978E1C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20800));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_08978E64;
      }
      goto L_08978E34;
    }
L_08978E34:
    aot_gpr[31] = (0x08978E3Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08978D6C;
L_08978E3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_08978E58;
      }
      goto L_08978E48;
    }
L_08978E48:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20784));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08978E64;
      }
      goto L_08978E58;
    }
L_08978E58:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20768));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_08978E64;
L_08978E64:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978E74u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978E74u) goto L_08978E74;
    return;
L_08978E74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08978E90u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978E90u) goto L_08978E90;
    return;
L_08978E90:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978EB4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978EB4u) goto L_08978EB4;
    return;
L_08978EB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978EC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08978EE4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1380));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x08978EE4u) goto L_08978EE4;
    return;
L_08978EE4:
    aot_gpr[31] = (0x08978EECu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1196));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x08978EECu) goto L_08978EEC;
    return;
L_08978EEC:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(512));
    aot_gpr[31] = (0x08978EF8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 116u, 0x0897E8E4u>(ctx, &aot_mem) && ctx.pc == 0x08978EF8u) goto L_08978EF8;
    return;
L_08978EF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1192)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978F0C;
      }
      goto L_08978F04;
    }
L_08978F04:
    aot_gpr[31] = (0x08978F0Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 198u, 0x0897EEB4u>(ctx, &aot_mem) && ctx.pc == 0x08978F0Cu) goto L_08978F0C;
    return;
L_08978F0C:
    aot_gpr[31] = (0x08978F14u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 94u, 0x0897E76Cu>(ctx, &aot_mem) && ctx.pc == 0x08978F14u) goto L_08978F14;
    return;
L_08978F14:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978F38;
      }
      goto L_08978F20;
    }
L_08978F20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978F38u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978F38u) goto L_08978F38;
    return;
L_08978F38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08978F54u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978F54u) goto L_08978F54;
    return;
L_08978F54:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978F68:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 47u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978F70:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978F78:
    aot_gpr[5] = (15395u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (18351u << 16u);
      if (branch_taken) {
          goto L_08978FCC;
      }
      goto L_08978F94;
    }
L_08978F94:
    aot_gpr[5] = (aot_gpr[5] | 51200u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = aot_fpr[14] / aot_fpr[12];
    aot_gpr[5] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978FE8;
      }
      goto L_08978FB8;
    }
L_08978FB8:
    aot_fpr[12] = aot_fpr[14] / aot_fpr[12];
    aot_gpr[7] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 2u, 0x08979004u>(ctx, &aot_mem); return;
      }
      goto L_08978FCC;
    }
L_08978FCC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20748)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20752)));
    aot_gpr[2] = (0u | 52u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1156), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1152), aot_gpr[6]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 3u, 0x08979010u>(ctx, &aot_mem); return;
      }
      goto L_08978FE8;
    }
L_08978FE8:
    aot_fpr[12] = aot_fpr[14] / aot_fpr[12];
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[7] = (0u | 0u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.pc = 0x08979000u; return;
}

void recomp_unit_0372(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0372_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_372(Runtime &runtime) {
    runtime.register_generated_unit(372u, 0x08978000u, 4096u, &recomp_unit_0372, &recomp_unit_0372_entry);
    runtime.register_function(0x08978004u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978014u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978020u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978030u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978040u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978044u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897805Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978088u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978094u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089780A4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089780ACu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089780C8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089780D0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089780F8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978100u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978108u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978114u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897811Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978130u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978138u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978148u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978150u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978154u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978174u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089781B4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089781BCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089781CCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089781D8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089781F0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089781F8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978200u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978210u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897821Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978234u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897823Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978244u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897824Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978268u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978270u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978280u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978294u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089782A0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089782A8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089782ACu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089782B4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089782BCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089782C0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089782C8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089782D8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089782E0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089782F8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978300u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978318u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978330u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978338u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978340u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978350u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978358u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978370u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978378u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978390u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089783A8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089783B0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089783CCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089783D4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089783E0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089783F0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089783FCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978404u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978408u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978410u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978418u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978424u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978430u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897843Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978444u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978450u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978458u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897845Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978464u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897846Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978478u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978480u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978488u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978490u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897849Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089784A4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089784C0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089784C8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089784D0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089784ECu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089784F4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978500u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978508u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978514u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897851Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978528u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978530u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978538u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978544u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897854Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978568u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978574u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897858Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978598u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089785A4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089785ACu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089785B8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089785C0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089785C8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089785D4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089785DCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089785E4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089785ECu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089785F0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978614u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978638u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978644u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978654u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978660u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978670u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978680u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978694u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089786A0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089786A8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089786B0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089786C0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089786CCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089786DCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089786E4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089786ECu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089786F8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978710u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978718u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978728u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978734u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978744u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978748u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897875Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978768u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978774u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897877Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978784u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978790u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897879Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089787A4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089787ACu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089787B8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089787C4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089787DCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089787E4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089787F4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978800u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978824u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978830u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978840u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978848u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978850u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897885Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978870u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897887Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978884u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897888Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978894u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089788A0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089788B0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089788C0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089788C8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089788D0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089788D8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089788E0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089788ECu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978904u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897890Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897891Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978928u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978938u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978948u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978950u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x0897895Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978964u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978988u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978994u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089789B8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089789C4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089789CCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x089789FCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978A0Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978A24u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978A40u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978A5Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978A68u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978A74u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978A7Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978A90u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978A98u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978AA8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978AB4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978AC4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978AD0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978AE4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978AECu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978B00u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978B14u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978B1Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978B30u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978B38u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978B4Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978B54u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978B68u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978B78u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978B84u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978B94u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978BA0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978BB0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978BC0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978BE4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978C00u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978C20u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978C44u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978C54u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978C5Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978C64u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978C6Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978C78u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978C80u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978C88u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978CA4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978CACu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978CB0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978CC8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978CD8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978CE0u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978CECu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978CF4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978CFCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D00u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D08u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D18u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D20u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D2Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D34u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D3Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D40u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D48u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D58u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D60u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D64u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D6Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D7Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D84u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D88u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978D90u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978DA8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978DB4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978DBCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978DC4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978DDCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978DE4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978DECu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978DF4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978E0Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978E14u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978E1Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978E34u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978E3Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978E48u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978E58u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978E64u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978E74u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978E90u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978EB4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978EC4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978EE4u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978EECu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978EF8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978F04u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978F0Cu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978F14u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978F20u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978F38u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978F54u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978F68u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978F70u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978F78u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978F94u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978FB8u, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978FCCu, &recomp_unit_0372, "recomp_unit_0372");
    runtime.register_function(0x08978FE8u, &recomp_unit_0372, "recomp_unit_0372");
}
} // namespace psprecomp
