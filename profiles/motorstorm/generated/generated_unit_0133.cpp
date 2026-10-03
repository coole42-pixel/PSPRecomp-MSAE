#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0133[1023] = {
    1, 0, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 10,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 19,
    0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 27, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 37,
    0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0,
    47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58,
    0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0,
    77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 85,
    0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96,
    0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 106,
    0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0,
    117, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 126,
    0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0,
    136, 0, 137, 0, 138, 0, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146,
    0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157,
    158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0,
    0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0,
    180, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 189, 190,
    0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 194, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0,
    202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 229, 230, 0, 0, 0, 231, 0,
    0, 232, 0, 0, 0, 233, 0, 234, 0, 235, 236, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 240, 241, 0, 0, 0, 0,
    242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 246, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0,
    251, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 0, 260, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 265,
};
void recomp_unit_0133_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08889000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0133[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08889000;
    case 2u: goto L_0888900C;
    case 3u: goto L_08889018;
    case 4u: goto L_08889020;
    case 5u: goto L_08889028;
    case 6u: goto L_0888904C;
    case 7u: goto L_08889064;
    case 8u: goto L_0888906C;
    case 9u: goto L_08889074;
    case 10u: goto L_0888907C;
    case 11u: goto L_08889090;
    case 12u: goto L_088890A8;
    case 13u: goto L_088890B0;
    case 14u: goto L_088890B8;
    case 15u: goto L_088890C4;
    case 16u: goto L_088890D8;
    case 17u: goto L_088890E4;
    case 18u: goto L_088890EC;
    case 19u: goto L_088890FC;
    case 20u: goto L_08889108;
    case 21u: goto L_08889120;
    case 22u: goto L_0888912C;
    case 23u: goto L_08889140;
    case 24u: goto L_08889150;
    case 25u: goto L_0888915C;
    case 26u: goto L_0888917C;
    case 27u: goto L_08889184;
    case 28u: goto L_0888918C;
    case 29u: goto L_08889198;
    case 30u: goto L_088891A4;
    case 31u: goto L_088891B8;
    case 32u: goto L_088891C4;
    case 33u: goto L_088891D0;
    case 34u: goto L_088891E4;
    case 35u: goto L_088891EC;
    case 36u: goto L_088891F4;
    case 37u: goto L_088891FC;
    case 38u: goto L_08889208;
    case 39u: goto L_08889210;
    case 40u: goto L_08889224;
    case 41u: goto L_0888922C;
    case 42u: goto L_08889244;
    case 43u: goto L_0888924C;
    case 44u: goto L_08889258;
    case 45u: goto L_0888926C;
    case 46u: goto L_08889278;
    case 47u: goto L_08889280;
    case 48u: goto L_08889288;
    case 49u: goto L_08889298;
    case 50u: goto L_088892A0;
    case 51u: goto L_088892A8;
    case 52u: goto L_088892B8;
    case 53u: goto L_088892C0;
    case 54u: goto L_088892C8;
    case 55u: goto L_088892D0;
    case 56u: goto L_088892D4;
    case 57u: goto L_088892E4;
    case 58u: goto L_088892FC;
    case 59u: goto L_08889304;
    case 60u: goto L_08889314;
    case 61u: goto L_08889328;
    case 62u: goto L_08889330;
    case 63u: goto L_08889340;
    case 64u: goto L_0888934C;
    case 65u: goto L_0888935C;
    case 66u: goto L_0888936C;
    case 67u: goto L_08889384;
    case 68u: goto L_08889390;
    case 69u: goto L_088893A4;
    case 70u: goto L_088893B0;
    case 71u: goto L_088893B8;
    case 72u: goto L_088893C0;
    case 73u: goto L_088893CC;
    case 74u: goto L_088893E0;
    case 75u: goto L_088893EC;
    case 76u: goto L_088893F4;
    case 77u: goto L_08889400;
    case 78u: goto L_08889414;
    case 79u: goto L_08889420;
    case 80u: goto L_08889430;
    case 81u: goto L_0888943C;
    case 82u: goto L_08889450;
    case 83u: goto L_0888945C;
    case 84u: goto L_08889468;
    case 85u: goto L_0888947C;
    case 86u: goto L_08889484;
    case 87u: goto L_0888948C;
    case 88u: goto L_08889494;
    case 89u: goto L_088894A0;
    case 90u: goto L_088894AC;
    case 91u: goto L_088894B8;
    case 92u: goto L_088894CC;
    case 93u: goto L_088894D4;
    case 94u: goto L_088894E0;
    case 95u: goto L_088894F4;
    case 96u: goto L_088894FC;
    case 97u: goto L_08889504;
    case 98u: goto L_0888950C;
    case 99u: goto L_08889518;
    case 100u: goto L_08889520;
    case 101u: goto L_08889534;
    case 102u: goto L_0888953C;
    case 103u: goto L_08889554;
    case 104u: goto L_0888955C;
    case 105u: goto L_08889568;
    case 106u: goto L_0888957C;
    case 107u: goto L_08889588;
    case 108u: goto L_08889590;
    case 109u: goto L_08889598;
    case 110u: goto L_088895A0;
    case 111u: goto L_088895B4;
    case 112u: goto L_088895CC;
    case 113u: goto L_088895D4;
    case 114u: goto L_088895E0;
    case 115u: goto L_088895E8;
    case 116u: goto L_088895F4;
    case 117u: goto L_08889600;
    case 118u: goto L_08889614;
    case 119u: goto L_08889620;
    case 120u: goto L_0888962C;
    case 121u: goto L_08889640;
    case 122u: goto L_0888964C;
    case 123u: goto L_08889658;
    case 124u: goto L_0888966C;
    case 125u: goto L_08889674;
    case 126u: goto L_0888967C;
    case 127u: goto L_08889684;
    case 128u: goto L_08889690;
    case 129u: goto L_08889698;
    case 130u: goto L_088896AC;
    case 131u: goto L_088896B4;
    case 132u: goto L_088896CC;
    case 133u: goto L_088896D4;
    case 134u: goto L_088896E0;
    case 135u: goto L_088896F4;
    case 136u: goto L_08889700;
    case 137u: goto L_08889708;
    case 138u: goto L_08889710;
    case 139u: goto L_08889720;
    case 140u: goto L_08889728;
    case 141u: goto L_08889730;
    case 142u: goto L_08889738;
    case 143u: goto L_08889748;
    case 144u: goto L_08889760;
    case 145u: goto L_08889770;
    case 146u: goto L_0888977C;
    case 147u: goto L_08889784;
    case 148u: goto L_08889794;
    case 149u: goto L_0888979C;
    case 150u: goto L_088897B0;
    case 151u: goto L_088897D0;
    case 152u: goto L_088897F0;
    case 153u: goto L_08889828;
    case 154u: goto L_08889840;
    case 155u: goto L_08889854;
    case 156u: goto L_0888986C;
    case 157u: goto L_0888987C;
    case 158u: goto L_08889880;
    case 159u: goto L_088898A0;
    case 160u: goto L_088898AC;
    case 161u: goto L_088898B8;
    case 162u: goto L_088898C8;
    case 163u: goto L_088898CC;
    case 164u: goto L_088898E0;
    case 165u: goto L_088898F8;
    case 166u: goto L_08889908;
    case 167u: goto L_0888990C;
    case 168u: goto L_0888992C;
    case 169u: goto L_08889954;
    case 170u: goto L_08889968;
    case 171u: goto L_08889970;
    case 172u: goto L_08889988;
    case 173u: goto L_08889994;
    case 174u: goto L_0888999C;
    case 175u: goto L_088899A8;
    case 176u: goto L_088899B4;
    case 177u: goto L_088899C4;
    case 178u: goto L_088899DC;
    case 179u: goto L_088899F0;
    case 180u: goto L_08889A00;
    case 181u: goto L_08889A04;
    case 182u: goto L_08889A18;
    case 183u: goto L_08889A28;
    case 184u: goto L_08889A38;
    case 185u: goto L_08889A40;
    case 186u: goto L_08889A58;
    case 187u: goto L_08889A60;
    case 188u: goto L_08889A6C;
    case 189u: goto L_08889A78;
    case 190u: goto L_08889A7C;
    case 191u: goto L_08889A90;
    case 192u: goto L_08889A98;
    case 193u: goto L_08889AF0;
    case 194u: goto L_08889B04;
    case 195u: goto L_08889B08;
    case 196u: goto L_08889B1C;
    case 197u: goto L_08889B34;
    case 198u: goto L_08889B3C;
    case 199u: goto L_08889B4C;
    case 200u: goto L_08889B60;
    case 201u: goto L_08889B78;
    case 202u: goto L_08889B80;
    case 203u: goto L_08889B94;
    case 204u: goto L_08889BA0;
    case 205u: goto L_08889BA8;
    case 206u: goto L_08889BCC;
    case 207u: goto L_08889BE0;
    case 208u: goto L_08889BF4;
    case 209u: goto L_08889C0C;
    case 210u: goto L_08889C3C;
    case 211u: goto L_08889C50;
    case 212u: goto L_08889C68;
    case 213u: goto L_08889C74;
    case 214u: goto L_08889CC0;
    case 215u: goto L_08889CD4;
    case 216u: goto L_08889CD8;
    case 217u: goto L_08889CEC;
    case 218u: goto L_08889D00;
    case 219u: goto L_08889D0C;
    case 220u: goto L_08889D14;
    case 221u: goto L_08889D2C;
    case 222u: goto L_08889D40;
    case 223u: goto L_08889D4C;
    case 224u: goto L_08889D64;
    case 225u: goto L_08889D90;
    case 226u: goto L_08889DAC;
    case 227u: goto L_08889DC4;
    case 228u: goto L_08889DD0;
    case 229u: goto L_08889DE4;
    case 230u: goto L_08889DE8;
    case 231u: goto L_08889DF8;
    case 232u: goto L_08889E04;
    case 233u: goto L_08889E14;
    case 234u: goto L_08889E1C;
    case 235u: goto L_08889E24;
    case 236u: goto L_08889E28;
    case 237u: goto L_08889E30;
    case 238u: goto L_08889E44;
    case 239u: goto L_08889E5C;
    case 240u: goto L_08889E68;
    case 241u: goto L_08889E6C;
    case 242u: goto L_08889E80;
    case 243u: goto L_08889E88;
    case 244u: goto L_08889EB0;
    case 245u: goto L_08889EB8;
    case 246u: goto L_08889EC4;
    case 247u: goto L_08889EC8;
    case 248u: goto L_08889ED4;
    case 249u: goto L_08889EE0;
    case 250u: goto L_08889EF8;
    case 251u: goto L_08889F00;
    case 252u: goto L_08889F08;
    case 253u: goto L_08889F14;
    case 254u: goto L_08889F30;
    case 255u: goto L_08889F38;
    case 256u: goto L_08889F54;
    case 257u: goto L_08889F90;
    case 258u: goto L_08889F98;
    case 259u: goto L_08889FAC;
    case 260u: goto L_08889FB8;
    case 261u: goto L_08889FBC;
    case 262u: goto L_08889FD0;
    case 263u: goto L_08889FDC;
    case 264u: goto L_08889FF4;
    case 265u: goto L_08889FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08889000:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888900C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889020;
      }
      goto L_08889018;
    }
