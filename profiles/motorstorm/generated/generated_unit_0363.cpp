#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0363[1023] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0,
    13, 0, 14, 0, 15, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0,
    0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 38, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 48, 0, 49, 0, 50,
    0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0,
    59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 64, 0, 0, 65, 0, 66, 0, 67, 68, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 94, 0, 0,
    95, 0, 0, 96, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    105, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 116, 0, 117, 0, 118, 119, 0, 0, 0, 120,
    0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 138, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0,
    0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 166, 0, 0, 167, 0, 168, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 174, 0, 0, 0,
    175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    184, 0, 185, 0, 186, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 194, 0, 0, 195, 0, 196, 197, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201, 202, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209,
    0, 0, 210, 0, 0, 211, 212, 0, 0, 213, 214, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 220, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 229, 0, 0,
    230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240,
    0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 250, 0, 251, 0, 252,
    0, 253, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272,
};
void recomp_unit_0363_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0896F000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0363[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0896F000;
    case 2u: goto L_0896F008;
    case 3u: goto L_0896F010;
    case 4u: goto L_0896F018;
    case 5u: goto L_0896F020;
    case 6u: goto L_0896F028;
    case 7u: goto L_0896F030;
    case 8u: goto L_0896F040;
    case 9u: goto L_0896F060;
    case 10u: goto L_0896F068;
    case 11u: goto L_0896F070;
    case 12u: goto L_0896F078;
    case 13u: goto L_0896F080;
    case 14u: goto L_0896F088;
    case 15u: goto L_0896F090;
    case 16u: goto L_0896F098;
    case 17u: goto L_0896F0A4;
    case 18u: goto L_0896F0AC;
    case 19u: goto L_0896F0B4;
    case 20u: goto L_0896F0BC;
    case 21u: goto L_0896F0C4;
    case 22u: goto L_0896F0CC;
    case 23u: goto L_0896F0D4;
    case 24u: goto L_0896F0DC;
    case 25u: goto L_0896F0E4;
    case 26u: goto L_0896F0EC;
    case 27u: goto L_0896F0F8;
    case 28u: goto L_0896F110;
    case 29u: goto L_0896F118;
    case 30u: goto L_0896F120;
    case 31u: goto L_0896F12C;
    case 32u: goto L_0896F134;
    case 33u: goto L_0896F140;
    case 34u: goto L_0896F148;
    case 35u: goto L_0896F150;
    case 36u: goto L_0896F158;
    case 37u: goto L_0896F160;
    case 38u: goto L_0896F164;
    case 39u: goto L_0896F174;
    case 40u: goto L_0896F194;
    case 41u: goto L_0896F19C;
    case 42u: goto L_0896F1A8;
    case 43u: goto L_0896F1B4;
    case 44u: goto L_0896F1BC;
    case 45u: goto L_0896F1CC;
    case 46u: goto L_0896F1D4;
    case 47u: goto L_0896F1DC;
    case 48u: goto L_0896F1EC;
    case 49u: goto L_0896F1F4;
    case 50u: goto L_0896F1FC;
    case 51u: goto L_0896F204;
    case 52u: goto L_0896F20C;
    case 53u: goto L_0896F21C;
    case 54u: goto L_0896F238;
    case 55u: goto L_0896F248;
    case 56u: goto L_0896F25C;
    case 57u: goto L_0896F264;
    case 58u: goto L_0896F278;
    case 59u: goto L_0896F280;
    case 60u: goto L_0896F290;
    case 61u: goto L_0896F2A8;
    case 62u: goto L_0896F2B0;
    case 63u: goto L_0896F2B8;
    case 64u: goto L_0896F2BC;
    case 65u: goto L_0896F2C8;
    case 66u: goto L_0896F2D0;
    case 67u: goto L_0896F2D8;
    case 68u: goto L_0896F2DC;
    case 69u: goto L_0896F2F0;
    case 70u: goto L_0896F310;
    case 71u: goto L_0896F324;
    case 72u: goto L_0896F32C;
    case 73u: goto L_0896F338;
    case 74u: goto L_0896F344;
    case 75u: goto L_0896F34C;
    case 76u: goto L_0896F354;
    case 77u: goto L_0896F35C;
    case 78u: goto L_0896F364;
    case 79u: goto L_0896F37C;
    case 80u: goto L_0896F3A4;
    case 81u: goto L_0896F3BC;
    case 82u: goto L_0896F3C4;
    case 83u: goto L_0896F3DC;
    case 84u: goto L_0896F3F0;
    case 85u: goto L_0896F3F8;
    case 86u: goto L_0896F430;
    case 87u: goto L_0896F438;
    case 88u: goto L_0896F440;
    case 89u: goto L_0896F448;
    case 90u: goto L_0896F450;
    case 91u: goto L_0896F458;
    case 92u: goto L_0896F464;
    case 93u: goto L_0896F46C;
    case 94u: goto L_0896F474;
    case 95u: goto L_0896F480;
    case 96u: goto L_0896F48C;
    case 97u: goto L_0896F490;
    case 98u: goto L_0896F498;
    case 99u: goto L_0896F4A0;
    case 100u: goto L_0896F4A8;
    case 101u: goto L_0896F4B0;
    case 102u: goto L_0896F4B8;
    case 103u: goto L_0896F4C8;
    case 104u: goto L_0896F4F8;
    case 105u: goto L_0896F500;
    case 106u: goto L_0896F50C;
    case 107u: goto L_0896F524;
    case 108u: goto L_0896F530;
    case 109u: goto L_0896F548;
    case 110u: goto L_0896F580;
    case 111u: goto L_0896F58C;
    case 112u: goto L_0896F5A0;
    case 113u: goto L_0896F5B8;
    case 114u: goto L_0896F5C4;
    case 115u: goto L_0896F5D0;
    case 116u: goto L_0896F5D8;
    case 117u: goto L_0896F5E0;
    case 118u: goto L_0896F5E8;
    case 119u: goto L_0896F5EC;
    case 120u: goto L_0896F5FC;
    case 121u: goto L_0896F614;
    case 122u: goto L_0896F620;
    case 123u: goto L_0896F628;
    case 124u: goto L_0896F630;
    case 125u: goto L_0896F638;
    case 126u: goto L_0896F640;
    case 127u: goto L_0896F648;
    case 128u: goto L_0896F64C;
    case 129u: goto L_0896F674;
    case 130u: goto L_0896F694;
    case 131u: goto L_0896F6A0;
    case 132u: goto L_0896F6B0;
    case 133u: goto L_0896F6BC;
    case 134u: goto L_0896F6C4;
    case 135u: goto L_0896F6CC;
    case 136u: goto L_0896F6D4;
    case 137u: goto L_0896F6DC;
    case 138u: goto L_0896F6E0;
    case 139u: goto L_0896F6F8;
    case 140u: goto L_0896F728;
    case 141u: goto L_0896F730;
    case 142u: goto L_0896F738;
    case 143u: goto L_0896F744;
    case 144u: goto L_0896F754;
    case 145u: goto L_0896F75C;
    case 146u: goto L_0896F764;
    case 147u: goto L_0896F774;
    case 148u: goto L_0896F784;
    case 149u: goto L_0896F794;
    case 150u: goto L_0896F7A8;
    case 151u: goto L_0896F7CC;
    case 152u: goto L_0896F8A8;
    case 153u: goto L_0896F8B8;
    case 154u: goto L_0896F8DC;
    case 155u: goto L_0896F904;
    case 156u: goto L_0896F934;
    case 157u: goto L_0896F954;
    case 158u: goto L_0896F96C;
    case 159u: goto L_0896F974;
    case 160u: goto L_0896F97C;
    case 161u: goto L_0896F990;
    case 162u: goto L_0896F9A4;
    case 163u: goto L_0896F9B4;
    case 164u: goto L_0896F9D0;
    case 165u: goto L_0896F9F8;
    case 166u: goto L_0896FA08;
    case 167u: goto L_0896FA14;
    case 168u: goto L_0896FA1C;
    case 169u: goto L_0896FA20;
    case 170u: goto L_0896FA28;
    case 171u: goto L_0896FA48;
    case 172u: goto L_0896FA64;
    case 173u: goto L_0896FA6C;
    case 174u: goto L_0896FA70;
    case 175u: goto L_0896FA80;
    case 176u: goto L_0896FA94;
    case 177u: goto L_0896FAA0;
    case 178u: goto L_0896FAA8;
    case 179u: goto L_0896FAB4;
    case 180u: goto L_0896FABC;
    case 181u: goto L_0896FAC4;
    case 182u: goto L_0896FAD4;
    case 183u: goto L_0896FAE8;
    case 184u: goto L_0896FB00;
    case 185u: goto L_0896FB08;
    case 186u: goto L_0896FB10;
    case 187u: goto L_0896FB1C;
    case 188u: goto L_0896FB28;
    case 189u: goto L_0896FB30;
    case 190u: goto L_0896FB48;
    case 191u: goto L_0896FB50;
    case 192u: goto L_0896FB5C;
    case 193u: goto L_0896FB80;
    case 194u: goto L_0896FB8C;
    case 195u: goto L_0896FB98;
    case 196u: goto L_0896FBA0;
    case 197u: goto L_0896FBA4;
    case 198u: goto L_0896FBA8;
    case 199u: goto L_0896FBC4;
    case 200u: goto L_0896FBE0;
    case 201u: goto L_0896FBE8;
    case 202u: goto L_0896FBEC;
    case 203u: goto L_0896FBFC;
    case 204u: goto L_0896FC14;
    case 205u: goto L_0896FC1C;
    case 206u: goto L_0896FC24;
    case 207u: goto L_0896FC28;
    case 208u: goto L_0896FC34;
    case 209u: goto L_0896FC7C;
    case 210u: goto L_0896FC88;
    case 211u: goto L_0896FC94;
    case 212u: goto L_0896FC98;
    case 213u: goto L_0896FCA4;
    case 214u: goto L_0896FCA8;
    case 215u: goto L_0896FCB0;
    case 216u: goto L_0896FCBC;
    case 217u: goto L_0896FCDC;
    case 218u: goto L_0896FCE8;
    case 219u: goto L_0896FCF0;
    case 220u: goto L_0896FCF8;
    case 221u: goto L_0896FD00;
    case 222u: goto L_0896FD2C;
    case 223u: goto L_0896FD3C;
    case 224u: goto L_0896FD48;
    case 225u: goto L_0896FD50;
    case 226u: goto L_0896FD5C;
    case 227u: goto L_0896FD64;
    case 228u: goto L_0896FD6C;
    case 229u: goto L_0896FD74;
    case 230u: goto L_0896FD80;
    case 231u: goto L_0896FD90;
    case 232u: goto L_0896FD9C;
    case 233u: goto L_0896FDB0;
    case 234u: goto L_0896FDC8;
    case 235u: goto L_0896FDD0;
    case 236u: goto L_0896FDDC;
    case 237u: goto L_0896FDE4;
    case 238u: goto L_0896FDEC;
    case 239u: goto L_0896FDF4;
    case 240u: goto L_0896FDFC;
    case 241u: goto L_0896FE04;
    case 242u: goto L_0896FE10;
    case 243u: goto L_0896FE20;
    case 244u: goto L_0896FE2C;
    case 245u: goto L_0896FE3C;
    case 246u: goto L_0896FE48;
    case 247u: goto L_0896FE50;
    case 248u: goto L_0896FE58;
    case 249u: goto L_0896FE64;
    case 250u: goto L_0896FE6C;
    case 251u: goto L_0896FE74;
    case 252u: goto L_0896FE7C;
    case 253u: goto L_0896FE84;
    case 254u: goto L_0896FE8C;
    case 255u: goto L_0896FE98;
    case 256u: goto L_0896FEA8;
    case 257u: goto L_0896FEB4;
    case 258u: goto L_0896FEC4;
    case 259u: goto L_0896FED0;
    case 260u: goto L_0896FF08;
    case 261u: goto L_0896FF18;
    case 262u: goto L_0896FF28;
    case 263u: goto L_0896FF30;
    case 264u: goto L_0896FF3C;
    case 265u: goto L_0896FF48;
    case 266u: goto L_0896FF94;
    case 267u: goto L_0896FFA4;
    case 268u: goto L_0896FFAC;
    case 269u: goto L_0896FFBC;
    case 270u: goto L_0896FFD0;
    case 271u: goto L_0896FFE0;
    case 272u: goto L_0896FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0896F000:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_0896F028;
      }
      goto L_0896F008;
    }
