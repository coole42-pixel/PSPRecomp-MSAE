#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0574[1021] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 8, 0, 9, 0, 0, 10,
    0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 21, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0,
    35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0,
    0, 45, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0,
    0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61,
    0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0,
    0, 68, 0, 69, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 76, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89,
    0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0,
    101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0,
    111, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 0,
    121, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132,
    0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0,
    0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0,
    151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0,
    0, 0, 162, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 176,
    0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0,
    0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198,
    0, 199, 0, 200, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207,
    208, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 212, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0,
    0, 233, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242,
    0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0,
    263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 267, 268, 269, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 272,
    0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 0, 278, 0, 279, 0, 280,
};
void recomp_unit_0574_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A42004u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0574[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A42004;
    case 2u: goto L_08A42014;
    case 3u: goto L_08A42028;
    case 4u: goto L_08A4203C;
    case 5u: goto L_08A42048;
    case 6u: goto L_08A42058;
    case 7u: goto L_08A42068;
    case 8u: goto L_08A4206C;
    case 9u: goto L_08A42074;
    case 10u: goto L_08A42080;
    case 11u: goto L_08A42090;
    case 12u: goto L_08A4209C;
    case 13u: goto L_08A420AC;
    case 14u: goto L_08A420BC;
    case 15u: goto L_08A420D4;
    case 16u: goto L_08A420E0;
    case 17u: goto L_08A420F0;
    case 18u: goto L_08A4210C;
    case 19u: goto L_08A42118;
    case 20u: goto L_08A42128;
    case 21u: goto L_08A42130;
    case 22u: goto L_08A42134;
    case 23u: goto L_08A42140;
    case 24u: goto L_08A4216C;
    case 25u: goto L_08A42194;
    case 26u: goto L_08A421A8;
    case 27u: goto L_08A421B8;
    case 28u: goto L_08A421C4;
    case 29u: goto L_08A421CC;
    case 30u: goto L_08A421D4;
    case 31u: goto L_08A421E0;
    case 32u: goto L_08A421E8;
    case 33u: goto L_08A421F0;
    case 34u: goto L_08A421F8;
    case 35u: goto L_08A42204;
    case 36u: goto L_08A42210;
    case 37u: goto L_08A42220;
    case 38u: goto L_08A4222C;
    case 39u: goto L_08A42238;
    case 40u: goto L_08A42244;
    case 41u: goto L_08A42254;
    case 42u: goto L_08A42260;
    case 43u: goto L_08A4226C;
    case 44u: goto L_08A42278;
    case 45u: goto L_08A42288;
    case 46u: goto L_08A4228C;
    case 47u: goto L_08A4229C;
    case 48u: goto L_08A422D8;
    case 49u: goto L_08A422E4;
    case 50u: goto L_08A422F0;
    case 51u: goto L_08A422FC;
    case 52u: goto L_08A42308;
    case 53u: goto L_08A42310;
    case 54u: goto L_08A42328;
    case 55u: goto L_08A42330;
    case 56u: goto L_08A4233C;
    case 57u: goto L_08A42344;
    case 58u: goto L_08A42354;
    case 59u: goto L_08A4235C;
    case 60u: goto L_08A42370;
    case 61u: goto L_08A42380;
    case 62u: goto L_08A42388;
    case 63u: goto L_08A423B4;
    case 64u: goto L_08A423CC;
    case 65u: goto L_08A423DC;
    case 66u: goto L_08A423EC;
    case 67u: goto L_08A423FC;
    case 68u: goto L_08A42408;
    case 69u: goto L_08A42410;
    case 70u: goto L_08A42418;
    case 71u: goto L_08A42428;
    case 72u: goto L_08A42430;
    case 73u: goto L_08A4243C;
    case 74u: goto L_08A4244C;
    case 75u: goto L_08A42460;
    case 76u: goto L_08A42464;
    case 77u: goto L_08A42478;
    case 78u: goto L_08A4249C;
    case 79u: goto L_08A424BC;
    case 80u: goto L_08A424CC;
    case 81u: goto L_08A424D4;
    case 82u: goto L_08A424DC;
    case 83u: goto L_08A424E8;
    case 84u: goto L_08A424F0;
    case 85u: goto L_08A42518;
    case 86u: goto L_08A42534;
    case 87u: goto L_08A42540;
    case 88u: goto L_08A42574;
    case 89u: goto L_08A42580;
    case 90u: goto L_08A42588;
    case 91u: goto L_08A42598;
    case 92u: goto L_08A425A8;
    case 93u: goto L_08A425B8;
    case 94u: goto L_08A425C0;
    case 95u: goto L_08A425C8;
    case 96u: goto L_08A425D0;
    case 97u: goto L_08A425D8;
    case 98u: goto L_08A425DC;
    case 99u: goto L_08A425F4;
    case 100u: goto L_08A425FC;
    case 101u: goto L_08A42604;
    case 102u: goto L_08A4260C;
    case 103u: goto L_08A42614;
    case 104u: goto L_08A4261C;
    case 105u: goto L_08A42624;
    case 106u: goto L_08A42640;
    case 107u: goto L_08A42650;
    case 108u: goto L_08A42660;
    case 109u: goto L_08A4266C;
    case 110u: goto L_08A42678;
    case 111u: goto L_08A42684;
    case 112u: goto L_08A42688;
    case 113u: goto L_08A42698;
    case 114u: goto L_08A426A8;
    case 115u: goto L_08A426BC;
    case 116u: goto L_08A426CC;
    case 117u: goto L_08A426DC;
    case 118u: goto L_08A426E8;
    case 119u: goto L_08A426F0;
    case 120u: goto L_08A426F8;
    case 121u: goto L_08A42704;
    case 122u: goto L_08A4270C;
    case 123u: goto L_08A42714;
    case 124u: goto L_08A42720;
    case 125u: goto L_08A42728;
    case 126u: goto L_08A42730;
    case 127u: goto L_08A4273C;
    case 128u: goto L_08A4274C;
    case 129u: goto L_08A42754;
    case 130u: goto L_08A42768;
    case 131u: goto L_08A42774;
    case 132u: goto L_08A42780;
    case 133u: goto L_08A42788;
    case 134u: goto L_08A42790;
    case 135u: goto L_08A4279C;
    case 136u: goto L_08A427A4;
    case 137u: goto L_08A427C0;
    case 138u: goto L_08A427CC;
    case 139u: goto L_08A427DC;
    case 140u: goto L_08A427EC;
    case 141u: goto L_08A427FC;
    case 142u: goto L_08A42808;
    case 143u: goto L_08A42818;
    case 144u: goto L_08A42820;
    case 145u: goto L_08A42828;
    case 146u: goto L_08A42830;
    case 147u: goto L_08A42838;
    case 148u: goto L_08A4285C;
    case 149u: goto L_08A42868;
    case 150u: goto L_08A42874;
    case 151u: goto L_08A42884;
    case 152u: goto L_08A42894;
    case 153u: goto L_08A428A0;
    case 154u: goto L_08A428B0;
    case 155u: goto L_08A428B8;
    case 156u: goto L_08A428C0;
    case 157u: goto L_08A428D0;
    case 158u: goto L_08A428D8;
    case 159u: goto L_08A428E4;
    case 160u: goto L_08A428F0;
    case 161u: goto L_08A428FC;
    case 162u: goto L_08A4290C;
    case 163u: goto L_08A42910;
    case 164u: goto L_08A4291C;
    case 165u: goto L_08A4294C;
    case 166u: goto L_08A42978;
    case 167u: goto L_08A4299C;
    case 168u: goto L_08A429A4;
    case 169u: goto L_08A429B4;
    case 170u: goto L_08A429C4;
    case 171u: goto L_08A429CC;
    case 172u: goto L_08A429D4;
    case 173u: goto L_08A429DC;
    case 174u: goto L_08A429E8;
    case 175u: goto L_08A429F0;
    case 176u: goto L_08A42A00;
    case 177u: goto L_08A42A08;
    case 178u: goto L_08A42A14;
    case 179u: goto L_08A42A1C;
    case 180u: goto L_08A42A24;
    case 181u: goto L_08A42A34;
    case 182u: goto L_08A42A40;
    case 183u: goto L_08A42A48;
    case 184u: goto L_08A42A50;
    case 185u: goto L_08A42A58;
    case 186u: goto L_08A42A74;
    case 187u: goto L_08A42A7C;
    case 188u: goto L_08A42A88;
    case 189u: goto L_08A42A94;
    case 190u: goto L_08A42AA0;
    case 191u: goto L_08A42AB0;
    case 192u: goto L_08A42AB8;
    case 193u: goto L_08A42AC8;
    case 194u: goto L_08A42AD0;
    case 195u: goto L_08A42AD8;
    case 196u: goto L_08A42AE4;
    case 197u: goto L_08A42AF0;
    case 198u: goto L_08A42B00;
    case 199u: goto L_08A42B08;
    case 200u: goto L_08A42B10;
    case 201u: goto L_08A42B14;
    case 202u: goto L_08A42B34;
    case 203u: goto L_08A42B3C;
    case 204u: goto L_08A42B48;
    case 205u: goto L_08A42B50;
    case 206u: goto L_08A42B60;
    case 207u: goto L_08A42B80;
    case 208u: goto L_08A42B84;
    case 209u: goto L_08A42B90;
    case 210u: goto L_08A42B9C;
    case 211u: goto L_08A42BA4;
    case 212u: goto L_08A42BB0;
    case 213u: goto L_08A42BB4;
    case 214u: goto L_08A42BC0;
    case 215u: goto L_08A42BE8;
    case 216u: goto L_08A42BF0;
    case 217u: goto L_08A42C10;
    case 218u: goto L_08A42C18;
    case 219u: goto L_08A42C24;
    case 220u: goto L_08A42C3C;
    case 221u: goto L_08A42C58;
    case 222u: goto L_08A42C74;
    case 223u: goto L_08A42C8C;
    case 224u: goto L_08A42C98;
    case 225u: goto L_08A42CA0;
    case 226u: goto L_08A42CB8;
    case 227u: goto L_08A42CC8;
    case 228u: goto L_08A42CD0;
    case 229u: goto L_08A42CE0;
    case 230u: goto L_08A42CE8;
    case 231u: goto L_08A42CF0;
    case 232u: goto L_08A42CF8;
    case 233u: goto L_08A42D08;
    case 234u: goto L_08A42D0C;
    case 235u: goto L_08A42D14;
    case 236u: goto L_08A42D1C;
    case 237u: goto L_08A42D24;
    case 238u: goto L_08A42D3C;
    case 239u: goto L_08A42D40;
    case 240u: goto L_08A42D48;
    case 241u: goto L_08A42D78;
    case 242u: goto L_08A42D80;
    case 243u: goto L_08A42D88;
    case 244u: goto L_08A42D8C;
    case 245u: goto L_08A42DB0;
    case 246u: goto L_08A42DB8;
    case 247u: goto L_08A42DC0;
    case 248u: goto L_08A42DD0;
    case 249u: goto L_08A42DE8;
    case 250u: goto L_08A42DF8;
    case 251u: goto L_08A42E18;
    case 252u: goto L_08A42E20;
    case 253u: goto L_08A42E30;
    case 254u: goto L_08A42E50;
    case 255u: goto L_08A42E84;
    case 256u: goto L_08A42EA8;
    case 257u: goto L_08A42EB0;
    case 258u: goto L_08A42EB8;
    case 259u: goto L_08A42EC4;
    case 260u: goto L_08A42EDC;
    case 261u: goto L_08A42EE8;
    case 262u: goto L_08A42EF4;
    case 263u: goto L_08A42F04;
    case 264u: goto L_08A42F0C;
    case 265u: goto L_08A42F3C;
    case 266u: goto L_08A42F44;
    case 267u: goto L_08A42F4C;
    case 268u: goto L_08A42F50;
    case 269u: goto L_08A42F54;
    case 270u: goto L_08A42F70;
    case 271u: goto L_08A42F78;
    case 272u: goto L_08A42F80;
    case 273u: goto L_08A42F90;
    case 274u: goto L_08A42FB0;
    case 275u: goto L_08A42FBC;
    case 276u: goto L_08A42FC4;
    case 277u: goto L_08A42FD0;
    case 278u: goto L_08A42FE4;
    case 279u: goto L_08A42FEC;
    case 280u: goto L_08A42FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A42004:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 205u);
    aot_gpr[31] = (0x08A42014u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A42014u) goto L_08A42014;
    return;