L_08889018:
    aot_gpr[5] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08889020;
L_08889020:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889028:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889064;
      }
      goto L_0888904C;
    }
L_0888904C:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(12328)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888979C;
      }
      goto L_0888906C;
    }
L_0888906C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08889064;
      }
      goto L_08889074;
    }
L_08889074:
    aot_gpr[31] = (0x0888907Cu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x0888907Cu) goto L_0888907C;
    return;
L_0888907C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088891C4;
      }
      goto L_08889090;
    }
L_08889090:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(12384)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088890A8:
    aot_gpr[31] = (0x088890B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 1u, 0x0886D000u>(ctx, &aot_mem) && ctx.pc == 0x088890B0u) goto L_088890B0;
    return;
L_088890B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088890E4;
      }
      goto L_088890B8;
    }
L_088890B8:
    aot_gpr[4] = (0u | 40u);
    aot_gpr[31] = (0x088890C4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088890C4u) goto L_088890C4;
    return;
L_088890C4:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088890D8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088890D8u) goto L_088890D8;
    return;
L_088890D8:
    aot_gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_0888917C;
      }
      goto L_088890E4;
    }
L_088890E4:
    aot_gpr[31] = (0x088890ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 128u, 0x08888D10u>(ctx, &aot_mem) && ctx.pc == 0x088890ECu) goto L_088890EC;
    return;