L_0896F008:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_0896F028;
      }
      goto L_0896F010;
    }
L_0896F010:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896F028;
      }
      goto L_0896F018;
    }
L_0896F018:
    aot_gpr[31] = (0x0896F020u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 245u, 0x0896EE3Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F020u) goto L_0896F020;
    return;
L_0896F020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F030;
      }
      goto L_0896F028;
    }
L_0896F028:
    aot_gpr[31] = (0x0896F030u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 253u, 0x0896EEF4u>(ctx, &aot_mem) && ctx.pc == 0x0896F030u) goto L_0896F030;
    return;
L_0896F030:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F040:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(17792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[4] = (4096u << 16u);
        goto L_0896F098;
    }
    goto L_0896F060;
L_0896F060:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896F0EC;
      }
      goto L_0896F068;
    }
L_0896F068:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896F0AC;
      }
      goto L_0896F070;
    }
L_0896F070:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896F0BC;
      }
      goto L_0896F078;
    }
L_0896F078:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0896F0CC;
      }
      goto L_0896F080;
    }
L_0896F080:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F0DC;
      }
      goto L_0896F088;
    }
L_0896F088:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0896F0DC;
      }
      goto L_0896F090;
    }
L_0896F090:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896F0EC;
      }
      goto L_0896F098;
    }