L_08A42014:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08A42028u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = 0x08A5B134u;
    return;
L_08A42028:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08A4203Cu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B064u;
    return;
L_08A4203C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A42058;
      }
      goto L_08A42048;
    }
L_08A42048:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 215u);
    aot_gpr[31] = (0x08A42058u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A42058u) goto L_08A42058;
    return;
L_08A42058:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    aot_gpr[17] = (15u << 16u);
      if (branch_taken) {
          goto L_08A42080;
      }
      goto L_08A42068;
    }
L_08A42068:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16960));
    goto L_08A4206C;
L_08A4206C:
    aot_gpr[31] = (0x08A42074u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08A42074:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A4206C;
      }
      goto L_08A42080;
    }
L_08A42080:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A42090u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B04Cu;
    return;
L_08A42090:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A420AC;
      }
      goto L_08A4209C;
    }
L_08A4209C:
    aot_gpr[5] = (0u | 219u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A420ACu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A420ACu) goto L_08A420AC;
    return;
L_08A420AC:
    aot_gpr[4] = (32770u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(424));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A42128;
      }
      goto L_08A420BC;
    }
L_08A420BC:
    aot_gpr[4] = (0u | 116u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08A420D4u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B064u;
    return;
L_08A420D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A420F0;
      }
      goto L_08A420E0;
    }
