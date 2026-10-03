#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0565[1024] = {
    1, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 12, 0, 13, 14, 0,
    15, 0, 16, 17, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0,
    0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 30, 31, 0, 32, 0, 0, 33, 0, 0, 0, 34, 35, 0, 0, 36, 0, 0, 37,
    0, 38, 39, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 53, 0, 0, 54, 55, 0, 0, 0, 56, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 68, 69, 0, 0, 70, 0, 71, 0,
    72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 76, 0, 0, 77, 0, 78, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0,
    0, 82, 83, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92,
    0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98,
    0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    105, 0, 0, 106, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120,
    0, 121, 0, 122, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0,
    0, 132, 0, 0, 133, 134, 0, 135, 0, 136, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 143, 0,
    144, 0, 145, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0,
    151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 0, 163, 0, 164, 165, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173,
    0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 185, 186, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 207, 0, 208, 0, 209,
    0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 218, 219, 0, 0, 0,
    0, 0, 0, 0, 220, 221, 0, 0, 222, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0,
    0, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 239, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 242,
    0, 243, 0, 0, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 250, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 257, 258, 0, 259, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 263,
};
void recomp_unit_0565_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A39000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0565[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A39000;
    case 2u: goto L_08A39004;
    case 3u: goto L_08A39014;
    case 4u: goto L_08A39020;
    case 5u: goto L_08A3902C;
    case 6u: goto L_08A39038;
    case 7u: goto L_08A39040;
    case 8u: goto L_08A39048;
    case 9u: goto L_08A39050;
    case 10u: goto L_08A39058;
    case 11u: goto L_08A39060;
    case 12u: goto L_08A3906C;
    case 13u: goto L_08A39074;
    case 14u: goto L_08A39078;
    case 15u: goto L_08A39080;
    case 16u: goto L_08A39088;
    case 17u: goto L_08A3908C;
    case 18u: goto L_08A39098;
    case 19u: goto L_08A390A4;
    case 20u: goto L_08A390B0;
    case 21u: goto L_08A390BC;
    case 22u: goto L_08A390CC;
    case 23u: goto L_08A390D8;
    case 24u: goto L_08A390EC;
    case 25u: goto L_08A390F4;
    case 26u: goto L_08A3910C;
    case 27u: goto L_08A3911C;
    case 28u: goto L_08A39124;
    case 29u: goto L_08A3912C;
    case 30u: goto L_08A39138;
    case 31u: goto L_08A3913C;
    case 32u: goto L_08A39144;
    case 33u: goto L_08A39150;
    case 34u: goto L_08A39160;
    case 35u: goto L_08A39164;
    case 36u: goto L_08A39170;
    case 37u: goto L_08A3917C;
    case 38u: goto L_08A39184;
    case 39u: goto L_08A39188;
    case 40u: goto L_08A39198;
    case 41u: goto L_08A391A0;
    case 42u: goto L_08A391A8;
    case 43u: goto L_08A391B0;
    case 44u: goto L_08A391B8;
    case 45u: goto L_08A391BC;
    case 46u: goto L_08A391CC;
    case 47u: goto L_08A391D8;
    case 48u: goto L_08A391F0;
    case 49u: goto L_08A39204;
    case 50u: goto L_08A39210;
    case 51u: goto L_08A39224;
    case 52u: goto L_08A3922C;
    case 53u: goto L_08A39230;
    case 54u: goto L_08A3923C;
    case 55u: goto L_08A39240;
    case 56u: goto L_08A39250;
    case 57u: goto L_08A39254;
    case 58u: goto L_08A39260;
    case 59u: goto L_08A39290;
    case 60u: goto L_08A392B0;
    case 61u: goto L_08A392BC;
    case 62u: goto L_08A39300;
    case 63u: goto L_08A39314;
    case 64u: goto L_08A39324;
    case 65u: goto L_08A39340;
    case 66u: goto L_08A39350;
    case 67u: goto L_08A39358;
    case 68u: goto L_08A39360;
    case 69u: goto L_08A39364;
    case 70u: goto L_08A39370;
    case 71u: goto L_08A39378;
    case 72u: goto L_08A39380;
    case 73u: goto L_08A39388;
    case 74u: goto L_08A3939C;
    case 75u: goto L_08A393B8;
    case 76u: goto L_08A393BC;
    case 77u: goto L_08A393C8;
    case 78u: goto L_08A393D0;
    case 79u: goto L_08A393D4;
    case 80u: goto L_08A393E0;
    case 81u: goto L_08A393F4;
    case 82u: goto L_08A39404;
    case 83u: goto L_08A39408;
    case 84u: goto L_08A3941C;
    case 85u: goto L_08A39424;
    case 86u: goto L_08A3942C;
    case 87u: goto L_08A39434;
    case 88u: goto L_08A39440;
    case 89u: goto L_08A39448;
    case 90u: goto L_08A39464;
    case 91u: goto L_08A39470;
    case 92u: goto L_08A3947C;
    case 93u: goto L_08A39488;
    case 94u: goto L_08A39498;
    case 95u: goto L_08A394B4;
    case 96u: goto L_08A394DC;
    case 97u: goto L_08A394EC;
    case 98u: goto L_08A394FC;
    case 99u: goto L_08A39508;
    case 100u: goto L_08A3951C;
    case 101u: goto L_08A39528;
    case 102u: goto L_08A3953C;
    case 103u: goto L_08A39548;
    case 104u: goto L_08A3957C;
    case 105u: goto L_08A39580;
    case 106u: goto L_08A3958C;
    case 107u: goto L_08A39590;
    case 108u: goto L_08A3959C;
    case 109u: goto L_08A395A8;
    case 110u: goto L_08A395B4;
    case 111u: goto L_08A395BC;
    case 112u: goto L_08A395C4;
    case 113u: goto L_08A395CC;
    case 114u: goto L_08A395D4;
    case 115u: goto L_08A395F4;
    case 116u: goto L_08A3960C;
    case 117u: goto L_08A39618;
    case 118u: goto L_08A39630;
    case 119u: goto L_08A3963C;
    case 120u: goto L_08A3967C;
    case 121u: goto L_08A39684;
    case 122u: goto L_08A3968C;
    case 123u: goto L_08A39690;
    case 124u: goto L_08A39698;
    case 125u: goto L_08A396A0;
    case 126u: goto L_08A396C8;
    case 127u: goto L_08A396D0;
    case 128u: goto L_08A396DC;
    case 129u: goto L_08A396E8;
    case 130u: goto L_08A396F0;
    case 131u: goto L_08A396F8;
    case 132u: goto L_08A39704;
    case 133u: goto L_08A39710;
    case 134u: goto L_08A39714;
    case 135u: goto L_08A3971C;
    case 136u: goto L_08A39724;
    case 137u: goto L_08A39728;
    case 138u: goto L_08A39730;
    case 139u: goto L_08A3973C;
    case 140u: goto L_08A39744;
    case 141u: goto L_08A3976C;
    case 142u: goto L_08A39774;
    case 143u: goto L_08A39778;
    case 144u: goto L_08A39780;
    case 145u: goto L_08A39788;
    case 146u: goto L_08A3978C;
    case 147u: goto L_08A397BC;
    case 148u: goto L_08A397E4;
    case 149u: goto L_08A397F0;
    case 150u: goto L_08A397F8;
    case 151u: goto L_08A39800;
    case 152u: goto L_08A3980C;
    case 153u: goto L_08A39814;
    case 154u: goto L_08A3981C;
    case 155u: goto L_08A39828;
    case 156u: goto L_08A39830;
    case 157u: goto L_08A39858;
    case 158u: goto L_08A39880;
    case 159u: goto L_08A398B0;
    case 160u: goto L_08A398BC;
    case 161u: goto L_08A398C4;
    case 162u: goto L_08A398CC;
    case 163u: goto L_08A398D8;
    case 164u: goto L_08A398E0;
    case 165u: goto L_08A398E4;
    case 166u: goto L_08A3990C;
    case 167u: goto L_08A39914;
    case 168u: goto L_08A39920;
    case 169u: goto L_08A39950;
    case 170u: goto L_08A39964;
    case 171u: goto L_08A3996C;
    case 172u: goto L_08A39974;
    case 173u: goto L_08A3997C;
    case 174u: goto L_08A39984;
    case 175u: goto L_08A3998C;
    case 176u: goto L_08A39994;
    case 177u: goto L_08A399AC;
    case 178u: goto L_08A399BC;
    case 179u: goto L_08A399D0;
    case 180u: goto L_08A399E4;
    case 181u: goto L_08A399F8;
    case 182u: goto L_08A39A0C;
    case 183u: goto L_08A39A24;
    case 184u: goto L_08A39A2C;
    case 185u: goto L_08A39A38;
    case 186u: goto L_08A39A3C;
    case 187u: goto L_08A39A40;
    case 188u: goto L_08A39A54;
    case 189u: goto L_08A39A60;
    case 190u: goto L_08A39A78;
    case 191u: goto L_08A39A80;
    case 192u: goto L_08A39AAC;
    case 193u: goto L_08A39AE4;
    case 194u: goto L_08A39B24;
    case 195u: goto L_08A39B6C;
    case 196u: goto L_08A39B78;
    case 197u: goto L_08A39BA0;
    case 198u: goto L_08A39BB0;
    case 199u: goto L_08A39BD8;
    case 200u: goto L_08A39BE0;
    case 201u: goto L_08A39C18;
    case 202u: goto L_08A39C40;
    case 203u: goto L_08A39CC0;
    case 204u: goto L_08A39CCC;
    case 205u: goto L_08A39CD4;
    case 206u: goto L_08A39CE8;
    case 207u: goto L_08A39CEC;
    case 208u: goto L_08A39CF4;
    case 209u: goto L_08A39CFC;
    case 210u: goto L_08A39D0C;
    case 211u: goto L_08A39D14;
    case 212u: goto L_08A39D1C;
    case 213u: goto L_08A39D30;
    case 214u: goto L_08A39D38;
    case 215u: goto L_08A39D40;
    case 216u: goto L_08A39D60;
    case 217u: goto L_08A39D68;
    case 218u: goto L_08A39D6C;
    case 219u: goto L_08A39D70;
    case 220u: goto L_08A39D90;
    case 221u: goto L_08A39D94;
    case 222u: goto L_08A39DA0;
    case 223u: goto L_08A39DA4;
    case 224u: goto L_08A39DB4;
    case 225u: goto L_08A39DE4;
    case 226u: goto L_08A39E20;
    case 227u: goto L_08A39E30;
    case 228u: goto L_08A39E5C;
    case 229u: goto L_08A39E64;
    case 230u: goto L_08A39E70;
    case 231u: goto L_08A39E78;
    case 232u: goto L_08A39E88;
    case 233u: goto L_08A39E90;
    case 234u: goto L_08A39E98;
    case 235u: goto L_08A39EA0;
    case 236u: goto L_08A39EA8;
    case 237u: goto L_08A39EB8;
    case 238u: goto L_08A39EC0;
    case 239u: goto L_08A39EC4;
    case 240u: goto L_08A39EE0;
    case 241u: goto L_08A39EE8;
    case 242u: goto L_08A39EFC;
    case 243u: goto L_08A39F04;
    case 244u: goto L_08A39F18;
    case 245u: goto L_08A39F20;
    case 246u: goto L_08A39F28;
    case 247u: goto L_08A39F38;
    case 248u: goto L_08A39F40;
    case 249u: goto L_08A39F54;
    case 250u: goto L_08A39F5C;
    case 251u: goto L_08A39F60;
    case 252u: goto L_08A39F84;
    case 253u: goto L_08A39F8C;
    case 254u: goto L_08A39F9C;
    case 255u: goto L_08A39FA4;
    case 256u: goto L_08A39FB8;
    case 257u: goto L_08A39FC0;
    case 258u: goto L_08A39FC4;
    case 259u: goto L_08A39FCC;
    case 260u: goto L_08A39FD8;
    case 261u: goto L_08A39FE0;
    case 262u: goto L_08A39FF4;
    case 263u: goto L_08A39FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A39000:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A39004;
L_08A39004:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 70 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39058;
      }
      goto L_08A39014;
    }
