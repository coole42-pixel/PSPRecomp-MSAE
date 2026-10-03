#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0492[1014] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0,
    8, 0, 9, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16,
    0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 35, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0,
    0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0,
    53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0,
    0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 81, 82, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 95, 96, 0, 0, 0, 0, 0, 97,
    0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 124, 0, 125, 0, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 133,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0,
    140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 151, 152, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 163, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0,
    168, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0,
    177, 0, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0,
    190, 0, 0, 191, 192, 0, 193, 0, 0, 194, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0,
    0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0,
    209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0,
    0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0,
    224, 0, 225, 0, 0, 226, 227, 0, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0,
    265, 0, 266, 0, 0, 267, 0, 268, 0, 0, 269, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0,
    0, 0, 276, 0, 277, 0, 278, 279, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282,
};
void recomp_unit_0492_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089F0000u;
        entry_id = (entry_delta < 4056u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0492[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F0000;
    case 2u: goto L_089F0014;
    case 3u: goto L_089F002C;
    case 4u: goto L_089F004C;
    case 5u: goto L_089F0058;
    case 6u: goto L_089F0064;
    case 7u: goto L_089F0078;
    case 8u: goto L_089F0080;
    case 9u: goto L_089F0088;
    case 10u: goto L_089F0090;
    case 11u: goto L_089F0098;
    case 12u: goto L_089F00A4;
    case 13u: goto L_089F00BC;
    case 14u: goto L_089F00D8;
    case 15u: goto L_089F00E8;
    case 16u: goto L_089F00FC;
    case 17u: goto L_089F0104;
    case 18u: goto L_089F0110;
    case 19u: goto L_089F0118;
    case 20u: goto L_089F0124;
    case 21u: goto L_089F012C;
    case 22u: goto L_089F0134;
    case 23u: goto L_089F013C;
    case 24u: goto L_089F0154;
    case 25u: goto L_089F0168;
    case 26u: goto L_089F0184;
    case 27u: goto L_089F018C;
    case 28u: goto L_089F0198;
    case 29u: goto L_089F01A0;
    case 30u: goto L_089F01B4;
    case 31u: goto L_089F01CC;
    case 32u: goto L_089F01D4;
    case 33u: goto L_089F01DC;
    case 34u: goto L_089F01E8;
    case 35u: goto L_089F01EC;
    case 36u: goto L_089F0204;
    case 37u: goto L_089F0214;
    case 38u: goto L_089F0234;
    case 39u: goto L_089F0240;
    case 40u: goto L_089F0258;
    case 41u: goto L_089F0260;
    case 42u: goto L_089F026C;
    case 43u: goto L_089F0284;
    case 44u: goto L_089F028C;
    case 45u: goto L_089F0294;
    case 46u: goto L_089F029C;
    case 47u: goto L_089F02A4;
    case 48u: goto L_089F02C4;
    case 49u: goto L_089F02C8;
    case 50u: goto L_089F02DC;
    case 51u: goto L_089F02F0;
    case 52u: goto L_089F02F8;
    case 53u: goto L_089F0300;
    case 54u: goto L_089F0314;
    case 55u: goto L_089F0320;
    case 56u: goto L_089F032C;
    case 57u: goto L_089F033C;
    case 58u: goto L_089F0344;
    case 59u: goto L_089F034C;
    case 60u: goto L_089F0360;
    case 61u: goto L_089F036C;
    case 62u: goto L_089F0378;
    case 63u: goto L_089F0388;
    case 64u: goto L_089F03E4;
    case 65u: goto L_089F03F8;
    case 66u: goto L_089F0414;
    case 67u: goto L_089F0424;
    case 68u: goto L_089F0434;
    case 69u: goto L_089F0440;
    case 70u: goto L_089F044C;
    case 71u: goto L_089F0450;
    case 72u: goto L_089F0458;
    case 73u: goto L_089F0460;
    case 74u: goto L_089F0468;
    case 75u: goto L_089F0470;
    case 76u: goto L_089F0484;
    case 77u: goto L_089F048C;
    case 78u: goto L_089F0494;
    case 79u: goto L_089F049C;
    case 80u: goto L_089F04B0;
    case 81u: goto L_089F04B8;
    case 82u: goto L_089F04BC;
    case 83u: goto L_089F04C4;
    case 84u: goto L_089F04CC;
    case 85u: goto L_089F04E0;
    case 86u: goto L_089F04F4;
    case 87u: goto L_089F0508;
    case 88u: goto L_089F0514;
    case 89u: goto L_089F051C;
    case 90u: goto L_089F0524;
    case 91u: goto L_089F052C;
    case 92u: goto L_089F0548;
    case 93u: goto L_089F0550;
    case 94u: goto L_089F0558;
    case 95u: goto L_089F0560;
    case 96u: goto L_089F0564;
    case 97u: goto L_089F057C;
    case 98u: goto L_089F0588;
    case 99u: goto L_089F0590;
    case 100u: goto L_089F0598;
    case 101u: goto L_089F05A0;
    case 102u: goto L_089F05A8;
    case 103u: goto L_089F05B0;
    case 104u: goto L_089F05B8;
    case 105u: goto L_089F05C0;
    case 106u: goto L_089F05C8;
    case 107u: goto L_089F05D0;
    case 108u: goto L_089F05D8;
    case 109u: goto L_089F05E0;
    case 110u: goto L_089F05E8;
    case 111u: goto L_089F0600;
    case 112u: goto L_089F0614;
    case 113u: goto L_089F061C;
    case 114u: goto L_089F0624;
    case 115u: goto L_089F0640;
    case 116u: goto L_089F0654;
    case 117u: goto L_089F066C;
    case 118u: goto L_089F0684;
    case 119u: goto L_089F06A0;
    case 120u: goto L_089F06A8;
    case 121u: goto L_089F06BC;
    case 122u: goto L_089F06D4;
    case 123u: goto L_089F06E8;
    case 124u: goto L_089F0704;
    case 125u: goto L_089F070C;
    case 126u: goto L_089F0718;
    case 127u: goto L_089F0720;
    case 128u: goto L_089F0734;
    case 129u: goto L_089F0748;
    case 130u: goto L_089F075C;
    case 131u: goto L_089F0768;
    case 132u: goto L_089F0778;
    case 133u: goto L_089F077C;
    case 134u: goto L_089F0784;
    case 135u: goto L_089F07AC;
    case 136u: goto L_089F07B8;
    case 137u: goto L_089F07E4;
    case 138u: goto L_089F07F0;
    case 139u: goto L_089F07F8;
    case 140u: goto L_089F0800;
    case 141u: goto L_089F0808;
    case 142u: goto L_089F0810;
    case 143u: goto L_089F0818;
    case 144u: goto L_089F0820;
    case 145u: goto L_089F082C;
    case 146u: goto L_089F0834;
    case 147u: goto L_089F083C;
    case 148u: goto L_089F0844;
    case 149u: goto L_089F084C;
    case 150u: goto L_089F0854;
    case 151u: goto L_089F0860;
    case 152u: goto L_089F0864;
    case 153u: goto L_089F0884;
    case 154u: goto L_089F08C4;
    case 155u: goto L_089F08CC;
    case 156u: goto L_089F08D8;
    case 157u: goto L_089F08E0;
    case 158u: goto L_089F0900;
    case 159u: goto L_089F0908;
    case 160u: goto L_089F0910;
    case 161u: goto L_089F0928;
    case 162u: goto L_089F0930;
    case 163u: goto L_089F0934;
    case 164u: goto L_089F093C;
    case 165u: goto L_089F0948;
    case 166u: goto L_089F0960;
    case 167u: goto L_089F0970;
    case 168u: goto L_089F0980;
    case 169u: goto L_089F098C;
    case 170u: goto L_089F09A4;
    case 171u: goto L_089F09B4;
    case 172u: goto L_089F09C0;
    case 173u: goto L_089F09C8;
    case 174u: goto L_089F09E0;
    case 175u: goto L_089F09E8;
    case 176u: goto L_089F09F8;
    case 177u: goto L_089F0A00;
    case 178u: goto L_089F0A0C;
    case 179u: goto L_089F0A14;
    case 180u: goto L_089F0A28;
    case 181u: goto L_089F0A30;
    case 182u: goto L_089F0A38;
    case 183u: goto L_089F0A40;
    case 184u: goto L_089F0A48;
    case 185u: goto L_089F0A54;
    case 186u: goto L_089F0A5C;
    case 187u: goto L_089F0A64;
    case 188u: goto L_089F0A70;
    case 189u: goto L_089F0A78;
    case 190u: goto L_089F0A80;
    case 191u: goto L_089F0A8C;
    case 192u: goto L_089F0A90;
    case 193u: goto L_089F0A98;
    case 194u: goto L_089F0AA4;
    case 195u: goto L_089F0AAC;
    case 196u: goto L_089F0AB4;
    case 197u: goto L_089F0ABC;
    case 198u: goto L_089F0ADC;
    case 199u: goto L_089F0AE8;
    case 200u: goto L_089F0AF8;
    case 201u: goto L_089F0B04;
    case 202u: goto L_089F0B0C;
    case 203u: goto L_089F0B14;
    case 204u: goto L_089F0B1C;
    case 205u: goto L_089F0B28;
    case 206u: goto L_089F0B5C;
    case 207u: goto L_089F0B70;
    case 208u: goto L_089F0B78;
    case 209u: goto L_089F0B80;
    case 210u: goto L_089F0B8C;
    case 211u: goto L_089F0BB4;
    case 212u: goto L_089F0BC4;
    case 213u: goto L_089F0BD4;
    case 214u: goto L_089F0BE4;
    case 215u: goto L_089F0BF4;
    case 216u: goto L_089F0C04;
    case 217u: goto L_089F0C14;
    case 218u: goto L_089F0C24;
    case 219u: goto L_089F0C34;
    case 220u: goto L_089F0C44;
    case 221u: goto L_089F0C58;
    case 222u: goto L_089F0C68;
    case 223u: goto L_089F0C78;
    case 224u: goto L_089F0C80;
    case 225u: goto L_089F0C88;
    case 226u: goto L_089F0C94;
    case 227u: goto L_089F0C98;
    case 228u: goto L_089F0CA4;
    case 229u: goto L_089F0CAC;
    case 230u: goto L_089F0CB4;
    case 231u: goto L_089F0CD0;
    case 232u: goto L_089F0CE0;
    case 233u: goto L_089F0CF0;
    case 234u: goto L_089F0CFC;
    case 235u: goto L_089F0D18;
    case 236u: goto L_089F0D34;
    case 237u: goto L_089F0D3C;
    case 238u: goto L_089F0D44;
    case 239u: goto L_089F0D4C;
    case 240u: goto L_089F0D54;
    case 241u: goto L_089F0D5C;
    case 242u: goto L_089F0D78;
    case 243u: goto L_089F0D88;
    case 244u: goto L_089F0D98;
    case 245u: goto L_089F0DA8;
    case 246u: goto L_089F0DB8;
    case 247u: goto L_089F0DC8;
    case 248u: goto L_089F0DD4;
    case 249u: goto L_089F0DE8;
    case 250u: goto L_089F0DF0;
    case 251u: goto L_089F0E30;
    case 252u: goto L_089F0E3C;
    case 253u: goto L_089F0E44;
    case 254u: goto L_089F0E5C;
    case 255u: goto L_089F0E70;
    case 256u: goto L_089F0E84;
    case 257u: goto L_089F0E98;
    case 258u: goto L_089F0EA8;
    case 259u: goto L_089F0EB0;
    case 260u: goto L_089F0EB8;
    case 261u: goto L_089F0EC0;
    case 262u: goto L_089F0EC8;
    case 263u: goto L_089F0EF0;
    case 264u: goto L_089F0EF8;
    case 265u: goto L_089F0F00;
    case 266u: goto L_089F0F08;
    case 267u: goto L_089F0F14;
    case 268u: goto L_089F0F1C;
    case 269u: goto L_089F0F28;
    case 270u: goto L_089F0F30;
    case 271u: goto L_089F0F38;
    case 272u: goto L_089F0F40;
    case 273u: goto L_089F0F5C;
    case 274u: goto L_089F0F6C;
    case 275u: goto L_089F0F74;
    case 276u: goto L_089F0F88;
    case 277u: goto L_089F0F90;
    case 278u: goto L_089F0F98;
    case 279u: goto L_089F0F9C;
    case 280u: goto L_089F0FA0;
    case 281u: goto L_089F0FAC;
    case 282u: goto L_089F0FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F0000:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0014:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F002C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] != aot_gpr[9]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(44));
        goto L_089F0058;
    }
    goto L_089F004C;