L_088890EC:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5760), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x088890FCu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 121u, 0x08888C54u>(ctx, &aot_mem) && ctx.pc == 0x088890FCu) goto L_088890FC;
    return;
L_088890FC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08889108u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25968), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 6u, 0x0886D040u>(ctx, &aot_mem) && ctx.pc == 0x08889108u) goto L_08889108;
    return;
L_08889108:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(7908)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_0888912C;
      }
      goto L_08889120;
    }
L_08889120:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0888912C;
L_0888912C:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[31] = (0x08889140u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 36u, 0x0886325Cu>(ctx, &aot_mem) && ctx.pc == 0x08889140u) goto L_08889140;
    return;
L_08889140:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(7912)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_0888915C;
      }
      goto L_08889150;
    }
L_08889150:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0888915C;
L_0888915C:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 13u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0888917C;
L_0888917C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088891EC;
      }
      goto L_08889184;
    }
L_08889184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088891EC;
      }
      goto L_0888918C;
    }
L_0888918C:
    aot_gpr[4] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088891EC;
      }
      goto L_08889198;
    }
L_08889198:
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x088891A4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088891A4u) goto L_088891A4;
    return;
L_088891A4:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088891B8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088891B8u) goto L_088891B8;
    return;
L_088891B8:
    aot_gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088891EC;
      }
      goto L_088891C4;
    }
L_088891C4:
    aot_gpr[4] = (0u | 33u);
    aot_gpr[31] = (0x088891D0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088891D0u) goto L_088891D0;
    return;
L_088891D0:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088891E4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088891E4u) goto L_088891E4;
    return;
L_088891E4:
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088891EC;
L_088891EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889064;
      }
      goto L_088891F4;
    }
