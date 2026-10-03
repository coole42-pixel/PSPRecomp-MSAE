#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0475[1020] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 6, 0, 7, 0, 0, 0, 8, 0, 9, 10, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0,
    20, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 28, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 34,
    0, 35, 0, 36, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0,
    0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 54, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 58, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 63,
    64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81, 82, 0, 83, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 99,
    0, 100, 0, 0, 101, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0,
    112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 163, 0, 0, 0,
    0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 175, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 188, 0,
    189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 201,
    0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0,
    0, 0, 0, 0, 0, 0, 211, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 220, 0, 0, 221, 0, 0, 222, 223, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 242, 0,
    0, 0, 0, 243, 0, 244, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 250,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255,
};
void recomp_unit_0475_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089DF000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0475[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089DF000;
    case 2u: goto L_089DF008;
    case 3u: goto L_089DF02C;
    case 4u: goto L_089DF038;
    case 5u: goto L_089DF040;
    case 6u: goto L_089DF044;
    case 7u: goto L_089DF04C;
    case 8u: goto L_089DF05C;
    case 9u: goto L_089DF064;
    case 10u: goto L_089DF068;
    case 11u: goto L_089DF070;
    case 12u: goto L_089DF098;
    case 13u: goto L_089DF0B0;
    case 14u: goto L_089DF0B8;
    case 15u: goto L_089DF0C8;
    case 16u: goto L_089DF0D0;
    case 17u: goto L_089DF0E0;
    case 18u: goto L_089DF0E8;
    case 19u: goto L_089DF0F8;
    case 20u: goto L_089DF100;
    case 21u: goto L_089DF110;
    case 22u: goto L_089DF118;
    case 23u: goto L_089DF120;
    case 24u: goto L_089DF130;
    case 25u: goto L_089DF164;
    case 26u: goto L_089DF198;
    case 27u: goto L_089DF1A4;
    case 28u: goto L_089DF1A8;
    case 29u: goto L_089DF1B0;
    case 30u: goto L_089DF1B4;
    case 31u: goto L_089DF1DC;
    case 32u: goto L_089DF1EC;
    case 33u: goto L_089DF1F4;
    case 34u: goto L_089DF1FC;
    case 35u: goto L_089DF204;
    case 36u: goto L_089DF20C;
    case 37u: goto L_089DF218;
    case 38u: goto L_089DF224;
    case 39u: goto L_089DF22C;
    case 40u: goto L_089DF238;
    case 41u: goto L_089DF248;
    case 42u: goto L_089DF250;
    case 43u: goto L_089DF258;
    case 44u: goto L_089DF260;
    case 45u: goto L_089DF268;
    case 46u: goto L_089DF270;
    case 47u: goto L_089DF284;
    case 48u: goto L_089DF294;
    case 49u: goto L_089DF2A0;
    case 50u: goto L_089DF2AC;
    case 51u: goto L_089DF2C8;
    case 52u: goto L_089DF2DC;
    case 53u: goto L_089DF300;
    case 54u: goto L_089DF308;
    case 55u: goto L_089DF30C;
    case 56u: goto L_089DF320;
    case 57u: goto L_089DF338;
    case 58u: goto L_089DF344;
    case 59u: goto L_089DF348;
    case 60u: goto L_089DF354;
    case 61u: goto L_089DF368;
    case 62u: goto L_089DF370;
    case 63u: goto L_089DF37C;
    case 64u: goto L_089DF380;
    case 65u: goto L_089DF38C;
    case 66u: goto L_089DF3A0;
    case 67u: goto L_089DF3A8;
    case 68u: goto L_089DF3C0;
    case 69u: goto L_089DF3C8;
    case 70u: goto L_089DF3D4;
    case 71u: goto L_089DF3DC;
    case 72u: goto L_089DF3E4;
    case 73u: goto L_089DF3F0;
    case 74u: goto L_089DF408;
    case 75u: goto L_089DF424;
    case 76u: goto L_089DF42C;
    case 77u: goto L_089DF434;
    case 78u: goto L_089DF43C;
    case 79u: goto L_089DF444;
    case 80u: goto L_089DF44C;
    case 81u: goto L_089DF45C;
    case 82u: goto L_089DF460;
    case 83u: goto L_089DF468;
    case 84u: goto L_089DF470;
    case 85u: goto L_089DF4A0;
    case 86u: goto L_089DF4B0;
    case 87u: goto L_089DF4B8;
    case 88u: goto L_089DF4C8;
    case 89u: goto L_089DF4D0;
    case 90u: goto L_089DF4D8;
    case 91u: goto L_089DF4E8;
    case 92u: goto L_089DF4F0;
    case 93u: goto L_089DF4F8;
    case 94u: goto L_089DF51C;
    case 95u: goto L_089DF538;
    case 96u: goto L_089DF540;
    case 97u: goto L_089DF558;
    case 98u: goto L_089DF574;
    case 99u: goto L_089DF57C;
    case 100u: goto L_089DF584;
    case 101u: goto L_089DF590;
    case 102u: goto L_089DF594;
    case 103u: goto L_089DF5B0;
    case 104u: goto L_089DF5BC;
    case 105u: goto L_089DF5C4;
    case 106u: goto L_089DF5CC;
    case 107u: goto L_089DF5D4;
    case 108u: goto L_089DF5DC;
    case 109u: goto L_089DF5E4;
    case 110u: goto L_089DF5EC;
    case 111u: goto L_089DF5F8;
    case 112u: goto L_089DF600;
    case 113u: goto L_089DF618;
    case 114u: goto L_089DF634;
    case 115u: goto L_089DF63C;
    case 116u: goto L_089DF644;
    case 117u: goto L_089DF654;
    case 118u: goto L_089DF668;
    case 119u: goto L_089DF684;
    case 120u: goto L_089DF6A8;
    case 121u: goto L_089DF6C0;
    case 122u: goto L_089DF6D4;
    case 123u: goto L_089DF6E8;
    case 124u: goto L_089DF704;
    case 125u: goto L_089DF720;
    case 126u: goto L_089DF740;
    case 127u: goto L_089DF748;
    case 128u: goto L_089DF750;
    case 129u: goto L_089DF754;
    case 130u: goto L_089DF764;
    case 131u: goto L_089DF78C;
    case 132u: goto L_089DF7B0;
    case 133u: goto L_089DF7B8;
    case 134u: goto L_089DF7C0;
    case 135u: goto L_089DF7C8;
    case 136u: goto L_089DF7EC;
    case 137u: goto L_089DF7FC;
    case 138u: goto L_089DF810;
    case 139u: goto L_089DF834;
    case 140u: goto L_089DF84C;
    case 141u: goto L_089DF860;
    case 142u: goto L_089DF884;
    case 143u: goto L_089DF8A0;
    case 144u: goto L_089DF8B4;
    case 145u: goto L_089DF8D8;
    case 146u: goto L_089DF8F4;
    case 147u: goto L_089DF908;
    case 148u: goto L_089DF914;
    case 149u: goto L_089DF92C;
    case 150u: goto L_089DF944;
    case 151u: goto L_089DF958;
    case 152u: goto L_089DF960;
    case 153u: goto L_089DF984;
    case 154u: goto L_089DF99C;
    case 155u: goto L_089DF9A4;
    case 156u: goto L_089DF9B0;
    case 157u: goto L_089DF9BC;
    case 158u: goto L_089DF9C4;
    case 159u: goto L_089DF9CC;
    case 160u: goto L_089DF9D4;
    case 161u: goto L_089DF9DC;
    case 162u: goto L_089DF9E4;
    case 163u: goto L_089DF9F0;
    case 164u: goto L_089DFA08;
    case 165u: goto L_089DFA10;
    case 166u: goto L_089DFA1C;
    case 167u: goto L_089DFA28;
    case 168u: goto L_089DFA30;
    case 169u: goto L_089DFA38;
    case 170u: goto L_089DFA40;
    case 171u: goto L_089DFA48;
    case 172u: goto L_089DFA50;
    case 173u: goto L_089DFA5C;
    case 174u: goto L_089DFA84;
    case 175u: goto L_089DFA90;
    case 176u: goto L_089DFA94;
    case 177u: goto L_089DFAA4;
    case 178u: goto L_089DFAB4;
    case 179u: goto L_089DFAC0;
    case 180u: goto L_089DFAF0;
    case 181u: goto L_089DFB1C;
    case 182u: goto L_089DFB28;
    case 183u: goto L_089DFB30;
    case 184u: goto L_089DFB4C;
    case 185u: goto L_089DFB58;
    case 186u: goto L_089DFB64;
    case 187u: goto L_089DFB6C;
    case 188u: goto L_089DFB78;
    case 189u: goto L_089DFB80;
    case 190u: goto L_089DFB88;
    case 191u: goto L_089DFB90;
    case 192u: goto L_089DFB98;
    case 193u: goto L_089DFBA0;
    case 194u: goto L_089DFBAC;
    case 195u: goto L_089DFBB4;
    case 196u: goto L_089DFBBC;
    case 197u: goto L_089DFBC4;
    case 198u: goto L_089DFBD0;
    case 199u: goto L_089DFBE8;
    case 200u: goto L_089DFBF0;
    case 201u: goto L_089DFBFC;
    case 202u: goto L_089DFC08;
    case 203u: goto L_089DFC10;
    case 204u: goto L_089DFC18;
    case 205u: goto L_089DFC20;
    case 206u: goto L_089DFC28;
    case 207u: goto L_089DFC30;
    case 208u: goto L_089DFC3C;
    case 209u: goto L_089DFC68;
    case 210u: goto L_089DFC74;
    case 211u: goto L_089DFC98;
    case 212u: goto L_089DFC9C;
    case 213u: goto L_089DFCA8;
    case 214u: goto L_089DFCB4;
    case 215u: goto L_089DFCD0;
    case 216u: goto L_089DFCEC;
    case 217u: goto L_089DFD18;
    case 218u: goto L_089DFD24;
    case 219u: goto L_089DFD48;
    case 220u: goto L_089DFD4C;
    case 221u: goto L_089DFD58;
    case 222u: goto L_089DFD64;
    case 223u: goto L_089DFD68;
    case 224u: goto L_089DFD80;
    case 225u: goto L_089DFD98;
    case 226u: goto L_089DFDAC;
    case 227u: goto L_089DFDB4;
    case 228u: goto L_089DFDC0;
    case 229u: goto L_089DFDD4;
    case 230u: goto L_089DFDE8;
    case 231u: goto L_089DFDF0;
    case 232u: goto L_089DFE04;
    case 233u: goto L_089DFE30;
    case 234u: goto L_089DFE3C;
    case 235u: goto L_089DFE50;
    case 236u: goto L_089DFE6C;
    case 237u: goto L_089DFE88;
    case 238u: goto L_089DFECC;
    case 239u: goto L_089DFED8;
    case 240u: goto L_089DFEE8;
    case 241u: goto L_089DFEF0;
    case 242u: goto L_089DFEF8;
    case 243u: goto L_089DFF0C;
    case 244u: goto L_089DFF14;
    case 245u: goto L_089DFF18;
    case 246u: goto L_089DFF34;
    case 247u: goto L_089DFF3C;
    case 248u: goto L_089DFF60;
    case 249u: goto L_089DFF68;
    case 250u: goto L_089DFF7C;
    case 251u: goto L_089DFFA4;
    case 252u: goto L_089DFFBC;
    case 253u: goto L_089DFFCC;
    case 254u: goto L_089DFFE0;
    case 255u: goto L_089DFFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089DF000:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089DF1A4;
      }
      goto L_089DF008;
    }
