#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0524[1022] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0,
    9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 24, 0, 25, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0, 0,
    0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60,
    0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101,
    0, 0, 102, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 109,
    110, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 118,
    0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0,
    0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0,
    133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0,
    148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 164,
    0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0,
    170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 193, 194, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0,
    205, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 213, 0, 214, 0, 215, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 222,
};
void recomp_unit_0524_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A10000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0524[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A10000;
    case 2u: goto L_08A10024;
    case 3u: goto L_08A1002C;
    case 4u: goto L_08A10038;
    case 5u: goto L_08A10040;
    case 6u: goto L_08A10048;
    case 7u: goto L_08A10064;
    case 8u: goto L_08A1006C;
    case 9u: goto L_08A10080;
    case 10u: goto L_08A10088;
    case 11u: goto L_08A100A4;
    case 12u: goto L_08A100B4;
    case 13u: goto L_08A100C8;
    case 14u: goto L_08A100D0;
    case 15u: goto L_08A100DC;
    case 16u: goto L_08A100EC;
    case 17u: goto L_08A10100;
    case 18u: goto L_08A10120;
    case 19u: goto L_08A10134;
    case 20u: goto L_08A10140;
    case 21u: goto L_08A10150;
    case 22u: goto L_08A10164;
    case 23u: goto L_08A10190;
    case 24u: goto L_08A1019C;
    case 25u: goto L_08A101A4;
    case 26u: goto L_08A101A8;
    case 27u: goto L_08A101C8;
    case 28u: goto L_08A101E8;
    case 29u: goto L_08A101FC;
    case 30u: goto L_08A10210;
    case 31u: goto L_08A10224;
    case 32u: goto L_08A10238;
    case 33u: goto L_08A1024C;
    case 34u: goto L_08A10260;
    case 35u: goto L_08A10274;
    case 36u: goto L_08A10294;
    case 37u: goto L_08A1029C;
    case 38u: goto L_08A102E4;
    case 39u: goto L_08A102F0;
    case 40u: goto L_08A102F8;
    case 41u: goto L_08A1031C;
    case 42u: goto L_08A10348;
    case 43u: goto L_08A10364;
    case 44u: goto L_08A10384;
    case 45u: goto L_08A10390;
    case 46u: goto L_08A10398;
    case 47u: goto L_08A103AC;
    case 48u: goto L_08A103D0;
    case 49u: goto L_08A103D8;
    case 50u: goto L_08A103E4;
    case 51u: goto L_08A103EC;
    case 52u: goto L_08A103F4;
    case 53u: goto L_08A10410;
    case 54u: goto L_08A10418;
    case 55u: goto L_08A1042C;
    case 56u: goto L_08A10434;
    case 57u: goto L_08A10450;
    case 58u: goto L_08A10460;
    case 59u: goto L_08A10474;
    case 60u: goto L_08A1047C;
    case 61u: goto L_08A10488;
    case 62u: goto L_08A10498;
    case 63u: goto L_08A104AC;
    case 64u: goto L_08A104CC;
    case 65u: goto L_08A104E0;
    case 66u: goto L_08A104EC;
    case 67u: goto L_08A104FC;
    case 68u: goto L_08A10510;
    case 69u: goto L_08A1053C;
    case 70u: goto L_08A10548;
    case 71u: goto L_08A10550;
    case 72u: goto L_08A10554;
    case 73u: goto L_08A10574;
    case 74u: goto L_08A10590;
    case 75u: goto L_08A105B0;
    case 76u: goto L_08A105BC;
    case 77u: goto L_08A105C4;
    case 78u: goto L_08A105D8;
    case 79u: goto L_08A105FC;
    case 80u: goto L_08A10604;
    case 81u: goto L_08A10610;
    case 82u: goto L_08A10618;
    case 83u: goto L_08A10620;
    case 84u: goto L_08A1063C;
    case 85u: goto L_08A10644;
    case 86u: goto L_08A10658;
    case 87u: goto L_08A10660;
    case 88u: goto L_08A1067C;
    case 89u: goto L_08A1068C;
    case 90u: goto L_08A106A0;
    case 91u: goto L_08A106A8;
    case 92u: goto L_08A106B4;
    case 93u: goto L_08A106C4;
    case 94u: goto L_08A106D8;
    case 95u: goto L_08A106F8;
    case 96u: goto L_08A1070C;
    case 97u: goto L_08A10718;
    case 98u: goto L_08A10728;
    case 99u: goto L_08A1073C;
    case 100u: goto L_08A10770;
    case 101u: goto L_08A1077C;
    case 102u: goto L_08A10788;
    case 103u: goto L_08A1078C;
    case 104u: goto L_08A107B0;
    case 105u: goto L_08A107CC;
    case 106u: goto L_08A107E0;
    case 107u: goto L_08A107E8;
    case 108u: goto L_08A107F0;
    case 109u: goto L_08A107FC;
    case 110u: goto L_08A10800;
    case 111u: goto L_08A10814;
    case 112u: goto L_08A10820;
    case 113u: goto L_08A10828;
    case 114u: goto L_08A1083C;
    case 115u: goto L_08A10860;
    case 116u: goto L_08A10868;
    case 117u: goto L_08A10874;
    case 118u: goto L_08A1087C;
    case 119u: goto L_08A10884;
    case 120u: goto L_08A108A0;
    case 121u: goto L_08A108A8;
    case 122u: goto L_08A108BC;
    case 123u: goto L_08A108C4;
    case 124u: goto L_08A108E0;
    case 125u: goto L_08A108F0;
    case 126u: goto L_08A10904;
    case 127u: goto L_08A1090C;
    case 128u: goto L_08A10918;
    case 129u: goto L_08A10928;
    case 130u: goto L_08A1093C;
    case 131u: goto L_08A10960;
    case 132u: goto L_08A10974;
    case 133u: goto L_08A10980;
    case 134u: goto L_08A10990;
    case 135u: goto L_08A109A4;
    case 136u: goto L_08A109D8;
    case 137u: goto L_08A109E4;
    case 138u: goto L_08A109F0;
    case 139u: goto L_08A109F4;
    case 140u: goto L_08A10A18;
    case 141u: goto L_08A10A20;
    case 142u: goto L_08A10A40;
    case 143u: goto L_08A10A4C;
    case 144u: goto L_08A10A54;
    case 145u: goto L_08A10A5C;
    case 146u: goto L_08A10A68;
    case 147u: goto L_08A10A70;
    case 148u: goto L_08A10A80;
    case 149u: goto L_08A10A88;
    case 150u: goto L_08A10A9C;
    case 151u: goto L_08A10AB8;
    case 152u: goto L_08A10AD4;
    case 153u: goto L_08A10ADC;
    case 154u: goto L_08A10AF8;
    case 155u: goto L_08A10B04;
    case 156u: goto L_08A10B0C;
    case 157u: goto L_08A10B14;
    case 158u: goto L_08A10B34;
    case 159u: goto L_08A10B40;
    case 160u: goto L_08A10B4C;
    case 161u: goto L_08A10B58;
    case 162u: goto L_08A10B68;
    case 163u: goto L_08A10B70;
    case 164u: goto L_08A10B7C;
    case 165u: goto L_08A10B84;
    case 166u: goto L_08A10B98;
    case 167u: goto L_08A10BD8;
    case 168u: goto L_08A10BE0;
    case 169u: goto L_08A10BF8;
    case 170u: goto L_08A10C00;
    case 171u: goto L_08A10C18;
    case 172u: goto L_08A10C20;
    case 173u: goto L_08A10C28;
    case 174u: goto L_08A10C30;
    case 175u: goto L_08A10C34;
    case 176u: goto L_08A10C48;
    case 177u: goto L_08A10C50;
    case 178u: goto L_08A10C5C;
    case 179u: goto L_08A10C64;
    case 180u: goto L_08A10C6C;
    case 181u: goto L_08A10C90;
    case 182u: goto L_08A10CA4;
    case 183u: goto L_08A10CB0;
    case 184u: goto L_08A10CD4;
    case 185u: goto L_08A10CDC;
    case 186u: goto L_08A10D00;
    case 187u: goto L_08A10D24;
    case 188u: goto L_08A10D30;
    case 189u: goto L_08A10D38;
    case 190u: goto L_08A10D48;
    case 191u: goto L_08A10D50;
    case 192u: goto L_08A10D60;
    case 193u: goto L_08A10D68;
    case 194u: goto L_08A10D6C;
    case 195u: goto L_08A10D7C;
    case 196u: goto L_08A10DA0;
    case 197u: goto L_08A10DE8;
    case 198u: goto L_08A10E10;
    case 199u: goto L_08A10E1C;
    case 200u: goto L_08A10E2C;
    case 201u: goto L_08A10E70;
    case 202u: goto L_08A10EA4;
    case 203u: goto L_08A10EDC;
    case 204u: goto L_08A10EF8;
    case 205u: goto L_08A10F00;
    case 206u: goto L_08A10F08;
    case 207u: goto L_08A10F24;
    case 208u: goto L_08A10F2C;
    case 209u: goto L_08A10F34;
    case 210u: goto L_08A10F3C;
    case 211u: goto L_08A10F5C;
    case 212u: goto L_08A10F6C;
    case 213u: goto L_08A10F84;
    case 214u: goto L_08A10F8C;
    case 215u: goto L_08A10F94;
    case 216u: goto L_08A10F98;
    case 217u: goto L_08A10FAC;
    case 218u: goto L_08A10FBC;
    case 219u: goto L_08A10FC8;
    case 220u: goto L_08A10FD8;
    case 221u: goto L_08A10FE4;
    case 222u: goto L_08A10FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A10000:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18184)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A10048;
      }
      goto L_08A10024;
    }