L_08A420E0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 224u);
    aot_gpr[31] = (0x08A420F0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A420F0u) goto L_08A420F0;
    return;
L_08A420F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4210Cu);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B04Cu;
    return;
L_08A4210C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A42128;
      }
      goto L_08A42118;
    }
L_08A42118:
    aot_gpr[5] = (0u | 226u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A42128u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A42128u) goto L_08A42128;
    return;
L_08A42128:
    aot_gpr[31] = (0x08A42130u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 156u, 0x08A41A70u>(ctx, &aot_mem) && ctx.pc == 0x08A42130u) goto L_08A42130;
    return;
L_08A42130:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08A42134;
L_08A42134:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42140:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08A4216Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 227u, 0x08A41EA8u>(ctx, &aot_mem) && ctx.pc == 0x08A4216Cu) goto L_08A4216C;
    return;
L_08A4216C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42194:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A421CC;
      }
      goto L_08A421A8;
    }
L_08A421A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A421CC;
      }
      goto L_08A421B8;
    }
L_08A421B8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A421D4;
      }
      goto L_08A421C4;
    }
L_08A421C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A421E0;
      }
      goto L_08A421CC;
    }
L_08A421CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08A4228C;
      }
      goto L_08A421D4;
    }
L_08A421D4:
    aot_gpr[6] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A421F0;
      }
      goto L_08A421E0;
    }