L_089DF008:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DF1DC;
      }
      goto L_089DF02C;
    }
L_089DF02C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089DF038u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 203u, 0x08A42B3Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF038u) goto L_089DF038;
    return;
L_089DF038:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DF064;
      }
      goto L_089DF040;
    }
L_089DF040:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    goto L_089DF044;
L_089DF044:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF1FC;
      }
      goto L_089DF04C;
    }
L_089DF04C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (0x089DF05Cu);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 116u, 0x08A43614u>(ctx, &aot_mem) && ctx.pc == 0x089DF05Cu) goto L_089DF05C;
    return;
L_089DF05C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DF1FC;
      }
      goto L_089DF064;
    }
L_089DF064:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089DF068;
L_089DF068:
    aot_gpr[31] = (0x089DF070u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 221u, 0x089DBCD0u>(ctx, &aot_mem) && ctx.pc == 0x089DF070u) goto L_089DF070;
    return;
L_089DF070:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF098:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(264)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(0u));
        (void)rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 288u, 0x089DEF30u>(ctx, &aot_mem); return;
    }
    goto L_089DF0B0;
L_089DF0B0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1023));
    goto L_089DF118;
L_089DF0B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(128), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (2217u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 286u, 0x089DEF1Cu>(ctx, &aot_mem); return;
    }
    goto L_089DF0C8;