L_088891F4:
    aot_gpr[31] = (0x088891FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x088891FCu) goto L_088891FC;
    return;
L_088891FC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08889224;
    }
    goto L_08889208;
L_08889208:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08889280;
      }
      goto L_08889210;
    }
L_08889210:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889280;
      }
      goto L_08889224;
    }
L_08889224:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889280;
      }
      goto L_0888922C;
    }
L_0888922C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889278;
      }
      goto L_08889244;
    }
L_08889244:
    aot_gpr[31] = (0x0888924Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 121u, 0x08888C54u>(ctx, &aot_mem) && ctx.pc == 0x0888924Cu) goto L_0888924C;
    return;
L_0888924C:
    aot_gpr[4] = (0u | 34u);
    aot_gpr[31] = (0x08889258u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08889258u) goto L_08889258;
    return;
L_08889258:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888926Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0888926Cu) goto L_0888926C;
    return;
L_0888926C:
    aot_gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889280;
      }
      goto L_08889278;
    }
L_08889278:
    aot_gpr[4] = (0u | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08889280;
L_08889280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889064;
      }
      goto L_08889288;
    }
L_08889288:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088892A0;
      }
      goto L_08889298;
    }
L_08889298:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088892A0;
L_088892A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889064;
      }
      goto L_088892A8;
    }
L_088892A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088892C8;
      }
      goto L_088892B8;
    }
L_088892B8:
    aot_gpr[31] = (0x088892C0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x088892C0u) goto L_088892C0;
    return;
L_088892C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088892D4;
      }
      goto L_088892C8;
    }
L_088892C8:
    aot_gpr[31] = (0x088892D0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x088892D0u) goto L_088892D0;
    return;
L_088892D0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088892D4;
L_088892D4:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888945C;
      }
      goto L_088892E4;
    }
L_088892E4:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(12432)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088892FC:
    aot_gpr[31] = (0x08889304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 128u, 0x08888D10u>(ctx, &aot_mem) && ctx.pc == 0x08889304u) goto L_08889304;
    return;
L_08889304:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5760), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x08889314u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 121u, 0x08888C54u>(ctx, &aot_mem) && ctx.pc == 0x08889314u) goto L_08889314;
    return;
L_08889314:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25968), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889484;
      }
      goto L_08889328;
    }
L_08889328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889484;
      }
      goto L_08889330;
    }
L_08889330:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888934C;
      }
      goto L_08889340;
    }
L_08889340:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889484;
      }
      goto L_0888934C;
    }
L_0888934C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0888936C;
      }
      goto L_0888935C;
    }
L_0888935C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7916)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088893B0;
      }
      goto L_0888936C;
    }
L_0888936C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08889384u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(7916), static_cast<std::uint8_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 121u, 0x08888C54u>(ctx, &aot_mem) && ctx.pc == 0x08889384u) goto L_08889384;
    return;
L_08889384:
    aot_gpr[4] = (0u | 34u);
    aot_gpr[31] = (0x08889390u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08889390u) goto L_08889390;
    return;
L_08889390:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088893A4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088893A4u) goto L_088893A4;
    return;
L_088893A4:
    aot_gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088893B8;
      }
      goto L_088893B0;
    }
L_088893B0:
    aot_gpr[4] = (0u | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088893B8;
L_088893B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889484;
      }
      goto L_088893C0;
    }
L_088893C0:
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x088893CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088893CCu) goto L_088893CC;
    return;
L_088893CC:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088893E0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088893E0u) goto L_088893E0;
    return;
L_088893E0:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889484;
      }
      goto L_088893EC;
    }
L_088893EC:
    aot_gpr[31] = (0x088893F4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 121u, 0x08888C54u>(ctx, &aot_mem) && ctx.pc == 0x088893F4u) goto L_088893F4;
    return;
L_088893F4:
    aot_gpr[4] = (0u | 38u);
    aot_gpr[31] = (0x08889400u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08889400u) goto L_08889400;
    return;
L_08889400:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08889414u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08889414u) goto L_08889414;
    return;
L_08889414:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889484;
      }
      goto L_08889420;
    }
L_08889420:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888945C;
      }
      goto L_08889430;
    }
L_08889430:
    aot_gpr[4] = (0u | 43u);
    aot_gpr[31] = (0x0888943Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0888943Cu) goto L_0888943C;
    return;
L_0888943C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08889450u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08889450u) goto L_08889450;
    return;
L_08889450:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889484;
      }
      goto L_0888945C;
    }
L_0888945C:
    aot_gpr[4] = (0u | 35u);
    aot_gpr[31] = (0x08889468u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08889468u) goto L_08889468;
    return;
L_08889468:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888947Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0888947Cu) goto L_0888947C;
    return;
L_0888947C:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08889484;
L_08889484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889064;
      }
      goto L_0888948C;
    }