L_08A10024:
    aot_gpr[31] = (0x08A1002Cu);
    aot_gpr[4] = (0u | 8u);
    goto L_08A1006C;
L_08A1002C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18184), aot_gpr[17]);
        goto L_08A10048;
    }
    goto L_08A10038;
L_08A10038:
    aot_gpr[31] = (0x08A10040u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A100EC;
L_08A10040:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18184), aot_gpr[17]);
    goto L_08A10048;
L_08A10048:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18184)));
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
L_08A10064:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1006C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A10080u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A10080u) goto L_08A10080;
    return;
L_08A10080:
    aot_gpr[31] = (0x08A10088u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10088u) goto L_08A10088;
    return;
L_08A10088:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A100A4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3640));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A100A4u) goto L_08A100A4;
    return;
L_08A100A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A100B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A100C8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A100C8u) goto L_08A100C8;
    return;
L_08A100C8:
    aot_gpr[31] = (0x08A100D0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A100D0u) goto L_08A100D0;
    return;
L_08A100D0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A100DCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A100DCu) goto L_08A100DC;
    return;
L_08A100DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A100EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A10100u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A10100u) goto L_08A10100;
    return;
L_08A10100:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13464));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10120:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A10134u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A10134u) goto L_08A10134;
    return;
L_08A10134:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A10140u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10140u) goto L_08A10140;
    return;