L_089DF0C8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(30));
    goto L_089DF098;
L_089DF0D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
        (void)rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 284u, 0x089DEF10u>(ctx, &aot_mem); return;
    }
    goto L_089DF0E0;
L_089DF0E0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1448));
    goto L_089DF0B8;
L_089DF0E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
        (void)rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 282u, 0x089DEF04u>(ctx, &aot_mem); return;
    }
    goto L_089DF0F8;
L_089DF0F8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
    goto L_089DF0D0;
L_089DF100:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[7]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 280u, 0x089DEEF4u>(ctx, &aot_mem); return;
      }
      goto L_089DF110;
    }
L_089DF110:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
    goto L_089DF0E8;
L_089DF118:
    aot_gpr[31] = (0x089DF120u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 167u, 0x089DAA24u>(ctx, &aot_mem) && ctx.pc == 0x089DF120u) goto L_089DF120;
    return;
L_089DF120:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (0u | 65535u);
    aot_gpr[31] = (0x089DF130u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 167u, 0x089DAA24u>(ctx, &aot_mem) && ctx.pc == 0x089DF130u) goto L_089DF130;
    return;
L_089DF130:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(146), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(260)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(264)));
    aot_gpr[6] = (aot_gpr[7] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(228), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[7]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 289u, 0x089DEF64u>(ctx, &aot_mem); return;
      }
      goto L_089DF164;
    }