L_08A39014:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 43 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A3913C;
      }
      goto L_08A39020;
    }
L_08A39020:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-193));
      if (branch_taken) {
          goto L_08A3908C;
      }
      goto L_08A3902C;
    }
L_08A3902C:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-43));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A39098;
      }
      goto L_08A39038;
    }
L_08A39038:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A390EC;
      }
      goto L_08A39040;
    }
L_08A39040:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A39098;
      }
      goto L_08A39048;
    }
L_08A39048:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A390B0;
      }
      goto L_08A39050;
    }
L_08A39050:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A390EC;
      }
      goto L_08A39058;
    }
L_08A39058:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 101u);
      if (branch_taken) {
          goto L_08A39078;
      }
      goto L_08A39060;
    }
L_08A39060:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 69 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A3913C;
      }
      goto L_08A3906C;
    }
L_08A3906C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] & 640u);
      if (branch_taken) {
          goto L_08A390CC;
      }
      goto L_08A39074;
    }
L_08A39074:
    aot_gpr[4] = (0u | 101u);
    goto L_08A39078;
L_08A39078:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[4] = (aot_gpr[16] & 640u);
      if (branch_taken) {
          goto L_08A390CC;
      }
      goto L_08A39080;
    }
L_08A39080:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A3913C;
      }
      goto L_08A39088;
    }