L_08A10140:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A10150u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3604));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10150u) goto L_08A10150;
    return;
L_08A10150:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10164:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A10190u);
    aot_gpr[4] = (0u | 344u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10190u) goto L_08A10190;
    return;
L_08A10190:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A101A8;
      }
      goto L_08A1019C;
    }
L_08A1019C:
    aot_gpr[31] = (0x08A101A4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0536_entry, 536u, 105u, 0x08A1C738u>(ctx, &aot_mem) && ctx.pc == 0x08A101A4u) goto L_08A101A4;
    return;
L_08A101A4:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A101A8;
L_08A101A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A101C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A101E8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A101E8u) goto L_08A101E8;
    return;
L_08A101E8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13528));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A101FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A102F8;
L_08A101FC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A10210u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-3592));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A10210u) goto L_08A10210;
    return;
L_08A10210:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A10224u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10224u) goto L_08A10224;
    return;
L_08A10224:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A10238u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-3584));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A10238u) goto L_08A10238;
    return;
L_08A10238:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1024Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1024Cu) goto L_08A1024C;
    return;
L_08A1024C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr[31] = (0x08A10260u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-3576));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A10260u) goto L_08A10260;
    return;
L_08A10260:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A10274u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10274u) goto L_08A10274;
    return;
L_08A10274:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A10294:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1029C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(328)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A102E4u);
    aot_gpr[7] = (aot_gpr[10] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A102E4u) goto L_08A102E4;
    return;