L_089DF164:
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), aot_gpr[7]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[2] << 4u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    aot_gpr[31] = (0x089DF198u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089DF198u) goto L_089DF198;
    return;
L_089DF198:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[5] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
        (void)rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 292u, 0x089DEFACu>(ctx, &aot_mem); return;
    }
    goto L_089DF1A4;
L_089DF1A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089DF1A8;
L_089DF1A8:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(100));
    goto L_089DF068;
L_089DF1B0:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    goto L_089DF1B4;
L_089DF1B4:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF1DC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x089DF1ECu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 203u, 0x08A42B3Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF1ECu) goto L_089DF1EC;
    return;
L_089DF1EC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DF064;
      }
      goto L_089DF1F4;
    }
L_089DF1F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    goto L_089DF044;
L_089DF1FC:
    aot_gpr[31] = (0x089DF204u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 214u, 0x0898DF50u>(ctx, &aot_mem) && ctx.pc == 0x089DF204u) goto L_089DF204;
    return;
L_089DF204:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DF064;
      }
      goto L_089DF20C;
    }
L_089DF20C:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(108));
    aot_gpr[31] = (0x089DF218u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1450));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089DF218u) goto L_089DF218;
    return;
L_089DF218:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_089DF1A4;
      }
      goto L_089DF224;
    }
L_089DF224:
    aot_gpr[31] = (0x089DF22Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1450));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089DF22Cu) goto L_089DF22C;
    return;
L_089DF22C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089DF1A4;
      }
      goto L_089DF238;
    }
L_089DF238:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089DF248u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 238u, 0x089DEBE0u>(ctx, &aot_mem) && ctx.pc == 0x089DF248u) goto L_089DF248;
    return;
L_089DF248:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DF064;
      }
      goto L_089DF250;
    }
L_089DF250:
    aot_gpr[31] = (0x089DF258u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 202u, 0x0898DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF258u) goto L_089DF258;
    return;
L_089DF258:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DF064;
      }
      goto L_089DF260;
    }
L_089DF260:
    aot_gpr[31] = (0x089DF268u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 203u, 0x0898DE24u>(ctx, &aot_mem) && ctx.pc == 0x089DF268u) goto L_089DF268;
    return;
L_089DF268:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DF064;
      }
      goto L_089DF270;
    }
L_089DF270:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(22676));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(256)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_089DF3A8;
    }
    goto L_089DF284;
L_089DF284:
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DF434;
      }
      goto L_089DF294;
    }
L_089DF294:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089DF3E4;
      }
      goto L_089DF2A0;
    }
L_089DF2A0:
    aot_gpr[4] = (49152u << 16u);
    aot_gpr[31] = (0x089DF2ACu);
    aot_gpr[17] = (49152u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 118u, 0x0898F7CCu>(ctx, &aot_mem) && ctx.pc == 0x089DF2ACu) goto L_089DF2AC;
    return;
L_089DF2AC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DF2C8u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DF2C8u) goto L_089DF2C8;
    return;
L_089DF2C8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DF2DCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DF2DCu) goto L_089DF2DC;
    return;
L_089DF2DC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DF300u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1024));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DF300u) goto L_089DF300;
    return;
L_089DF300:
    aot_gpr[31] = (0x089DF308u);
    aot_gpr[4] = (49152u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 66u, 0x089D9490u>(ctx, &aot_mem) && ctx.pc == 0x089DF308u) goto L_089DF308;
    return;
L_089DF308:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089DF30C;
L_089DF30C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x089DF320u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(260));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089DF320u) goto L_089DF320;
    return;
L_089DF320:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(260)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    goto L_089DF070;
L_089DF338:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    goto L_089DF348;
L_089DF344:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_089DF348;
L_089DF348:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[31] = (0x089DF354u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089DFBD0;
L_089DF354:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089DF344;
      }
      goto L_089DF368;
    }
L_089DF368:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    (void)rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 294u, 0x089DEFB8u>(ctx, &aot_mem); return;
L_089DF370:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(36));
    goto L_089DF380;
L_089DF37C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    goto L_089DF380;
L_089DF380:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[31] = (0x089DF38Cu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089DF984;
L_089DF38C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(304));
      if (branch_taken) {
          goto L_089DF37C;
      }
      goto L_089DF3A0;
    }
L_089DF3A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(116)));
    (void)rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 298u, 0x089DEFF0u>(ctx, &aot_mem); return;
L_089DF3A8:
    aot_gpr[6] = (2206u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26384));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(68));
    aot_gpr[31] = (0x089DF3C0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0481_entry, 481u, 18u, 0x089E50FCu>(ctx, &aot_mem) && ctx.pc == 0x089DF3C0u) goto L_089DF3C0;
    return;
