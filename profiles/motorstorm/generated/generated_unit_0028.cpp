#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0028[1024] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0,
    0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0,
    29, 0, 0, 30, 0, 31, 32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 40, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 45, 46, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59,
    0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 75,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 78, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0,
    84, 0, 0, 85, 0, 0, 86, 87, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 105,
    0, 106, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 112, 0, 0, 0, 113, 0,
    0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0,
    140, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 160, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    163, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 199, 0, 0, 0, 200,
    0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0,
    210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0,
    0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 227,
};
void recomp_unit_0028_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08820000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0028[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08820000;
    case 2u: goto L_08820014;
    case 3u: goto L_08820028;
    case 4u: goto L_08820038;
    case 5u: goto L_08820040;
    case 6u: goto L_0882005C;
    case 7u: goto L_08820068;
    case 8u: goto L_08820074;
    case 9u: goto L_0882008C;
    case 10u: goto L_08820098;
    case 11u: goto L_088200A4;
    case 12u: goto L_088200BC;
    case 13u: goto L_088200C8;
    case 14u: goto L_088200D4;
    case 15u: goto L_088200EC;
    case 16u: goto L_08820108;
    case 17u: goto L_08820120;
    case 18u: goto L_0882012C;
    case 19u: goto L_08820154;
    case 20u: goto L_08820160;
    case 21u: goto L_08820184;
    case 22u: goto L_08820188;
    case 23u: goto L_088201AC;
    case 24u: goto L_088201B4;
    case 25u: goto L_088201BC;
    case 26u: goto L_088201C0;
    case 27u: goto L_088201E4;
    case 28u: goto L_088201F4;
    case 29u: goto L_08820200;
    case 30u: goto L_0882020C;
    case 31u: goto L_08820214;
    case 32u: goto L_08820218;
    case 33u: goto L_08820230;
    case 34u: goto L_0882023C;
    case 35u: goto L_0882025C;
    case 36u: goto L_0882027C;
    case 37u: goto L_0882028C;
    case 38u: goto L_08820298;
    case 39u: goto L_088202BC;
    case 40u: goto L_088202C0;
    case 41u: goto L_088202C8;
    case 42u: goto L_088202D8;
    case 43u: goto L_088202E4;
    case 44u: goto L_08820308;
    case 45u: goto L_0882030C;
    case 46u: goto L_08820310;
    case 47u: goto L_0882031C;
    case 48u: goto L_08820324;
    case 49u: goto L_0882033C;
    case 50u: goto L_08820348;
    case 51u: goto L_08820368;
    case 52u: goto L_08820388;
    case 53u: goto L_08820390;
    case 54u: goto L_088203B4;
    case 55u: goto L_088203C8;
    case 56u: goto L_088203D4;
    case 57u: goto L_088203D8;
    case 58u: goto L_088203E4;
    case 59u: goto L_088203FC;
    case 60u: goto L_08820408;
    case 61u: goto L_08820414;
    case 62u: goto L_0882041C;
    case 63u: goto L_08820440;
    case 64u: goto L_08820448;
    case 65u: goto L_08820464;
    case 66u: goto L_0882046C;
    case 67u: goto L_0882047C;
    case 68u: goto L_08820498;
    case 69u: goto L_088204A4;
    case 70u: goto L_088204B4;
    case 71u: goto L_088204D0;
    case 72u: goto L_088204D8;
    case 73u: goto L_088204E8;
    case 74u: goto L_088204F8;
    case 75u: goto L_088204FC;
    case 76u: goto L_08820518;
    case 77u: goto L_08820530;
    case 78u: goto L_08820534;
    case 79u: goto L_08820548;
    case 80u: goto L_08820550;
    case 81u: goto L_08820558;
    case 82u: goto L_08820560;
    case 83u: goto L_08820568;
    case 84u: goto L_08820580;
    case 85u: goto L_0882058C;
    case 86u: goto L_08820598;
    case 87u: goto L_0882059C;
    case 88u: goto L_088205A4;
    case 89u: goto L_088205BC;
    case 90u: goto L_088205C8;
    case 91u: goto L_088205E8;
    case 92u: goto L_08820610;
    case 93u: goto L_08820620;
    case 94u: goto L_08820628;
    case 95u: goto L_08820638;
    case 96u: goto L_08820640;
    case 97u: goto L_08820664;
    case 98u: goto L_08820670;
    case 99u: goto L_0882067C;
    case 100u: goto L_08820684;
    case 101u: goto L_088206BC;
    case 102u: goto L_08820744;
    case 103u: goto L_08820764;
    case 104u: goto L_0882076C;
    case 105u: goto L_0882077C;
    case 106u: goto L_08820784;
    case 107u: goto L_08820788;
    case 108u: goto L_0882079C;
    case 109u: goto L_088207BC;
    case 110u: goto L_088207E0;
    case 111u: goto L_088207E4;
    case 112u: goto L_088207E8;
    case 113u: goto L_088207F8;
    case 114u: goto L_08820804;
    case 115u: goto L_0882080C;
    case 116u: goto L_08820814;
    case 117u: goto L_0882081C;
    case 118u: goto L_08820824;
    case 119u: goto L_0882082C;
    case 120u: goto L_0882084C;
    case 121u: goto L_0882086C;
    case 122u: goto L_08820874;
    case 123u: goto L_0882089C;
    case 124u: goto L_088208A8;
    case 125u: goto L_088208C0;
    case 126u: goto L_088208CC;
    case 127u: goto L_088208D8;
    case 128u: goto L_088208E0;
    case 129u: goto L_088208E8;
    case 130u: goto L_0882090C;
    case 131u: goto L_0882091C;
    case 132u: goto L_08820924;
    case 133u: goto L_0882092C;
    case 134u: goto L_08820934;
    case 135u: goto L_08820940;
    case 136u: goto L_08820960;
    case 137u: goto L_08820968;
    case 138u: goto L_08820970;
    case 139u: goto L_08820978;
    case 140u: goto L_08820980;
    case 141u: goto L_08820988;
    case 142u: goto L_08820990;
    case 143u: goto L_0882099C;
    case 144u: goto L_088209BC;
    case 145u: goto L_088209C4;
    case 146u: goto L_088209CC;
    case 147u: goto L_088209D4;
    case 148u: goto L_088209F8;
    case 149u: goto L_08820A08;
    case 150u: goto L_08820A10;
    case 151u: goto L_08820A28;
    case 152u: goto L_08820A2C;
    case 153u: goto L_08820A4C;
    case 154u: goto L_08820A54;
    case 155u: goto L_08820A64;
    case 156u: goto L_08820A90;
    case 157u: goto L_08820ACC;
    case 158u: goto L_08820ADC;
    case 159u: goto L_08820AF0;
    case 160u: goto L_08820B10;
    case 161u: goto L_08820B14;
    case 162u: goto L_08820B68;
    case 163u: goto L_08820B80;
    case 164u: goto L_08820B88;
    case 165u: goto L_08820BA0;
    case 166u: goto L_08820BAC;
    case 167u: goto L_08820BBC;
    case 168u: goto L_08820BDC;
    case 169u: goto L_08820BFC;
    case 170u: goto L_08820C04;
    case 171u: goto L_08820C28;
    case 172u: goto L_08820C3C;
    case 173u: goto L_08820C48;
    case 174u: goto L_08820C68;
    case 175u: goto L_08820C88;
    case 176u: goto L_08820C90;
    case 177u: goto L_08820CB4;
    case 178u: goto L_08820CBC;
    case 179u: goto L_08820CC8;
    case 180u: goto L_08820CE8;
    case 181u: goto L_08820D08;
    case 182u: goto L_08820D10;
    case 183u: goto L_08820D34;
    case 184u: goto L_08820D38;
    case 185u: goto L_08820D4C;
    case 186u: goto L_08820D58;
    case 187u: goto L_08820D78;
    case 188u: goto L_08820D98;
    case 189u: goto L_08820DA0;
    case 190u: goto L_08820DC4;
    case 191u: goto L_08820DD0;
    case 192u: goto L_08820DDC;
    case 193u: goto L_08820DFC;
    case 194u: goto L_08820E1C;
    case 195u: goto L_08820E24;
    case 196u: goto L_08820E48;
    case 197u: goto L_08820E50;
    case 198u: goto L_08820E68;
    case 199u: goto L_08820E6C;
    case 200u: goto L_08820E7C;
    case 201u: goto L_08820E84;
    case 202u: goto L_08820E94;
    case 203u: goto L_08820EA8;
    case 204u: goto L_08820EAC;
    case 205u: goto L_08820EBC;
    case 206u: goto L_08820EC4;
    case 207u: goto L_08820ED4;
    case 208u: goto L_08820EEC;
    case 209u: goto L_08820EF4;
    case 210u: goto L_08820F00;
    case 211u: goto L_08820F0C;
    case 212u: goto L_08820F18;
    case 213u: goto L_08820F34;
    case 214u: goto L_08820F4C;
    case 215u: goto L_08820F64;
    case 216u: goto L_08820F74;
    case 217u: goto L_08820F84;
    case 218u: goto L_08820F90;
    case 219u: goto L_08820FA0;
    case 220u: goto L_08820FAC;
    case 221u: goto L_08820FC8;
    case 222u: goto L_08820FD0;
    case 223u: goto L_08820FD8;
    case 224u: goto L_08820FE0;
    case 225u: goto L_08820FEC;
    case 226u: goto L_08820FF4;
    case 227u: goto L_08820FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08820000:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08820028;
      }
      goto L_08820014;
    }