L_089F004C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0058:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0064:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_089F0080;
      }
      goto L_089F0078;
    }
L_089F0078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0078;
      }
      goto L_089F0080;
    }
L_089F0080:
    aot_gpr[31] = (0x089F0088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0088u) goto L_089F0088;
    return;
L_089F0088:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0098;
      }
      goto L_089F0090;
    }
L_089F0090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0090;
      }
      goto L_089F0098;
    }
L_089F0098:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F00A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F00BCu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    goto L_089F013C;
L_089F00BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089F00D8u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F00D8u) goto L_089F00D8;
    return;
L_089F00D8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089F00E8u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F00E8u) goto L_089F00E8;
    return;
L_089F00E8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F00FC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0134;
      }
      goto L_089F0104;
    }
L_089F0104:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 19 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F0134;
      }
      goto L_089F0110;
    }
L_089F0110:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0134;
      }
      goto L_089F0118;
    }
L_089F0118:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F0134;
      }
      goto L_089F0124;
    }
L_089F0124:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0134;
      }
      goto L_089F012C;
    }
L_089F012C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0134:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F013C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F0154u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), 0u);
    goto L_089F01B4;
L_089F0154:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0168:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F01A0;
      }
      goto L_089F0184;
    }
L_089F0184:
    aot_gpr[31] = (0x089F018Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F01B4;
L_089F018C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F01A0;
      }
      goto L_089F0198;
    }