L_08A39088:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-193));
    goto L_08A3908C;
L_08A3908C:
    aot_gpr[16] = (aot_gpr[16] & aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A390F4;
      }
      goto L_08A39098;
    }
L_08A39098:
    aot_gpr[4] = (aot_gpr[16] & 64u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A3913C;
      }
      goto L_08A390A4;
    }
L_08A390A4:
    aot_gpr[16] = (aot_gpr[16] & aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A390F4;
      }
      goto L_08A390B0;
    }
L_08A390B0:
    aot_gpr[4] = (aot_gpr[16] & 256u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A3913C;
      }
      goto L_08A390BC;
    }
L_08A390BC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-321));
    aot_gpr[16] = (aot_gpr[16] & aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A390F4;
      }
      goto L_08A390CC;
    }
L_08A390CC:
    aot_gpr[6] = (0u | 512u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A3913C;
      }
      goto L_08A390D8;
    }
L_08A390D8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-769));
    aot_gpr[16] = (aot_gpr[16] & aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] | 192u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A390F4;
      }
      goto L_08A390EC;
    }
L_08A390EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A3913C;
      }
      goto L_08A390F4;
    }
L_08A390F4:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3911C;
      }
      goto L_08A3910C;
    }
L_08A3910C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3912C;
      }
      goto L_08A3911C;
    }
L_08A3911C:
    aot_gpr[31] = (0x08A39124u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 180u, 0x08A37F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39124u) goto L_08A39124;
    return;
L_08A39124:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A3913C;
      }
      goto L_08A3912C;
    }
L_08A3912C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    if (aot_gpr[19] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A39004;
    }
    goto L_08A39138;
L_08A39138:
    aot_gpr[4] = (aot_gpr[16] & 128u);
    goto L_08A3913C;
L_08A3913C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(260));
      if (branch_taken) {
          goto L_08A391BC;
      }
      goto L_08A39144;
    }
L_08A39144:
    aot_gpr[4] = (aot_gpr[16] & 512u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_08A39188;
    }
    goto L_08A39150;
L_08A39150:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(260));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 248u, 0x08A38EE4u>(ctx, &aot_mem); return;
      }
      goto L_08A39160;
    }