L_08820014:
    aot_fpr[12] = aot_fpr[24] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(716), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(692), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08820038;
      }
      goto L_08820028;
    }
L_08820028:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[24];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(692), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(716), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08820038;
L_08820038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088200D4;
      }
      goto L_08820040;
    }
L_08820040:
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(22));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[6] = (aot_gpr[11] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0882005Cu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x0882005Cu) goto L_0882005C;
    return;
L_0882005C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820074;
      }
      goto L_08820068;
    }
L_08820068:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08820074u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x08820074u) goto L_08820074;
    return;
L_08820074:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 7u);
    aot_gpr[6] = (aot_gpr[11] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0882008Cu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x0882008Cu) goto L_0882008C;
    return;
L_0882008C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088200A4;
      }
      goto L_08820098;
    }
L_08820098:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088200A4u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x088200A4u) goto L_088200A4;
    return;
L_088200A4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 8u);
    aot_gpr[6] = (aot_gpr[11] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088200BCu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x088200BCu) goto L_088200BC;
    return;
L_088200BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088200D4;
      }
      goto L_088200C8;
    }
L_088200C8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088200D4u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x088200D4u) goto L_088200D4;
    return;
L_088200D4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 9u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088200ECu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x088200ECu) goto L_088200EC;
    return;
L_088200EC:
    aot_gpr[4] = (15948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[28] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (48716u << 16u);
      if (branch_taken) {
          goto L_088201BC;
      }
      goto L_08820108;
    }