L_089DF3C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DF064;
      }
      goto L_089DF3C8;
    }
L_089DF3C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(256)));
    aot_gpr[31] = (0x089DF3D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 109u, 0x089E7594u>(ctx, &aot_mem) && ctx.pc == 0x089DF3D4u) goto L_089DF3D4;
    return;
L_089DF3D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DF284;
      }
      goto L_089DF3DC;
    }
L_089DF3DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089DF068;
L_089DF3E4:
    aot_gpr[4] = (16384u << 16u);
    aot_gpr[31] = (0x089DF3F0u);
    aot_gpr[16] = (16384u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 118u, 0x0898F7CCu>(ctx, &aot_mem) && ctx.pc == 0x089DF3F0u) goto L_089DF3F0;
    return;
L_089DF3F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089DF408u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DF408u) goto L_089DF408;
    return;
L_089DF408:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DF424u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DF424u) goto L_089DF424;
    return;
L_089DF424:
    aot_gpr[31] = (0x089DF42Cu);
    aot_gpr[4] = (16384u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 66u, 0x089D9490u>(ctx, &aot_mem) && ctx.pc == 0x089DF42Cu) goto L_089DF42C;
    return;
L_089DF42C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089DF30C;
L_089DF434:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089DF30C;
L_089DF43C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DF460;
      }
      goto L_089DF444;
    }
L_089DF444:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089DF45C;
      }
      goto L_089DF44C;
    }
L_089DF44C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF45C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089DF460;
L_089DF460:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF468:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DF4C8;
      }
      goto L_089DF470;
    }
L_089DF470:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_089DF4C8;
      }
      goto L_089DF4A0;
    }
L_089DF4A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DF4B8;
      }
      goto L_089DF4B0;
    }
L_089DF4B0:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 279u, 0x089EAF14u>(ctx, &aot_mem); return;
L_089DF4B8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF4C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF4D0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DF4F0;
      }
      goto L_089DF4D8;
    }
L_089DF4D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DF4F0;
      }
      goto L_089DF4E8;
    }
L_089DF4E8:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 13u, 0x089EB0D4u>(ctx, &aot_mem); return;
L_089DF4F0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF4F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[3] = (0u | 54002u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089DF558;
      }
      goto L_089DF51C;
    }
L_089DF51C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089DF558;
      }
      goto L_089DF538;
    }
L_089DF538:
    aot_gpr[31] = (0x089DF540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 112u, 0x089E75ACu>(ctx, &aot_mem) && ctx.pc == 0x089DF540u) goto L_089DF540;
    return;
L_089DF540:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089DF574;
      }
      goto L_089DF558;
    }
L_089DF558:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF574:
    aot_gpr[31] = (0x089DF57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0472_entry, 472u, 32u, 0x089DC140u>(ctx, &aot_mem) && ctx.pc == 0x089DF57Cu) goto L_089DF57C;
    return;
L_089DF57C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DF558;
      }
      goto L_089DF584;
    }
L_089DF584:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089DF5B0;
      }
      goto L_089DF590;
    }
L_089DF590:
    aot_gpr[3] = (0u | 55005u);
    goto L_089DF594;
L_089DF594:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF5B0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089DF5C4;
      }
      goto L_089DF5BC;
    }
L_089DF5BC:
    aot_gpr[3] = (0u + 0u);
    goto L_089DF558;
L_089DF5C4:
    aot_gpr[31] = (0x089DF5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF5CCu) goto L_089DF5CC;
    return;
L_089DF5CC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_089DF558;
    }
    goto L_089DF5D4;
L_089DF5D4:
    aot_gpr[3] = (0u | 55005u);
    goto L_089DF594;
L_089DF5DC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u | 54002u);
      if (branch_taken) {
          goto L_089DF5F8;
      }
      goto L_089DF5E4;
    }
L_089DF5E4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DF5F8;
      }
      goto L_089DF5EC;
    }
L_089DF5EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DF5F8;
L_089DF5F8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF600:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089DF618u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DF618u) goto L_089DF618;
    return;
L_089DF618:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] & 63488u);
    aot_gpr[4] = (aot_gpr[3] & 16384u);
    aot_gpr[3] = (aot_gpr[3] & 8192u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089DF63C;
      }
      goto L_089DF634;
    }
L_089DF634:
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
        goto L_089DF644;
    }
    goto L_089DF63C;
L_089DF63C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_089DF644;
L_089DF644:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF654:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089DF668u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DF668u) goto L_089DF668;
    return;
