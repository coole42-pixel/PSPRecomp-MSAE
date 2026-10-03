#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0417[1022] = {
    1, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 12, 13, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 17,
    0, 18, 0, 0, 0, 19, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 24, 25, 0, 26, 0, 0, 0, 0, 27,
    0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 56,
    0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 67, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71,
    0, 72, 0, 0, 73, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0,
    81, 0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 90, 0, 91, 0,
    0, 92, 0, 93, 0, 0, 94, 0, 95, 96, 0, 97, 0, 98, 99, 0, 0, 100, 0, 0, 0, 101, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    104, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 108, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0,
    0, 114, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 125, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 129, 0, 130, 0, 0, 0, 0,
    0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0,
    0, 0, 154, 0, 0, 0, 155, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0,
    161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 168, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175,
    0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 184, 0, 185, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 194, 0, 195, 0,
    0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0,
    0, 210, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 223, 224,
    0, 225, 0, 0, 226, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 231, 232, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 235, 0,
    0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 240, 0, 241, 242, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 247, 248, 0, 249, 0,
    0, 0, 250, 251, 252, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0,
    261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265,
};
void recomp_unit_0417_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089A5000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0417[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A5000;
    case 2u: goto L_089A500C;
    case 3u: goto L_089A5014;
    case 4u: goto L_089A501C;
    case 5u: goto L_089A5034;
    case 6u: goto L_089A504C;
    case 7u: goto L_089A5068;
    case 8u: goto L_089A5090;
    case 9u: goto L_089A509C;
    case 10u: goto L_089A50A8;
    case 11u: goto L_089A50AC;
    case 12u: goto L_089A50CC;
    case 13u: goto L_089A50D0;
    case 14u: goto L_089A50D8;
    case 15u: goto L_089A50E0;
    case 16u: goto L_089A50F0;
    case 17u: goto L_089A50FC;
    case 18u: goto L_089A5104;
    case 19u: goto L_089A5114;
    case 20u: goto L_089A5118;
    case 21u: goto L_089A5120;
    case 22u: goto L_089A514C;
    case 23u: goto L_089A5154;
    case 24u: goto L_089A515C;
    case 25u: goto L_089A5160;
    case 26u: goto L_089A5168;
    case 27u: goto L_089A517C;
    case 28u: goto L_089A5184;
    case 29u: goto L_089A518C;
    case 30u: goto L_089A51AC;
    case 31u: goto L_089A51B8;
    case 32u: goto L_089A51C0;
    case 33u: goto L_089A51C8;
    case 34u: goto L_089A51D8;
    case 35u: goto L_089A51E8;
    case 36u: goto L_089A5210;
    case 37u: goto L_089A5218;
    case 38u: goto L_089A5230;
    case 39u: goto L_089A5238;
    case 40u: goto L_089A5268;
    case 41u: goto L_089A5274;
    case 42u: goto L_089A5290;
    case 43u: goto L_089A52A8;
    case 44u: goto L_089A52BC;
    case 45u: goto L_089A52C4;
    case 46u: goto L_089A52CC;
    case 47u: goto L_089A52D8;
    case 48u: goto L_089A52E8;
    case 49u: goto L_089A52F0;
    case 50u: goto L_089A530C;
    case 51u: goto L_089A531C;
    case 52u: goto L_089A5324;
    case 53u: goto L_089A5358;
    case 54u: goto L_089A5368;
    case 55u: goto L_089A5370;
    case 56u: goto L_089A537C;
    case 57u: goto L_089A538C;
    case 58u: goto L_089A5394;
    case 59u: goto L_089A53B4;
    case 60u: goto L_089A53B8;
    case 61u: goto L_089A53DC;
    case 62u: goto L_089A53E4;
    case 63u: goto L_089A53EC;
    case 64u: goto L_089A5418;
    case 65u: goto L_089A5438;
    case 66u: goto L_089A544C;
    case 67u: goto L_089A5450;
    case 68u: goto L_089A5454;
    case 69u: goto L_089A5468;
    case 70u: goto L_089A5470;
    case 71u: goto L_089A547C;
    case 72u: goto L_089A5484;
    case 73u: goto L_089A5490;
    case 74u: goto L_089A5494;
    case 75u: goto L_089A54AC;
    case 76u: goto L_089A54B4;
    case 77u: goto L_089A54BC;
    case 78u: goto L_089A54C4;
    case 79u: goto L_089A54E0;
    case 80u: goto L_089A54EC;
    case 81u: goto L_089A5500;
    case 82u: goto L_089A5508;
    case 83u: goto L_089A5514;
    case 84u: goto L_089A551C;
    case 85u: goto L_089A5528;
    case 86u: goto L_089A5554;
    case 87u: goto L_089A555C;
    case 88u: goto L_089A5564;
    case 89u: goto L_089A556C;
    case 90u: goto L_089A5570;
    case 91u: goto L_089A5578;
    case 92u: goto L_089A5584;
    case 93u: goto L_089A558C;
    case 94u: goto L_089A5598;
    case 95u: goto L_089A55A0;
    case 96u: goto L_089A55A4;
    case 97u: goto L_089A55AC;
    case 98u: goto L_089A55B4;
    case 99u: goto L_089A55B8;
    case 100u: goto L_089A55C4;
    case 101u: goto L_089A55D4;
    case 102u: goto L_089A55D8;
    case 103u: goto L_089A55F8;
    case 104u: goto L_089A5600;
    case 105u: goto L_089A5608;
    case 106u: goto L_089A5618;
    case 107u: goto L_089A5624;
    case 108u: goto L_089A562C;
    case 109u: goto L_089A5630;
    case 110u: goto L_089A564C;
    case 111u: goto L_089A5654;
    case 112u: goto L_089A566C;
    case 113u: goto L_089A5678;
    case 114u: goto L_089A5684;
    case 115u: goto L_089A568C;
    case 116u: goto L_089A5698;
    case 117u: goto L_089A56A0;
    case 118u: goto L_089A56AC;
    case 119u: goto L_089A56B4;
    case 120u: goto L_089A56DC;
    case 121u: goto L_089A56EC;
    case 122u: goto L_089A56F8;
    case 123u: goto L_089A5710;
    case 124u: goto L_089A5728;
    case 125u: goto L_089A572C;
    case 126u: goto L_089A5748;
    case 127u: goto L_089A5750;
    case 128u: goto L_089A5760;
    case 129u: goto L_089A5764;
    case 130u: goto L_089A576C;
    case 131u: goto L_089A5784;
    case 132u: goto L_089A578C;
    case 133u: goto L_089A5794;
    case 134u: goto L_089A57A0;
    case 135u: goto L_089A57C8;
    case 136u: goto L_089A57D0;
    case 137u: goto L_089A57E0;
    case 138u: goto L_089A57E8;
    case 139u: goto L_089A57F8;
    case 140u: goto L_089A5810;
    case 141u: goto L_089A5818;
    case 142u: goto L_089A5820;
    case 143u: goto L_089A5870;
    case 144u: goto L_089A5888;
    case 145u: goto L_089A58A0;
    case 146u: goto L_089A58AC;
    case 147u: goto L_089A58B8;
    case 148u: goto L_089A58C4;
    case 149u: goto L_089A58D0;
    case 150u: goto L_089A58E0;
    case 151u: goto L_089A58E8;
    case 152u: goto L_089A58F0;
    case 153u: goto L_089A58F8;
    case 154u: goto L_089A5908;
    case 155u: goto L_089A5918;
    case 156u: goto L_089A591C;
    case 157u: goto L_089A5938;
    case 158u: goto L_089A5944;
    case 159u: goto L_089A5960;
    case 160u: goto L_089A5970;
    case 161u: goto L_089A5980;
    case 162u: goto L_089A5990;
    case 163u: goto L_089A5998;
    case 164u: goto L_089A59D0;
    case 165u: goto L_089A59DC;
    case 166u: goto L_089A59EC;
    case 167u: goto L_089A59F8;
    case 168u: goto L_089A5A14;
    case 169u: goto L_089A5A18;
    case 170u: goto L_089A5A24;
    case 171u: goto L_089A5A48;
    case 172u: goto L_089A5A54;
    case 173u: goto L_089A5A60;
    case 174u: goto L_089A5A70;
    case 175u: goto L_089A5A7C;
    case 176u: goto L_089A5A90;
    case 177u: goto L_089A5A9C;
    case 178u: goto L_089A5AA4;
    case 179u: goto L_089A5AB4;
    case 180u: goto L_089A5AC0;
    case 181u: goto L_089A5AD0;
    case 182u: goto L_089A5ADC;
    case 183u: goto L_089A5AE8;
    case 184u: goto L_089A5AF0;
    case 185u: goto L_089A5AF8;
    case 186u: goto L_089A5AFC;
    case 187u: goto L_089A5B40;
    case 188u: goto L_089A5B44;
    case 189u: goto L_089A5B50;
    case 190u: goto L_089A5B64;
    case 191u: goto L_089A5B74;
    case 192u: goto L_089A5B7C;
    case 193u: goto L_089A5BEC;
    case 194u: goto L_089A5BF0;
    case 195u: goto L_089A5BF8;
    case 196u: goto L_089A5C08;
    case 197u: goto L_089A5C18;
    case 198u: goto L_089A5C24;
    case 199u: goto L_089A5C2C;
    case 200u: goto L_089A5C64;
    case 201u: goto L_089A5C9C;
    case 202u: goto L_089A5CA4;
    case 203u: goto L_089A5CB0;
    case 204u: goto L_089A5CBC;
    case 205u: goto L_089A5CC8;
    case 206u: goto L_089A5CD4;
    case 207u: goto L_089A5CE0;
    case 208u: goto L_089A5CEC;
    case 209u: goto L_089A5CF4;
    case 210u: goto L_089A5D04;
    case 211u: goto L_089A5D08;
    case 212u: goto L_089A5D2C;
    case 213u: goto L_089A5D34;
    case 214u: goto L_089A5D64;
    case 215u: goto L_089A5D98;
    case 216u: goto L_089A5DA4;
    case 217u: goto L_089A5DB4;
    case 218u: goto L_089A5DC0;
    case 219u: goto L_089A5DC8;
    case 220u: goto L_089A5DD4;
    case 221u: goto L_089A5DEC;
    case 222u: goto L_089A5DF4;
    case 223u: goto L_089A5DF8;
    case 224u: goto L_089A5DFC;
    case 225u: goto L_089A5E04;
    case 226u: goto L_089A5E10;
    case 227u: goto L_089A5E18;
    case 228u: goto L_089A5E24;
    case 229u: goto L_089A5E30;
    case 230u: goto L_089A5E40;
    case 231u: goto L_089A5E48;
    case 232u: goto L_089A5E4C;
    case 233u: goto L_089A5E58;
    case 234u: goto L_089A5E70;
    case 235u: goto L_089A5E78;
    case 236u: goto L_089A5E84;
    case 237u: goto L_089A5E8C;
    case 238u: goto L_089A5E94;
    case 239u: goto L_089A5EA8;
    case 240u: goto L_089A5EB0;
    case 241u: goto L_089A5EB8;
    case 242u: goto L_089A5EBC;
    case 243u: goto L_089A5EC8;
    case 244u: goto L_089A5ED0;
    case 245u: goto L_089A5ED8;
    case 246u: goto L_089A5EE0;
    case 247u: goto L_089A5EEC;
    case 248u: goto L_089A5EF0;
    case 249u: goto L_089A5EF8;
    case 250u: goto L_089A5F08;
    case 251u: goto L_089A5F0C;
    case 252u: goto L_089A5F10;
    case 253u: goto L_089A5F18;
    case 254u: goto L_089A5F24;
    case 255u: goto L_089A5F34;
    case 256u: goto L_089A5F44;
    case 257u: goto L_089A5F50;
    case 258u: goto L_089A5F68;
    case 259u: goto L_089A5F70;
    case 260u: goto L_089A5F78;
    case 261u: goto L_089A5F80;
    case 262u: goto L_089A5F88;
    case 263u: goto L_089A5FBC;
    case 264u: goto L_089A5FC0;
    case 265u: goto L_089A5FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A5000:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089A500Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A500Cu) goto L_089A500C;
    return;