L_0896F098:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896F0EC;
      }
      goto L_0896F0A4;
    }
L_0896F0A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F0EC;
      }
      goto L_0896F0AC;
    }
L_0896F0AC:
    aot_gpr[31] = (0x0896F0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 206u, 0x0896EC40u>(ctx, &aot_mem) && ctx.pc == 0x0896F0B4u) goto L_0896F0B4;
    return;
L_0896F0B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F0EC;
      }
      goto L_0896F0BC;
    }
L_0896F0BC:
    aot_gpr[31] = (0x0896F0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 210u, 0x0896EC7Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F0C4u) goto L_0896F0C4;
    return;
L_0896F0C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F0EC;
      }
      goto L_0896F0CC;
    }
L_0896F0CC:
    aot_gpr[31] = (0x0896F0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 218u, 0x0896ED04u>(ctx, &aot_mem) && ctx.pc == 0x0896F0D4u) goto L_0896F0D4;
    return;
L_0896F0D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F0EC;
      }
      goto L_0896F0DC;
    }
L_0896F0DC:
    aot_gpr[31] = (0x0896F0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 273u, 0x0896EFE4u>(ctx, &aot_mem) && ctx.pc == 0x0896F0E4u) goto L_0896F0E4;
    return;
L_0896F0E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F0EC;
      }
      goto L_0896F0EC;
    }
L_0896F0EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F0F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896F134;
      }
      goto L_0896F110;
    }
L_0896F110:
    aot_gpr[31] = (0x0896F118u);
    aot_gpr[4] = (0u | 1024u);
    ctx.pc = 0x08A5ABE4u;
    return;
L_0896F118:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F12C;
      }
      goto L_0896F120;
    }
L_0896F120:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0896F134;
      }
      goto L_0896F12C;
    }
L_0896F12C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_0896F164;
      }
      goto L_0896F134;
    }
L_0896F134:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F158;
      }
      goto L_0896F140;
    }
L_0896F140:
    aot_gpr[31] = (0x0896F148u);
    aot_gpr[4] = (0u | 1025u);
    ctx.pc = 0x08A5ABE4u;
    return;
L_0896F148:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F160;
      }
      goto L_0896F150;
    }
L_0896F150:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0896F158;
L_0896F158:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F164;
      }
      goto L_0896F160;
    }
L_0896F160:
    aot_gpr[2] = (0u | 11u);
    goto L_0896F164;