L_08820108:
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[28] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7652)));
        goto L_088201C0;
    }
    goto L_08820120;
L_08820120:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[4] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7652)));
        goto L_08820188;
    }
    goto L_0882012C;
L_0882012C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1148), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1152), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x08820154u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08820154u) goto L_08820154;
    return;
L_08820154:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08820160u);
    aot_gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x08820160u) goto L_08820160;
    return;
L_08820160:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 9u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08820184u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x08820184u) goto L_08820184;
    return;
L_08820184:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7652)));
    goto L_08820188;
L_08820188:
    aot_gpr[4] = (16512u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1148)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088201B4;
      }
      goto L_088201AC;
    }
L_088201AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1148), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    goto L_088201B4;
L_088201B4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(740), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08820218;
      }
      goto L_088201BC;
    }
L_088201BC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7652)));
    goto L_088201C0;
L_088201C0:
    aot_gpr[4] = (16608u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1148)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08820214;
      }
      goto L_088201E4;
    }
L_088201E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1148), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820218;
      }
      goto L_088201F4;
    }
L_088201F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08820200u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x08820200u) goto L_08820200;
    return;
L_08820200:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882020Cu);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x0882020Cu) goto L_0882020C;
    return;
L_0882020C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1152), 0u);
      if (branch_taken) {
          goto L_08820218;
      }
      goto L_08820214;
    }
L_08820214:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(740), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08820218;
L_08820218:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 9u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08820230u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x08820230u) goto L_08820230;
    return;
L_08820230:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820310;
      }
      goto L_0882023C;
    }
L_0882023C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x0882025Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0882025Cu) goto L_0882025C;
    return;
L_0882025C:
    aot_gpr[4] = (16384u << 16u);
    ctx.set_fpu_condition((aot_fpr[26] < aot_fpr[30]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1148)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_088202C8;
      }
      goto L_0882027C;
    }