L_089A500C:
    aot_gpr[31] = (0x089A5014u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 31u, 0x089A2168u>(ctx, &aot_mem) && ctx.pc == 0x089A5014u) goto L_089A5014;
    return;
L_089A5014:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52003u);
      if (branch_taken) {
          goto L_089A504C;
      }
      goto L_089A501C;
    }
L_089A501C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5034:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 260u, 0x089A4FF8u>(ctx, &aot_mem); return;
      }
      goto L_089A504C;
    }
L_089A504C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5068:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
      if (branch_taken) {
          goto L_089A51AC;
      }
      goto L_089A5090;
    }
L_089A5090:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A50AC;
      }
      goto L_089A509C;
    }
L_089A509C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(22));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089A50CC;
      }
      goto L_089A50A8;
    }
L_089A50A8:
    aot_gpr[3] = (0u | 52000u);
    goto L_089A50AC;
L_089A50AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A50CC:
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    goto L_089A50D0;
L_089A50D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A50A8;
      }
      goto L_089A50D8;
    }
L_089A50D8:
    aot_gpr[31] = (0x089A50E0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A50E0u) goto L_089A50E0;
    return;
L_089A50E0:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089A50F0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A50F0u) goto L_089A50F0;
    return;
L_089A50F0:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089A50FCu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089A50FCu) goto L_089A50FC;
    return;