L_08A39160:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08A39164;
L_08A39164:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A39170u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 53u, 0x08A3D3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A39170u) goto L_08A39170;
    return;
L_08A39170:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A39164;
      }
      goto L_08A3917C;
    }
L_08A3917C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 248u, 0x08A38EE4u>(ctx, &aot_mem); return;
      }
      goto L_08A39184;
    }
L_08A39184:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08A39188;
L_08A39188:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 101u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 69u);
      if (branch_taken) {
          goto L_08A391B0;
      }
      goto L_08A39198;
    }
L_08A39198:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A391B0;
      }
      goto L_08A391A0;
    }
L_08A391A0:
    aot_gpr[31] = (0x08A391A8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 53u, 0x08A3D3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A391A8u) goto L_08A391A8;
    return;
L_08A391A8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08A391B0;
L_08A391B0:
    aot_gpr[31] = (0x08A391B8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 53u, 0x08A3D3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A391B8u) goto L_08A391B8;
    return;
L_08A391B8:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(260));
    goto L_08A391BC;
L_08A391BC:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[16] & 8u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3923C;
      }
      goto L_08A391CC;
    }
L_08A391CC:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A391D8u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_08A394EC;
L_08A391D8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(620)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A39204;
      }
      goto L_08A391F0;
    }
L_08A391F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A39230;
      }
      goto L_08A39204;
    }
L_08A39204:
    aot_gpr[6] = (aot_gpr[16] & 2u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4)));
        goto L_08A39224;
    }
    goto L_08A39210;
L_08A39210:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A39230;
      }
      goto L_08A39224;
    }
L_08A39224:
    aot_gpr[31] = (0x08A3922Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08A3922Cu) goto L_08A3922C;
    return;
L_08A3922C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A39230;
L_08A39230:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(624), aot_gpr[4]);
    goto L_08A3923C;
L_08A3923C:
    aot_gpr[4] = (2216u << 16u);
    goto L_08A39240;
L_08A39240:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[20] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-17480)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 74u, 0x08A385E0u>(ctx, &aot_mem); return;
      }
      goto L_08A39250;
    }
L_08A39250:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    goto L_08A39254;
L_08A39254:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
        goto L_08A39260;
    }
    goto L_08A39260;
L_08A39260:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(640)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(644)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(648)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(652)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(656)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(660)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(664)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(668)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(672)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(676)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A392B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 44u, 0x08A33324u>(ctx, &aot_mem) && ctx.pc == 0x08A392B0u) goto L_08A392B0;
    return;
L_08A392B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A392BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 520u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    aot_gpr[31] = (0x08A39300u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 44u, 0x08A33324u>(ctx, &aot_mem) && ctx.pc == 0x08A39300u) goto L_08A39300;
    return;
L_08A39300:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08A39314;
    }
    goto L_08A39314;
L_08A39314:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39324:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08A39350;
    }
    goto L_08A39340;
L_08A39340:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08A39350;
L_08A39350:
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08A39364;
    }
    goto L_08A39358;
L_08A39358:
    aot_gpr[31] = (0x08A39360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 122u, 0x08A37A90u>(ctx, &aot_mem) && ctx.pc == 0x08A39360u) goto L_08A39360;
    return;
L_08A39360:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08A39364;
L_08A39364:
    aot_gpr[5] = (aot_gpr[4] & 8u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] & 16u);
      if (branch_taken) {
          goto L_08A393BC;
      }
      goto L_08A39370;
    }
L_08A39370:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] & 4u);
      if (branch_taken) {
          goto L_08A39388;
      }
      goto L_08A39378;
    }
L_08A39378:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-37));
      if (branch_taken) {
          goto L_08A3939C;
      }
      goto L_08A39380;
    }
L_08A39380:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 8u);
      if (branch_taken) {
          goto L_08A393B8;
      }
      goto L_08A39388;
    }
L_08A39388:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3939C:
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] | 8u);
    goto L_08A393B8;
L_08A393B8:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_08A393BC;
L_08A393BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08A393D4;
    }
    goto L_08A393C8;
L_08A393C8:
    aot_gpr[31] = (0x08A393D0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 155u, 0x08A37D94u>(ctx, &aot_mem) && ctx.pc == 0x08A393D0u) goto L_08A393D0;
    return;
L_08A393D0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08A393D4;
L_08A393D4:
    aot_gpr[5] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A393F4;
      }
      goto L_08A393E0;
    }
L_08A393E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (0u - aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A39408;
      }
      goto L_08A393F4;
    }
L_08A393F4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] & 2u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08A39404;
    }
    goto L_08A39404;
L_08A39404:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08A39408;
L_08A39408:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3941C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    goto L_08A39424;
L_08A39424:
    aot_gpr[31] = (0x08A3942Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 123u, 0x08911958u>(ctx, &aot_mem) && ctx.pc == 0x08A3942Cu) goto L_08A3942C;
    return;
L_08A3942C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39424;
      }
      goto L_08A39434;
    }
L_08A39434:
    aot_gpr[2] = (aot_gpr[4] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_gpr[2] = (0u - aot_gpr[4]);
        goto L_08A39440;
    }
    goto L_08A39440;
L_08A39440:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39448:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[5] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08A39470;
    }
    goto L_08A39464;
L_08A39464:
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(332));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(328), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08A39470;
L_08A39470:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A394B4;
      }
      goto L_08A3947C;
    }