L_0888948C:
    aot_gpr[31] = (0x08889494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 130u, 0x08888D34u>(ctx, &aot_mem) && ctx.pc == 0x08889494u) goto L_08889494;
    return;
L_08889494:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088894FC;
      }
      goto L_088894A0;
    }
L_088894A0:
    aot_gpr[5] = (0u | 16384u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088894D4;
      }
      goto L_088894AC;
    }
L_088894AC:
    aot_gpr[4] = (0u | 47u);
    aot_gpr[31] = (0x088894B8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088894B8u) goto L_088894B8;
    return;
L_088894B8:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088894CCu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088894CCu) goto L_088894CC;
    return;
L_088894CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088894F4;
      }
      goto L_088894D4;
    }
L_088894D4:
    aot_gpr[4] = (0u | 46u);
    aot_gpr[31] = (0x088894E0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088894E0u) goto L_088894E0;
    return;
L_088894E0:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088894F4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088894F4u) goto L_088894F4;
    return;
L_088894F4:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088894FC;
L_088894FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889064;
      }
      goto L_08889504;
    }
L_08889504:
    aot_gpr[31] = (0x0888950Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x0888950Cu) goto L_0888950C;
    return;
L_0888950C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08889534;
    }
    goto L_08889518;
L_08889518:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08889590;
      }
      goto L_08889520;
    }
L_08889520:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889590;
      }
      goto L_08889534;
    }
L_08889534:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889590;
      }
      goto L_0888953C;
    }
L_0888953C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889588;
      }
      goto L_08889554;
    }
L_08889554:
    aot_gpr[31] = (0x0888955Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 121u, 0x08888C54u>(ctx, &aot_mem) && ctx.pc == 0x0888955Cu) goto L_0888955C;
    return;
L_0888955C:
    aot_gpr[4] = (0u | 34u);
    aot_gpr[31] = (0x08889568u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08889568u) goto L_08889568;
    return;
L_08889568:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888957Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0888957Cu) goto L_0888957C;
    return;
L_0888957C:
    aot_gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889590;
      }
      goto L_08889588;
    }
L_08889588:
    aot_gpr[4] = (0u | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08889590;
L_08889590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889064;
      }
      goto L_08889598;
    }
L_08889598:
    aot_gpr[31] = (0x088895A0u);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x088895A0u) goto L_088895A0;
    return;
L_088895A0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888964C;
      }
      goto L_088895B4;
    }
L_088895B4:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(12480)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088895CC:
    aot_gpr[31] = (0x088895D4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 121u, 0x08888C54u>(ctx, &aot_mem) && ctx.pc == 0x088895D4u) goto L_088895D4;
    return;
L_088895D4:
    aot_gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889674;
      }
      goto L_088895E0;
    }
L_088895E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889674;
      }
      goto L_088895E8;
    }
L_088895E8:
    aot_gpr[4] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889674;
      }
      goto L_088895F4;
    }
L_088895F4:
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x08889600u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08889600u) goto L_08889600;
    return;
L_08889600:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08889614u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08889614u) goto L_08889614;
    return;
L_08889614:
    aot_gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889674;
      }
      goto L_08889620;
    }
L_08889620:
    aot_gpr[4] = (0u | 38u);
    aot_gpr[31] = (0x0888962Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0888962Cu) goto L_0888962C;
    return;
L_0888962C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08889640u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08889640u) goto L_08889640;
    return;
L_08889640:
    aot_gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889674;
      }
      goto L_0888964C;
    }
L_0888964C:
    aot_gpr[4] = (0u | 39u);
    aot_gpr[31] = (0x08889658u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08889658u) goto L_08889658;
    return;
L_08889658:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888966Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0888966Cu) goto L_0888966C;
    return;
L_0888966C:
    aot_gpr[4] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08889674;
L_08889674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889064;
      }
      goto L_0888967C;
    }
L_0888967C:
    aot_gpr[31] = (0x08889684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08889684u) goto L_08889684;
    return;
L_08889684:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_088896AC;
    }
    goto L_08889690;
L_08889690:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08889708;
      }
      goto L_08889698;
    }
L_08889698:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889708;
      }
      goto L_088896AC;
    }
L_088896AC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889708;
      }
      goto L_088896B4;
    }
L_088896B4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889700;
      }
      goto L_088896CC;
    }
L_088896CC:
    aot_gpr[31] = (0x088896D4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 121u, 0x08888C54u>(ctx, &aot_mem) && ctx.pc == 0x088896D4u) goto L_088896D4;
    return;
L_088896D4:
    aot_gpr[4] = (0u | 34u);
    aot_gpr[31] = (0x088896E0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088896E0u) goto L_088896E0;
    return;
L_088896E0:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088896F4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088896F4u) goto L_088896F4;
    return;
L_088896F4:
    aot_gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08889708;
      }
      goto L_08889700;
    }