L_089A50FC:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(22));
      if (branch_taken) {
          goto L_089A51C8;
      }
      goto L_089A5104;
    }
L_089A5104:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(180)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A5218;
      }
      goto L_089A5114;
    }
L_089A5114:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_089A5118;
L_089A5118:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089A515C;
      }
      goto L_089A5120;
    }
L_089A5120:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089A514Cu);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A514Cu) goto L_089A514C;
    return;
L_089A514C:
    aot_gpr[31] = (0x089A5154u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 31u, 0x089A2168u>(ctx, &aot_mem) && ctx.pc == 0x089A5154u) goto L_089A5154;
    return;
L_089A5154:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_089A518C;
      }
      goto L_089A515C;
    }
L_089A515C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_089A5160;
L_089A5160:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089A51C0;
      }
      goto L_089A5168;
    }
L_089A5168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A517Cu);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A517Cu) goto L_089A517C;
    return;
L_089A517C:
    aot_gpr[31] = (0x089A5184u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 31u, 0x089A2168u>(ctx, &aot_mem) && ctx.pc == 0x089A5184u) goto L_089A5184;
    return;
L_089A5184:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_089A51C0;
      }
      goto L_089A518C;
    }
L_089A518C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[3] = (0u | 52003u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A51AC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(86));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[2];
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A50A8;
      }
      goto L_089A51B8;
    }
L_089A51B8:
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    goto L_089A50D0;
L_089A51C0:
    aot_gpr[3] = (0u + 0u);
    goto L_089A50AC;
L_089A51C8:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A51D8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 28u, 0x08990324u>(ctx, &aot_mem) && ctx.pc == 0x089A51D8u) goto L_089A51D8;
    return;
L_089A51D8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(180)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_089A5160;
    }
    goto L_089A51E8;
L_089A51E8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A5210u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A5210u) goto L_089A5210;
    return;
L_089A5210:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_089A5160;
L_089A5218:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A5230u);
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A5230u) goto L_089A5230;
    return;
L_089A5230:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_089A5118;
L_089A5238:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[3] = (0u | 65535u);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
      if (branch_taken) {
          goto L_089A52D8;
      }
      goto L_089A5268;
    }