L_08A421E0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A421F0;
      }
      goto L_08A421E8;
    }
L_08A421E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A421F8;
      }
      goto L_08A421F0;
    }
L_08A421F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4228C;
      }
      goto L_08A421F8;
    }
L_08A421F8:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08A42204u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B064u;
    return;
L_08A42204:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A42220;
      }
      goto L_08A42210;
    }
L_08A42210:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 279u);
    aot_gpr[31] = (0x08A42220u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A42220u) goto L_08A42220;
    return;
L_08A42220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A42260;
      }
      goto L_08A4222C;
    }
L_08A4222C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A42238u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B04Cu;
    return;
L_08A42238:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A42254;
      }
      goto L_08A42244;
    }
L_08A42244:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 284u);
    aot_gpr[31] = (0x08A42254u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A42254u) goto L_08A42254;
    return;
L_08A42254:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_08A42260;
L_08A42260:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A4226Cu);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B04Cu;
    return;
L_08A4226C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A42288;
      }
      goto L_08A42278;
    }
L_08A42278:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 288u);
    aot_gpr[31] = (0x08A42288u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A42288u) goto L_08A42288;
    return;
L_08A42288:
    aot_gpr[2] = (0u | 0u);
    goto L_08A4228C;
L_08A4228C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4229C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-14736));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x08A422D8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A4291C;
L_08A422D8:
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-26084));
    goto L_08A422E4;
L_08A422E4:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[16] | 0u);
    aot_gpr[23] = (aot_gpr[22] | 0u);
    goto L_08A422F0;
L_08A422F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42354;
      }
      goto L_08A422FC;
    }
L_08A422FC:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42310;
      }
      goto L_08A42308;
    }
L_08A42308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4235C;
      }
      goto L_08A42310;
    }
L_08A42310:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(216), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42344;
      }
      goto L_08A42328;
    }
L_08A42328:
    aot_gpr[31] = (0x08A42330u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A42978;
L_08A42330:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A4233Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4233Cu) goto L_08A4233C;
    return;
L_08A4233C:
    aot_gpr[31] = (0x08A42344u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A4291C;
L_08A42344:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A4235C;
      }
      goto L_08A42354;
    }
L_08A42354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42380;
      }
      goto L_08A4235C;
    }
L_08A4235C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(156));
      if (branch_taken) {
          goto L_08A422F0;
      }
      goto L_08A42370;
    }
L_08A42370:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A422E4;
      }
      goto L_08A42380;
    }
L_08A42380:
    aot_gpr[31] = (0x08A42388u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A42978;
L_08A42388:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A423B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A42410;
      }
      goto L_08A423CC;
    }
L_08A423CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A42410;
      }
      goto L_08A423DC;
    }
L_08A423DC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-14748)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A423ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A423ECu) goto L_08A423EC;
    return;
L_08A423EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08A423FCu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B14Cu;
    return;
L_08A423FC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A42418;
      }
      goto L_08A42408;
    }
L_08A42408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42428;
      }
      goto L_08A42410;
    }
L_08A42410:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08A42464;
      }
      goto L_08A42418;
    }
L_08A42418:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 52u);
    aot_gpr[31] = (0x08A42428u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A42428u) goto L_08A42428;
    return;
L_08A42428:
    aot_gpr[31] = (0x08A42430u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A5B014u;
    return;
L_08A42430:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4244C;
      }
      goto L_08A4243C;
    }
L_08A4243C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 55u);
    aot_gpr[31] = (0x08A4244Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A4244Cu) goto L_08A4244C;
    return;
L_08A4244C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-14744)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A42460u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42460u) goto L_08A42460;
    return;
L_08A42460:
    aot_gpr[2] = (0u | 0u);
    goto L_08A42464;
L_08A42464:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42478:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 111u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4249C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A424E8;
      }
      goto L_08A424BC;
    }
L_08A424BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-14748)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A424CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A424CCu) goto L_08A424CC;
    return;
L_08A424CC:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A424F0;
      }
      goto L_08A424D4;
    }
L_08A424D4:
    aot_gpr[31] = (0x08A424DCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_08A42478;
L_08A424DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A42518;
      }
      goto L_08A424E8;
    }
L_08A424E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08A425DC;
      }
      goto L_08A424F0;
    }