L_0896F164:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F174:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896F194u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(17740), 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_0896F194:
    aot_gpr[31] = (0x0896F19Cu);
    // nop
    ctx.pc = 0x08A5AD44u;
    return;
L_0896F19C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[5] = (32853u << 16u);
      if (branch_taken) {
          goto L_0896F1B4;
      }
      goto L_0896F1A8;
    }
L_0896F1A8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896F204;
      }
      goto L_0896F1B4;
    }
L_0896F1B4:
    aot_gpr[31] = (0x0896F1BCu);
    // nop
    ctx.pc = 0x08A5B16Cu;
    return;
L_0896F1BC:
    aot_gpr[4] = (0u | 16384u);
    aot_gpr[5] = (0u | 15360u);
    aot_gpr[31] = (0x0896F1CCu);
    aot_gpr[6] = (0u | 50u);
    ctx.pc = 0x08A5AD24u;
    return;
L_0896F1CC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F1FC;
      }
      goto L_0896F1D4;
    }
L_0896F1D4:
    aot_gpr[31] = (0x0896F1DCu);
    // nop
    ctx.pc = 0x08A5B16Cu;
    return;
L_0896F1DC:
    aot_gpr[4] = (0u | 16384u);
    aot_gpr[5] = (0u | 16384u);
    aot_gpr[31] = (0x0896F1ECu);
    aot_gpr[6] = (0u | 50u);
    ctx.pc = 0x08A5ACB4u;
    return;
L_0896F1EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F20C;
      }
      goto L_0896F1F4;
    }
L_0896F1F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_0896F238;
      }
      goto L_0896F1FC;
    }
L_0896F1FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_0896F238;
      }
      goto L_0896F204;
    }
L_0896F204:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_0896F238;
      }
      goto L_0896F20C;
    }
L_0896F20C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0896F21Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 182u, 0x0896EA90u>(ctx, &aot_mem) && ctx.pc == 0x0896F21Cu) goto L_0896F21C;
    return;
L_0896F21C:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(17736), 0u);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(17792), 0u);
    aot_gpr[2] = (0u | 0u);
    goto L_0896F238;
L_0896F238:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F248:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896F25Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0896F0F8;
L_0896F25C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F278;
      }
      goto L_0896F264;
    }
L_0896F264:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(17792), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896F280;
      }
      goto L_0896F278;
    }
L_0896F278:
    aot_gpr[31] = (0x0896F280u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0896F174;
L_0896F280:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896F2BC;
      }
      goto L_0896F2A8;
    }
L_0896F2A8:
    aot_gpr[31] = (0x0896F2B0u);
    aot_gpr[4] = (0u | 1025u);
    ctx.pc = 0x08A5AC64u;
    return;
L_0896F2B0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896F2BC;
      }
      goto L_0896F2B8;
    }
L_0896F2B8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0896F2BC;
L_0896F2BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F2DC;
      }
      goto L_0896F2C8;
    }
L_0896F2C8:
    aot_gpr[31] = (0x0896F2D0u);
    aot_gpr[4] = (0u | 1024u);
    ctx.pc = 0x08A5AC64u;
    return;
L_0896F2D0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896F2DC;
      }
      goto L_0896F2D8;
    }
L_0896F2D8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0896F2DC;
L_0896F2DC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F2F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(-26500)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896F338;
      }
      goto L_0896F310;
    }
L_0896F310:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(17832)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896F338;
      }
      goto L_0896F324;
    }
L_0896F324:
    aot_gpr[31] = (0x0896F32Cu);
    // nop
    ctx.pc = 0x08A5B08Cu;
    return;
L_0896F32C:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(-26500), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0896F338u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF7Cu;
    return;
L_0896F338:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F35C;
      }
      goto L_0896F344;
    }
L_0896F344:
    aot_gpr[31] = (0x0896F34Cu);
    // nop
    ctx.pc = 0x08A5ACACu;
    return;
L_0896F34C:
    aot_gpr[31] = (0x0896F354u);
    // nop
    ctx.pc = 0x08A5AD1Cu;
    return;
L_0896F354:
    aot_gpr[31] = (0x0896F35Cu);
    // nop
    ctx.pc = 0x08A5AD34u;
    return;
L_0896F35C:
    aot_gpr[31] = (0x0896F364u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0896F290;
L_0896F364:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F37C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17796));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896F3A4u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896F3A4u) goto L_0896F3A4;
    return;
L_0896F3A4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F3BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 60u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F3C4:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(17736)));
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F3F0;
      }
      goto L_0896F3DC;
    }
L_0896F3DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(17736), 0u);
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(17732), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (0u | 1u);
    goto L_0896F3F0;
L_0896F3F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F3F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (1u << 16u);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[16] = (aot_gpr[6] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(17740), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(17736)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F4B8;
      }
      goto L_0896F430;
    }
L_0896F430:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896F4A8;
      }
      goto L_0896F438;
    }
L_0896F438:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896F4B8;
      }
      goto L_0896F440;
    }
L_0896F440:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F4B8;
      }
      goto L_0896F448;
    }
L_0896F448:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896F498;
      }
      goto L_0896F450;
    }
L_0896F450:
    aot_gpr[31] = (0x0896F458u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0896F3BC;
L_0896F458:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 60 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F474;
      }
      goto L_0896F464;
    }
L_0896F464:
    aot_gpr[31] = (0x0896F46Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0896F3C4;
L_0896F46C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F490;
      }
      goto L_0896F474;
    }
L_0896F474:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(17740)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F490;
      }
      goto L_0896F480;
    }