L_089A5268:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A5290;
      }
      goto L_089A5274;
    }
L_089A5274:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5290:
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(180)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (2217u << 16u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[7] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A52F0;
      }
      goto L_089A52A8;
    }
L_089A52A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089A5274;
      }
      goto L_089A52BC;
    }
L_089A52BC:
    aot_gpr[31] = (0x089A52C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 111u, 0x089A466Cu>(ctx, &aot_mem) && ctx.pc == 0x089A52C4u) goto L_089A52C4;
    return;
L_089A52C4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A5274;
      }
      goto L_089A52CC;
    }
L_089A52CC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089A5274;
L_089A52D8:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[17] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089A52E8u);
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A52E8u) goto L_089A52E8;
    return;
L_089A52E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089A5268;
L_089A52F0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A530Cu);
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A530Cu) goto L_089A530C;
    return;
L_089A530C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A531Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A531Cu) goto L_089A531C;
    return;
L_089A531C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(188), aot_gpr[2]);
    goto L_089A52A8;
L_089A5324:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[2];
    aot_gpr[17] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089A53B4;
      }
      goto L_089A5358;
    }
L_089A5358:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A53B8;
      }
      goto L_089A5368;
    }
L_089A5368:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_089A53B4;
      }
      goto L_089A5370;
    }
L_089A5370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A537Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089A537Cu) goto L_089A537C;
    return;
L_089A537C:
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089A53B4;
      }
      goto L_089A538C;
    }
L_089A538C:
    aot_gpr[31] = (0x089A5394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A5394u) goto L_089A5394;
    return;
L_089A5394:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A53DC;
      }
      goto L_089A53B4;
    }
L_089A53B4:
    aot_gpr[3] = (0u | 52000u);
    goto L_089A53B8;
L_089A53B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A53DC:
    aot_gpr[31] = (0x089A53E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 97u, 0x089A452Cu>(ctx, &aot_mem) && ctx.pc == 0x089A53E4u) goto L_089A53E4;
    return;
L_089A53E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A53B8;
      }
      goto L_089A53EC;
    }
L_089A53EC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] + 0u);
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
L_089A5418:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089A544C;
      }
      goto L_089A5438;
    }
L_089A5438:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1401) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_089A5468;
      }
      goto L_089A544C;
    }
L_089A544C:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A5450;
L_089A5450:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A5454;
L_089A5454:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5468:
    aot_gpr[31] = (0x089A5470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 234u, 0x089A3F00u>(ctx, &aot_mem) && ctx.pc == 0x089A5470u) goto L_089A5470;
    return;
L_089A5470:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A5450;
      }
      goto L_089A547C;
    }
L_089A547C:
    aot_gpr[31] = (0x089A5484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 172u, 0x089A3AA4u>(ctx, &aot_mem) && ctx.pc == 0x089A5484u) goto L_089A5484;
    return;
L_089A5484:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089A54AC;
      }
      goto L_089A5490;
    }
L_089A5490:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A5494;
L_089A5494:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A54AC:
    aot_gpr[31] = (0x089A54B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 130u, 0x089A481Cu>(ctx, &aot_mem) && ctx.pc == 0x089A54B4u) goto L_089A54B4;
    return;
L_089A54B4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (aot_gpr[16] + 0u);
        goto L_089A5454;
    }
    goto L_089A54BC;
L_089A54BC:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A5494;
L_089A54C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[8] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_089A5514;
      }
      goto L_089A54E0;
    }
L_089A54E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_089A5500;
      }
      goto L_089A54EC;
    }
L_089A54EC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    goto L_089A5500;
L_089A5500:
    aot_gpr[31] = (0x089A5508u);
    // nop
    goto L_089A5418;
L_089A5508:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5514:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A54E0;
      }
      goto L_089A551C;
    }
L_089A551C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5528:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[31] = (0x089A5554u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 158u, 0x0899FCD4u>(ctx, &aot_mem) && ctx.pc == 0x089A5554u) goto L_089A5554;
    return;
L_089A5554:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A55D4;
      }
      goto L_089A555C;
    }
L_089A555C:
    aot_gpr[31] = (0x089A5564u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 31u, 0x089A2168u>(ctx, &aot_mem) && ctx.pc == 0x089A5564u) goto L_089A5564;
    return;
L_089A5564:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A55F8;
      }
      goto L_089A556C;
    }
L_089A556C:
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(124));
    goto L_089A5570;
L_089A5570:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089A5578;
L_089A5578:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x089A5584u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 28u, 0x089A31F8u>(ctx, &aot_mem) && ctx.pc == 0x089A5584u) goto L_089A5584;
    return;
L_089A5584:
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089A5578;
    }
    goto L_089A558C;
L_089A558C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089A55A4;
    }
    goto L_089A5598;
L_089A5598:
    aot_gpr[31] = (0x089A55A0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A55A0u) goto L_089A55A0;
    return;
L_089A55A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089A55A4;
L_089A55A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A55B8;
      }
      goto L_089A55AC;
    }
L_089A55AC:
    aot_gpr[31] = (0x089A55B4u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A55B4u) goto L_089A55B4;
    return;
L_089A55B4:
    aot_gpr[2] = (2217u << 16u);
    goto L_089A55B8;