L_08A3947C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08A39488u);
    aot_gpr[4] = (0u | 136u);
    goto L_08A395F4;
L_08A39488:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A394DC;
      }
      goto L_08A39498;
    }
L_08A39498:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(328), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08A394B4;
L_08A394B4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A394DC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A394EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A394FCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0567_entry, 567u, 274u, 0x08A3BF98u>(ctx, &aot_mem) && ctx.pc == 0x08A394FCu) goto L_08A394FC;
    return;
L_08A394FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39508:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A3951Cu);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3951Cu) goto L_08A3951C;
    return;
L_08A3951C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39528:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A3953Cu);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3953Cu) goto L_08A3953C;
    return;
L_08A3953C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39548:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    if (aot_gpr[17] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
        goto L_08A395BC;
    }
    goto L_08A3957C;
L_08A3957C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08A39580;
L_08A39580:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) < 0;
    aot_gpr[19] = (aot_gpr[20] << 2u);
      if (branch_taken) {
          goto L_08A395A8;
      }
      goto L_08A3958C;
    }
L_08A3958C:
    aot_gpr[19] = (aot_gpr[17] + aot_gpr[19]);
    goto L_08A39590;
L_08A39590:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A3959Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3959Cu) goto L_08A3959C;
    return;
L_08A3959C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) >= 0;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A39590;
      }
      goto L_08A395A8;
    }
L_08A395A8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[17] != 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08A39580;
    }
    goto L_08A395B4;
L_08A395B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    goto L_08A395BC;
L_08A395BC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A395CC;
      }
      goto L_08A395C4;
    }
L_08A395C4:
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A395CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A395CCu) goto L_08A395CC;
    return;
L_08A395CC:
    aot_gpr[31] = (0x08A395D4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 123u, 0x08911958u>(ctx, &aot_mem) && ctx.pc == 0x08A395D4u) goto L_08A395D4;
    return;
L_08A395D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A395F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A3960Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 94u, 0x08A3C664u>(ctx, &aot_mem) && ctx.pc == 0x08A3960Cu) goto L_08A3960C;
    return;
L_08A3960C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39618:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A39630u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 193u, 0x08A3CC98u>(ctx, &aot_mem) && ctx.pc == 0x08A39630u) goto L_08A39630;
    return;
L_08A39630:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3963C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[17] = (aot_gpr[29] | 0u);
        goto L_08A3967C;
    }
    goto L_08A3967C;
L_08A3967C:
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A39690;
    }
    goto L_08A39684;
L_08A39684:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A396A0;
      }
      goto L_08A3968C;
    }
L_08A3968C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_08A39690;
L_08A39690:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39BD8;
      }
      goto L_08A39698;
    }
L_08A39698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A396C8;
      }
      goto L_08A396A0;
    }
L_08A396A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A396C8:
    aot_gpr[31] = (0x08A396D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A396D0u) goto L_08A396D0;
    return;
L_08A396D0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A39BD8;
      }
      goto L_08A396DC;
    }
L_08A396DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x08A396E8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9336));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A396E8u) goto L_08A396E8;
    return;
L_08A396E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A397E4;
      }
      goto L_08A396F0;
    }
L_08A396F0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A39C18;
      }
      goto L_08A396F8;
    }
L_08A396F8:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 129 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 224 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39714;
      }
      goto L_08A39704;
    }
L_08A39704:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 160 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[19] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39728;
      }
      goto L_08A39710;
    }
L_08A39710:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 224 ? 1u : 0u);
    goto L_08A39714;
L_08A39714:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 240 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39BD8;
      }
      goto L_08A3971C;
    }
L_08A3971C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39BD8;
      }
      goto L_08A39724;
    }
L_08A39724:
    aot_gpr[5] = (aot_gpr[19] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    goto L_08A39728;
L_08A39728:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08A39744;
      }
      goto L_08A39730;
    }
L_08A39730:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[21]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[21]) < 127 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3976C;
      }
      goto L_08A3973C;
    }
L_08A3973C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[21]) < 128 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39778;
      }
      goto L_08A39744;
    }
L_08A39744:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3976C:
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (aot_gpr[4] << 8u);
        goto L_08A3978C;
    }
    goto L_08A39774;
L_08A39774:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[21]) < 128 ? 1u : 0u);
    goto L_08A39778;
L_08A39778:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[21]) < 253 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A397BC;
      }
      goto L_08A39780;
    }
L_08A39780:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A397BC;
      }
      goto L_08A39788;
    }
L_08A39788:
    aot_gpr[4] = (aot_gpr[4] << 8u);
    goto L_08A3978C;
L_08A3978C:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[2] = (0u | 2u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A397BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A397E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x08A397F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9344));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A397F0u) goto L_08A397F0;
    return;
L_08A397F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A398B0;
      }
      goto L_08A397F8;
    }
L_08A397F8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A39C18;
      }
      goto L_08A39800;
    }
L_08A39800:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 161 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39BD8;
      }
      goto L_08A3980C;
    }
L_08A3980C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[19] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39BD8;
      }
      goto L_08A39814;
    }
L_08A39814:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08A39858;
      }
      goto L_08A3981C;
    }
L_08A3981C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[21]) < 161 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[21]) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39830;
      }
      goto L_08A39828;
    }