L_0882027C:
    aot_fpr[12] = aot_fpr[24] - aot_fpr[12];
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088202C0;
      }
      goto L_0882028C;
    }
L_0882028C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08820298u);
    aot_gpr[5] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x08820298u) goto L_08820298;
    return;
L_08820298:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 10u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088202BCu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x088202BCu) goto L_088202BC;
    return;
L_088202BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1152), aot_gpr[18]);
    goto L_088202C0;
L_088202C0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(764), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08820310;
      }
      goto L_088202C8;
    }
L_088202C8:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[24];
    aot_gpr[18] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0882030C;
      }
      goto L_088202D8;
    }
L_088202D8:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088202E4u);
    aot_gpr[5] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x088202E4u) goto L_088202E4;
    return;
L_088202E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 10u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08820308u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x08820308u) goto L_08820308;
    return;
L_08820308:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1152), aot_gpr[18]);
    goto L_0882030C;
L_0882030C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(764), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08820310;
L_08820310:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1360)));
      if (branch_taken) {
          goto L_0882041C;
      }
      goto L_0882031C;
    }
L_0882031C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088203E4;
      }
      goto L_08820324;
    }
L_08820324:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(23));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0882033Cu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x0882033Cu) goto L_0882033C;
    return;
L_0882033C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(23)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088203B4;
      }
      goto L_08820348;
    }
L_08820348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x08820368u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08820368u) goto L_08820368;
    return;
L_08820368:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u | 13u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 9u);
        goto L_08820388;
    }
    goto L_08820388;
L_08820388:
    aot_gpr[31] = (0x08820390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x08820390u) goto L_08820390;
    return;
L_08820390:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 5u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088203B4u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x088203B4u) goto L_088203B4;
    return;
L_088203B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(656)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1156)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1360)));
      if (branch_taken) {
          goto L_088203D4;
      }
      goto L_088203C8;
    }
L_088203C8:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
      if (branch_taken) {
          goto L_088203D8;
      }
      goto L_088203D4;
    }
L_088203D4:
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    goto L_088203D8;
L_088203D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1040), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(644), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0882041C;
      }
      goto L_088203E4;
    }
L_088203E4:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088203FCu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x088203FCu) goto L_088203FC;
    return;
L_088203FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820414;
      }
      goto L_08820408;
    }
L_08820408:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08820414u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x08820414u) goto L_08820414;
    return;
L_08820414:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1352)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1360)));
    goto L_0882041C;
L_0882041C:
    aot_gpr[4] = (15948u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1356), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08820448;
      }
      goto L_08820440;
    }
L_08820440:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1356), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_08820448;
L_08820448:
    aot_gpr[4] = (48716u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882046C;
      }
      goto L_08820464;
    }
L_08820464:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1356), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_0882046C;
L_0882046C:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (15322u << 16u);
      if (branch_taken) {
          goto L_088204A4;
      }
      goto L_0882047C;
    }
L_0882047C:
    aot_gpr[4] = (aot_gpr[4] | 29711u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1360), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088204D8;
      }
      goto L_08820498;
    }
L_08820498:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1360), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088204D8;
      }
      goto L_088204A4;
    }
L_088204A4:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (15322u << 16u);
      if (branch_taken) {
          goto L_088204D8;
      }
      goto L_088204B4;
    }
L_088204B4:
    aot_gpr[4] = (aot_gpr[4] | 29711u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1360), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088204D8;
      }
      goto L_088204D0;
    }
L_088204D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1360), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088204D8;
L_088204D8:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088204F8;
      }
      goto L_088204E8;
    }
L_088204E8:
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088204FC;
      }
      goto L_088204F8;
    }
L_088204F8:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    goto L_088204FC;
L_088204FC:
    aot_gpr[4] = (15692u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08820550;
      }
      goto L_08820518;
    }
L_08820518:
    aot_fpr[20] = aot_fpr[12] - aot_fpr[15];
    aot_fpr[20] = aot_fpr[20] / aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08820534;
      }
      goto L_08820530;
    }
L_08820530:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    goto L_08820534;
L_08820534:
    aot_gpr[4] = (0u | 1u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08820548;
    }
    goto L_08820548;
L_08820548:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1352), aot_gpr[4]);
      if (branch_taken) {
          goto L_08820558;
      }
      goto L_08820550;
    }