L_0896F480:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0896F48Cu);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896F48Cu) goto L_0896F48C;
    return;
L_0896F48C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(17740), 0u);
    goto L_0896F490;
L_0896F490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F4B8;
      }
      goto L_0896F498;
    }
L_0896F498:
    aot_gpr[31] = (0x0896F4A0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0896F3C4;
L_0896F4A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F4B8;
      }
      goto L_0896F4A8;
    }
L_0896F4A8:
    aot_gpr[31] = (0x0896F4B0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0896F3C4;
L_0896F4B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F4B8;
      }
      goto L_0896F4B8;
    }
L_0896F4B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F4C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (1u << 16u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(17736)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[9];
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896F530;
      }
      goto L_0896F4F8;
    }
L_0896F4F8:
    aot_gpr[31] = (0x0896F500u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_0896F3BC;
L_0896F500:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 60 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F530;
      }
      goto L_0896F50C;
    }
L_0896F50C:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[17] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(17728));
    aot_gpr[31] = (0x0896F524u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(17728)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896F524u) goto L_0896F524;
    return;
L_0896F524:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(17728)));
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0896F530;
L_0896F530:
    aot_gpr[2] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F548:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1584));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1544), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1548), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1552), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1556), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1560), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1564), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1568), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1572), aot_gpr[31]);
    aot_gpr[31] = (0x0896F580u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    ctx.pc = 0x08A5AD04u;
    return;
L_0896F580:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896F5D8;
      }
      goto L_0896F58C;
    }
L_0896F58C:
    aot_gpr[20] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896F5A0u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F5A0u) goto L_0896F5A0;
    return;
L_0896F5A0:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896F5B8u);
    aot_gpr[6] = (0u | 1540u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F5B8u) goto L_0896F5B8;
    return;
L_0896F5B8:
    aot_gpr[20] = (0u | 1536u);
    aot_gpr[31] = (0x0896F5C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0896F5C4u) goto L_0896F5C4;
    return;
L_0896F5C4:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(1536) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F5E0;
      }
      goto L_0896F5D0;
    }
L_0896F5D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F5EC;
      }
      goto L_0896F5D8;
    }
L_0896F5D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F64C;
      }
      goto L_0896F5E0;
    }
L_0896F5E0:
    aot_gpr[31] = (0x0896F5E8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0896F5E8u) goto L_0896F5E8;
    return;
L_0896F5E8:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_0896F5EC;
L_0896F5EC:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896F5FCu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896F5FCu) goto L_0896F5FC;
    return;
L_0896F5FC:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1540), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0896F614u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5ACF4u;
    return;
L_0896F614:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896F620u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_0896F620:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F630;
      }
      goto L_0896F628;
    }
L_0896F628:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x0896F630u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896F630u) goto L_0896F630;
    return;
L_0896F630:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0896F640;
      }
      goto L_0896F638;
    }
L_0896F638:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F64C;
      }
      goto L_0896F640;
    }
L_0896F640:
    aot_gpr[31] = (0x0896F648u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 211u, 0x0896EC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F648u) goto L_0896F648;
    return;
L_0896F648:
    aot_gpr[2] = (0u | 1u);
    goto L_0896F64C;
L_0896F64C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1544)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1548)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1552)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1556)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1560)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1564)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1568)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1572)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1584));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F674:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0896F694u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    ctx.pc = 0x08A5AD04u;
    return;
L_0896F694:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896F6CC;
      }
      goto L_0896F6A0;
    }
L_0896F6A0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896F6B0u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5AD0Cu;
    return;
L_0896F6B0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896F6BCu);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_0896F6BC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0896F6D4;
      }
      goto L_0896F6C4;
    }
L_0896F6C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F6E0;
      }
      goto L_0896F6CC;
    }
L_0896F6CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F6E0;
      }
      goto L_0896F6D4;
    }
L_0896F6D4:
    aot_gpr[31] = (0x0896F6DCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 211u, 0x0896EC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F6DCu) goto L_0896F6DC;
    return;
L_0896F6DC:
    aot_gpr[2] = (0u | 1u);
    goto L_0896F6E0;
L_0896F6E0:
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
L_0896F6F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0896F730;
      }
      goto L_0896F728;
    }
L_0896F728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F7A8;
      }
      goto L_0896F730;
    }
L_0896F730:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_0896F738;
L_0896F738:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0896F75C;
      }
      goto L_0896F744;
    }
L_0896F744:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0896F738;
      }
      goto L_0896F754;
    }
L_0896F754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F764;
      }
      goto L_0896F75C;
    }
L_0896F75C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F7A8;
      }
      goto L_0896F764;
    }
L_0896F764:
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(1240));
    aot_gpr[20] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[21] = (0u | 31u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-32));
    goto L_0896F774;
L_0896F774:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0896F784u);
    aot_gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896F784u) goto L_0896F784;
    return;
L_0896F784:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-40));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[21]) > 0;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_0896F774;
      }
      goto L_0896F794;
    }
L_0896F794:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896F7A8u);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896F7A8u) goto L_0896F7A8;
    return;
L_0896F7A8:
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
L_0896F7CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(17672), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(17696), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(17705), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(17706), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(17707), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(17708), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(17712), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(17716), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(17720), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(17724), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(17672));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(44), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(17792), 0u);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(17740), 0u);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17744));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896F8A8u);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F8A8u) goto L_0896F8A8;
    return;