L_089A55B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089A55D8;
      }
      goto L_089A55C4;
    }
L_089A55C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A55D4u);
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A55D4u) goto L_089A55D4;
    return;
L_089A55D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089A55D8;
L_089A55D8:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
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
L_089A55F8:
    aot_gpr[31] = (0x089A5600u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 158u, 0x0899FCD4u>(ctx, &aot_mem) && ctx.pc == 0x089A5600u) goto L_089A5600;
    return;
L_089A5600:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A556C;
      }
      goto L_089A5608;
    }
L_089A5608:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_089A5570;
      }
      goto L_089A5618;
    }
L_089A5618:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089A5654;
      }
      goto L_089A5624;
    }
L_089A5624:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A5698;
      }
      goto L_089A562C;
    }
L_089A562C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    goto L_089A5630;
L_089A5630:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089A564Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[20]));
    goto L_089A54C4;
L_089A564C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(124));
        goto L_089A5570;
    }
    goto L_089A5654;
L_089A5654:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[17] + 0u);
    aot_gpr[20] = (0u + 0u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    goto L_089A566C;
L_089A566C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A5684;
      }
      goto L_089A5678;
    }
L_089A5678:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A5684u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089A5684u) goto L_089A5684;
    return;
L_089A5684:
    if (aot_gpr[20] != aot_gpr[21]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_089A566C;
    }
    goto L_089A568C;
L_089A568C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089A556C;
L_089A5698:
    aot_gpr[31] = (0x089A56A0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 172u, 0x089A3AA4u>(ctx, &aot_mem) && ctx.pc == 0x089A56A0u) goto L_089A56A0;
    return;
L_089A56A0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A56ACu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 130u, 0x089A481Cu>(ctx, &aot_mem) && ctx.pc == 0x089A56ACu) goto L_089A56AC;
    return;
L_089A56AC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    goto L_089A5630;
L_089A56B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1632));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1624), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1616), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1628), aot_gpr[31]);
    aot_gpr[31] = (0x089A56DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1620), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A56DCu) goto L_089A56DC;
    return;
L_089A56DC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] & 2u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A5748;
      }
      goto L_089A56EC;
    }
L_089A56EC:
    aot_gpr[2] = (aot_gpr[3] & 4u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A57C8;
      }
      goto L_089A56F8;
    }
L_089A56F8:
    aot_gpr[2] = (aot_gpr[3] & 255u);
    aot_gpr[3] = (aot_gpr[2] & 1u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000006u) | ((0u & 0x00000003u) << 1u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A57E8;
      }
      goto L_089A5710;
    }
L_089A5710:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(35));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089A5728u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 90u, 0x089A44C8u>(ctx, &aot_mem) && ctx.pc == 0x089A5728u) goto L_089A5728;
    return;
L_089A5728:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089A572C;
L_089A572C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1628)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1624)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1620)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1616)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1632));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5748:
    aot_gpr[31] = (0x089A5750u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A5750u) goto L_089A5750;
    return;
L_089A5750:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1603));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A5818;
      }
      goto L_089A5760;
    }
L_089A5760:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    goto L_089A5764;
L_089A5764:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089A5794;
      }
      goto L_089A576C;
    }
L_089A576C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A5784u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A5784u) goto L_089A5784;
    return;
L_089A5784:
    aot_gpr[31] = (0x089A578Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 31u, 0x089A2168u>(ctx, &aot_mem) && ctx.pc == 0x089A578Cu) goto L_089A578C;
    return;
L_089A578C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 52003u);
      if (branch_taken) {
          goto L_089A572C;
      }
      goto L_089A5794;
    }
L_089A5794:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (0x089A57A0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 162u, 0x0899FD14u>(ctx, &aot_mem) && ctx.pc == 0x089A57A0u) goto L_089A57A0;
    return;
L_089A57A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (0u | 52018u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1628)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1624)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1620)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1616)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1632));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A57C8:
    aot_gpr[31] = (0x089A57D0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A57D0u) goto L_089A57D0;
    return;
L_089A57D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1603));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
        goto L_089A5764;
    }
    goto L_089A57E0;
L_089A57E0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089A56F8;
L_089A57E8:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-20908)));
    aot_gpr[31] = (0x089A57F8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089A57F8u) goto L_089A57F8;
    return;
L_089A57F8:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089A5810u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A5810u) goto L_089A5810;
    return;
L_089A5810:
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    goto L_089A5710;
L_089A5818:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089A56EC;
L_089A5820:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(180)));
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(96), aot_gpr[2]);
      if (branch_taken) {
          goto L_089A59D0;
      }
      goto L_089A5870;
    }
L_089A5870:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(100), 0u);
    aot_gpr[23] = (0u + 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
    goto L_089A5888;
L_089A5888:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A58A0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A58A0u) goto L_089A58A0;
    return;
L_089A58A0:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A58ACu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A58ACu) goto L_089A58AC;
    return;
L_089A58AC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089A58B8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A58B8u) goto L_089A58B8;
    return;
L_089A58B8:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(5));
    aot_gpr[31] = (0x089A58C4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(113));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A58C4u) goto L_089A58C4;
    return;
L_089A58C4:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A58D0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A58D0u) goto L_089A58D0;
    return;
L_089A58D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(96)));
    aot_gpr[20] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089A5A90;
      }
      goto L_089A58E0;
    }