L_08A102E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A102F0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A102F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1031Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3564));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1031Cu) goto L_08A1031C;
    return;
L_08A1031C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16384u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10348:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A10398;
      }
      goto L_08A10364;
    }
L_08A10364:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13664));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18176), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A10384u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10384u) goto L_08A10384;
    return;
L_08A10384:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10398;
      }
      goto L_08A10390;
    }
L_08A10390:
    aot_gpr[31] = (0x08A10398u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A10460;
L_08A10398:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A103AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A103F4;
      }
      goto L_08A103D0;
    }
L_08A103D0:
    aot_gpr[31] = (0x08A103D8u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A10418;
L_08A103D8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18176), aot_gpr[17]);
        goto L_08A103F4;
    }
    goto L_08A103E4;
L_08A103E4:
    aot_gpr[31] = (0x08A103ECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A10498;
L_08A103EC:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18176), aot_gpr[17]);
    goto L_08A103F4;
L_08A103F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18176)));
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
L_08A10410:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10418:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1042Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1042Cu) goto L_08A1042C;
    return;
L_08A1042C:
    aot_gpr[31] = (0x08A10434u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10434u) goto L_08A10434;
    return;
L_08A10434:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A10450u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3552));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A10450u) goto L_08A10450;
    return;
L_08A10450:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10460:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A10474u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A10474u) goto L_08A10474;
    return;
L_08A10474:
    aot_gpr[31] = (0x08A1047Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1047Cu) goto L_08A1047C;
    return;
L_08A1047C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A10488u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A10488u) goto L_08A10488;
    return;
L_08A10488:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10498:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A104ACu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A104ACu) goto L_08A104AC;
    return;
L_08A104AC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13664));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A104CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A104E0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A104E0u) goto L_08A104E0;
    return;
L_08A104E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A104ECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A104ECu) goto L_08A104EC;
    return;
L_08A104EC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A104FCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3516));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A104FCu) goto L_08A104FC;
    return;
L_08A104FC:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10510:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A1053Cu);
    aot_gpr[4] = (0u | 316u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1053Cu) goto L_08A1053C;
    return;
L_08A1053C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A10554;
      }
      goto L_08A10548;
    }
L_08A10548:
    aot_gpr[31] = (0x08A10550u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0536_entry, 536u, 187u, 0x08A1CD7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10550u) goto L_08A10550;
    return;
L_08A10550:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A10554;
L_08A10554:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A10574:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A105C4;
      }
      goto L_08A10590;
    }
L_08A10590:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13728));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18168), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A105B0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A105B0u) goto L_08A105B0;
    return;
L_08A105B0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A105C4;
      }
      goto L_08A105BC;
    }
L_08A105BC:
    aot_gpr[31] = (0x08A105C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A1068C;
L_08A105C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A105D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18168)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A10620;
      }
      goto L_08A105FC;
    }