L_089DF668:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = ((aot_gpr[3] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF684:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[16] & 1023u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[31] = (0x089DF6A8u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    goto L_089DF654;
L_089DF6A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[16] = (aot_gpr[16] | aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DF6C0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF6C0u) goto L_089DF6C0;
    return;
L_089DF6C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF6D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089DF6E8u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DF6E8u) goto L_089DF6E8;
    return;
L_089DF6E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] & 2047u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF704:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089DF720u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DF720u) goto L_089DF720;
    return;
L_089DF720:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[3] & 63488u);
    aot_gpr[6] = (aot_gpr[3] & 16384u);
    aot_gpr[3] = (aot_gpr[3] & 8192u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089DF748;
      }
      goto L_089DF740;
    }
L_089DF740:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089DF754;
      }
      goto L_089DF748;
    }
L_089DF748:
    aot_gpr[31] = (0x089DF750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DF750u) goto L_089DF750;
    return;
L_089DF750:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089DF754;
L_089DF754:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF764:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089DF78Cu);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DF78Cu) goto L_089DF78C;
    return;
L_089DF78C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (aot_gpr[2] & 63488u);
    aot_gpr[6] = (aot_gpr[2] & 16384u);
    aot_gpr[2] = (aot_gpr[2] & 8192u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089DF7B8;
      }
      goto L_089DF7B0;
    }
L_089DF7B0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089DF7C0;
      }
      goto L_089DF7B8;
    }
L_089DF7B8:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[17]);
    goto L_089DF7C0;
L_089DF7C0:
    aot_gpr[31] = (0x089DF7C8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DF7C8u) goto L_089DF7C8;
    return;
L_089DF7C8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] & 2047u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF7EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089DF7FCu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DF7FCu) goto L_089DF7FC;
    return;
L_089DF7FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] & 1023u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF810:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[16] = ((aot_gpr[16] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[31] = (0x089DF834u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DF834u) goto L_089DF834;
    return;
L_089DF834:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[16] = (aot_gpr[16] | aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DF84Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF84Cu) goto L_089DF84C;
    return;
L_089DF84C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF860:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[16] = ((aot_gpr[16] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[31] = (0x089DF884u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DF884u) goto L_089DF884;
    return;
L_089DF884:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[2] & 2047u);
    aot_gpr[16] = (aot_gpr[16] | aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DF8A0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF8A0u) goto L_089DF8A0;
    return;
L_089DF8A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF8B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[16] & 2047u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[31] = (0x089DF8D8u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DF8D8u) goto L_089DF8D8;
    return;
L_089DF8D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[2] & 63488u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089DF8F4u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF8F4u) goto L_089DF8F4;
    return;
L_089DF8F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF908:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    (void)rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem); return;
L_089DF914:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089DF92Cu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    goto L_089DF654;
L_089DF92C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[2] & 16384u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089DF958;
      }
      goto L_089DF944;
    }
L_089DF944:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF958:
    aot_gpr[31] = (0x089DF960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DF960u) goto L_089DF960;
    return;
L_089DF960:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (aot_gpr[3] << 1u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF984:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(292), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(288), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(292), aot_gpr[5]);
        goto L_089DF99C;
    }
    goto L_089DF99C;
L_089DF99C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF9A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == aot_gpr[5]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(288)));
        goto L_089DF9DC;
    }
    goto L_089DF9B0;
L_089DF9B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(288)));
      if (branch_taken) {
          goto L_089DF9CC;
      }
      goto L_089DF9BC;
    }
L_089DF9BC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(288), aot_gpr[5]);
      if (branch_taken) {
          goto L_089DF9D4;
      }
      goto L_089DF9C4;
    }
L_089DF9C4:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(292), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF9CC:
    if (aot_gpr[5] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(292), 0u);
        goto L_089DF9D4;
    }
    goto L_089DF9D4;
L_089DF9D4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF9DC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089DF9D4;
      }
      goto L_089DF9E4;
    }
L_089DF9E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(292), 0u);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF9F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(300), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(300), aot_gpr[5]);
        goto L_089DFA08;
    }
    goto L_089DFA08;
L_089DFA08:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFA10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == aot_gpr[5]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(296)));
        goto L_089DFA48;
    }
    goto L_089DFA1C;
L_089DFA1C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_089DFA38;
      }
      goto L_089DFA28;
    }
L_089DFA28:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(296), aot_gpr[5]);
      if (branch_taken) {
          goto L_089DFA40;
      }
      goto L_089DFA30;
    }
L_089DFA30:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(300), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFA38:
    if (aot_gpr[5] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(300), 0u);
        goto L_089DFA40;
    }
    goto L_089DFA40;
L_089DFA40:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFA48:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089DFA40;
      }
      goto L_089DFA50;
    }
L_089DFA50:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(300), 0u);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFA5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089DFAF0;
      }
      goto L_089DFA84;
    }
L_089DFA84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_089DFAC0;
      }
      goto L_089DFA90;
    }