L_089A58E0:
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A5AB4;
      }
      goto L_089A58E8;
    }
L_089A58E8:
    aot_gpr[31] = (0x089A58F0u);
    aot_gpr[5] = (aot_gpr[23] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A58F0u) goto L_089A58F0;
    return;
L_089A58F0:
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A5B40;
      }
      goto L_089A58F8;
    }
L_089A58F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A5908u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A5908u) goto L_089A5908;
    return;
L_089A5908:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A5AF8;
      }
      goto L_089A5918;
    }
L_089A5918:
    aot_gpr[23] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    goto L_089A591C;
L_089A591C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[17] = (aot_gpr[20] + 0u);
    aot_gpr[22] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089A5938u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089A5938u) goto L_089A5938;
    return;
L_089A5938:
    aot_gpr[21] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089A5944;
L_089A5944:
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    aot_gpr[31] = (0x089A5960u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 56u, 0x089A33C4u>(ctx, &aot_mem) && ctx.pc == 0x089A5960u) goto L_089A5960;
    return;
L_089A5960:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[23] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[30] + 0u);
      if (branch_taken) {
          goto L_089A5998;
      }
      goto L_089A5970;
    }
L_089A5970:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[31] = (0x089A5980u);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5980u) goto L_089A5980;
    return;
L_089A5980:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    if (aot_gpr[3] == 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089A5C2C;
    }
    goto L_089A5990;
L_089A5990:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089A5944;
      }
      goto L_089A5998;
    }
L_089A5998:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A59D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A5B7C;
      }
      goto L_089A59DC;
    }
L_089A59DC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A59ECu);
    aot_gpr[23] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A59ECu) goto L_089A59EC;
    return;
L_089A59EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(18));
      if (branch_taken) {
          goto L_089A5A14;
      }
      goto L_089A59F8;
    }
L_089A59F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(100)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3)));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(22));
    aot_gpr[23] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    goto L_089A5A14;
L_089A5A14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    goto L_089A5A18;
L_089A5A18:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[16] = (aot_gpr[4] & 65535u);
        goto L_089A5AA4;
    }
    goto L_089A5A24;
L_089A5A24:
    aot_gpr[2] = (aot_gpr[23] + static_cast<std::uint32_t>(34));
    aot_gpr[19] = (aot_gpr[23] + static_cast<std::uint32_t>(37));
    aot_gpr[16] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A5A48u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A5A48u) goto L_089A5A48;
    return;
L_089A5A48:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A5A54u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A5A54u) goto L_089A5A54;
    return;
L_089A5A54:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089A5A60u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A5A60u) goto L_089A5A60;
    return;
L_089A5A60:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(5));
    aot_gpr[31] = (0x089A5A70u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(113));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A5A70u) goto L_089A5A70;
    return;
L_089A5A70:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A5A7Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A5A7Cu) goto L_089A5A7C;
    return;
L_089A5A7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(96)));
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[20] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089A58E0;
      }
      goto L_089A5A90;
    }
L_089A5A90:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A5A9Cu);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A5A9Cu) goto L_089A5A9C;
    return;
L_089A5A9C:
    aot_gpr[23] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    goto L_089A591C;
L_089A5AA4:
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(3));
    goto L_089A5888;
L_089A5AB4:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(-16544));
    aot_gpr[17] = (0u + 0u);
    goto L_089A5AC0;
L_089A5AC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A5AD0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A5AD0u) goto L_089A5AD0;
    return;
L_089A5AD0:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[22] != aot_gpr[17];
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A5AC0;
      }
      goto L_089A5ADC;
    }
L_089A5ADC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A5AE8u);
    aot_gpr[5] = (aot_gpr[23] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A5AE8u) goto L_089A5AE8;
    return;
L_089A5AE8:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A58F8;
      }
      goto L_089A5AF0;
    }
L_089A5AF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(100)));
    goto L_089A5B44;
L_089A5AF8:
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(40));
    goto L_089A5AFC;
L_089A5AFC:
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[6]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[6]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(11), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(15), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    goto L_089A5918;
L_089A5B40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(100)));
    goto L_089A5B44;
L_089A5B44:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A5B50u);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A5B50u) goto L_089A5B50;
    return;
L_089A5B50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A5B64u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A5B64u) goto L_089A5B64;
    return;
L_089A5B64:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A5918;
      }
      goto L_089A5B74;
    }
L_089A5B74:
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(40));
    goto L_089A5AFC;
L_089A5B7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[7]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[8]));
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[6]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[8]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[7]));
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(14476)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A5BECu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A5BECu) goto L_089A5BEC;
    return;
L_089A5BEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_089A5BF0;
L_089A5BF0:
    aot_gpr[31] = (0x089A5BF8u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5BF8u) goto L_089A5BF8;
    return;
L_089A5BF8:
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[18];
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089A5BF0;
      }
      goto L_089A5C08;
    }
L_089A5C08:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A5C18u);
    aot_gpr[23] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A5C18u) goto L_089A5C18;
    return;
L_089A5C18:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(18));
      if (branch_taken) {
          goto L_089A59F8;
      }
      goto L_089A5C24;
    }
L_089A5C24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    goto L_089A5A18;
L_089A5C2C:
    aot_gpr[16] = (0u | 52005u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5C64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A5C9Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 193u, 0x0898DD8Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5C9Cu) goto L_089A5C9C;
    return;