L_08820550:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1352), 0u);
    aot_gpr[4] = (0u | 0u);
    goto L_08820558;
L_08820558:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08820568;
      }
      goto L_08820560;
    }
L_08820560:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882059C;
      }
      goto L_08820568;
    }
L_08820568:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(25));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08820580u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x08820580u) goto L_08820580;
    return;
L_08820580:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820598;
      }
      goto L_0882058C;
    }
L_0882058C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08820598u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x08820598u) goto L_08820598;
    return;
L_08820598:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1352)));
    goto L_0882059C;
L_0882059C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820684;
      }
      goto L_088205A4;
    }
L_088205A4:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(26));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088205BCu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x088205BCu) goto L_088205BC;
    return;
L_088205BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820664;
      }
      goto L_088205C8;
    }
L_088205C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x088205E8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088205E8u) goto L_088205E8;
    return;
L_088205E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1352)));
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 0 ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_08820628;
      }
      goto L_08820610;
    }
L_08820610:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 11u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 23u);
        goto L_08820620;
    }
    goto L_08820620;
L_08820620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820638;
      }
      goto L_08820628;
    }
L_08820628:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 12u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 23u);
        goto L_08820638;
    }
    goto L_08820638;
L_08820638:
    aot_gpr[31] = (0x08820640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x08820640u) goto L_08820640;
    return;
L_08820640:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 3u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08820664u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x08820664u) goto L_08820664;
    return;
L_08820664:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(608)));
    if (aot_gpr[4] == 0u) {
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
        goto L_0882067C;
    }
    goto L_08820670;
L_08820670:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_0882067C;
      }
      goto L_0882067C;
    }
L_0882067C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1032), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(596), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08820684;
L_08820684:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088206BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16800u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1380)));
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    aot_gpr[5] = (16128u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_08820784;
      }
      goto L_08820744;
    }
L_08820744:
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_0882076C;
    }
    goto L_08820764;
L_08820764:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_0882077C;
      }
      goto L_0882076C;
    }
L_0882076C:
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_0882077C;
    }
    goto L_0882077C;
L_0882077C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820788;
      }
      goto L_08820784;
    }
L_08820784:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    goto L_08820788;
L_08820788:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088207E8;
      }
      goto L_0882079C;
    }
L_0882079C:
    aot_gpr[5] = (15820u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088207E8;
      }
      goto L_088207BC;
    }
L_088207BC:
    aot_gpr[4] = (16153u << 16u);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[4] = (aot_gpr[4] | 39321u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088207E4;
      }
      goto L_088207E0;
    }
L_088207E0:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_088207E4;
L_088207E4:
    aot_gpr[4] = (0u | 1u);
    goto L_088207E8;
L_088207E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1372)));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820A10;
      }
      goto L_088207F8;
    }
L_088207F8:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088208E0;
      }
      goto L_08820804;
    }
L_08820804:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0882092C;
      }
      goto L_0882080C;
    }
L_0882080C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08820970;
      }
      goto L_08820814;
    }
L_08820814:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08820988;
      }
      goto L_0882081C;
    }
L_0882081C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_088209CC;
      }
      goto L_08820824;
    }
L_08820824:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088208A8;
      }
      goto L_0882082C;
    }
L_0882082C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x0882084Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0882084Cu) goto L_0882084C;
    return;
L_0882084C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u | 35u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 23u);
        goto L_0882086C;
    }
    goto L_0882086C;
L_0882086C:
    aot_gpr[31] = (0x08820874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x08820874u) goto L_08820874;
    return;
L_08820874:
    aot_gpr[17] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (0u | 11u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0882089Cu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0882089Cu) goto L_0882089C;
    return;
L_0882089C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1376), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1372), aot_gpr[17]);
      if (branch_taken) {
          goto L_088208D8;
      }
      goto L_088208A8;
    }
L_088208A8:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 11u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088208C0u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x088208C0u) goto L_088208C0;
    return;
L_088208C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088208D8;
      }
      goto L_088208CC;
    }
L_088208CC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088208D8u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x088208D8u) goto L_088208D8;
    return;
L_088208D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820A10;
      }
      goto L_088208E0;
    }
L_088208E0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (15624u << 16u);
      if (branch_taken) {
          goto L_0882091C;
      }
      goto L_088208E8;
    }
L_088208E8:
    aot_gpr[4] = (aot_gpr[4] | 34953u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1376)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1376), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08820924;
      }
      goto L_0882090C;
    }