L_08A424F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A42518;
L_08A42518:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08A42534u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11008));
    ctx.pc = 0x08A5AFC4u;
    return;
L_08A42534:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A42580;
      }
      goto L_08A42540;
    }
L_08A42540:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(13))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(18));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A42574u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A42574u) goto L_08A42574;
    return;
L_08A42574:
    aot_gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-14744)));
      if (branch_taken) {
          goto L_08A425D0;
      }
      goto L_08A42580;
    }
L_08A42580:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A42598;
      }
      goto L_08A42588;
    }
L_08A42588:
    aot_gpr[5] = (0u | 98u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A42598u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A42598u) goto L_08A42598;
    return;
L_08A42598:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A425B8;
      }
      goto L_08A425A8;
    }
L_08A425A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A425C0;
      }
      goto L_08A425B8;
    }
L_08A425B8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A425C0;
L_08A425C0:
    aot_gpr[31] = (0x08A425C8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 142u, 0x08A4198Cu>(ctx, &aot_mem) && ctx.pc == 0x08A425C8u) goto L_08A425C8;
    return;
L_08A425C8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-14744)));
    goto L_08A425D0;
L_08A425D0:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A425D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A425D8u) goto L_08A425D8;
    return;
L_08A425D8:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    goto L_08A425DC;
L_08A425DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A425F4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A42614;
      }
      goto L_08A425FC;
    }
L_08A425FC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08A42614;
      }
      goto L_08A42604;
    }
L_08A42604:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A42614;
      }
      goto L_08A4260C;
    }
L_08A4260C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 134u);
      if (branch_taken) {
          goto L_08A4261C;
      }
      goto L_08A42614;
    }
L_08A42614:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[2] = (0u | 0u);
    goto L_08A4261C;
L_08A4261C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42624:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-14748)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A42640u);
    aot_gpr[17] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42640u) goto L_08A42640;
    return;
L_08A42640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A42688;
      }
      goto L_08A42650;
    }
L_08A42650:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A42688;
      }
      goto L_08A42660;
    }
L_08A42660:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16))))));
    aot_gpr[31] = (0x08A4266Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_08A42478;
L_08A4266C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A42678u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08A425F4;
L_08A42678:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A42684u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_08A4249C;
L_08A42684:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08A42688;
L_08A42688:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-14744)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A42698u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42698u) goto L_08A42698;
    return;
L_08A42698:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A426A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    aot_gpr[31] = (0x08A426BCu);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 14u, 0x08A41114u>(ctx, &aot_mem) && ctx.pc == 0x08A426BCu) goto L_08A426BC;
    return;
L_08A426BC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (0u | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A426F0;
      }
      goto L_08A426CC;
    }
L_08A426CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A426F0;
      }
      goto L_08A426DC;
    }
L_08A426DC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[23] = (0u | 2u);
      if (branch_taken) {
          goto L_08A426F8;
      }
      goto L_08A426E8;
    }
L_08A426E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42714;
      }
      goto L_08A426F0;
    }
L_08A426F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08A42910;
      }
      goto L_08A426F8;
    }
L_08A426F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A42714;
      }
      goto L_08A42704;
    }
L_08A42704:
    aot_gpr[31] = (0x08A4270Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A42624;
L_08A4270C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42728;
      }
      goto L_08A42714;
    }
L_08A42714:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A42730;
      }
      goto L_08A42720;
    }
L_08A42720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42768;
      }
      goto L_08A42728;
    }
L_08A42728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42910;
      }
      goto L_08A42730;
    }
L_08A42730:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A42754;
      }
      goto L_08A4273C;
    }
L_08A4273C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(17))))));
    aot_gpr[16] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A42788;
      }
      goto L_08A4274C;
    }
L_08A4274C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42828;
      }
      goto L_08A42754;
    }
L_08A42754:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A42910;
      }
      goto L_08A42768;
    }
L_08A42768:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4273C;
      }
      goto L_08A42774;
    }
L_08A42774:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A4273C;
      }
      goto L_08A42780;
    }
L_08A42780:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 45u);
      if (branch_taken) {
          goto L_08A42910;
      }
      goto L_08A42788;
    }
L_08A42788:
    aot_gpr[31] = (0x08A42790u);
    // nop
    ctx.pc = 0x08A5B124u;
    return;
L_08A42790:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A42818;
      }
      goto L_08A4279C;
    }
L_08A4279C:
    aot_gpr[31] = (0x08A427A4u);
    // nop
    ctx.pc = 0x08A5B0CCu;
    return;
L_08A427A4:
    aot_gpr[4] = (0u | 108u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A427C0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B144u;
    return;
L_08A427C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A427DC;
      }
      goto L_08A427CC;
    }
L_08A427CC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 233u);
    aot_gpr[31] = (0x08A427DCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A427DCu) goto L_08A427DC;
    return;
L_08A427DC:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[23]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42818;
      }
      goto L_08A427EC;
    }