L_0896F8A8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896F8B8u);
    aot_gpr[6] = (0u | 1280u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F8B8u) goto L_0896F8B8;
    return;
L_0896F8B8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-21424));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5732));
    aot_gpr[31] = (0x0896F8DCu);
    aot_gpr[7] = (1u << 16u);
    ctx.pc = 0x08A5B05Cu;
    return;
L_0896F8DC:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(17832), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26500), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F904:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[17] = (1u << 16u);
      if (branch_taken) {
          goto L_0896F97C;
      }
      goto L_0896F934;
    }
L_0896F934:
    aot_gpr[19] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(17728), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17728));
    aot_gpr[31] = (0x0896F954u);
    aot_gpr[6] = (1u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F954u) goto L_0896F954;
    return;
L_0896F954:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(17728)));
    aot_gpr[31] = (0x0896F96Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17728));
    ctx.pc = 0x08A5AD14u;
    return;
L_0896F96C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26504)));
      if (branch_taken) {
          goto L_0896F9A4;
      }
      goto L_0896F974;
    }
L_0896F974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F990;
      }
      goto L_0896F97C;
    }
L_0896F97C:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(17736), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F9B4;
      }
      goto L_0896F990;
    }
L_0896F990:
    aot_gpr[6] = (1u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(17732), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26504)));
    goto L_0896F9A4;
L_0896F9A4:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(17736), aot_gpr[4]);
    aot_gpr[2] = (0u | 0u);
    goto L_0896F9B4;
L_0896F9B4:
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
L_0896F9D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896FA28;
      }
      goto L_0896F9F8;
    }
L_0896F9F8:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x0896FA08u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17840));
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 178u, 0x0896EA58u>(ctx, &aot_mem) && ctx.pc == 0x0896FA08u) goto L_0896FA08;
    return;
L_0896FA08:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_0896FA20;
      }
      goto L_0896FA14;
    }
L_0896FA14:
    aot_gpr[31] = (0x0896FA1Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_0896F7CC;
L_0896FA1C:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_0896FA20;
L_0896FA20:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-26504), aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0896FA28;
L_0896FA28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26504)));
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
L_0896FA48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FA70;
      }
      goto L_0896FA64;
    }
L_0896FA64:
    aot_gpr[31] = (0x0896FA6Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 184u, 0x0896EABCu>(ctx, &aot_mem) && ctx.pc == 0x0896FA6Cu) goto L_0896FA6C;
    return;
L_0896FA6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-26504), 0u);
    goto L_0896FA70;
L_0896FA70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FA80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896FA94u);
    aot_gpr[16] = (0u | 1u);
    goto L_0896F9D0;
L_0896FA94:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FABC;
      }
      goto L_0896FAA0;
    }
L_0896FAA0:
    aot_gpr[31] = (0x0896FAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 194u, 0x0896EB44u>(ctx, &aot_mem) && ctx.pc == 0x0896FAA8u) goto L_0896FAA8;
    return;
L_0896FAA8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FABC;
      }
      goto L_0896FAB4;
    }
L_0896FAB4:
    aot_gpr[31] = (0x0896FABCu);
    // nop
    goto L_0896FA48;
L_0896FABC:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FAD4;
      }
      goto L_0896FAC4;
    }
L_0896FAC4:
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0896FAD4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 102u, 0x08962774u>(ctx, &aot_mem) && ctx.pc == 0x0896FAD4u) goto L_0896FAD4;
    return;
L_0896FAD4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FAE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FB08;
      }
      goto L_0896FB00;
    }
L_0896FB00:
    aot_gpr[31] = (0x0896FB08u);
    // nop
    goto L_0896F2F0;
L_0896FB08:
    aot_gpr[31] = (0x0896FB10u);
    // nop
    goto L_0896FA48;
L_0896FB10:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0896FB1Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 102u, 0x08962774u>(ctx, &aot_mem) && ctx.pc == 0x0896FB1Cu) goto L_0896FB1C;
    return;
L_0896FB1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FB28:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FB30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26496)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FB50;
      }
      goto L_0896FB48;
    }
L_0896FB48:
    aot_gpr[31] = (0x0896FB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0364_entry, 364u, 265u, 0x08970CA4u>(ctx, &aot_mem) && ctx.pc == 0x0896FB50u) goto L_0896FB50;
    return;
L_0896FB50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FB5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26496)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FBA8;
      }
      goto L_0896FB80;
    }
L_0896FB80:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x0896FB8Cu);
    aot_gpr[4] = (0u | 304u);
    goto L_0896FE98;
L_0896FB8C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FBA4;
      }
      goto L_0896FB98;
    }
L_0896FB98:
    aot_gpr[31] = (0x0896FBA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0896FED0;
L_0896FBA0:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0896FBA4;
L_0896FBA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-26496), aot_gpr[17]);
    goto L_0896FBA8;
L_0896FBA8:
    aot_gpr[2] = (0u | 0u);
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
L_0896FBC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26496)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FBEC;
      }
      goto L_0896FBE0;
    }
L_0896FBE0:
    aot_gpr[31] = (0x0896FBE8u);
    aot_gpr[5] = (0u | 3u);
    goto L_0896FF08;
L_0896FBE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-26496), 0u);
    goto L_0896FBEC;
L_0896FBEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FBFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26496)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FC24;
      }
      goto L_0896FC14;
    }
L_0896FC14:
    aot_gpr[31] = (0x0896FC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0364_entry, 364u, 312u, 0x08970EB0u>(ctx, &aot_mem) && ctx.pc == 0x0896FC1Cu) goto L_0896FC1C;
    return;