L_089A5C9C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A5D08;
      }
      goto L_089A5CA4;
    }
L_089A5CA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089A5D04;
      }
      goto L_089A5CB0;
    }
L_089A5CB0:
    aot_gpr[18] = (0u + 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(124)));
    goto L_089A5CBC;
L_089A5CBC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A5CEC;
      }
      goto L_089A5CC8;
    }
L_089A5CC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A5CD4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089A5CD4u) goto L_089A5CD4;
    return;
L_089A5CD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A5CE0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089A5CE0u) goto L_089A5CE0;
    return;
L_089A5CE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A5CECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089A5CECu) goto L_089A5CEC;
    return;
L_089A5CEC:
    if (aot_gpr[18] != aot_gpr[20]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(124)));
        goto L_089A5CBC;
    }
    goto L_089A5CF4;
L_089A5CF4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A5D2C;
      }
      goto L_089A5D04;
    }
L_089A5D04:
    aot_gpr[3] = (0u + 0u);
    goto L_089A5D08;
L_089A5D08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5D2C:
    aot_gpr[31] = (0x089A5D34u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    goto L_089A5820;
L_089A5D34:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
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
L_089A5D64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[31] = (0x089A5D98u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A5D98u) goto L_089A5D98;
    return;
L_089A5D98:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A5F88;
      }
      goto L_089A5DA4;
    }
L_089A5DA4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[22] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0418_entry, 418u, 61u, 0x089A6314u>(ctx, &aot_mem); return;
      }
      goto L_089A5DB4;
    }
L_089A5DB4:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(124)));
    goto L_089A5DC0;
L_089A5DC0:
    if (aot_gpr[16] == 0u) {
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
        goto L_089A5EBC;
    }
    goto L_089A5DC8;
L_089A5DC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
        goto L_089A5EBC;
    }
    goto L_089A5DD4;
L_089A5DD4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-91));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[18];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0418_entry, 418u, 43u, 0x089A621Cu>(ctx, &aot_mem); return;
      }
      goto L_089A5DEC;
    }
L_089A5DEC:
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        (void)rt.invoke_chained_direct<&recomp_unit_0418_entry, 418u, 55u, 0x089A62CCu>(ctx, &aot_mem); return;
    }
    goto L_089A5DF4;
L_089A5DF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089A5DF8;
L_089A5DF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
    goto L_089A5DFC;
L_089A5DFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_089A5E4C;
      }
      goto L_089A5E04;
    }
L_089A5E04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u | 65534u);
      if (branch_taken) {
          goto L_089A5E4C;
      }
      goto L_089A5E10;
    }
L_089A5E10:
    if (aot_gpr[5] == aot_gpr[2]) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(15));
        (void)rt.invoke_chained_direct<&recomp_unit_0418_entry, 418u, 54u, 0x089A62C0u>(ctx, &aot_mem); return;
    }
    goto L_089A5E18;
L_089A5E18:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[31] = (0x089A5E24u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A5E24u) goto L_089A5E24;
    return;
L_089A5E24:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A5E30;
L_089A5E30:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[31] = (0x089A5E40u);
    aot_gpr[9] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 90u, 0x089A44C8u>(ctx, &aot_mem) && ctx.pc == 0x089A5E40u) goto L_089A5E40;
    return;
L_089A5E40:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A5F0C;
      }
      goto L_089A5E48;
    }
L_089A5E48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089A5E4C;
L_089A5E4C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x089A5E58u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5E58u) goto L_089A5E58;
    return;
L_089A5E58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5E84;
      }
      goto L_089A5E70;
    }
L_089A5E70:
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5E84;
      }
      goto L_089A5E78;
    }
L_089A5E78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
        (void)rt.invoke_chained_direct<&recomp_unit_0418_entry, 418u, 69u, 0x089A6378u>(ctx, &aot_mem); return;
    }
    goto L_089A5E84;
L_089A5E84:
    aot_gpr[31] = (0x089A5E8Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 172u, 0x089A3AA4u>(ctx, &aot_mem) && ctx.pc == 0x089A5E8Cu) goto L_089A5E8C;
    return;
L_089A5E8C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A5F0C;
      }
      goto L_089A5E94;
    }
L_089A5E94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(184), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    goto L_089A5EA8;
L_089A5EA8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
        goto L_089A5EBC;
    }
    goto L_089A5EB0;
L_089A5EB0:
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0418_entry, 418u, 71u, 0x089A6388u>(ctx, &aot_mem); return;
      }
      goto L_089A5EB8;
    }
L_089A5EB8:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    goto L_089A5EBC;
L_089A5EBC:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    if (aot_gpr[22] != aot_gpr[2]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(124)));
        goto L_089A5DC0;
    }
    goto L_089A5EC8;
L_089A5EC8:
    aot_gpr[31] = (0x089A5ED0u);
    aot_gpr[20] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x089A5ED0u) goto L_089A5ED0;
    return;
L_089A5ED0:
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(124)));
    goto L_089A5ED8;
L_089A5ED8:
    if (aot_gpr[18] == 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
        goto L_089A5EF0;
    }
    goto L_089A5EE0;