L_0882090C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1376), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1372), aot_gpr[4]);
      if (branch_taken) {
          goto L_08820924;
      }
      goto L_0882091C;
    }
L_0882091C:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1372), aot_gpr[4]);
    goto L_08820924;
L_08820924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820A10;
      }
      goto L_0882092C;
    }
L_0882092C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (15624u << 16u);
      if (branch_taken) {
          goto L_08820940;
      }
      goto L_08820934;
    }
L_08820934:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1372), aot_gpr[4]);
      if (branch_taken) {
          goto L_08820968;
      }
      goto L_08820940;
    }
L_08820940:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1376)));
    aot_gpr[4] = (aot_gpr[4] | 34953u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1376), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08820968;
      }
      goto L_08820960;
    }
L_08820960:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1376), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1372), 0u);
    goto L_08820968;
L_08820968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820A10;
      }
      goto L_08820970;
    }
L_08820970:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820980;
      }
      goto L_08820978;
    }
L_08820978:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1372), aot_gpr[4]);
    goto L_08820980;
L_08820980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820A10;
      }
      goto L_08820988;
    }
L_08820988:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (15624u << 16u);
      if (branch_taken) {
          goto L_0882099C;
      }
      goto L_08820990;
    }
L_08820990:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1372), aot_gpr[4]);
      if (branch_taken) {
          goto L_088209C4;
      }
      goto L_0882099C;
    }
L_0882099C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1376)));
    aot_gpr[4] = (aot_gpr[4] | 34953u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1376), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088209C4;
      }
      goto L_088209BC;
    }
L_088209BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1376), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1372), 0u);
    goto L_088209C4;
L_088209C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820A10;
      }
      goto L_088209CC;
    }
L_088209CC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (15624u << 16u);
      if (branch_taken) {
          goto L_08820A08;
      }
      goto L_088209D4;
    }
L_088209D4:
    aot_gpr[4] = (aot_gpr[4] | 34953u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1376)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1376), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08820A10;
      }
      goto L_088209F8;
    }
L_088209F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1376), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1372), aot_gpr[4]);
      if (branch_taken) {
          goto L_08820A10;
      }
      goto L_08820A08;
    }
L_08820A08:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1372), aot_gpr[4]);
    goto L_08820A10;
L_08820A10:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1376)));
    aot_fpr[26] = aot_fpr[26] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[26] < aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_08820A2C;
      }
      goto L_08820A28;
    }
L_08820A28:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]) ^ 0x80000000u);
    goto L_08820A2C;
L_08820A2C:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[22] - aot_fpr[13];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_08820A54;
    }
    goto L_08820A4C;
L_08820A4C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_08820A64;
      }
      goto L_08820A54;
    }
L_08820A54:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_08820A64;
    }
    goto L_08820A64;
L_08820A64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1064), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(788), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820A90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1180)));
    aot_gpr[6] = (15820u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(416)));
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_08820B68;
      }
      goto L_08820ACC;
    }
L_08820ACC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1176)));
    aot_gpr[6] = (16256u << 16u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_08820AF0;
      }
      goto L_08820ADC;
    }
L_08820ADC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1168), 0u);
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1172), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1184), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1188), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_08820AF0;
L_08820AF0:
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1176), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1180), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1184)));
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1188)));
      if (branch_taken) {
          goto L_08820B14;
      }
      goto L_08820B10;
    }
L_08820B10:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1180), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_08820B14;
L_08820B14:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1948)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1932)));
    aot_fpr[13] = aot_fpr[13] / aot_fpr[15];
    aot_gpr[5] = (15948u << 16u);
    aot_gpr[6] = (16204u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1188), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1184), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08820B88;
      }
      goto L_08820B68;
    }
L_08820B68:
    aot_fpr[13] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1180), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08820B88;
      }
      goto L_08820B80;
    }
L_08820B80:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1180), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1176), static_cast<std::uint8_t>(0u));
    goto L_08820B88;
L_08820B88:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08820BA0u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x08820BA0u) goto L_08820BA0;
    return;
L_08820BA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08820EEC;
      }
      goto L_08820BAC;
    }
L_08820BAC:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_08820C28;
      }
      goto L_08820BBC;
    }
L_08820BBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x08820BDCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08820BDCu) goto L_08820BDC;
    return;