L_0896FC1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FC28;
      }
      goto L_0896FC24;
    }
L_0896FC24:
    aot_gpr[2] = (0u | 0u);
    goto L_0896FC28;
L_0896FC28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FC34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[4] & 255u);
    aot_gpr[20] = (aot_gpr[5] & 255u);
    aot_gpr[21] = (aot_gpr[9] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x0896FC7Cu);
    aot_gpr[22] = (aot_gpr[10] & 255u);
    goto L_0896FF3C;
L_0896FC7C:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FCF8;
      }
      goto L_0896FC88;
    }
L_0896FC88:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0896FC98;
      }
      goto L_0896FC94;
    }
L_0896FC94:
    aot_gpr[20] = (0u | 0u);
    goto L_0896FC98;
L_0896FC98:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0896FCA8;
      }
      goto L_0896FCA4;
    }
L_0896FCA4:
    aot_gpr[22] = (0u | 1u);
    goto L_0896FCA8;
L_0896FCA8:
    aot_gpr[31] = (0x0896FCB0u);
    // nop
    goto L_0896FF3C;
L_0896FCB0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896FCBCu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0364_entry, 364u, 311u, 0x08970EA4u>(ctx, &aot_mem) && ctx.pc == 0x0896FCBCu) goto L_0896FCBC;
    return;
L_0896FCBC:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896FCDCu);
    aot_gpr[10] = (aot_gpr[17] | 0u);
    goto L_0896FF48;
L_0896FCDC:
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[31] = (0x0896FCE8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-640));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 56u, 0x089623B8u>(ctx, &aot_mem) && ctx.pc == 0x0896FCE8u) goto L_0896FCE8;
    return;
L_0896FCE8:
    aot_gpr[31] = (0x0896FCF0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896FCF0u) goto L_0896FCF0;
    return;
L_0896FCF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FD00;
      }
      goto L_0896FCF8;
    }
L_0896FCF8:
    aot_gpr[31] = (0x0896FD00u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896FD00u) goto L_0896FD00;
    return;
L_0896FD00:
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
L_0896FD2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896FD3Cu);
    // nop
    goto L_0896FF3C;
L_0896FD3C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FD6C;
      }
      goto L_0896FD48;
    }
L_0896FD48:
    aot_gpr[31] = (0x0896FD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0364_entry, 364u, 4u, 0x0897003Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FD50u) goto L_0896FD50;
    return;
L_0896FD50:
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[31] = (0x0896FD5Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-496));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 56u, 0x089623B8u>(ctx, &aot_mem) && ctx.pc == 0x0896FD5Cu) goto L_0896FD5C;
    return;
L_0896FD5C:
    aot_gpr[31] = (0x0896FD64u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896FD64u) goto L_0896FD64;
    return;
L_0896FD64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FD74;
      }
      goto L_0896FD6C;
    }
L_0896FD6C:
    aot_gpr[31] = (0x0896FD74u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896FD74u) goto L_0896FD74;
    return;
L_0896FD74:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FD80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896FD90u);
    // nop
    goto L_0896FF3C;
L_0896FD90:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FDFC;
      }
      goto L_0896FD9C;
    }
L_0896FD9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FDEC;
      }
      goto L_0896FDB0;
    }
L_0896FDB0:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-21408)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FDC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FDF4;
      }
      goto L_0896FDD0;
    }
L_0896FDD0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0896FDDCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 253u, 0x0895EFE4u>(ctx, &aot_mem) && ctx.pc == 0x0896FDDCu) goto L_0896FDDC;
    return;
L_0896FDDC:
    aot_gpr[31] = (0x0896FDE4u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896FDE4u) goto L_0896FDE4;
    return;
L_0896FDE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FDF4;
      }
      goto L_0896FDEC;
    }
L_0896FDEC:
    aot_gpr[31] = (0x0896FDF4u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896FDF4u) goto L_0896FDF4;
    return;
L_0896FDF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE04;
      }
      goto L_0896FDFC;
    }
L_0896FDFC:
    aot_gpr[31] = (0x0896FE04u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896FE04u) goto L_0896FE04;
    return;
L_0896FE04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FE10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896FE20u);
    // nop
    goto L_0896FF3C;
L_0896FE20:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE84;
      }
      goto L_0896FE2C;
    }
L_0896FE2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 11 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
        goto L_0896FE50;
    }
    goto L_0896FE3C;
L_0896FE3C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE74;
      }
      goto L_0896FE48;
    }
L_0896FE48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE7C;
      }
      goto L_0896FE50;
    }
L_0896FE50:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE74;
      }
      goto L_0896FE58;
    }
L_0896FE58:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0896FE64u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 253u, 0x0895EFE4u>(ctx, &aot_mem) && ctx.pc == 0x0896FE64u) goto L_0896FE64;
    return;
L_0896FE64:
    aot_gpr[31] = (0x0896FE6Cu);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896FE6Cu) goto L_0896FE6C;
    return;
L_0896FE6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE7C;
      }
      goto L_0896FE74;
    }
L_0896FE74:
    aot_gpr[31] = (0x0896FE7Cu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896FE7Cu) goto L_0896FE7C;
    return;
L_0896FE7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE8C;
      }
      goto L_0896FE84;
    }
L_0896FE84:
    aot_gpr[31] = (0x0896FE8Cu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896FE8Cu) goto L_0896FE8C;
    return;
L_0896FE8C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FE98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896FEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x0896FEA8u) goto L_0896FEA8;
    return;