L_089F0198:
    aot_gpr[31] = (0x089F01A0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089F01A0u) goto L_089F01A0;
    return;
L_089F01A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F01B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F01EC;
      }
      goto L_089F01CC;
    }
L_089F01CC:
    aot_gpr[31] = (0x089F01D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F01D4u) goto L_089F01D4;
    return;
L_089F01D4:
    aot_gpr[31] = (0x089F01DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F01DCu) goto L_089F01DC;
    return;
L_089F01DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (0x089F01E8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F01E8u) goto L_089F01E8;
    return;
L_089F01E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), 0u);
    goto L_089F01EC;
L_089F01EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089F0204u);
    aot_gpr[6] = (0u | 65u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0204u) goto L_089F0204;
    return;
L_089F0204:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0214:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F02C8;
      }
      goto L_089F0234;
    }
L_089F0234:
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F029C;
      }
      goto L_089F0240;
    }
L_089F0240:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-10696)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F029C;
      }
      goto L_089F0260;
    }
L_089F0260:
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F029C;
      }
      goto L_089F026C;
    }
L_089F026C:
    aot_gpr[16] = (aot_gpr[16] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[16]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-10656)));
    jump_target = aot_gpr[1];
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F029C;
      }
      goto L_089F028C;
    }
L_089F028C:
    aot_gpr[31] = (0x089F0294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 83u, 0x089F1478u>(ctx, &aot_mem) && ctx.pc == 0x089F0294u) goto L_089F0294;
    return;