L_08A105FC:
    aot_gpr[31] = (0x08A10604u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A10644;
L_08A10604:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18168), aot_gpr[17]);
        goto L_08A10620;
    }
    goto L_08A10610;
L_08A10610:
    aot_gpr[31] = (0x08A10618u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A106C4;
L_08A10618:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18168), aot_gpr[17]);
    goto L_08A10620;
L_08A10620:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18168)));
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
L_08A1063C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10644:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A10658u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A10658u) goto L_08A10658;
    return;
L_08A10658:
    aot_gpr[31] = (0x08A10660u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10660u) goto L_08A10660;
    return;
L_08A10660:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A1067Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3504));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1067Cu) goto L_08A1067C;
    return;
L_08A1067C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1068C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A106A0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A106A0u) goto L_08A106A0;
    return;
L_08A106A0:
    aot_gpr[31] = (0x08A106A8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A106A8u) goto L_08A106A8;
    return;
L_08A106A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A106B4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A106B4u) goto L_08A106B4;
    return;
L_08A106B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A106C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A106D8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A106D8u) goto L_08A106D8;
    return;
L_08A106D8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13728));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A106F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1070Cu);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1070Cu) goto L_08A1070C;
    return;
L_08A1070C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A10718u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10718u) goto L_08A10718;
    return;
L_08A10718:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A10728u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3468));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10728u) goto L_08A10728;
    return;
L_08A10728:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1073C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A10770u);
    aot_gpr[4] = (0u | 368u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10770u) goto L_08A10770;
    return;
L_08A10770:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1078C;
      }
      goto L_08A1077C;
    }
L_08A1077C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A10788u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 21u, 0x08A1D138u>(ctx, &aot_mem) && ctx.pc == 0x08A10788u) goto L_08A10788;
    return;
L_08A10788:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A1078C;
L_08A1078C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
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
L_08A107B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A10828;
      }
      goto L_08A107CC;
    }
L_08A107CC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13792));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A10800;
      }
      goto L_08A107E0;
    }
L_08A107E0:
    aot_gpr[31] = (0x08A107E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A107E8u) goto L_08A107E8;
    return;
L_08A107E8:
    aot_gpr[31] = (0x08A107F0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A107F0u) goto L_08A107F0;
    return;
L_08A107F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A107FCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A107FCu) goto L_08A107FC;
    return;
L_08A107FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A10800;
L_08A10800:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18160), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A10814u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10814u) goto L_08A10814;
    return;
L_08A10814:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10828;
      }
      goto L_08A10820;
    }
L_08A10820:
    aot_gpr[31] = (0x08A10828u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A108F0;
L_08A10828:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1083C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18160)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A10884;
      }
      goto L_08A10860;
    }
L_08A10860:
    aot_gpr[31] = (0x08A10868u);
    aot_gpr[4] = (0u | 12u);
    goto L_08A108A8;
L_08A10868:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18160), aot_gpr[17]);
        goto L_08A10884;
    }
    goto L_08A10874;
L_08A10874:
    aot_gpr[31] = (0x08A1087Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A10928;
L_08A1087C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18160), aot_gpr[17]);
    goto L_08A10884;
L_08A10884:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18160)));
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
L_08A108A0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A108A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A108BCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A108BCu) goto L_08A108BC;
    return;
L_08A108BC:
    aot_gpr[31] = (0x08A108C4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A108C4u) goto L_08A108C4;
    return;
L_08A108C4:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 54u);
    aot_gpr[31] = (0x08A108E0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3456));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A108E0u) goto L_08A108E0;
    return;
L_08A108E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A108F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A10904u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A10904u) goto L_08A10904;
    return;
L_08A10904:
    aot_gpr[31] = (0x08A1090Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1090Cu) goto L_08A1090C;
    return;
L_08A1090C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A10918u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A10918u) goto L_08A10918;
    return;
L_08A10918:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10928:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1093Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A1093Cu) goto L_08A1093C;
    return;