L_0896FEA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FEB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896FEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FEC4u) goto L_0896FEC4;
    return;
L_0896FEC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FED0:
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26488), aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FF08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FF30;
      }
      goto L_0896FF18;
    }
L_0896FF18:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-26488), 0u);
      if (branch_taken) {
          goto L_0896FF30;
      }
      goto L_0896FF28;
    }
L_0896FF28:
    aot_gpr[31] = (0x0896FF30u);
    // nop
    goto L_0896FEB4;
L_0896FF30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FF3C:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26488)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FF48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0364_entry, 364u, 3u, 0x08970010u>(ctx, &aot_mem); return;
      }
      goto L_0896FF94;
    }
L_0896FF94:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr[23] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0896FFA4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 164u, 0x08942C88u>(ctx, &aot_mem) && ctx.pc == 0x0896FFA4u) goto L_0896FFA4;
    return;
L_0896FFA4:
    aot_gpr[31] = (0x0896FFACu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 173u, 0x08942D14u>(ctx, &aot_mem) && ctx.pc == 0x0896FFACu) goto L_0896FFAC;
    return;
L_0896FFAC:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[20] = (0u | 1u);
    { const bool branch_taken = aot_gpr[23] != aot_gpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[23]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0364_entry, 364u, 2u, 0x0897000Cu>(ctx, &aot_mem); return;
      }
      goto L_0896FFBC;
    }
L_0896FFBC:
    aot_gpr[22] = (aot_gpr[21] + static_cast<std::uint32_t>(268));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896FFD0u);
    aot_gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FFD0u) goto L_0896FFD0;
    return;
L_0896FFD0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896FFE0u);
    aot_gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896FFE0u) goto L_0896FFE0;
    return;
L_0896FFE0:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(275), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(276), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(280));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896FFF8u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FFF8u) goto L_0896FFF8;
    return;
L_0896FFF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(280), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(284));
    ctx.pc = 0x08970000u; return;
}

void recomp_unit_0363(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0363_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_363(Runtime &runtime) {
    runtime.register_generated_unit(363u, 0x0896F000u, 4096u, &recomp_unit_0363, &recomp_unit_0363_entry);
    runtime.register_function(0x0896F000u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F008u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F010u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F018u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F020u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F028u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F030u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F040u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F060u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F068u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F070u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F078u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F080u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F088u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F090u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F098u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F0A4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F0ACu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F0B4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F0BCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F0C4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F0CCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F0D4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F0DCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F0E4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F0ECu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F0F8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F110u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F118u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F120u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F12Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F134u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F140u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F148u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F150u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F158u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F160u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F164u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F174u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F194u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F19Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F1A8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F1B4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F1BCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F1CCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F1D4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F1DCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F1ECu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F1F4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F1FCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F204u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F20Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F21Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F238u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F248u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F25Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F264u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F278u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F280u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F290u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F2A8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F2B0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F2B8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F2BCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F2C8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F2D0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F2D8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F2DCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F2F0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F310u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F324u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F32Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F338u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F344u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F34Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F354u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F35Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F364u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F37Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F3A4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F3BCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F3C4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F3DCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F3F0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F3F8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F430u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F438u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F440u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F448u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F450u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F458u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F464u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F46Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F474u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F480u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F48Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F490u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F498u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F4A0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F4A8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F4B0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F4B8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F4C8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F4F8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F500u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F50Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F524u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F530u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F548u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F580u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F58Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F5A0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F5B8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F5C4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F5D0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F5D8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F5E0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F5E8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F5ECu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F5FCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F614u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F620u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F628u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F630u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F638u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F640u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F648u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F64Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F674u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F694u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F6A0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F6B0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F6BCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F6C4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F6CCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F6D4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F6DCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F6E0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F6F8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F728u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F730u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F738u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F744u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F754u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F75Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F764u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F774u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F784u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F794u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F7A8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F7CCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F8A8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F8B8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F8DCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F904u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F934u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F954u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F96Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F974u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F97Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F990u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F9A4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F9B4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F9D0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896F9F8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FA08u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FA14u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FA1Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FA20u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FA28u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FA48u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FA64u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FA6Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FA70u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FA80u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FA94u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FAA0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FAA8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FAB4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FABCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FAC4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FAD4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FAE8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FB00u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FB08u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FB10u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FB1Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FB28u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FB30u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FB48u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FB50u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FB5Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FB80u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FB8Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FB98u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FBA0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FBA4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FBA8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FBC4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FBE0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FBE8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FBECu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FBFCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FC14u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FC1Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FC24u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FC28u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FC34u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FC7Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FC88u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FC94u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FC98u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FCA4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FCA8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FCB0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FCBCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FCDCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FCE8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FCF0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FCF8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FD00u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FD2Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FD3Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FD48u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FD50u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FD5Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FD64u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FD6Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FD74u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FD80u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FD90u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FD9Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FDB0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FDC8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FDD0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FDDCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FDE4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FDECu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FDF4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FDFCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE04u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE10u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE20u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE2Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE3Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE48u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE50u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE58u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE64u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE6Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE74u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE7Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE84u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE8Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FE98u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FEA8u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FEB4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FEC4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FED0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FF08u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FF18u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FF28u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FF30u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FF3Cu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FF48u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FF94u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FFA4u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FFACu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FFBCu, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FFD0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FFE0u, &recomp_unit_0363, "recomp_unit_0363");
    runtime.register_function(0x0896FFF8u, &recomp_unit_0363, "recomp_unit_0363");
}
} // namespace psprecomp