L_089F0294:
    aot_gpr[31] = (0x089F029Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 98u, 0x089F15ACu>(ctx, &aot_mem) && ctx.pc == 0x089F029Cu) goto L_089F029C;
    return;
L_089F029C:
    aot_gpr[31] = (0x089F02A4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 235u, 0x089EFEA4u>(ctx, &aot_mem) && ctx.pc == 0x089F02A4u) goto L_089F02A4;
    return;
L_089F02A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F02C4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F02C4u) goto L_089F02C4;
    return;
L_089F02C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089F02C8;
L_089F02C8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F02DC:
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-18968), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18964), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F02F0:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    goto L_089F02F8;
L_089F02F8:
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[9]);
      if (branch_taken) {
          goto L_089F0314;
      }
      goto L_089F0300;
    }
L_089F0300:
    aot_gpr[5] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0314:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[9]);
      if (branch_taken) {
          goto L_089F032C;
      }
      goto L_089F0320;
    }
L_089F0320:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F032C:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089F02F8;
      }
      goto L_089F033C;
    }
L_089F033C:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    goto L_089F0344;
L_089F0344:
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[9]);
      if (branch_taken) {
          goto L_089F0360;
      }
      goto L_089F034C;
    }
L_089F034C:
    aot_gpr[5] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0360:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[9]);
      if (branch_taken) {
          goto L_089F0378;
      }
      goto L_089F036C;
    }
L_089F036C:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0378:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089F0344;
      }
      goto L_089F0388;
    }
L_089F0388:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[10]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089F03E4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F03E4u) goto L_089F03E4;
    return;
L_089F03E4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F03F8u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 61u, 0x08A392BCu>(ctx, &aot_mem) && ctx.pc == 0x089F03F8u) goto L_089F03F8;
    return;
L_089F03F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0414:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F0424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F0424u) goto L_089F0424;
    return;
L_089F0424:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0434:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 65 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 97 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F0450;
      }
      goto L_089F0440;
    }
L_089F0440:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 91 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F0460;
      }
      goto L_089F044C;
    }
L_089F044C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 97 ? 1u : 0u);
    goto L_089F0450;
L_089F0450:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 123 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F0468;
      }
      goto L_089F0458;
    }
L_089F0458:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0468;
      }
      goto L_089F0460;
    }
L_089F0460:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0468:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0470:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F0484u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_089F0508;
L_089F0484:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F049C;
      }
      goto L_089F048C;
    }
L_089F048C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 71 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F04B0;
      }
      goto L_089F0494;
    }
L_089F0494:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 97 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F04BC;
      }
      goto L_089F049C;
    }
L_089F049C:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F04B0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F04F4;
      }
      goto L_089F04B8;
    }
L_089F04B8:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 97 ? 1u : 0u);
    goto L_089F04BC;
L_089F04BC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 103 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F04E0;
      }
      goto L_089F04C4;
    }
L_089F04C4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F04E0;
      }
      goto L_089F04CC;
    }
L_089F04CC:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F04E0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F04F4:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0508:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F0524;
      }
      goto L_089F0514;
    }
L_089F0514:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0524;
      }
      goto L_089F051C;
    }
L_089F051C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0524:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F052C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089F0548u);
    aot_gpr[17] = (0u | 0u);
    goto L_089F0434;
L_089F0548:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (0u | 1u);
        goto L_089F0564;
    }
    goto L_089F0550;
L_089F0550:
    aot_gpr[31] = (0x089F0558u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F0508;
L_089F0558:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0564;
      }
      goto L_089F0560;
    }
L_089F0560:
    aot_gpr[17] = (0u | 1u);
    goto L_089F0564;
L_089F0564:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F057C:
    aot_gpr[5] = (0u | 32u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089F05D8;
      }
      goto L_089F0588;
    }
L_089F0588:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_089F05D0;
      }
      goto L_089F0590;
    }
L_089F0590:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_089F05C8;
      }
      goto L_089F0598;
    }
L_089F0598:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_089F05C0;
      }
      goto L_089F05A0;
    }
L_089F05A0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_089F05B8;
      }
      goto L_089F05A8;
    }
L_089F05A8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F05E0;
      }
      goto L_089F05B0;
    }
L_089F05B0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F05B8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F05C0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F05C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F05D0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F05D8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F05E0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F05E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F066C;
      }
      goto L_089F0600;
    }
L_089F0600:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x089F0614u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F0614u) goto L_089F0614;
    return;