L_08889700:
    aot_gpr[4] = (0u | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08889708;
L_08889708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889064;
      }
      goto L_08889710;
    }
L_08889710:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889728;
      }
      goto L_08889720;
    }
L_08889720:
    aot_gpr[4] = (0u | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08889728;
L_08889728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889064;
      }
      goto L_08889730;
    }
L_08889730:
    aot_gpr[31] = (0x08889738u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x08889738u) goto L_08889738;
    return;
L_08889738:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0888977C;
      }
      goto L_08889748;
    }
L_08889748:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(12528)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889760:
    aot_gpr[5] = (0u | 12u);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0888977C;
      }
      goto L_08889770;
    }
L_08889770:
    aot_gpr[5] = (0u | 13u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0888977C;
L_0888977C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889794;
      }
      goto L_08889784;
    }
L_08889784:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08889794u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08889794u) goto L_08889794;
    return;
L_08889794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889064;
      }
      goto L_0888979C;
    }
L_0888979C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088897B0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26016), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088897D0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26024), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088897F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08889828u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 133u, 0x08A4D988u>(ctx, &aot_mem) && ctx.pc == 0x08889828u) goto L_08889828;
    return;
L_08889828:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088898A0;
      }
      goto L_08889840;
    }
L_08889840:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x08889854u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 134u, 0x08A4D990u>(ctx, &aot_mem) && ctx.pc == 0x08889854u) goto L_08889854;
    return;
L_08889854:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08889880;
      }
      goto L_0888986C;
    }
L_0888986C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888987Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 145u, 0x0888B920u>(ctx, &aot_mem) && ctx.pc == 0x0888987Cu) goto L_0888987C;
    return;
L_0888987C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_08889880;
L_08889880:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08889840;
      }
      goto L_088898A0;
    }
L_088898A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0888992C;
      }
      goto L_088898AC;
    }
L_088898AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088898B8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 135u, 0x08A4D998u>(ctx, &aot_mem) && ctx.pc == 0x088898B8u) goto L_088898B8;
    return;
L_088898B8:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[2]);
      if (branch_taken) {
          goto L_0888992C;
      }
      goto L_088898C8;
    }
L_088898C8:
    aot_gpr[20] = (0u | 0u);
    goto L_088898CC;
L_088898CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x088898E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 136u, 0x08A4D9A0u>(ctx, &aot_mem) && ctx.pc == 0x088898E0u) goto L_088898E0;
    return;
L_088898E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0888990C;
      }
      goto L_088898F8;
    }
L_088898F8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08889908u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 85u, 0x0888A5A8u>(ctx, &aot_mem) && ctx.pc == 0x08889908u) goto L_08889908;
    return;
L_08889908:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_0888990C;
L_0888990C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088898CC;
      }
      goto L_0888992C;
    }
L_0888992C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08889954:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[12]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08889A28;
      }
      goto L_08889968;
    }
L_08889968:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (0u | 0u);
    goto L_08889970;
L_08889970:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[11] = (aot_gpr[9] + aot_gpr[2]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889A18;
      }
      goto L_08889988;
    }
L_08889988:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889A18;
      }
      goto L_08889994;
    }
L_08889994:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088899B4;
      }
      goto L_0888999C;
    }
L_0888999C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088899B4;
      }
      goto L_088899A8;
    }
L_088899A8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08889A18;
      }
      goto L_088899B4;
    }
L_088899B4:
    aot_gpr[10] = (0u | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[12]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08889A18;
      }
      goto L_088899C4;
    }
L_088899C4:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[12] = (aot_gpr[11] + aot_gpr[9]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[13] == 0u;
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[2]);
      if (branch_taken) {
          goto L_08889A04;
      }
      goto L_088899DC;
    }
L_088899DC:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[14] != aot_gpr[13];
    // nop
      if (branch_taken) {
          goto L_08889A04;
      }
      goto L_088899F0;
    }
L_088899F0:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[13];
    // nop
      if (branch_taken) {
          goto L_08889A04;
      }
      goto L_08889A00;
    }
L_08889A00:
    PSPRECOMP_AOT_STORE8(aot_gpr[12] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr[7]));
    goto L_08889A04;
L_08889A04:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[12]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088899C4;
      }
      goto L_08889A18;
    }
L_08889A18:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[12]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08889970;
      }
      goto L_08889A28;
    }
L_08889A28:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[12]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08889A90;
      }
      goto L_08889A38;
    }
L_08889A38:
    aot_gpr[7] = (0u | 1u);
    aot_gpr[11] = (0u | 0u);
    goto L_08889A40;
L_08889A40:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[11]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889A7C;
      }
      goto L_08889A58;
    }
L_08889A58:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08889A78;
      }
      goto L_08889A60;
    }
L_08889A60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08889A78;
      }
      goto L_08889A6C;
    }