L_08A39828:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] << 8u);
      if (branch_taken) {
          goto L_08A39880;
      }
      goto L_08A39830;
    }
L_08A39830:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39858:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39880:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[2] = (0u | 2u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A398B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x08A398BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9352));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A398BCu) goto L_08A398BC;
    return;
L_08A398BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39BD8;
      }
      goto L_08A398C4;
    }
L_08A398C4:
    if (aot_gpr[18] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
        goto L_08A398E4;
    }
    goto L_08A398CC;
L_08A398CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08A3990C;
      }
      goto L_08A398D8;
    }
L_08A398D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A39914;
      }
      goto L_08A398E0;
    }
L_08A398E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A398E4;
L_08A398E4:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3990C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[2] = (0u | 0u);
    goto L_08A39914;
L_08A39914:
    aot_gpr[6] = (aot_gpr[2] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A39BB0;
      }
      goto L_08A39920;
    }
L_08A39920:
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[12] = (2216u << 16u);
    aot_gpr[14] = (2216u << 16u);
    aot_gpr[7] = (0u | 74u);
    aot_gpr[8] = (0u | 66u);
    aot_gpr[9] = (0u | 64u);
    aot_gpr[10] = (0u | 40u);
    aot_gpr[11] = (0u | 36u);
    aot_gpr[3] = (0u | 27u);
    aot_gpr[15] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(-16288));
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(-16720));
    goto L_08A39950;
L_08A39950:
    aot_gpr[13] = (aot_gpr[4] << 5u);
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    { const bool branch_taken = aot_gpr[24] == aot_gpr[7];
    aot_gpr[4] = (aot_gpr[13] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08A39A0C;
      }
      goto L_08A39964;
    }
L_08A39964:
    if (aot_gpr[24] == aot_gpr[8]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
        goto L_08A399F8;
    }
    goto L_08A3996C;
L_08A3996C:
    if (aot_gpr[24] == aot_gpr[9]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08A399D0;
    }
    goto L_08A39974;
L_08A39974:
    if (aot_gpr[24] == aot_gpr[10]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
        goto L_08A399E4;
    }
    goto L_08A3997C;
L_08A3997C:
    if (aot_gpr[24] == aot_gpr[11]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08A399BC;
    }
    goto L_08A39984;
L_08A39984:
    { const bool branch_taken = aot_gpr[24] == aot_gpr[3];
    aot_gpr[13] = (aot_gpr[4] + aot_gpr[12]);
      if (branch_taken) {
          goto L_08A399AC;
      }
      goto L_08A3998C;
    }
L_08A3998C:
    { const bool branch_taken = aot_gpr[24] != 0u;
    aot_gpr[25] = (static_cast<std::int32_t>(aot_gpr[24]) < 33 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39A24;
      }
      goto L_08A39994;
    }
L_08A39994:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[13] = (aot_gpr[4] + aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A39A54;
      }
      goto L_08A399AC;
    }
L_08A399AC:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A39A54;
      }
      goto L_08A399BC;
    }
L_08A399BC:
    aot_gpr[13] = (aot_gpr[4] + aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A39A54;
      }
      goto L_08A399D0;
    }
L_08A399D0:
    aot_gpr[13] = (aot_gpr[4] + aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A39A54;
      }
      goto L_08A399E4;
    }
L_08A399E4:
    aot_gpr[13] = (aot_gpr[4] + aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A39A54;
      }
      goto L_08A399F8;
    }
L_08A399F8:
    aot_gpr[13] = (aot_gpr[4] + aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A39A54;
      }
      goto L_08A39A0C;
    }
L_08A39A0C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[13] = (aot_gpr[4] + aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A39A54;
      }
      goto L_08A39A24;
    }
L_08A39A24:
    { const bool branch_taken = aot_gpr[25] != 0u;
    aot_gpr[13] = (0u | 8u);
      if (branch_taken) {
          goto L_08A39A3C;
      }
      goto L_08A39A2C;
    }
L_08A39A2C:
    aot_gpr[24] = (static_cast<std::int32_t>(aot_gpr[24]) < 127 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[24] == 0u;
    aot_gpr[13] = (aot_gpr[13] << 2u);
      if (branch_taken) {
          goto L_08A39A40;
      }
      goto L_08A39A38;
    }
L_08A39A38:
    aot_gpr[13] = (0u | 7u);
    goto L_08A39A3C;
L_08A39A3C:
    aot_gpr[13] = (aot_gpr[13] << 2u);
    goto L_08A39A40;
L_08A39A40:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[13]);
    aot_gpr[13] = (aot_gpr[4] + aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A39A54;
L_08A39A54:
    aot_gpr[24] = (aot_gpr[13] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39B78;
      }
      goto L_08A39A60;
    }
L_08A39A60:
    aot_gpr[13] = (aot_gpr[13] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[13]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(9360)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39A78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A39BA0;
      }
      goto L_08A39A80;
    }
L_08A39A80:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39AAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39AE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39B24:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[21]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39B6C:
    aot_gpr[5] = (aot_gpr[15] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A39BA0;
      }
      goto L_08A39B78;
    }
L_08A39B78:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39BA0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[13] = (aot_gpr[2] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A39950;
      }
      goto L_08A39BB0;
    }