L_08A427EC:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A427FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5B0A4u;
    return;
L_08A427FC:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A42818;
      }
      goto L_08A42808;
    }
L_08A42808:
    aot_gpr[5] = (0u | 240u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A42818u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A42818u) goto L_08A42818;
    return;
L_08A42818:
    aot_gpr[31] = (0x08A42820u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5B114u;
    return;
L_08A42820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42884;
      }
      goto L_08A42828;
    }
L_08A42828:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A42884;
      }
      goto L_08A42830;
    }
L_08A42830:
    aot_gpr[31] = (0x08A42838u);
    // nop
    ctx.pc = 0x08A5B0CCu;
    return;
L_08A42838:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(82)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42884;
      }
      goto L_08A4285C;
    }
L_08A4285C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A42868u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5B0A4u;
    return;
L_08A42868:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A42884;
      }
      goto L_08A42874;
    }
L_08A42874:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 266u);
    aot_gpr[31] = (0x08A42884u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A42884u) goto L_08A42884;
    return;
L_08A42884:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08A42894u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = 0x08A5B064u;
    return;
L_08A42894:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A428C0;
      }
      goto L_08A428A0;
    }
L_08A428A0:
    aot_gpr[4] = (32770u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(424));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A428B8;
      }
      goto L_08A428B0;
    }
L_08A428B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 116u);
      if (branch_taken) {
          goto L_08A42910;
      }
      goto L_08A428B8;
    }
L_08A428B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08A42910;
      }
      goto L_08A428C0;
    }
L_08A428C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(17))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A4290C;
      }
      goto L_08A428D0;
    }
L_08A428D0:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4290C;
      }
      goto L_08A428D8;
    }
L_08A428D8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(79))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4290C;
      }
      goto L_08A428E4;
    }
L_08A428E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A428F0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    ctx.pc = 0x08A5B0A4u;
    return;
L_08A428F0:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A4290C;
      }
      goto L_08A428FC;
    }
L_08A428FC:
    aot_gpr[5] = (0u | 288u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A4290Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A4290Cu) goto L_08A4290C;
    return;
L_08A4290C:
    aot_gpr[2] = (0u | 0u);
    goto L_08A42910;
L_08A42910:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4291C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x08A4294Cu);
    aot_gpr[5] = (0u | 0u);
    goto L_08A426A8;
L_08A4294C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42978:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A4299Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 14u, 0x08A41114u>(ctx, &aot_mem) && ctx.pc == 0x08A4299Cu) goto L_08A4299C;
    return;
L_08A4299C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A429CC;
      }
      goto L_08A429A4;
    }
L_08A429A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A429CC;
      }
      goto L_08A429B4;
    }
L_08A429B4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16))))));
    aot_gpr[18] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[18];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A429D4;
      }
      goto L_08A429C4;
    }
L_08A429C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42A08;
      }
      goto L_08A429CC;
    }
L_08A429CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08A42B14;
      }
      goto L_08A429D4;
    }
L_08A429D4:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A42A00;
      }
      goto L_08A429DC;
    }
L_08A429DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A429F0;
      }
      goto L_08A429E8;
    }
L_08A429E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A42A1C;
      }
      goto L_08A429F0;
    }
L_08A429F0:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A42B14;
      }
      goto L_08A42A00;
    }
L_08A42A00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A42B14;
      }
      goto L_08A42A08;
    }
L_08A42A08:
    aot_gpr[19] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A42A1C;
      }
      goto L_08A42A14;
    }
L_08A42A14:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A42A50;
      }
      goto L_08A42A1C;
    }
L_08A42A1C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42A48;
      }
      goto L_08A42A24;
    }
L_08A42A24:
    aot_gpr[20] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x08A42A34u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B04Cu;
    return;
L_08A42A34:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(17))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[20];
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A42A58;
      }
      goto L_08A42A40;
    }
L_08A42A40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42AD0;
      }
      goto L_08A42A48;
    }
L_08A42A48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A42B14;
      }
      goto L_08A42A50;
    }
L_08A42A50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A42B14;
      }
      goto L_08A42A58;
    }
L_08A42A58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(82)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(81)));
    goto L_08A42A74;
L_08A42A74:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08A42A88;
      }
      goto L_08A42A7C;
    }
L_08A42A7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(82)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A42AB8;
      }
      goto L_08A42A88;
    }
L_08A42A88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A42A94u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5B0A4u;
    return;
L_08A42A94:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A42AB0;
      }
      goto L_08A42AA0;
    }
L_08A42AA0:
    aot_gpr[5] = (0u | 429u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A42AB0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A42AB0u) goto L_08A42AB0;
    return;
L_08A42AB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42B00;
      }
      goto L_08A42AB8;
    }
L_08A42AB8:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42A74;
      }
      goto L_08A42AC8;
    }
L_08A42AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42B00;
      }
      goto L_08A42AD0;
    }