L_08A1093C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13792));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10960:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A10974u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A10974u) goto L_08A10974;
    return;
L_08A10974:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A10980u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10980u) goto L_08A10980;
    return;
L_08A10980:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A10990u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3424));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10990u) goto L_08A10990;
    return;
L_08A10990:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A109A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A109D8u);
    aot_gpr[4] = (0u | 356u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A109D8u) goto L_08A109D8;
    return;
L_08A109D8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A109F4;
      }
      goto L_08A109E4;
    }
L_08A109E4:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A109F0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0525_entry, 525u, 22u, 0x08A11204u>(ctx, &aot_mem) && ctx.pc == 0x08A109F0u) goto L_08A109F0;
    return;
L_08A109F0:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A109F4;
L_08A109F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
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
L_08A10A18:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10A20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A10A88;
      }
      goto L_08A10A40;
    }
L_08A10A40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A10A70;
      }
      goto L_08A10A4C;
    }
L_08A10A4C:
    aot_gpr[31] = (0x08A10A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A10A54u) goto L_08A10A54;
    return;
L_08A10A54:
    aot_gpr[31] = (0x08A10A5Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10A5Cu) goto L_08A10A5C;
    return;
L_08A10A5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A10A68u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A10A68u) goto L_08A10A68;
    return;
L_08A10A68:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (2215u << 16u);
    goto L_08A10A70;
L_08A10A70:
    aot_gpr[5] = (0u | 73u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A10A80u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3456));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A10A80u) goto L_08A10A80;
    return;
L_08A10A80:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    goto L_08A10A88;
L_08A10A88:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10A9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A10B84;
      }
      goto L_08A10AB8;
    }
L_08A10AB8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13888));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14032));
    aot_gpr[31] = (0x08A10AD4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A10AD4u) goto L_08A10AD4;
    return;
L_08A10AD4:
    aot_gpr[31] = (0x08A10ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A10ADCu) goto L_08A10ADC;
    return;
L_08A10ADC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(248));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A10AF8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10AF8u) goto L_08A10AF8;
    return;
L_08A10AF8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(336), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A10B34;
      }
      goto L_08A10B04;
    }
L_08A10B04:
    aot_gpr[31] = (0x08A10B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A10B0Cu) goto L_08A10B0C;
    return;
L_08A10B0C:
    aot_gpr[31] = (0x08A10B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A10B14u) goto L_08A10B14;
    return;
L_08A10B14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(336)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(308)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A10B34u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10B34u) goto L_08A10B34;
    return;
L_08A10B34:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A10B40u);
    aot_gpr[5] = (0u | 0u);
    goto L_08A10FAC;
L_08A10B40:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(344));
    aot_gpr[31] = (0x08A10B4Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 87u, 0x08A46520u>(ctx, &aot_mem) && ctx.pc == 0x08A10B4Cu) goto L_08A10B4C;
    return;
L_08A10B4C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(296));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A10B68;
      }
      goto L_08A10B58;
    }
L_08A10B58:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26440));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A10B68;
L_08A10B68:
    aot_gpr[31] = (0x08A10B70u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A10B70u) goto L_08A10B70;
    return;
L_08A10B70:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10B84;
      }
      goto L_08A10B7C;
    }
L_08A10B7C:
    aot_gpr[31] = (0x08A10B84u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A10B84u) goto L_08A10B84;
    return;
L_08A10B84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10B98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A10BD8u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A10BD8u) goto L_08A10BD8;
    return;
L_08A10BD8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
        goto L_08A10C34;
    }
    goto L_08A10BE0;
L_08A10BE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A10BF8u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10BF8u) goto L_08A10BF8;
    return;
L_08A10BF8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
        goto L_08A10C34;
    }
    goto L_08A10C00;
L_08A10C00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A10C18u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10C18u) goto L_08A10C18;
    return;
L_08A10C18:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
        goto L_08A10C34;
    }
    goto L_08A10C20;