L_089F0614:
    aot_gpr[31] = (0x089F061Cu);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F061Cu) goto L_089F061C;
    return;
L_089F061C:
    aot_gpr[31] = (0x089F0624u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0624u) goto L_089F0624;
    return;
L_089F0624:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089F0640u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F0640u) goto L_089F0640;
    return;
L_089F0640:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F0654u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0654u) goto L_089F0654;
    return;
L_089F0654:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F066C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0684:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F06A0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10352));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089F06A0u) goto L_089F06A0;
    return;
L_089F06A0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u | 1u);
        goto L_089F06A8;
    }
    goto L_089F06A8;
L_089F06A8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F06BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F06D4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(664), 0u);
    goto L_089F0784;
L_089F06D4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F06E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F0720;
      }
      goto L_089F0704;
    }
L_089F0704:
    aot_gpr[31] = (0x089F070Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F0784;
L_089F070C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0720;
      }
      goto L_089F0718;
    }
L_089F0718:
    aot_gpr[31] = (0x089F0720u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089F0720u) goto L_089F0720;
    return;
L_089F0720:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0734:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F0748u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_089F0D5C;
L_089F0748:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F075C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F077C;
      }
      goto L_089F0768;
    }
L_089F0768:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(146));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F077C;
      }
      goto L_089F0778;
    }
L_089F0778:
    aot_gpr[2] = (0u | 1u);
    goto L_089F077C;
L_089F077C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0784:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 80u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(659), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F07ACu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 30u, 0x089F1174u>(ctx, &aot_mem) && ctx.pc == 0x089F07ACu) goto L_089F07AC;
    return;
L_089F07AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F07B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F07F0;
      }
      goto L_089F07E4;
    }
L_089F07E4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F0810;
      }
      goto L_089F07F0;
    }
L_089F07F0:
    aot_gpr[31] = (0x089F07F8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F0DE8;
L_089F07F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F0864;
      }
      goto L_089F0800;
    }
L_089F0800:
    aot_gpr[31] = (0x089F0808u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_089F0734;
L_089F0808:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089F0864;
      }
      goto L_089F0810;
    }
L_089F0810:
    aot_gpr[31] = (0x089F0818u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F0684;
L_089F0818:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F0834;
      }
      goto L_089F0820;
    }
L_089F0820:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F082Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_089F0DF0;
L_089F082C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F0864;
      }
      goto L_089F0834;
    }
L_089F0834:
    aot_gpr[31] = (0x089F083Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F075C;
L_089F083C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0864;
      }
      goto L_089F0844;
    }
L_089F0844:
    aot_gpr[31] = (0x089F084Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F0DE8;
L_089F084C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F0864;
      }
      goto L_089F0854;
    }
L_089F0854:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F0860u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_089F0FD4;
L_089F0860:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_089F0864;
L_089F0864:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0884:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(664)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    aot_gpr[30] = (0u | 0u);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[20] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F0A90;
      }
      goto L_089F08C4;
    }
L_089F08C4:
    aot_gpr[31] = (0x089F08CCu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F08CCu) goto L_089F08CC;
    return;
L_089F08CC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(664)));
    aot_gpr[31] = (0x089F08D8u);
    aot_gpr[22] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F08D8u) goto L_089F08D8;
    return;
L_089F08D8:
    aot_gpr[31] = (0x089F08E0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F08E0u) goto L_089F08E0;
    return;
L_089F08E0:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-10348));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 259u);
    aot_gpr[31] = (0x089F0900u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F0900u) goto L_089F0900;
    return;
L_089F0900:
    aot_gpr[31] = (0x089F0908u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F0908u) goto L_089F0908;
    return;
L_089F0908:
    aot_gpr[31] = (0x089F0910u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0910u) goto L_089F0910;
    return;
L_089F0910:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 260u);
    aot_gpr[31] = (0x089F0928u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F0928u) goto L_089F0928;
    return;
L_089F0928:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F0A38;
      }
      goto L_089F0930;
    }
L_089F0930:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F0934;
L_089F0934:
    aot_gpr[31] = (0x089F093Cu);
    aot_gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x089F093Cu) goto L_089F093C;
    return;
L_089F093C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_089F0A30;
    }
    goto L_089F0948;
L_089F0948:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[16] - aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F0960u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0960u) goto L_089F0960;
    return;
L_089F0960:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x089F0970u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 68u, 0x089EF3FCu>(ctx, &aot_mem) && ctx.pc == 0x089F0970u) goto L_089F0970;
    return;
L_089F0970:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F0980u);
    aot_gpr[5] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x089F0980u) goto L_089F0980;
    return;
L_089F0980:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F09E8;
      }
      goto L_089F098C;
    }
L_089F098C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F09A4u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F09A4u) goto L_089F09A4;
    return;
L_089F09A4:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x089F09B4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 68u, 0x089EF3FCu>(ctx, &aot_mem) && ctx.pc == 0x089F09B4u) goto L_089F09B4;
    return;
L_089F09B4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F09C0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 196u, 0x089EEFF4u>(ctx, &aot_mem) && ctx.pc == 0x089F09C0u) goto L_089F09C0;
    return;