L_089DFA90:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    goto L_089DFA94;
L_089DFA94:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089DFAA4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 173u, 0x08992B24u>(ctx, &aot_mem) && ctx.pc == 0x089DFAA4u) goto L_089DFAA4;
    return;
L_089DFAA4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
        goto L_089DFB1C;
    }
    goto L_089DFAB4;
L_089DFAB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_089DFA94;
      }
      goto L_089DFAC0;
    }
L_089DFAC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(292), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(288), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), aot_gpr[17]);
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
L_089DFAF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(288), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(292), 0u);
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
L_089DFB1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(288), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DFB4C;
      }
      goto L_089DFB28;
    }
L_089DFB28:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(292), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(288), aot_gpr[17]);
    goto L_089DFB30;
L_089DFB30:
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
L_089DFB4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(288), aot_gpr[17]);
    goto L_089DFB30;
L_089DFB58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[6];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089DFB98;
      }
      goto L_089DFB64;
    }
L_089DFB64:
    if (aot_gpr[6] == aot_gpr[2]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(292)));
        goto L_089DFBB4;
    }
    goto L_089DFB6C;
L_089DFB6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(288)));
      if (branch_taken) {
          goto L_089DFB88;
      }
      goto L_089DFB78;
    }
L_089DFB78:
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(288), aot_gpr[6]);
      if (branch_taken) {
          goto L_089DFB90;
      }
      goto L_089DFB80;
    }
L_089DFB80:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(292), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFB88:
    if (aot_gpr[6] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(292), 0u);
        goto L_089DFB90;
    }
    goto L_089DFB90;
L_089DFB90:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFB98:
    if (aot_gpr[6] == aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
        goto L_089DFBC4;
    }
    goto L_089DFBA0;
L_089DFBA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089DFB90;
      }
      goto L_089DFBAC;
    }
L_089DFBAC:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(292), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFBB4:
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089DFB90;
      }
      goto L_089DFBBC;
    }
L_089DFBBC:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(288), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFBC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFBD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(40), aot_gpr[5]);
        goto L_089DFBE8;
    }
    goto L_089DFBE8;
L_089DFBE8:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFBF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == aot_gpr[5]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
        goto L_089DFC28;
    }
    goto L_089DFBFC;
L_089DFBFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089DFC18;
      }
      goto L_089DFC08;
    }
L_089DFC08:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[5]);
      if (branch_taken) {
          goto L_089DFC20;
      }
      goto L_089DFC10;
    }
L_089DFC10:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFC18:
    if (aot_gpr[5] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), 0u);
        goto L_089DFC20;
    }
    goto L_089DFC20;
L_089DFC20:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFC28:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089DFC20;
      }
      goto L_089DFC30;
    }
L_089DFC30:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), 0u);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFC3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(100));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089DFC68u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089DF6D4;
L_089DFC68:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DFC74u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    goto L_089DF600;
L_089DFC74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-4));
    if (aot_gpr[17] != 0u) aot_gpr[6] = (aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089DFC9C;
      }
      goto L_089DFC98;
    }
L_089DFC98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089DFC9C;
L_089DFC9C:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), 0u);
        goto L_089DFCD0;
    }
    goto L_089DFCA8;
L_089DFCA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089DFCB4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089DFCB4u) goto L_089DFCB4;
    return;
L_089DFCB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFCD0:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFCEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(100));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089DFD18u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_089DF6D4;
L_089DFD18:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DFD24u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    goto L_089DF600;
L_089DFD24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    if (aot_gpr[18] != 0u) aot_gpr[6] = (aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089DFD4C;
      }
      goto L_089DFD48;
    }
L_089DFD48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089DFD4C;
L_089DFD4C:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089DFD68;
      }
      goto L_089DFD58;
    }
L_089DFD58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089DFD64u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089DFD64u) goto L_089DFD64;
    return;
L_089DFD64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089DFD68;
L_089DFD68:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFD80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089DFDB4;
      }
      goto L_089DFD98;
    }
L_089DFD98:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DFDACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DFDACu) goto L_089DFDAC;
    return;
L_089DFDAC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DFDF0;
      }
      goto L_089DFDB4;
    }
L_089DFDB4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089DFDD4;
      }
      goto L_089DFDC0;
    }
L_089DFDC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFDD4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DFDE8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DFDE8u) goto L_089DFDE8;
    return;
L_089DFDE8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DFDC0;
      }
      goto L_089DFDF0;
    }
L_089DFDF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFE04:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFE30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    aot_gpr[5] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem); return;
L_089DFE3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089DFE50u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DFE50u) goto L_089DFE50;
    return;