L_08A10C20:
    aot_gpr[31] = (0x08A10C28u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0525_entry, 525u, 1u, 0x08A11000u>(ctx, &aot_mem) && ctx.pc == 0x08A10C28u) goto L_08A10C28;
    return;
L_08A10C28:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A10C90;
    }
    goto L_08A10C30;
L_08A10C30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    goto L_08A10C34;
L_08A10C34:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A10C48u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10C48u) goto L_08A10C48;
    return;
L_08A10C48:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A10C6C;
      }
      goto L_08A10C50;
    }
L_08A10C50:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A10C5Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A10C5Cu) goto L_08A10C5C;
    return;
L_08A10C5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A10D6C;
      }
      goto L_08A10C64;
    }
L_08A10C64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A10D24;
      }
      goto L_08A10C6C;
    }
L_08A10C6C:
    aot_gpr[2] = (0u | 1u);
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
L_08A10C90:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A10CA4u);
    aot_gpr[17] = (aot_gpr[18] + aot_gpr[5]);
    goto L_08A10FC8;
L_08A10CA4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A10CB0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08A10FE4;
L_08A10CB0:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A10CD4u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10CD4u) goto L_08A10CD4;
    return;
L_08A10CD4:
    aot_gpr[31] = (0x08A10CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10CDCu) goto L_08A10CDC;
    return;
L_08A10CDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3416));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A10D00u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10D00u) goto L_08A10D00;
    return;
L_08A10D00:
    aot_gpr[2] = (0u | 0u);
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
L_08A10D24:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A10D30u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A10D30u) goto L_08A10D30;
    return;
L_08A10D30:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A10D6C;
      }
      goto L_08A10D38;
    }
L_08A10D38:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A10D48u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A10D48u) goto L_08A10D48;
    return;
L_08A10D48:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A10D6C;
      }
      goto L_08A10D50;
    }
L_08A10D50:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A10D60u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A10D60u) goto L_08A10D60;
    return;
L_08A10D60:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10C6C;
      }
      goto L_08A10D68;
    }
L_08A10D68:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A10D6C;
L_08A10D6C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A10D7Cu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10D7Cu) goto L_08A10D7C;
    return;
L_08A10D7C:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
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
L_08A10DA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[6];
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A10EA4;
      }
      goto L_08A10DE8;
    }
L_08A10DE8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[5] = (17279u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (20224u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
        goto L_08A10E1C;
    }
    goto L_08A10E10;
L_08A10E10:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A10E2C;
      }
      goto L_08A10E1C;
    }
L_08A10E1C:
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_08A10E2C;
L_08A10E2C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(216));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(312)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A10E70u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10E70u) goto L_08A10E70;
    return;
L_08A10E70:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[10] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A10EA4u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10EA4u) goto L_08A10EA4;
    return;
L_08A10EA4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10EDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A10F5C;
      }
      goto L_08A10EF8;
    }
L_08A10EF8:
    aot_gpr[31] = (0x08A10F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A10F00u) goto L_08A10F00;
    return;
L_08A10F00:
    aot_gpr[31] = (0x08A10F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A10F08u) goto L_08A10F08;
    return;
L_08A10F08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(248));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A10F24u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10F24u) goto L_08A10F24;
    return;
L_08A10F24:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A10F5C;
      }
      goto L_08A10F2C;
    }
L_08A10F2C:
    aot_gpr[31] = (0x08A10F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A10F34u) goto L_08A10F34;
    return;
L_08A10F34:
    aot_gpr[31] = (0x08A10F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A10F3Cu) goto L_08A10F3C;
    return;
L_08A10F3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(240));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A10F5Cu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A10F5Cu) goto L_08A10F5C;
    return;
L_08A10F5C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10F6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A10F98;
      }
      goto L_08A10F84;
    }