L_089F09C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089F09E0;
      }
      goto L_089F09C8;
    }
L_089F09C8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 284u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F09E0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x089F09E0u) goto L_089F09E0;
    return;
L_089F09E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F0A30;
      }
      goto L_089F09E8;
    }
L_089F09E8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F09F8u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    goto L_089F02F0;
L_089F09F8:
    aot_gpr[31] = (0x089F0A00u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 68u, 0x089EF3FCu>(ctx, &aot_mem) && ctx.pc == 0x089F0A00u) goto L_089F0A00;
    return;
L_089F0A00:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F0A0Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 196u, 0x089EEFF4u>(ctx, &aot_mem) && ctx.pc == 0x089F0A0Cu) goto L_089F0A0C;
    return;
L_089F0A0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_089F0A28;
      }
      goto L_089F0A14;
    }
L_089F0A14:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 297u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F0A28u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x089F0A28u) goto L_089F0A28;
    return;
L_089F0A28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089F0A30;
      }
      goto L_089F0A30;
    }
L_089F0A30:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F0934;
      }
      goto L_089F0A38;
    }
L_089F0A38:
    aot_gpr[31] = (0x089F0A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F0A40u) goto L_089F0A40;
    return;
L_089F0A40:
    aot_gpr[31] = (0x089F0A48u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0A48u) goto L_089F0A48;
    return;
L_089F0A48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(664)));
    aot_gpr[31] = (0x089F0A54u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F0A54u) goto L_089F0A54;
    return;
L_089F0A54:
    aot_gpr[31] = (0x089F0A5Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(664), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F0A5Cu) goto L_089F0A5C;
    return;
L_089F0A5C:
    aot_gpr[31] = (0x089F0A64u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0A64u) goto L_089F0A64;
    return;
L_089F0A64:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F0A70u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F0A70u) goto L_089F0A70;
    return;
L_089F0A70:
    aot_gpr[31] = (0x089F0A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F0A78u) goto L_089F0A78;
    return;
L_089F0A78:
    aot_gpr[31] = (0x089F0A80u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0A80u) goto L_089F0A80;
    return;
L_089F0A80:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F0A8Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F0A8Cu) goto L_089F0A8C;
    return;
L_089F0A8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(664), 0u);
    goto L_089F0A90;
L_089F0A90:
    aot_gpr[31] = (0x089F0A98u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 167u, 0x089EEDB8u>(ctx, &aot_mem) && ctx.pc == 0x089F0A98u) goto L_089F0A98;
    return;
L_089F0A98:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F0AAC;
      }
      goto L_089F0AA4;
    }
L_089F0AA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_089F0B28;
      }
      goto L_089F0AAC;
    }
L_089F0AAC:
    aot_gpr[31] = (0x089F0AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F0AB4u) goto L_089F0AB4;
    return;
L_089F0AB4:
    aot_gpr[31] = (0x089F0ABCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0ABCu) goto L_089F0ABC;
    return;
L_089F0ABC:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 323u);
    aot_gpr[31] = (0x089F0ADCu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10348));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F0ADCu) goto L_089F0ADC;
    return;
L_089F0ADC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F0B28;
      }
      goto L_089F0AE8;
    }
L_089F0AE8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F0AF8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 151u, 0x089EEC68u>(ctx, &aot_mem) && ctx.pc == 0x089F0AF8u) goto L_089F0AF8;
    return;
L_089F0AF8:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0B0C;
      }
      goto L_089F0B04;
    }
L_089F0B04:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(664), aot_gpr[16]);
      if (branch_taken) {
          goto L_089F0B28;
      }
      goto L_089F0B0C;
    }
L_089F0B0C:
    aot_gpr[31] = (0x089F0B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F0B14u) goto L_089F0B14;
    return;
L_089F0B14:
    aot_gpr[31] = (0x089F0B1Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0B1Cu) goto L_089F0B1C;
    return;
L_089F0B1C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F0B28u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F0B28u) goto L_089F0B28;
    return;
L_089F0B28:
    aot_gpr[2] = (aot_gpr[30] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0B5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(664)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 667u);
      if (branch_taken) {
          goto L_089F0B80;
      }
      goto L_089F0B70;
    }
L_089F0B70:
    aot_gpr[31] = (0x089F0B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F0B78u) goto L_089F0B78;
    return;
L_089F0B78:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(667));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089F0B80;
L_089F0B80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0B8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F0D18;
      }
      goto L_089F0BB4;
    }
L_089F0BB4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F0BC4u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0BC4u) goto L_089F0BC4;
    return;
L_089F0BC4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089F0D18;
      }
      goto L_089F0BD4;
    }
L_089F0BD4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F0BE4u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0BE4u) goto L_089F0BE4;
    return;
L_089F0BE4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-128));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_089F0D18;
      }
      goto L_089F0BF4;
    }
L_089F0BF4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F0C04u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0C04u) goto L_089F0C04;
    return;
L_089F0C04:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(513) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089F0D18;
      }
      goto L_089F0C14;
    }