L_08A39BB0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39BD8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39C18;
      }
      goto L_08A39BE0;
    }
L_08A39BE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39C18:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39C40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[6] >> 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[22]);
    aot_gpr[9] = (aot_gpr[6] ^ 4u);
    aot_gpr[22] = (aot_gpr[6] & 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[9] = (0u < aot_gpr[9] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[10] = (ctx.lo);
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[8] & 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    aot_gpr[22] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    goto L_08A39CC0;
L_08A39CC0:
    aot_gpr[23] = (0u | 2u);
    if (aot_gpr[22] == 0u) {
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08A39CCC;
    }
    goto L_08A39CCC;
L_08A39CCC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] >> 1u);
      if (branch_taken) {
          goto L_08A39DE4;
      }
      goto L_08A39CD4;
    }
L_08A39CD4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (static_cast<std::int32_t>(aot_gpr[23]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39DB4;
      }
      goto L_08A39CE8;
    }
L_08A39CE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A39CEC;
L_08A39CEC:
    aot_gpr[17] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
    goto L_08A39CF4;
L_08A39CF4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[17] - aot_gpr[21]);
      if (branch_taken) {
          goto L_08A39DA0;
      }
      goto L_08A39CFC;
    }
L_08A39CFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A39D0Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39D0Cu) goto L_08A39D0C;
    return;
L_08A39D0C:
    if (static_cast<std::int32_t>(aot_gpr[2]) <= 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08A39DA4;
    }
    goto L_08A39D14;
L_08A39D14:
    { const bool branch_taken = aot_gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39D30;
      }
      goto L_08A39D1C;
    }
L_08A39D1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A39D90;
      }
      goto L_08A39D30;
    }
L_08A39D30:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A39D6C;
      }
      goto L_08A39D38;
    }
L_08A39D38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A39D40;
L_08A39D40:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A39D40;
      }
      goto L_08A39D60;
    }
L_08A39D60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A39D94;
      }
      goto L_08A39D68;
    }
L_08A39D68:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_08A39D6C;
L_08A39D6C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A39D70;
L_08A39D70:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A39D70;
      }
      goto L_08A39D90;
    }
L_08A39D90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A39D94;
L_08A39D94:
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39CF4;
      }
      goto L_08A39DA0;
    }
L_08A39DA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A39DA4;
L_08A39DA4:
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08A39CEC;
    }
    goto L_08A39DB4;
L_08A39DB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39DE4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    aot_gpr[19] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[30] = (static_cast<std::int32_t>(aot_gpr[23]) < 2 ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 14u, 0x08A3A080u>(ctx, &aot_mem); return;
      }
      goto L_08A39E20;
    }
L_08A39E20:
    aot_gpr[22] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 2u, 0x08A3A004u>(ctx, &aot_mem); return;
      }
      goto L_08A39E30;
    }
L_08A39E30:
    aot_gpr[4] = (aot_gpr[16] >> 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[20]);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[20] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A39E5Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39E5Cu) goto L_08A39E5C;
    return;
L_08A39E5C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A39E98;
      }
      goto L_08A39E64;
    }
L_08A39E64:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A39E70u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39E70u) goto L_08A39E70;
    return;
L_08A39E70:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A39E90;
      }
      goto L_08A39E78;
    }
L_08A39E78:
    aot_gpr[16] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A39E88u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39E88u) goto L_08A39E88;
    return;
L_08A39E88:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[16] = (aot_gpr[17] | 0u);
        goto L_08A39E90;
    }
    goto L_08A39E90;
L_08A39E90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A39EC4;
      }
      goto L_08A39E98;
    }
L_08A39E98:
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A39EA0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39EA0u) goto L_08A39EA0;
    return;
L_08A39EA0:
    if (static_cast<std::int32_t>(aot_gpr[2]) > 0) {
    aot_gpr[20] = (aot_gpr[16] | 0u);
        goto L_08A39EC4;
    }
    goto L_08A39EA8;
L_08A39EA8:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A39EB8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39EB8u) goto L_08A39EB8;
    return;
L_08A39EB8:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[16] = (aot_gpr[20] | 0u);
        goto L_08A39EC0;
    }
    goto L_08A39EC0;
L_08A39EC0:
    aot_gpr[20] = (aot_gpr[16] | 0u);
    goto L_08A39EC4;
L_08A39EC4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[19] - aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A39EE0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39EE0u) goto L_08A39EE0;
    return;
L_08A39EE0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[16] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A39F28;
      }
      goto L_08A39EE8;
    }
L_08A39EE8:
    aot_gpr[16] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A39EFCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39EFCu) goto L_08A39EFC;
    return;
L_08A39EFC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A39F20;
      }
      goto L_08A39F04;
    }
L_08A39F04:
    aot_gpr[16] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A39F18u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39F18u) goto L_08A39F18;
    return;
L_08A39F18:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[16] = (aot_gpr[17] | 0u);
        goto L_08A39F20;
    }
    goto L_08A39F20;
L_08A39F20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A39F60;
      }
      goto L_08A39F28;
    }
L_08A39F28:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A39F38u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39F38u) goto L_08A39F38;
    return;
L_08A39F38:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A39F60;
      }
      goto L_08A39F40;
    }
L_08A39F40:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A39F54u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39F54u) goto L_08A39F54;
    return;