L_08820BDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u | 40u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 23u);
        goto L_08820BFC;
    }
    goto L_08820BFC;
L_08820BFC:
    aot_gpr[31] = (0x08820C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x08820C04u) goto L_08820C04;
    return;
L_08820C04:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 12u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08820C28u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x08820C28u) goto L_08820C28;
    return;
L_08820C28:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1168)));
      if (branch_taken) {
          goto L_08820CBC;
      }
      goto L_08820C3C;
    }
L_08820C3C:
    aot_gpr[17] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08820D38;
      }
      goto L_08820C48;
    }
L_08820C48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x08820C68u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08820C68u) goto L_08820C68;
    return;
L_08820C68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u | 38u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 23u);
        goto L_08820C88;
    }
    goto L_08820C88;
L_08820C88:
    aot_gpr[31] = (0x08820C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x08820C90u) goto L_08820C90;
    return;
L_08820C90:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 14u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08820CB4u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x08820CB4u) goto L_08820CB4;
    return;
L_08820CB4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1168), aot_gpr[17]);
      if (branch_taken) {
          goto L_08820D38;
      }
      goto L_08820CBC;
    }
L_08820CBC:
    aot_gpr[17] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08820D38;
      }
      goto L_08820CC8;
    }
L_08820CC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x08820CE8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08820CE8u) goto L_08820CE8;
    return;
L_08820CE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u | 39u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 23u);
        goto L_08820D08;
    }
    goto L_08820D08;
L_08820D08:
    aot_gpr[31] = (0x08820D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x08820D10u) goto L_08820D10;
    return;
L_08820D10:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 14u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08820D34u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x08820D34u) goto L_08820D34;
    return;
L_08820D34:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1168), aot_gpr[17]);
    goto L_08820D38;
L_08820D38:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1172)));
      if (branch_taken) {
          goto L_08820DD0;
      }
      goto L_08820D4C;
    }
L_08820D4C:
    aot_gpr[17] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08820E50;
      }
      goto L_08820D58;
    }
L_08820D58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x08820D78u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08820D78u) goto L_08820D78;
    return;
L_08820D78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u | 36u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 23u);
        goto L_08820D98;
    }
    goto L_08820D98;
L_08820D98:
    aot_gpr[31] = (0x08820DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x08820DA0u) goto L_08820DA0;
    return;
L_08820DA0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 13u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08820DC4u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x08820DC4u) goto L_08820DC4;
    return;
L_08820DC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1172), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1184)));
      if (branch_taken) {
          goto L_08820E50;
      }
      goto L_08820DD0;
    }
L_08820DD0:
    aot_gpr[17] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08820E50;
      }
      goto L_08820DDC;
    }
L_08820DDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x08820DFCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08820DFCu) goto L_08820DFC;
    return;
L_08820DFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u | 37u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 23u);
        goto L_08820E1C;
    }
    goto L_08820E1C;
L_08820E1C:
    aot_gpr[31] = (0x08820E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x08820E24u) goto L_08820E24;
    return;
L_08820E24:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 13u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08820E48u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x08820E48u) goto L_08820E48;
    return;
L_08820E48:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1172), aot_gpr[17]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1184)));
    goto L_08820E50;
L_08820E50:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1180)));
      if (branch_taken) {
          goto L_08820E6C;
      }
      goto L_08820E68;
    }
L_08820E68:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    goto L_08820E6C;
L_08820E6C:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08820E84;
      }
      goto L_08820E7C;
    }
L_08820E7C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_08820E94;
      }
      goto L_08820E84;
    }
L_08820E84:
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_08820E94;
    }
    goto L_08820E94;
L_08820E94:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08820EAC;
      }
      goto L_08820EA8;
    }
L_08820EA8:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    goto L_08820EAC;
L_08820EAC:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08820EC4;
      }
      goto L_08820EBC;
    }
L_08820EBC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_08820ED4;
      }
      goto L_08820EC4;
    }
L_08820EC4:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_08820ED4;
    }
    goto L_08820ED4;
L_08820ED4:
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(812), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(860), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(836), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08820F18;
      }
      goto L_08820EEC;
    }
L_08820EEC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820F18;
      }
      goto L_08820EF4;
    }
L_08820EF4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08820F00u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x08820F00u) goto L_08820F00;
    return;