L_089F0C14:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(146));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F0C24u);
    aot_gpr[6] = (0u | 513u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0C24u) goto L_089F0C24;
    return;
L_089F0C24:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-513));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(513));
      if (branch_taken) {
          goto L_089F0D18;
      }
      goto L_089F0C34;
    }
L_089F0C34:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(659));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F0C44u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0C44u) goto L_089F0C44;
    return;
L_089F0C44:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089F0D18;
      }
      goto L_089F0C58;
    }
L_089F0C58:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F0C68u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0C68u) goto L_089F0C68;
    return;
L_089F0C68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(664)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_089F0C98;
      }
      goto L_089F0C78;
    }
L_089F0C78:
    aot_gpr[31] = (0x089F0C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F0C80u) goto L_089F0C80;
    return;
L_089F0C80:
    aot_gpr[31] = (0x089F0C88u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0C88u) goto L_089F0C88;
    return;
L_089F0C88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(664)));
    aot_gpr[31] = (0x089F0C94u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F0C94u) goto L_089F0C94;
    return;
L_089F0C94:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(664), 0u);
    goto L_089F0C98;
L_089F0C98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0CFC;
      }
      goto L_089F0CA4;
    }
L_089F0CA4:
    aot_gpr[31] = (0x089F0CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F0CACu) goto L_089F0CAC;
    return;
L_089F0CAC:
    aot_gpr[31] = (0x089F0CB4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0CB4u) goto L_089F0CB4;
    return;
L_089F0CB4:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 798u);
    aot_gpr[31] = (0x089F0CD0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10348));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F0CD0u) goto L_089F0CD0;
    return;
L_089F0CD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(664), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0D18;
      }
      goto L_089F0CE0;
    }
L_089F0CE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F0D18;
      }
      goto L_089F0CF0;
    }
L_089F0CF0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F0CFCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0CFCu) goto L_089F0CFC;
    return;
L_089F0CFC:
    aot_gpr[2] = (0u | 1u);
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
L_089F0D18:
    aot_gpr[2] = (0u | 0u);
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
L_089F0D34:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0D3C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0D44:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0D4C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(146));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0D54:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(664)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0D5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F0DD4;
      }
      goto L_089F0D78;
    }
L_089F0D78:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F0D88u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0D88u) goto L_089F0D88;
    return;
L_089F0D88:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089F0D98u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0D98u) goto L_089F0D98;
    return;
L_089F0D98:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(146));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(146));
    aot_gpr[31] = (0x089F0DA8u);
    aot_gpr[6] = (0u | 513u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0DA8u) goto L_089F0DA8;
    return;
L_089F0DA8:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(659));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(659));
    aot_gpr[31] = (0x089F0DB8u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0DB8u) goto L_089F0DB8;
    return;
L_089F0DB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F0DC8u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_089F0D54;
L_089F0DC8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F0DD4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 30u, 0x089F1174u>(ctx, &aot_mem) && ctx.pc == 0x089F0DD4u) goto L_089F0DD4;
    return;
L_089F0DD4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0DE8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0DF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-10316));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089F0E30u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089F0E30u) goto L_089F0E30;
    return;
L_089F0E30:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0EC8;
      }
      goto L_089F0E3C;
    }
L_089F0E3C:
    aot_gpr[31] = (0x089F0E44u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F0E44u) goto L_089F0E44;
    return;
L_089F0E44:
    aot_gpr[19] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-10312));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F0E5Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089F0E5Cu) goto L_089F0E5C;
    return;
L_089F0E5C:
    aot_gpr[21] = (aot_gpr[2] - aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F0E70u);
    aot_gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0E70u) goto L_089F0E70;
    return;
L_089F0E70:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F0E84u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089F0E84u) goto L_089F0E84;
    return;
L_089F0E84:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F0E98u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10308));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089F0E98u) goto L_089F0E98;
    return;
L_089F0E98:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[18] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[18] = (0u | 0u);
        goto L_089F0EA8;
    }
    goto L_089F0EA8;
L_089F0EA8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0EB8;
      }
      goto L_089F0EB0;
    }
L_089F0EB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[18] - aot_gpr[19]);
      if (branch_taken) {
          goto L_089F0EF0;
      }
      goto L_089F0EB8;
    }
L_089F0EB8:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0EC8;
      }
      goto L_089F0EC0;
    }
L_089F0EC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[20] - aot_gpr[19]);
      if (branch_taken) {
          goto L_089F0EF0;
      }
      goto L_089F0EC8;
    }
L_089F0EC8:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0EF0:
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[5] = (aot_gpr[21] < static_cast<std::uint32_t>(127) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F0F00;
      }
      goto L_089F0EF8;
    }
L_089F0EF8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089F0F30;
      }
      goto L_089F0F00;
    }
L_089F0F00:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089F0F1C;
      }
      goto L_089F0F08;
    }
L_089F0F08:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F0F14u);
    aot_gpr[6] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0F14u) goto L_089F0F14;
    return;
L_089F0F14:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089F0F30;
      }
      goto L_089F0F1C;
    }