L_089A5EE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0418_entry, 418u, 4u, 0x089A6038u>(ctx, &aot_mem); return;
    }
    goto L_089A5EEC;
L_089A5EEC:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    goto L_089A5EF0;
L_089A5EF0:
    if (aot_gpr[22] != aot_gpr[20]) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(124)));
        goto L_089A5ED8;
    }
    goto L_089A5EF8;
L_089A5EF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(120)));
        goto L_089A5FF4;
    }
    goto L_089A5F08;
L_089A5F08:
    aot_gpr[17] = (0u + 0u);
    goto L_089A5F0C;
L_089A5F0C:
    aot_gpr[18] = (0u < aot_gpr[17] ? 1u : 0u);
    goto L_089A5F10;
L_089A5F10:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089A5FC0;
      }
      goto L_089A5F18;
    }
L_089A5F18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5F80;
      }
      goto L_089A5F24;
    }
L_089A5F24:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A5F80;
      }
      goto L_089A5F34;
    }
L_089A5F34:
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[3] & 31u));
    aot_gpr[2] = (aot_gpr[2] & 5884u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5F80;
      }
      goto L_089A5F44;
    }
L_089A5F44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089A5F78;
      }
      goto L_089A5F50;
    }
L_089A5F50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A5F68u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A5F68u) goto L_089A5F68;
    return;
L_089A5F68:
    aot_gpr[31] = (0x089A5F70u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 31u, 0x089A2168u>(ctx, &aot_mem) && ctx.pc == 0x089A5F70u) goto L_089A5F70;
    return;
L_089A5F70:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 52003u);
      if (branch_taken) {
          goto L_089A5F88;
      }
      goto L_089A5F78;
    }
L_089A5F78:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089A5F80;
L_089A5F80:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[3] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A5FBC;
      }
      goto L_089A5F88;
    }
L_089A5F88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5FBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_089A5FC0;
L_089A5FC0:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5FF4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089A5F0C;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0418_entry, 418u, 1u, 0x089A6004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0417(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0417_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_417(Runtime &runtime) {
    runtime.register_generated_unit(417u, 0x089A5000u, 4096u, &recomp_unit_0417, &recomp_unit_0417_entry);
    runtime.register_function(0x089A5000u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A500Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5014u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A501Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5034u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A504Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5068u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5090u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A509Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A50A8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A50ACu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A50CCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A50D0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A50D8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A50E0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A50F0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A50FCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5104u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5114u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5118u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5120u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A514Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5154u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A515Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5160u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5168u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A517Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5184u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A518Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A51ACu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A51B8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A51C0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A51C8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A51D8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A51E8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5210u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5218u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5230u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5238u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5268u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5274u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5290u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A52A8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A52BCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A52C4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A52CCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A52D8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A52E8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A52F0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A530Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A531Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5324u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5358u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5368u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5370u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A537Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A538Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5394u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A53B4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A53B8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A53DCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A53E4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A53ECu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5418u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5438u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A544Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5450u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5454u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5468u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5470u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A547Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5484u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5490u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5494u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A54ACu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A54B4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A54BCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A54C4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A54E0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A54ECu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5500u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5508u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5514u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A551Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5528u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5554u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A555Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5564u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A556Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5570u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5578u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5584u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A558Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5598u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A55A0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A55A4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A55ACu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A55B4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A55B8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A55C4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A55D4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A55D8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A55F8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5600u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5608u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5618u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5624u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A562Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5630u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A564Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5654u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A566Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5678u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5684u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A568Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5698u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A56A0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A56ACu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A56B4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A56DCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A56ECu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A56F8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5710u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5728u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A572Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5748u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5750u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5760u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5764u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A576Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5784u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A578Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5794u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A57A0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A57C8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A57D0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A57E0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A57E8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A57F8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5810u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5818u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5820u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5870u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5888u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A58A0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A58ACu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A58B8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A58C4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A58D0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A58E0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A58E8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A58F0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A58F8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5908u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5918u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A591Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5938u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5944u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5960u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5970u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5980u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5990u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5998u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A59D0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A59DCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A59ECu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A59F8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5A14u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5A18u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5A24u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5A48u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5A54u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5A60u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5A70u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5A7Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5A90u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5A9Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5AA4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5AB4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5AC0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5AD0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5ADCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5AE8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5AF0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5AF8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5AFCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5B40u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5B44u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5B50u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5B64u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5B74u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5B7Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5BECu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5BF0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5BF8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5C08u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5C18u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5C24u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5C2Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5C64u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5C9Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5CA4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5CB0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5CBCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5CC8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5CD4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5CE0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5CECu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5CF4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5D04u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5D08u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5D2Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5D34u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5D64u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5D98u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5DA4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5DB4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5DC0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5DC8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5DD4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5DECu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5DF4u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5DF8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5DFCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E04u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E10u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E18u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E24u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E30u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E40u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E48u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E4Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E58u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E70u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E78u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E84u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E8Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5E94u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5EA8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5EB0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5EB8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5EBCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5EC8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5ED0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5ED8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5EE0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5EECu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5EF0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5EF8u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F08u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F0Cu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F10u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F18u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F24u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F34u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F44u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F50u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F68u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F70u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F78u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F80u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5F88u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5FBCu, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5FC0u, &recomp_unit_0417, "recomp_unit_0417");
    runtime.register_function(0x089A5FF4u, &recomp_unit_0417, "recomp_unit_0417");
}
} // namespace psprecomp