L_089DFE50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] & 65534u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFE6C:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(110)));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_089DF684;
L_089DFE88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr[31] = (0x089DFECCu);
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    goto L_089DF860;
L_089DFECC:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089DFED8u);
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    goto L_089DF8B4;
L_089DFED8:
    aot_gpr[2] = (aot_gpr[16] & 8192u);
    aot_gpr[16] = (aot_gpr[16] & 16384u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089DFF34;
      }
      goto L_089DFEE8;
    }
L_089DFEE8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DFF18;
      }
      goto L_089DFEF0;
    }
L_089DFEF0:
    aot_gpr[31] = (0x089DFEF8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(118)));
    goto L_089DF908;
L_089DFEF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(118)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089DFF14;
      }
      goto L_089DFF0C;
    }
L_089DFF0C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089DFF14;
L_089DFF14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089DFF18;
L_089DFF18:
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
L_089DFF34:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089DFF60;
      }
      goto L_089DFF3C;
    }
L_089DFF3C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    goto L_089DF908;
L_089DFF60:
    aot_gpr[31] = (0x089DFF68u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(146)));
    goto L_089DF908;
L_089DFF68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(146)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(146), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089DFF14;
      }
      goto L_089DFF7C;
    }
L_089DFF7C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(146), static_cast<std::uint16_t>(aot_gpr[2]));
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
L_089DFFA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089DFFBCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x089DFFBCu) goto L_089DFFBC;
    return;
L_089DFFBC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFFCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089DFFE0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089DFFE0u) goto L_089DFFE0;
    return;
L_089DFFE0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFFEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    ctx.pc = 0x089E0000u; return;
}

void recomp_unit_0475(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0475_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_475(Runtime &runtime) {
    runtime.register_generated_unit(475u, 0x089DF000u, 4096u, &recomp_unit_0475, &recomp_unit_0475_entry);
    runtime.register_function(0x089DF000u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF008u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF02Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF038u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF040u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF044u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF04Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF05Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF064u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF068u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF070u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF098u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF0B0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF0B8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF0C8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF0D0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF0E0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF0E8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF0F8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF100u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF110u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF118u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF120u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF130u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF164u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF198u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF1A4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF1A8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF1B0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF1B4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF1DCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF1ECu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF1F4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF1FCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF204u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF20Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF218u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF224u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF22Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF238u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF248u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF250u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF258u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF260u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF268u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF270u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF284u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF294u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF2A0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF2ACu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF2C8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF2DCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF300u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF308u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF30Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF320u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF338u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF344u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF348u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF354u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF368u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF370u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF37Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF380u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF38Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF3A0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF3A8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF3C0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF3C8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF3D4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF3DCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF3E4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF3F0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF408u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF424u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF42Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF434u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF43Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF444u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF44Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF45Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF460u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF468u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF470u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF4A0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF4B0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF4B8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF4C8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF4D0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF4D8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF4E8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF4F0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF4F8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF51Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF538u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF540u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF558u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF574u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF57Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF584u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF590u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF594u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF5B0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF5BCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF5C4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF5CCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF5D4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF5DCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF5E4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF5ECu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF5F8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF600u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF618u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF634u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF63Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF644u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF654u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF668u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF684u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF6A8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF6C0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF6D4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF6E8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF704u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF720u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF740u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF748u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF750u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF754u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF764u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF78Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF7B0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF7B8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF7C0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF7C8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF7ECu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF7FCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF810u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF834u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF84Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF860u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF884u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF8A0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF8B4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF8D8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF8F4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF908u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF914u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF92Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF944u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF958u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF960u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF984u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF99Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF9A4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF9B0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF9BCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF9C4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF9CCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF9D4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF9DCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF9E4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DF9F0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA08u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA10u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA1Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA28u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA30u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA38u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA40u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA48u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA50u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA5Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA84u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA90u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFA94u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFAA4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFAB4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFAC0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFAF0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFB1Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFB28u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFB30u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFB4Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFB58u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFB64u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFB6Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFB78u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFB80u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFB88u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFB90u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFB98u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFBA0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFBACu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFBB4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFBBCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFBC4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFBD0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFBE8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFBF0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFBFCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFC08u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFC10u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFC18u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFC20u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFC28u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFC30u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFC3Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFC68u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFC74u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFC98u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFC9Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFCA8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFCB4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFCD0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFCECu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFD18u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFD24u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFD48u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFD4Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFD58u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFD64u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFD68u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFD80u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFD98u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFDACu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFDB4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFDC0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFDD4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFDE8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFDF0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFE04u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFE30u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFE3Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFE50u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFE6Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFE88u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFECCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFED8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFEE8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFEF0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFEF8u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFF0Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFF14u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFF18u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFF34u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFF3Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFF60u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFF68u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFF7Cu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFFA4u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFFBCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFFCCu, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFFE0u, &recomp_unit_0475, "recomp_unit_0475");
    runtime.register_function(0x089DFFECu, &recomp_unit_0475, "recomp_unit_0475");
}
} // namespace psprecomp