L_089F0F1C:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F0F28u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F0F28u) goto L_089F0F28;
    return;
L_089F0F28:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_089F0F30;
L_089F0F30:
    aot_gpr[31] = (0x089F0F38u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F0D44;
L_089F0F38:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F0F9C;
      }
      goto L_089F0F40;
    }
L_089F0F40:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[21]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[20] - aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089F0F5Cu);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0F5Cu) goto L_089F0F5C;
    return;
L_089F0F5C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F0F6Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089F0F6Cu) goto L_089F0F6C;
    return;
L_089F0F6C:
    aot_gpr[31] = (0x089F0F74u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x089F0F74u) goto L_089F0F74;
    return;
L_089F0F74:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F0F90;
      }
      goto L_089F0F88;
    }
L_089F0F88:
    if (static_cast<std::int32_t>(aot_gpr[4]) >= 0) {
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(aot_gpr[4]));
        goto L_089F0FA0;
    }
    goto L_089F0F90;
L_089F0F90:
    aot_gpr[31] = (0x089F0F98u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F0D44;
L_089F0F98:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_089F0F9C;
L_089F0F9C:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_089F0FA0;
L_089F0FA0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F0FACu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 39u, 0x089F11E4u>(ctx, &aot_mem) && ctx.pc == 0x089F0FACu) goto L_089F0FAC;
    return;
L_089F0FAC:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0FD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-544));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(536), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(540), aot_gpr[31]);
    ctx.pc = 0x089F1000u; return;
}

void recomp_unit_0492(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0492_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_492(Runtime &runtime) {
    runtime.register_generated_unit(492u, 0x089F0000u, 4096u, &recomp_unit_0492, &recomp_unit_0492_entry);
    runtime.register_function(0x089F0000u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0014u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F002Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F004Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0058u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0064u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0078u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0080u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0088u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0090u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0098u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F00A4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F00BCu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F00D8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F00E8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F00FCu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0104u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0110u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0118u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0124u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F012Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0134u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F013Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0154u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0168u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0184u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F018Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0198u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F01A0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F01B4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F01CCu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F01D4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F01DCu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F01E8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F01ECu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0204u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0214u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0234u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0240u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0258u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0260u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F026Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0284u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F028Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0294u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F029Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F02A4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F02C4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F02C8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F02DCu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F02F0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F02F8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0300u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0314u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0320u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F032Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F033Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0344u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F034Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0360u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F036Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0378u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0388u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F03E4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F03F8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0414u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0424u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0434u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0440u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F044Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0450u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0458u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0460u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0468u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0470u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0484u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F048Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0494u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F049Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F04B0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F04B8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F04BCu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F04C4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F04CCu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F04E0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F04F4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0508u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0514u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F051Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0524u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F052Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0548u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0550u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0558u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0560u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0564u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F057Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0588u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0590u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0598u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F05A0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F05A8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F05B0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F05B8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F05C0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F05C8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F05D0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F05D8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F05E0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F05E8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0600u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0614u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F061Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0624u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0640u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0654u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F066Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0684u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F06A0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F06A8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F06BCu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F06D4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F06E8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0704u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F070Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0718u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0720u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0734u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0748u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F075Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0768u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0778u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F077Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0784u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F07ACu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F07B8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F07E4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F07F0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F07F8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0800u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0808u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0810u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0818u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0820u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F082Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0834u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F083Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0844u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F084Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0854u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0860u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0864u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0884u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F08C4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F08CCu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F08D8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F08E0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0900u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0908u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0910u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0928u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0930u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0934u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F093Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0948u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0960u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0970u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0980u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F098Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F09A4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F09B4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F09C0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F09C8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F09E0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F09E8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F09F8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A00u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A0Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A14u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A28u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A30u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A38u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A40u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A48u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A54u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A5Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A64u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A70u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A78u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A80u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A8Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A90u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0A98u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0AA4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0AACu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0AB4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0ABCu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0ADCu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0AE8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0AF8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0B04u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0B0Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0B14u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0B1Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0B28u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0B5Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0B70u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0B78u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0B80u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0B8Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0BB4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0BC4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0BD4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0BE4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0BF4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0C04u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0C14u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0C24u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0C34u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0C44u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0C58u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0C68u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0C78u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0C80u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0C88u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0C94u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0C98u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0CA4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0CACu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0CB4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0CD0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0CE0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0CF0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0CFCu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0D18u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0D34u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0D3Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0D44u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0D4Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0D54u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0D5Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0D78u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0D88u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0D98u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0DA8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0DB8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0DC8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0DD4u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0DE8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0DF0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0E30u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0E3Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0E44u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0E5Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0E70u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0E84u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0E98u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0EA8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0EB0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0EB8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0EC0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0EC8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0EF0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0EF8u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F00u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F08u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F14u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F1Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F28u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F30u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F38u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F40u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F5Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F6Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F74u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F88u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F90u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F98u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0F9Cu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0FA0u, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0FACu, &recomp_unit_0492, "recomp_unit_0492");
    runtime.register_function(0x089F0FD4u, &recomp_unit_0492, "recomp_unit_0492");
}
} // namespace psprecomp