L_08A42AD0:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A42B00;
      }
      goto L_08A42AD8;
    }
L_08A42AD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A42AE4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(81)));
    ctx.pc = 0x08A5B0A4u;
    return;
L_08A42AE4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A42B00;
      }
      goto L_08A42AF0;
    }
L_08A42AF0:
    aot_gpr[5] = (0u | 440u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A42B00u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A42B00u) goto L_08A42B00;
    return;
L_08A42B00:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42B10;
      }
      goto L_08A42B08;
    }
L_08A42B08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A42B14;
      }
      goto L_08A42B10;
    }
L_08A42B10:
    aot_gpr[2] = (0u | 22u);
    goto L_08A42B14;
L_08A42B14:
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
L_08A42B34:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1084)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42B3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A42BB0;
      }
      goto L_08A42B48;
    }
L_08A42B48:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A42BB4;
      }
      goto L_08A42B50;
    }
L_08A42B50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42B9C;
      }
      goto L_08A42B60;
    }
L_08A42B60:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[3] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A42B84;
      }
      goto L_08A42B80;
    }
L_08A42B80:
    rt.unsupported(0x08A42B80u, 0x000001CDu, "special? not lowered yet"); return;
L_08A42B84:
    aot_gpr[2] = (ctx.lo);
    aot_gpr[31] = (0x08A42B90u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 243u, 0x08A43F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A42B90u) goto L_08A42B90;
    return;
L_08A42B90:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42B9C:
    aot_gpr[31] = (0x08A42BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 100u, 0x08A44828u>(ctx, &aot_mem) && ctx.pc == 0x08A42BA4u) goto L_08A42BA4;
    return;
L_08A42BA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42BB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08A42BB4;
L_08A42BB4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42BC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A42C3C;
      }
      goto L_08A42BE8;
    }
L_08A42BE8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A42C3C;
      }
      goto L_08A42BF0;
    }
L_08A42BF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (0x08A42C10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A42C10u) goto L_08A42C10;
    return;
L_08A42C10:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A42C58;
      }
      goto L_08A42C18;
    }
L_08A42C18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08A42C58;
      }
      goto L_08A42C24;
    }
L_08A42C24:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_08A42C3C;
L_08A42C3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42C58:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(100));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42C74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A42CB8;
      }
      goto L_08A42C8C;
    }
L_08A42C8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A42CA0;
      }
      goto L_08A42C98;
    }
L_08A42C98:
    aot_gpr[31] = (0x08A42CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08A42CA0u) goto L_08A42CA0;
    return;
L_08A42CA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A42CB8;
L_08A42CB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42CC8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A42CE0;
      }
      goto L_08A42CD0;
    }
L_08A42CD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A42CE0;
L_08A42CE0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42CE8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A42D0C;
      }
      goto L_08A42CF0;
    }
L_08A42CF0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08A42D08;
      }
      goto L_08A42CF8;
    }
L_08A42CF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42D08:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_08A42D0C;
L_08A42D0C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42D14:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A42D40;
      }
      goto L_08A42D1C;
    }
L_08A42D1C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08A42D3C;
      }
      goto L_08A42D24;
    }
L_08A42D24:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42D3C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    goto L_08A42D40;
L_08A42D40:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42D48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A42D88;
      }
      goto L_08A42D78;
    }
L_08A42D78:
    if (aot_gpr[5] == 0u) {
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(2));
        goto L_08A42D8C;
    }
    goto L_08A42D80;
L_08A42D80:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42DB0;
      }
      goto L_08A42D88;
    }
L_08A42D88:
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(2));
    goto L_08A42D8C;
L_08A42D8C:
    aot_gpr[2] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08A42DB0:
    aot_gpr[31] = (0x08A42DB8u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_08A42D14;
L_08A42DB8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A42D8C;
      }
      goto L_08A42DC0;
    }
L_08A42DC0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[16] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(200));
        goto L_08A42E84;
    }
    goto L_08A42DD0;
L_08A42DD0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[2] - aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[18] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A42E20;
      }
      goto L_08A42DE8;
    }
L_08A42DE8:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A42DF8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A42DF8u) goto L_08A42DF8;
    return;
L_08A42DF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A42D8C;
      }
      goto L_08A42E18;
    }
L_08A42E18:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A42D8C;
L_08A42E20:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A42E30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A42E30u) goto L_08A42E30;
    return;
L_08A42E30:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[18]);
    aot_gpr[3] = (aot_gpr[18] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[18]);
    aot_gpr[31] = (0x08A42E50u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A42E50u) goto L_08A42E50;
    return;
L_08A42E50:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[20] + 0u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08A42E84:
    aot_gpr[2] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08A42EA8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A42F04;
      }
      goto L_08A42EB0;
    }
L_08A42EB0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42F04;
      }
      goto L_08A42EB8;
    }
L_08A42EB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08A42EE8;
      }
      goto L_08A42EC4;
    }