L_08889A6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08889A7C;
      }
      goto L_08889A78;
    }
L_08889A78:
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[7]));
    goto L_08889A7C;
L_08889A7C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08889A40;
      }
      goto L_08889A90;
    }
L_08889A90:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889A98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    aot_gpr[22] = (aot_gpr[6] & 255u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[30] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[20];
    aot_gpr[23] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_08889B08;
      }
      goto L_08889AF0;
    }
L_08889AF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x08889B04u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 255u, 0x0888BFD0u>(ctx, &aot_mem) && ctx.pc == 0x08889B04u) goto L_08889B04;
    return;
L_08889B04:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    goto L_08889B08;
L_08889B08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08889B60;
      }
      goto L_08889B1C;
    }
L_08889B1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08889B34u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 18u, 0x0888B178u>(ctx, &aot_mem) && ctx.pc == 0x08889B34u) goto L_08889B34;
    return;
L_08889B34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889B4C;
      }
      goto L_08889B3C;
    }
L_08889B3C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 8u);
    aot_gpr[31] = (0x08889B4Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08889954;
L_08889B4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08889B1C;
      }
      goto L_08889B60;
    }
L_08889B60:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08889BE0;
      }
      goto L_08889B78;
    }
L_08889B78:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[17] = (0u | 0u);
    goto L_08889B80;
L_08889B80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    { const bool branch_taken = aot_gpr[21] == aot_gpr[16];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08889BA0;
      }
      goto L_08889B94;
    }
L_08889B94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[6] != aot_gpr[16]) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08889BA8;
    }
    goto L_08889BA0;
L_08889BA0:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08889BA8;
L_08889BA8:
    aot_gpr[7] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[23]);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[10] = (aot_gpr[18] | 0u);
    aot_gpr[11] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08889BCCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 254u, 0x08890FC4u>(ctx, &aot_mem) && ctx.pc == 0x08889BCCu) goto L_08889BCC;
    return;
L_08889BCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889BE0;
    }
L_08889BE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889C0C;
      }
      goto L_08889BF4;
    }
L_08889BF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08889C0Cu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08889C0Cu) goto L_08889C0C;
    return;
L_08889C0C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889C3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889C68;
      }
      goto L_08889C50;
    }
L_08889C50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08889C68u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08889C68u) goto L_08889C68;
    return;
L_08889C68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889C74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[9];
    aot_gpr[20] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08889CD8;
      }
      goto L_08889CC0;
    }
L_08889CC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x08889CD4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 255u, 0x0888BFD0u>(ctx, &aot_mem) && ctx.pc == 0x08889CD4u) goto L_08889CD4;
    return;
L_08889CD4:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    goto L_08889CD8;
L_08889CD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08889D40;
      }
      goto L_08889CEC;
    }
L_08889CEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    { const bool branch_taken = aot_gpr[21] == aot_gpr[22];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08889D0C;
      }
      goto L_08889D00;
    }
L_08889D00:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[22];
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_08889D14;
      }
      goto L_08889D0C;
    }
L_08889D0C:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    goto L_08889D14;
L_08889D14:
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08889D2Cu);
    aot_gpr[10] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 14u, 0x08892190u>(ctx, &aot_mem) && ctx.pc == 0x08889D2Cu) goto L_08889D2C;
    return;
L_08889D2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08889CEC;
      }
      goto L_08889D40;
    }
L_08889D40:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889D64;
      }
      goto L_08889D4C;
    }
L_08889D4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08889D64u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08889D64u) goto L_08889D64;
    return;
L_08889D64:
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
L_08889D90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[6]);
      if (branch_taken) {
          goto L_08889DC4;
      }
      goto L_08889DAC;
    }
L_08889DAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08889DC4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08889DC4u) goto L_08889DC4;
    return;
L_08889DC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889DD0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889E24;
      }
      goto L_08889DE4;
    }
L_08889DE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_08889DE8;
L_08889DE8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889E04;
      }
      goto L_08889DF8;
    }
L_08889DF8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889E1C;
      }
      goto L_08889E04;
    }
L_08889E04:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08889DE8;
      }
      goto L_08889E14;
    }
L_08889E14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889E24;
      }
      goto L_08889E1C;
    }
L_08889E1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08889E28;
      }
      goto L_08889E24;
    }
L_08889E24:
    aot_gpr[2] = (0u | 0u);
    goto L_08889E28;
L_08889E28:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889E30:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08889E80;
      }
      goto L_08889E44;
    }
L_08889E44:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889E6C;
      }
      goto L_08889E5C;
    }
L_08889E5C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889E6C;
      }
      goto L_08889E68;
    }
L_08889E68:
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    goto L_08889E6C;
L_08889E6C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08889E44;
      }
      goto L_08889E80;
    }
L_08889E80:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889E88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08889EB0u);
    aot_gpr[5] = (0u | 2u);
    goto L_08889DD0;