L_08820F00:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08820F0Cu);
    aot_gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x08820F0Cu) goto L_08820F0C;
    return;
L_08820F0C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08820F18u);
    aot_gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x08820F18u) goto L_08820F18;
    return;
L_08820F18:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820F34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[12] = (0u | 15u);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    goto L_08820F4C;
L_08820F4C:
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[5] = (aot_gpr[12] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08820F64u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x08820F64u) goto L_08820F64;
    return;
L_08820F64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08820F90;
      }
      goto L_08820F74;
    }
L_08820F74:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08820F90;
      }
      goto L_08820F84;
    }
L_08820F84:
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[31] = (0x08820F90u);
    aot_gpr[5] = (aot_gpr[12] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x08820F90u) goto L_08820F90;
    return;
L_08820F90:
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[12]) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820F4C;
      }
      goto L_08820FA0;
    }
L_08820FA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820FAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08820FD8;
    }
    goto L_08820FC8;
L_08820FC8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08820FFC;
      }
      goto L_08820FD0;
    }
L_08820FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 9u, 0x08821040u>(ctx, &aot_mem); return;
      }
      goto L_08820FD8;
    }
L_08820FD8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820FFC;
      }
      goto L_08820FE0;
    }
L_08820FE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820FF4;
      }
      goto L_08820FEC;
    }
L_08820FEC:
    aot_gpr[31] = (0x08820FF4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 134u, 0x0881EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08820FF4u) goto L_08820FF4;
    return;
L_08820FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 9u, 0x08821040u>(ctx, &aot_mem); return;
      }
      goto L_08820FFC;
    }
L_08820FFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.pc = 0x08821000u; return;
}

void recomp_unit_0028(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0028_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_28(Runtime &runtime) {
    runtime.register_generated_unit(28u, 0x08820000u, 4096u, &recomp_unit_0028, &recomp_unit_0028_entry);
    runtime.register_function(0x08820000u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820014u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820028u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820038u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820040u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882005Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820068u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820074u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882008Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820098u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088200A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088200BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088200C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088200D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088200ECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820108u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820120u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882012Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820154u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820160u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820184u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820188u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088201ACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088201B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088201BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088201C0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088201E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088201F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820200u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882020Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820214u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820218u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820230u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882023Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882025Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882027Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882028Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820298u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088202BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088202C0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088202C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088202D8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088202E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820308u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882030Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820310u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882031Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820324u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882033Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820348u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820368u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820388u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820390u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088203B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088203C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088203D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088203D8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088203E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088203FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820408u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820414u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882041Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820440u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820448u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820464u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882046Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882047Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820498u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088204A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088204B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088204D0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088204D8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088204E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088204F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088204FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820518u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820530u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820534u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820548u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820550u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820558u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820560u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820568u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820580u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882058Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820598u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882059Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088205A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088205BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088205C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088205E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820610u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820620u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820628u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820638u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820640u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820664u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820670u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882067Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820684u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088206BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820744u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820764u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882076Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882077Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820784u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820788u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882079Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088207BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088207E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088207E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088207E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088207F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820804u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882080Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820814u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882081Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820824u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882082Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882084Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882086Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820874u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882089Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088208A8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088208C0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088208CCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088208D8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088208E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088208E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882090Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882091Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820924u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882092Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820934u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820940u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820960u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820968u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820970u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820978u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820980u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820988u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820990u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0882099Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088209BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088209C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088209CCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088209D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088209F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820A08u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820A10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820A28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820A2Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820A4Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820A54u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820A64u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820A90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820ACCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820ADCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820AF0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820B10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820B14u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820B68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820B80u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820B88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820BA0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820BACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820BBCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820BDCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820BFCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820C04u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820C28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820C3Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820C48u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820C68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820C88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820C90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820CB4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820CBCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820CC8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820CE8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820D08u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820D10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820D34u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820D38u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820D4Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820D58u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820D78u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820D98u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820DA0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820DC4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820DD0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820DDCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820DFCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820E1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820E24u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820E48u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820E50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820E68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820E6Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820E7Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820E84u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820E94u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820EA8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820EACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820EBCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820EC4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820ED4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820EECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820EF4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820F00u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820F0Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820F18u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820F34u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820F4Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820F64u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820F74u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820F84u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820F90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820FA0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820FACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820FC8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820FD0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820FD8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820FE0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820FECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820FF4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08820FFCu, &recomp_unit_0028, "recomp_unit_0028");
}
} // namespace psprecomp