L_08A10F84:
    aot_gpr[31] = (0x08A10F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0525_entry, 525u, 1u, 0x08A11000u>(ctx, &aot_mem) && ctx.pc == 0x08A10F8Cu) goto L_08A10F8C;
    return;
L_08A10F8C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10F98;
      }
      goto L_08A10F94;
    }
L_08A10F94:
    aot_gpr[16] = (0u | 1u);
    goto L_08A10F98;
L_08A10F98:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10FAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A10FBCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(344));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 92u, 0x08A46578u>(ctx, &aot_mem) && ctx.pc == 0x08A10FBCu) goto L_08A10FBC;
    return;
L_08A10FBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10FC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A10FD8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(344));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 97u, 0x08A465CCu>(ctx, &aot_mem) && ctx.pc == 0x08A10FD8u) goto L_08A10FD8;
    return;
L_08A10FD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10FE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A10FF4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(344));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 98u, 0x08A465D4u>(ctx, &aot_mem) && ctx.pc == 0x08A10FF4u) goto L_08A10FF4;
    return;
L_08A10FF4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0524(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0524_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_524(Runtime &runtime) {
    runtime.register_generated_unit(524u, 0x08A10000u, 4096u, &recomp_unit_0524, &recomp_unit_0524_entry);
    runtime.register_function(0x08A10000u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10024u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1002Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10038u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10040u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10048u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10064u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1006Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10080u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10088u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A100A4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A100B4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A100C8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A100D0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A100DCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A100ECu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10100u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10120u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10134u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10140u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10150u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10164u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10190u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1019Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A101A4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A101A8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A101C8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A101E8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A101FCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10210u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10224u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10238u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1024Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10260u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10274u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10294u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1029Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A102E4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A102F0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A102F8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1031Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10348u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10364u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10384u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10390u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10398u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A103ACu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A103D0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A103D8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A103E4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A103ECu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A103F4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10410u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10418u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1042Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10434u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10450u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10460u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10474u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1047Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10488u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10498u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A104ACu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A104CCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A104E0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A104ECu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A104FCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10510u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1053Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10548u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10550u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10554u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10574u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10590u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A105B0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A105BCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A105C4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A105D8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A105FCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10604u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10610u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10618u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10620u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1063Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10644u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10658u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10660u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1067Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1068Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A106A0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A106A8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A106B4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A106C4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A106D8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A106F8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1070Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10718u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10728u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1073Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10770u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1077Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10788u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1078Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A107B0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A107CCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A107E0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A107E8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A107F0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A107FCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10800u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10814u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10820u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10828u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1083Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10860u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10868u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10874u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1087Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10884u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A108A0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A108A8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A108BCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A108C4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A108E0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A108F0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10904u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1090Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10918u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10928u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A1093Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10960u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10974u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10980u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10990u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A109A4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A109D8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A109E4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A109F0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A109F4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10A18u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10A20u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10A40u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10A4Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10A54u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10A5Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10A68u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10A70u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10A80u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10A88u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10A9Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10AB8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10AD4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10ADCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10AF8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10B04u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10B0Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10B14u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10B34u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10B40u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10B4Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10B58u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10B68u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10B70u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10B7Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10B84u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10B98u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10BD8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10BE0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10BF8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10C00u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10C18u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10C20u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10C28u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10C30u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10C34u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10C48u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10C50u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10C5Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10C64u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10C6Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10C90u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10CA4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10CB0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10CD4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10CDCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10D00u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10D24u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10D30u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10D38u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10D48u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10D50u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10D60u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10D68u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10D6Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10D7Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10DA0u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10DE8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10E10u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10E1Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10E2Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10E70u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10EA4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10EDCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10EF8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10F00u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10F08u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10F24u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10F2Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10F34u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10F3Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10F5Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10F6Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10F84u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10F8Cu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10F94u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10F98u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10FACu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10FBCu, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10FC8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10FD8u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10FE4u, &recomp_unit_0524, "recomp_unit_0524");
    runtime.register_function(0x08A10FF4u, &recomp_unit_0524, "recomp_unit_0524");
}
} // namespace psprecomp