L_08889EB0:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08889EC8;
      }
      goto L_08889EB8;
    }
L_08889EB8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08889EC4u);
    aot_gpr[5] = (0u | 2u);
    goto L_08889E30;
L_08889EC4:
    aot_gpr[17] = (0u | 0u);
    goto L_08889EC8;
L_08889EC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889F00;
      }
      goto L_08889ED4;
    }
L_08889ED4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889F00;
      }
      goto L_08889EE0;
    }
L_08889EE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08889EF8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08889EF8u) goto L_08889EF8;
    return;
L_08889EF8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08889F00;
L_08889F00:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889F38;
      }
      goto L_08889F08;
    }
L_08889F08:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889F38;
      }
      goto L_08889F14;
    }
L_08889F14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08889F30u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08889F30u) goto L_08889F30;
    return;
L_08889F30:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[2]);
    aot_gpr[17] = (0u < aot_gpr[17] ? 1u : 0u);
    goto L_08889F38;
L_08889F38:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08889F54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889FD0;
      }
      goto L_08889F90;
    }
L_08889F90:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[19] = (0u | 0u);
    goto L_08889F98;
L_08889F98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 60u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[31] = (0x08889FACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08889FACu) goto L_08889FAC;
    return;
L_08889FAC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889FBC;
      }
      goto L_08889FB8;
    }
L_08889FB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08889FBC;
L_08889FBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08889F98;
      }
      goto L_08889FD0;
    }
L_08889FD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889FF8;
      }
      goto L_08889FDC;
    }
L_08889FDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08889FF4u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08889FF4u) goto L_08889FF4;
    return;
L_08889FF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08889FF8;
L_08889FF8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(33)));
    ctx.pc = 0x0888A000u; return;
}

void recomp_unit_0133(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0133_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_133(Runtime &runtime) {
    runtime.register_generated_unit(133u, 0x08889000u, 4096u, &recomp_unit_0133, &recomp_unit_0133_entry);
    runtime.register_function(0x08889000u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888900Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889018u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889020u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889028u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888904Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889064u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888906Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889074u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888907Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889090u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088890A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088890B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088890B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088890C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088890D8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088890E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088890ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088890FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889108u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889120u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888912Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889140u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889150u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888915Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888917Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889184u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888918Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889198u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088891A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088891B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088891C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088891D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088891E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088891ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088891F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088891FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889208u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889210u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889224u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888922Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889244u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888924Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889258u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888926Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889278u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889280u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889288u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889298u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088892A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088892A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088892B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088892C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088892C8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088892D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088892D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088892E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088892FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889304u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889314u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889328u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889330u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889340u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888934Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888935Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888936Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889384u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889390u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088893A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088893B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088893B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088893C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088893CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088893E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088893ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088893F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889400u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889414u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889420u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889430u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888943Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889450u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888945Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889468u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888947Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889484u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888948Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889494u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088894A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088894ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088894B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088894CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088894D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088894E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088894F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088894FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889504u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888950Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889518u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889520u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889534u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888953Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889554u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888955Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889568u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888957Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889588u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889590u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889598u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088895A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088895B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088895CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088895D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088895E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088895E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088895F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889600u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889614u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889620u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888962Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889640u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888964Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889658u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888966Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889674u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888967Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889684u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889690u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889698u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088896ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088896B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088896CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088896D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088896E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088896F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889700u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889708u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889710u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889720u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889728u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889730u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889738u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889748u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889760u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889770u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888977Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889784u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889794u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888979Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088897B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088897D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088897F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889828u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889840u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889854u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888986Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888987Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889880u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088898A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088898ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088898B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088898C8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088898CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088898E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088898F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889908u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888990Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888992Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889954u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889968u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889970u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889988u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889994u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x0888999Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088899A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088899B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088899C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088899DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x088899F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A00u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A04u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A18u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A28u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A38u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A40u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A58u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A60u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A6Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A78u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A7Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889A98u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889AF0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889B04u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889B08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889B1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889B34u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889B3Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889B4Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889B60u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889B78u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889B80u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889B94u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889BA0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889BA8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889BCCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889BE0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889BF4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889C0Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889C3Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889C50u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889C68u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889C74u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889CC0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889CD4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889CD8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889CECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889D00u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889D0Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889D14u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889D2Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889D40u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889D4Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889D64u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889D90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889DACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889DC4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889DD0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889DE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889DE8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889DF8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889E04u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889E14u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889E1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889E24u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889E28u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889E30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889E44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889E5Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889E68u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889E6Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889E80u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889E88u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889EB0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889EB8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889EC4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889EC8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889ED4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889EE0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889EF8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889F00u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889F08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889F14u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889F30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889F38u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889F54u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889F90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889F98u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889FACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889FB8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889FBCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889FD0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889FDCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889FF4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08889FF8u, &recomp_unit_0133, "recomp_unit_0133");
}
} // namespace psprecomp