L_08A39F54:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[16] = (aot_gpr[18] | 0u);
        goto L_08A39F5C;
    }
    goto L_08A39F5C;
L_08A39F5C:
    aot_gpr[19] = (aot_gpr[16] | 0u);
    goto L_08A39F60;
L_08A39F60:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[18] - aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[18] - aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A39F84u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39F84u) goto L_08A39F84;
    return;
L_08A39F84:
    if (static_cast<std::int32_t>(aot_gpr[2]) >= 0) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08A39FCC;
    }
    goto L_08A39F8C;
L_08A39F8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A39F9Cu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39F9Cu) goto L_08A39F9C;
    return;
L_08A39F9C:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[22] = (aot_gpr[16] | 0u);
        goto L_08A39FC4;
    }
    goto L_08A39FA4;
L_08A39FA4:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A39FB8u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39FB8u) goto L_08A39FB8;
    return;
L_08A39FB8:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[16] = (aot_gpr[18] | 0u);
        goto L_08A39FC0;
    }
    goto L_08A39FC0;
L_08A39FC0:
    aot_gpr[22] = (aot_gpr[16] | 0u);
    goto L_08A39FC4;
L_08A39FC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 2u, 0x08A3A004u>(ctx, &aot_mem); return;
      }
      goto L_08A39FCC;
    }
L_08A39FCC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A39FD8u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39FD8u) goto L_08A39FD8;
    return;
L_08A39FD8:
    if (static_cast<std::int32_t>(aot_gpr[2]) > 0) {
    aot_gpr[22] = (aot_gpr[16] | 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 1u, 0x08A3A000u>(ctx, &aot_mem); return;
    }
    goto L_08A39FE0;
L_08A39FE0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A39FF4u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39FF4u) goto L_08A39FF4;
    return;
L_08A39FF4:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[16] = (aot_gpr[17] | 0u);
        goto L_08A39FFC;
    }
    goto L_08A39FFC;
L_08A39FFC:
    aot_gpr[22] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A3A000u; return;
}

void recomp_unit_0565(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0565_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_565(Runtime &runtime) {
    runtime.register_generated_unit(565u, 0x08A39000u, 4096u, &recomp_unit_0565, &recomp_unit_0565_entry);
    runtime.register_function(0x08A39000u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39004u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39014u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39020u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3902Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39038u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39040u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39048u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39050u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39058u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39060u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3906Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39074u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39078u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39080u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39088u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3908Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39098u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A390A4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A390B0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A390BCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A390CCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A390D8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A390ECu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A390F4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3910Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3911Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39124u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3912Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39138u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3913Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39144u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39150u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39160u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39164u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39170u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3917Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39184u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39188u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39198u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A391A0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A391A8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A391B0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A391B8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A391BCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A391CCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A391D8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A391F0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39204u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39210u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39224u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3922Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39230u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3923Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39240u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39250u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39254u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39260u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39290u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A392B0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A392BCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39300u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39314u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39324u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39340u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39350u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39358u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39360u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39364u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39370u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39378u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39380u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39388u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3939Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A393B8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A393BCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A393C8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A393D0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A393D4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A393E0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A393F4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39404u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39408u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3941Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39424u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3942Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39434u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39440u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39448u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39464u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39470u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3947Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39488u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39498u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A394B4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A394DCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A394ECu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A394FCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39508u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3951Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39528u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3953Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39548u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3957Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39580u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3958Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39590u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3959Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A395A8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A395B4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A395BCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A395C4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A395CCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A395D4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A395F4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3960Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39618u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39630u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3963Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3967Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39684u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3968Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39690u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39698u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A396A0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A396C8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A396D0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A396DCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A396E8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A396F0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A396F8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39704u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39710u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39714u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3971Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39724u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39728u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39730u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3973Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39744u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3976Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39774u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39778u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39780u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39788u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3978Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A397BCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A397E4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A397F0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A397F8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39800u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3980Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39814u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3981Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39828u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39830u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39858u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39880u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A398B0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A398BCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A398C4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A398CCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A398D8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A398E0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A398E4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3990Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39914u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39920u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39950u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39964u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3996Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39974u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3997Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39984u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A3998Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39994u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A399ACu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A399BCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A399D0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A399E4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A399F8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39A0Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39A24u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39A2Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39A38u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39A3Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39A40u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39A54u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39A60u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39A78u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39A80u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39AACu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39AE4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39B24u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39B6Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39B78u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39BA0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39BB0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39BD8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39BE0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39C18u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39C40u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39CC0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39CCCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39CD4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39CE8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39CECu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39CF4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39CFCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39D0Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39D14u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39D1Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39D30u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39D38u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39D40u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39D60u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39D68u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39D6Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39D70u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39D90u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39D94u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39DA0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39DA4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39DB4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39DE4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39E20u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39E30u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39E5Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39E64u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39E70u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39E78u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39E88u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39E90u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39E98u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39EA0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39EA8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39EB8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39EC0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39EC4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39EE0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39EE8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39EFCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39F04u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39F18u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39F20u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39F28u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39F38u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39F40u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39F54u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39F5Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39F60u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39F84u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39F8Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39F9Cu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39FA4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39FB8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39FC0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39FC4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39FCCu, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39FD8u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39FE0u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39FF4u, &recomp_unit_0565, "recomp_unit_0565");
    runtime.register_function(0x08A39FFCu, &recomp_unit_0565, "recomp_unit_0565");
}
} // namespace psprecomp