L_08A42EC4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08A42EF4;
    }
    goto L_08A42EDC;
L_08A42EDC:
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42EE8:
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42EF4:
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42F04:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42F0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08A42F4C;
      }
      goto L_08A42F3C;
    }
L_08A42F3C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
        goto L_08A42F50;
    }
    goto L_08A42F44;
L_08A42F44:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A42F70;
      }
      goto L_08A42F4C;
    }
L_08A42F4C:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    goto L_08A42F50;
L_08A42F50:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_08A42F54;
L_08A42F54:
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
L_08A42F70:
    aot_gpr[31] = (0x08A42F78u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_08A42CE8;
L_08A42F78:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A42F50;
      }
      goto L_08A42F80;
    }
L_08A42F80:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A42FB0;
      }
      goto L_08A42F90;
    }
L_08A42F90:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[2] = (aot_gpr[18] + 0u);
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
L_08A42FB0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A42FBCu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08A42EA8;
L_08A42FBC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A42FEC;
      }
      goto L_08A42FC4;
    }
L_08A42FC4:
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A42FF4;
      }
      goto L_08A42FD0;
    }
L_08A42FD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A42FE4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A42FE4u) goto L_08A42FE4;
    return;
L_08A42FE4:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_08A42F54;
L_08A42FEC:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    goto L_08A42F50;
L_08A42FF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A43004u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0574(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0574_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_574(Runtime &runtime) {
    runtime.register_generated_unit(574u, 0x08A42000u, 4096u, &recomp_unit_0574, &recomp_unit_0574_entry);
    runtime.register_function(0x08A42004u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42014u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42028u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4203Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42048u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42058u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42068u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4206Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42074u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42080u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42090u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4209Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A420ACu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A420BCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A420D4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A420E0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A420F0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4210Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42118u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42128u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42130u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42134u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42140u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4216Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42194u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A421A8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A421B8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A421C4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A421CCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A421D4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A421E0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A421E8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A421F0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A421F8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42204u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42210u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42220u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4222Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42238u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42244u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42254u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42260u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4226Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42278u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42288u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4228Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4229Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A422D8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A422E4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A422F0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A422FCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42308u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42310u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42328u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42330u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4233Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42344u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42354u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4235Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42370u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42380u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42388u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A423B4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A423CCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A423DCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A423ECu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A423FCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42408u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42410u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42418u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42428u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42430u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4243Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4244Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42460u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42464u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42478u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4249Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A424BCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A424CCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A424D4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A424DCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A424E8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A424F0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42518u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42534u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42540u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42574u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42580u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42588u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42598u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A425A8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A425B8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A425C0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A425C8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A425D0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A425D8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A425DCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A425F4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A425FCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42604u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4260Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42614u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4261Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42624u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42640u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42650u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42660u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4266Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42678u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42684u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42688u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42698u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A426A8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A426BCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A426CCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A426DCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A426E8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A426F0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A426F8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42704u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4270Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42714u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42720u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42728u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42730u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4273Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4274Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42754u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42768u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42774u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42780u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42788u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42790u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4279Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A427A4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A427C0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A427CCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A427DCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A427ECu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A427FCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42808u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42818u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42820u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42828u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42830u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42838u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4285Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42868u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42874u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42884u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42894u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A428A0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A428B0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A428B8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A428C0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A428D0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A428D8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A428E4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A428F0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A428FCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4290Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42910u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4291Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4294Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42978u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A4299Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A429A4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A429B4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A429C4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A429CCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A429D4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A429DCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A429E8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A429F0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A00u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A08u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A14u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A1Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A24u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A34u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A40u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A48u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A50u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A58u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A74u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A7Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A88u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42A94u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42AA0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42AB0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42AB8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42AC8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42AD0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42AD8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42AE4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42AF0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B00u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B08u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B10u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B14u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B34u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B3Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B48u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B50u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B60u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B80u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B84u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B90u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42B9Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42BA4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42BB0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42BB4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42BC0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42BE8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42BF0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42C10u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42C18u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42C24u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42C3Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42C58u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42C74u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42C8Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42C98u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42CA0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42CB8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42CC8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42CD0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42CE0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42CE8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42CF0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42CF8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42D08u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42D0Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42D14u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42D1Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42D24u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42D3Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42D40u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42D48u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42D78u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42D80u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42D88u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42D8Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42DB0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42DB8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42DC0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42DD0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42DE8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42DF8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42E18u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42E20u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42E30u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42E50u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42E84u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42EA8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42EB0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42EB8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42EC4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42EDCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42EE8u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42EF4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42F04u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42F0Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42F3Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42F44u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42F4Cu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42F50u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42F54u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42F70u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42F78u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42F80u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42F90u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42FB0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42FBCu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42FC4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42FD0u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42FE4u, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42FECu, &recomp_unit_0574, "recomp_unit_0574");
    runtime.register_function(0x08A42FF4u, &recomp_unit_0574, "recomp_unit_0574");
}
} // namespace psprecomp
