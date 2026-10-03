#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0124[1022] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28,
    0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38,
    0, 0, 39, 0, 0, 40, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0,
    73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0,
    0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94,
    0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0,
    105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0,
    0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126,
    0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0,
    137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0,
    0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158,
    0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0,
    169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0,
    0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190,
    0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0,
    201, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 210,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221,
};
void recomp_unit_0124_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08880000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0124[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08880000;
    case 2u: goto L_08880004;
    case 3u: goto L_08880058;
    case 4u: goto L_08880068;
    case 5u: goto L_08880080;
    case 6u: goto L_0888008C;
    case 7u: goto L_088800B4;
    case 8u: goto L_088800C8;
    case 9u: goto L_08880114;
    case 10u: goto L_08880120;
    case 11u: goto L_088801C0;
    case 12u: goto L_088801F8;
    case 13u: goto L_08880208;
    case 14u: goto L_08880210;
    case 15u: goto L_0888021C;
    case 16u: goto L_08880230;
    case 17u: goto L_08880244;
    case 18u: goto L_0888024C;
    case 19u: goto L_08880264;
    case 20u: goto L_08880274;
    case 21u: goto L_0888027C;
    case 22u: goto L_08880288;
    case 23u: goto L_08880304;
    case 24u: goto L_0888031C;
    case 25u: goto L_08880328;
    case 26u: goto L_08880354;
    case 27u: goto L_08880378;
    case 28u: goto L_0888037C;
    case 29u: goto L_08880394;
    case 30u: goto L_0888039C;
    case 31u: goto L_088803AC;
    case 32u: goto L_088803B4;
    case 33u: goto L_088803C4;
    case 34u: goto L_088803CC;
    case 35u: goto L_088803D4;
    case 36u: goto L_088803DC;
    case 37u: goto L_088803F4;
    case 38u: goto L_088803FC;
    case 39u: goto L_08880408;
    case 40u: goto L_08880414;
    case 41u: goto L_08880418;
    case 42u: goto L_08880438;
    case 43u: goto L_08880464;
    case 44u: goto L_088804E8;
    case 45u: goto L_088804F4;
    case 46u: goto L_08880514;
    case 47u: goto L_08880520;
    case 48u: goto L_0888052C;
    case 49u: goto L_08880548;
    case 50u: goto L_0888054C;
    case 51u: goto L_08880560;
    case 52u: goto L_0888057C;
    case 53u: goto L_08880594;
    case 54u: goto L_088805A4;
    case 55u: goto L_088805AC;
    case 56u: goto L_088805CC;
    case 57u: goto L_088805DC;
    case 58u: goto L_08880630;
    case 59u: goto L_08880644;
    case 60u: goto L_08880650;
    case 61u: goto L_08880658;
    case 62u: goto L_08880690;
    case 63u: goto L_08880698;
    case 64u: goto L_088806BC;
    case 65u: goto L_08880704;
    case 66u: goto L_08880724;
    case 67u: goto L_08880738;
    case 68u: goto L_08880744;
    case 69u: goto L_08880750;
    case 70u: goto L_0888075C;
    case 71u: goto L_08880768;
    case 72u: goto L_08880774;
    case 73u: goto L_08880780;
    case 74u: goto L_0888078C;
    case 75u: goto L_08880798;
    case 76u: goto L_088807A4;
    case 77u: goto L_088807B0;
    case 78u: goto L_088807BC;
    case 79u: goto L_088807C8;
    case 80u: goto L_088807D4;
    case 81u: goto L_088807E0;
    case 82u: goto L_088807EC;
    case 83u: goto L_088807F8;
    case 84u: goto L_08880804;
    case 85u: goto L_08880810;
    case 86u: goto L_0888081C;
    case 87u: goto L_08880828;
    case 88u: goto L_08880834;
    case 89u: goto L_08880840;
    case 90u: goto L_0888084C;
    case 91u: goto L_08880858;
    case 92u: goto L_08880864;
    case 93u: goto L_08880870;
    case 94u: goto L_0888087C;
    case 95u: goto L_08880888;
    case 96u: goto L_08880894;
    case 97u: goto L_088808A0;
    case 98u: goto L_088808AC;
    case 99u: goto L_088808B8;
    case 100u: goto L_088808C4;
    case 101u: goto L_088808D0;
    case 102u: goto L_088808DC;
    case 103u: goto L_088808E8;
    case 104u: goto L_088808F4;
    case 105u: goto L_08880900;
    case 106u: goto L_0888090C;
    case 107u: goto L_08880918;
    case 108u: goto L_08880924;
    case 109u: goto L_08880930;
    case 110u: goto L_0888093C;
    case 111u: goto L_08880948;
    case 112u: goto L_08880954;
    case 113u: goto L_08880960;
    case 114u: goto L_0888096C;
    case 115u: goto L_08880978;
    case 116u: goto L_08880984;
    case 117u: goto L_08880990;
    case 118u: goto L_0888099C;
    case 119u: goto L_088809A8;
    case 120u: goto L_088809B4;
    case 121u: goto L_088809C0;
    case 122u: goto L_088809CC;
    case 123u: goto L_088809D8;
    case 124u: goto L_088809E4;
    case 125u: goto L_088809F0;
    case 126u: goto L_088809FC;
    case 127u: goto L_08880A08;
    case 128u: goto L_08880A14;
    case 129u: goto L_08880A20;
    case 130u: goto L_08880A2C;
    case 131u: goto L_08880A38;
    case 132u: goto L_08880A44;
    case 133u: goto L_08880A50;
    case 134u: goto L_08880A5C;
    case 135u: goto L_08880A68;
    case 136u: goto L_08880A74;
    case 137u: goto L_08880A80;
    case 138u: goto L_08880A8C;
    case 139u: goto L_08880A98;
    case 140u: goto L_08880AA4;
    case 141u: goto L_08880AB0;
    case 142u: goto L_08880ABC;
    case 143u: goto L_08880AC8;
    case 144u: goto L_08880AD4;
    case 145u: goto L_08880AE0;
    case 146u: goto L_08880AEC;
    case 147u: goto L_08880AF8;
    case 148u: goto L_08880B04;
    case 149u: goto L_08880B10;
    case 150u: goto L_08880B1C;
    case 151u: goto L_08880B28;
    case 152u: goto L_08880B34;
    case 153u: goto L_08880B40;
    case 154u: goto L_08880B4C;
    case 155u: goto L_08880B58;
    case 156u: goto L_08880B64;
    case 157u: goto L_08880B70;
    case 158u: goto L_08880B7C;
    case 159u: goto L_08880B88;
    case 160u: goto L_08880B94;
    case 161u: goto L_08880BA0;
    case 162u: goto L_08880BAC;
    case 163u: goto L_08880BB8;
    case 164u: goto L_08880BC4;
    case 165u: goto L_08880BD0;
    case 166u: goto L_08880BDC;
    case 167u: goto L_08880BE8;
    case 168u: goto L_08880BF4;
    case 169u: goto L_08880C00;
    case 170u: goto L_08880C0C;
    case 171u: goto L_08880C18;
    case 172u: goto L_08880C24;
    case 173u: goto L_08880C30;
    case 174u: goto L_08880C3C;
    case 175u: goto L_08880C48;
    case 176u: goto L_08880C54;
    case 177u: goto L_08880C60;
    case 178u: goto L_08880C6C;
    case 179u: goto L_08880C78;
    case 180u: goto L_08880C84;
    case 181u: goto L_08880C90;
    case 182u: goto L_08880C9C;
    case 183u: goto L_08880CA8;
    case 184u: goto L_08880CB4;
    case 185u: goto L_08880CC0;
    case 186u: goto L_08880CCC;
    case 187u: goto L_08880CD8;
    case 188u: goto L_08880CE4;
    case 189u: goto L_08880CF0;
    case 190u: goto L_08880CFC;
    case 191u: goto L_08880D08;
    case 192u: goto L_08880D14;
    case 193u: goto L_08880D20;
    case 194u: goto L_08880D2C;
    case 195u: goto L_08880D38;
    case 196u: goto L_08880D44;
    case 197u: goto L_08880D50;
    case 198u: goto L_08880D5C;
    case 199u: goto L_08880D6C;
    case 200u: goto L_08880D78;
    case 201u: goto L_08880D80;
    case 202u: goto L_08880D8C;
    case 203u: goto L_08880D94;
    case 204u: goto L_08880DA4;
    case 205u: goto L_08880DB0;
    case 206u: goto L_08880E14;
    case 207u: goto L_08880E24;
    case 208u: goto L_08880E60;
    case 209u: goto L_08880E78;
    case 210u: goto L_08880E7C;
    case 211u: goto L_08880E98;
    case 212u: goto L_08880EA8;
    case 213u: goto L_08880EC0;
    case 214u: goto L_08880F08;
    case 215u: goto L_08880F28;
    case 216u: goto L_08880F3C;
    case 217u: goto L_08880FB0;
    case 218u: goto L_08880FC0;
    case 219u: goto L_08880FDC;
    case 220u: goto L_08880FEC;
    case 221u: goto L_08880FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08880000:
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(148));
    goto L_08880004;
L_08880004:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(144))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(146))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(148))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[5] = (aot_gpr[30] | 0u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[31] = (0x08880058u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 94u, 0x088C6878u>(ctx, &aot_mem) && ctx.pc == 0x08880058u) goto L_08880058;
    return;
L_08880058:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(21)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_0888024C;
    }
    goto L_08880068;
L_08880068:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_0888008C;
      }
      goto L_08880080;
    }
L_08880080:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0888008C;
L_0888008C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[30] - aot_fpr[12];
    aot_fpr[20] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088800B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 109u, 0x088C69F8u>(ctx, &aot_mem) && ctx.pc == 0x088800B4u) goto L_088800B4;
    return;
L_088800B4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(146));
    aot_gpr[31] = (0x088800C8u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 92u, 0x088C67DCu>(ctx, &aot_mem) && ctx.pc == 0x088800C8u) goto L_088800C8;
    return;
L_088800C8:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(144))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(146))))));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(148))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[30] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[30] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[28] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[28] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[30] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[30] = fs * ft; }
    { const float fs = aot_fpr[28]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[28] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[28] = fs * ft; }
    aot_gpr[31] = (0x08880114u);
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 94u, 0x088C6878u>(ctx, &aot_mem) && ctx.pc == 0x08880114u) goto L_08880114;
    return;
L_08880114:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08880120u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 109u, 0x088C69F8u>(ctx, &aot_mem) && ctx.pc == 0x08880120u) goto L_08880120;
    return;
L_08880120:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_fpr[13] = aot_fpr[24] - aot_fpr[12];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = aot_fpr[28]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    aot_fpr[14] = aot_fpr[15] + aot_fpr[14];
    aot_fpr[16] = aot_fpr[17] + aot_fpr[16];
    aot_fpr[18] = aot_fpr[2] + aot_fpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = aot_fpr[19] + aot_fpr[14];
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[5] = (aot_gpr[30] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[31] = (0x088801C0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 58u, 0x0888467Cu>(ctx, &aot_mem) && ctx.pc == 0x088801C0u) goto L_088801C0;
    return;
L_088801C0:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3020)));
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088801F8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088801F8u) goto L_088801F8;
    return;
L_088801F8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08880208u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 31u, 0x088CF218u>(ctx, &aot_mem) && ctx.pc == 0x08880208u) goto L_08880208;
    return;
L_08880208:
    aot_gpr[31] = (0x08880210u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 98u, 0x088C6944u>(ctx, &aot_mem) && ctx.pc == 0x08880210u) goto L_08880210;
    return;
L_08880210:
    aot_gpr[4] = (aot_gpr[2] & 32u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08880230;
      }
      goto L_0888021C;
    }
L_0888021C:
    aot_gpr[4] = (aot_gpr[16] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7508)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08880244;
      }
      goto L_08880230;
    }
L_08880230:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[4] = (aot_gpr[16] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_08880244;
L_08880244:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08880264;
      }
      goto L_0888024C;
    }
L_0888024C:
    aot_gpr[4] = (aot_gpr[4] | 20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_08880264;
L_08880264:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 174u, 0x0887FF54u>(ctx, &aot_mem); return;
      }
      goto L_08880274;
    }
L_08880274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880418;
      }
      goto L_0888027C;
    }
L_0888027C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880418;
      }
      goto L_08880288;
    }
L_08880288:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4444)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[22];
    aot_gpr[5] = (18176u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = aot_fpr[14] / aot_fpr[22];
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(144))))));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(146), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[22];
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(146))))));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[31] = (0x08880304u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(148))))));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 91u, 0x088C67A8u>(ctx, &aot_mem) && ctx.pc == 0x08880304u) goto L_08880304;
    return;
L_08880304:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(164));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(168));
    aot_gpr[31] = (0x0888031Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 65u, 0x088847E8u>(ctx, &aot_mem) && ctx.pc == 0x0888031Cu) goto L_0888031C;
    return;
L_0888031C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08880328u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 93u, 0x088C6804u>(ctx, &aot_mem) && ctx.pc == 0x08880328u) goto L_08880328;
    return;
L_08880328:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (17150u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[31] = (0x08880354u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 95u, 0x088C6914u>(ctx, &aot_mem) && ctx.pc == 0x08880354u) goto L_08880354;
    return;
L_08880354:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(33)));
    aot_gpr[9] = (0u | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(492)));
      if (branch_taken) {
          goto L_0888037C;
      }
      goto L_08880378;
    }
L_08880378:
    aot_gpr[9] = (0u | 1u);
    goto L_0888037C;
L_0888037C:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[16] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888039C;
      }
      goto L_08880394;
    }
L_08880394:
    aot_gpr[9] = (aot_gpr[9] | 2u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    goto L_0888039C;
L_0888039C:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088803B4;
      }
      goto L_088803AC;
    }
L_088803AC:
    aot_gpr[9] = (aot_gpr[9] | 4u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    goto L_088803B4;
L_088803B4:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088803CC;
      }
      goto L_088803C4;
    }
L_088803C4:
    aot_gpr[9] = (aot_gpr[9] | 8u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    goto L_088803CC;
L_088803CC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088803DC;
      }
      goto L_088803D4;
    }
L_088803D4:
    aot_gpr[9] = (aot_gpr[9] | 16u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    goto L_088803DC;
L_088803DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (aot_gpr[8] ^ aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088803FC;
      }
      goto L_088803F4;
    }
L_088803F4:
    aot_gpr[9] = (aot_gpr[9] | 32u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    goto L_088803FC;
L_088803FC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08880408u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 97u, 0x088C6934u>(ctx, &aot_mem) && ctx.pc == 0x08880408u) goto L_08880408;
    return;
L_08880408:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08880414u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 109u, 0x088C69F8u>(ctx, &aot_mem) && ctx.pc == 0x08880414u) goto L_08880414;
    return;
L_08880414:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7508)));
    goto L_08880418;
L_08880418:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 167u, 0x0887FEFCu>(ctx, &aot_mem); return;
      }
      goto L_08880438;
    }
L_08880438:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4444)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_088806BC;
      }
      goto L_08880464;
    }
L_08880464:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[5] = (18804u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | 9216u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2137), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2136), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2140), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2144), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2156), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2160), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2164), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2168), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (2215u << 16u);
      if (branch_taken) {
          goto L_08880514;
      }
      goto L_088804E8;
    }
L_088804E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088804F4u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 111u, 0x088C6A28u>(ctx, &aot_mem) && ctx.pc == 0x088804F4u) goto L_088804F4;
    return;
L_088804F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    goto L_08880514;
L_08880514:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08880520u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 99u, 0x088C6950u>(ctx, &aot_mem) && ctx.pc == 0x08880520u) goto L_08880520;
    return;
L_08880520:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0888052Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 99u, 0x088C6950u>(ctx, &aot_mem) && ctx.pc == 0x0888052Cu) goto L_0888052C;
    return;
L_0888052C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(27980)));
    aot_gpr[4] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[21] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(20))))));
      if (branch_taken) {
          goto L_0888054C;
      }
      goto L_08880548;
    }
L_08880548:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    goto L_0888054C;
L_0888054C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5808)));
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088806BC;
      }
      goto L_08880560;
    }
L_08880560:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] | 20u);
    aot_gpr[31] = (0x0888057Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x0888057Cu) goto L_0888057C;
    return;
L_0888057C:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08880594u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 40u, 0x0882C3D8u>(ctx, &aot_mem) && ctx.pc == 0x08880594u) goto L_08880594;
    return;
L_08880594:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x088805A4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 21u, 0x088BC15Cu>(ctx, &aot_mem) && ctx.pc == 0x088805A4u) goto L_088805A4;
    return;
L_088805A4:
    aot_gpr[31] = (0x088805ACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x088805ACu) goto L_088805AC;
    return;
L_088805AC:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3024)));
    aot_gpr[16] = (aot_gpr[16] & 255u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08880698;
    }
    goto L_088805CC;
L_088805CC:
    aot_gpr[4] = (aot_gpr[16] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(27980), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088805DCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x088805DCu) goto L_088805DC;
    return;
L_088805DC:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4444), aot_gpr[22]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27416)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08880644;
      }
      goto L_08880630;
    }
L_08880630:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
      if (branch_taken) {
          goto L_08880650;
      }
      goto L_08880644;
    }
L_08880644:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    goto L_08880650;
L_08880650:
    aot_gpr[31] = (0x08880658u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 157u, 0x088B1AE8u>(ctx, &aot_mem) && ctx.pc == 0x08880658u) goto L_08880658;
    return;
L_08880658:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[31] = (0x08880690u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x08880690u) goto L_08880690;
    return;
L_08880690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088806BC;
      }
      goto L_08880698;
    }
L_08880698:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[31] = (0x088806BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088806BCu) goto L_088806BC;
    return;
L_088806BC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880704:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25760), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880724:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08880738u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880738u) goto L_08880738;
    return;
L_08880738:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x08880744u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880744u) goto L_08880744;
    return;
L_08880744:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x08880750u);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880750u) goto L_08880750;
    return;
L_08880750:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0888075Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x0888075Cu) goto L_0888075C;
    return;
L_0888075C:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08880768u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880768u) goto L_08880768;
    return;
L_08880768:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08880774u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880774u) goto L_08880774;
    return;
L_08880774:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08880780u);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880780u) goto L_08880780;
    return;
L_08880780:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0888078Cu);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x0888078Cu) goto L_0888078C;
    return;
L_0888078C:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x08880798u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880798u) goto L_08880798;
    return;
L_08880798:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x088807A4u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088807A4u) goto L_088807A4;
    return;
L_088807A4:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x088807B0u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088807B0u) goto L_088807B0;
    return;
L_088807B0:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x088807BCu);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088807BCu) goto L_088807BC;
    return;
L_088807BC:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x088807C8u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088807C8u) goto L_088807C8;
    return;
L_088807C8:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x088807D4u);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088807D4u) goto L_088807D4;
    return;
L_088807D4:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x088807E0u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088807E0u) goto L_088807E0;
    return;
L_088807E0:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x088807ECu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088807ECu) goto L_088807EC;
    return;
L_088807EC:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x088807F8u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088807F8u) goto L_088807F8;
    return;
L_088807F8:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08880804u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880804u) goto L_08880804;
    return;
L_08880804:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08880810u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880810u) goto L_08880810;
    return;
L_08880810:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x0888081Cu);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x0888081Cu) goto L_0888081C;
    return;
L_0888081C:
    aot_gpr[4] = (0u | 6u);
    aot_gpr[31] = (0x08880828u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880828u) goto L_08880828;
    return;
L_08880828:
    aot_gpr[4] = (0u | 6u);
    aot_gpr[31] = (0x08880834u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880834u) goto L_08880834;
    return;
L_08880834:
    aot_gpr[4] = (0u | 6u);
    aot_gpr[31] = (0x08880840u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880840u) goto L_08880840;
    return;
L_08880840:
    aot_gpr[4] = (0u | 6u);
    aot_gpr[31] = (0x0888084Cu);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x0888084Cu) goto L_0888084C;
    return;
L_0888084C:
    aot_gpr[4] = (0u | 6u);
    aot_gpr[31] = (0x08880858u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880858u) goto L_08880858;
    return;
L_08880858:
    aot_gpr[4] = (0u | 6u);
    aot_gpr[31] = (0x08880864u);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880864u) goto L_08880864;
    return;
L_08880864:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[31] = (0x08880870u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880870u) goto L_08880870;
    return;
L_08880870:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[31] = (0x0888087Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x0888087Cu) goto L_0888087C;
    return;
L_0888087C:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[31] = (0x08880888u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880888u) goto L_08880888;
    return;
L_08880888:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[31] = (0x08880894u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880894u) goto L_08880894;
    return;
L_08880894:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[31] = (0x088808A0u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088808A0u) goto L_088808A0;
    return;
L_088808A0:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[31] = (0x088808ACu);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088808ACu) goto L_088808AC;
    return;
L_088808AC:
    aot_gpr[4] = (0u | 8u);
    aot_gpr[31] = (0x088808B8u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088808B8u) goto L_088808B8;
    return;
L_088808B8:
    aot_gpr[4] = (0u | 8u);
    aot_gpr[31] = (0x088808C4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088808C4u) goto L_088808C4;
    return;
L_088808C4:
    aot_gpr[4] = (0u | 8u);
    aot_gpr[31] = (0x088808D0u);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088808D0u) goto L_088808D0;
    return;
L_088808D0:
    aot_gpr[4] = (0u | 8u);
    aot_gpr[31] = (0x088808DCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088808DCu) goto L_088808DC;
    return;
L_088808DC:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x088808E8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088808E8u) goto L_088808E8;
    return;
L_088808E8:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x088808F4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088808F4u) goto L_088808F4;
    return;
L_088808F4:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x08880900u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880900u) goto L_08880900;
    return;
L_08880900:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x0888090Cu);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x0888090Cu) goto L_0888090C;
    return;
L_0888090C:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x08880918u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880918u) goto L_08880918;
    return;
L_08880918:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x08880924u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880924u) goto L_08880924;
    return;
L_08880924:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x08880930u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880930u) goto L_08880930;
    return;
L_08880930:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x0888093Cu);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x0888093Cu) goto L_0888093C;
    return;
L_0888093C:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x08880948u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880948u) goto L_08880948;
    return;
L_08880948:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x08880954u);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880954u) goto L_08880954;
    return;
L_08880954:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x08880960u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880960u) goto L_08880960;
    return;
L_08880960:
    aot_gpr[4] = (0u | 11u);
    aot_gpr[31] = (0x0888096Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x0888096Cu) goto L_0888096C;
    return;
L_0888096C:
    aot_gpr[4] = (0u | 11u);
    aot_gpr[31] = (0x08880978u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880978u) goto L_08880978;
    return;
L_08880978:
    aot_gpr[4] = (0u | 11u);
    aot_gpr[31] = (0x08880984u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880984u) goto L_08880984;
    return;
L_08880984:
    aot_gpr[4] = (0u | 11u);
    aot_gpr[31] = (0x08880990u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880990u) goto L_08880990;
    return;
L_08880990:
    aot_gpr[4] = (0u | 11u);
    aot_gpr[31] = (0x0888099Cu);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x0888099Cu) goto L_0888099C;
    return;
L_0888099C:
    aot_gpr[4] = (0u | 11u);
    aot_gpr[31] = (0x088809A8u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088809A8u) goto L_088809A8;
    return;
L_088809A8:
    aot_gpr[4] = (0u | 11u);
    aot_gpr[31] = (0x088809B4u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088809B4u) goto L_088809B4;
    return;
L_088809B4:
    aot_gpr[4] = (0u | 11u);
    aot_gpr[31] = (0x088809C0u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088809C0u) goto L_088809C0;
    return;
L_088809C0:
    aot_gpr[4] = (0u | 11u);
    aot_gpr[31] = (0x088809CCu);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088809CCu) goto L_088809CC;
    return;
L_088809CC:
    aot_gpr[4] = (0u | 12u);
    aot_gpr[31] = (0x088809D8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088809D8u) goto L_088809D8;
    return;
L_088809D8:
    aot_gpr[4] = (0u | 12u);
    aot_gpr[31] = (0x088809E4u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088809E4u) goto L_088809E4;
    return;
L_088809E4:
    aot_gpr[4] = (0u | 12u);
    aot_gpr[31] = (0x088809F0u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088809F0u) goto L_088809F0;
    return;
L_088809F0:
    aot_gpr[4] = (0u | 12u);
    aot_gpr[31] = (0x088809FCu);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x088809FCu) goto L_088809FC;
    return;
L_088809FC:
    aot_gpr[4] = (0u | 12u);
    aot_gpr[31] = (0x08880A08u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A08u) goto L_08880A08;
    return;
L_08880A08:
    aot_gpr[4] = (0u | 12u);
    aot_gpr[31] = (0x08880A14u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A14u) goto L_08880A14;
    return;
L_08880A14:
    aot_gpr[4] = (0u | 12u);
    aot_gpr[31] = (0x08880A20u);
    aot_gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A20u) goto L_08880A20;
    return;
L_08880A20:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x08880A2Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A2Cu) goto L_08880A2C;
    return;
L_08880A2C:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x08880A38u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A38u) goto L_08880A38;
    return;
L_08880A38:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x08880A44u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A44u) goto L_08880A44;
    return;
L_08880A44:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x08880A50u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A50u) goto L_08880A50;
    return;
L_08880A50:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x08880A5Cu);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A5Cu) goto L_08880A5C;
    return;
L_08880A5C:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x08880A68u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A68u) goto L_08880A68;
    return;
L_08880A68:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x08880A74u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A74u) goto L_08880A74;
    return;
L_08880A74:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x08880A80u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A80u) goto L_08880A80;
    return;
L_08880A80:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x08880A8Cu);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A8Cu) goto L_08880A8C;
    return;
L_08880A8C:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x08880A98u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880A98u) goto L_08880A98;
    return;
L_08880A98:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x08880AA4u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880AA4u) goto L_08880AA4;
    return;
L_08880AA4:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x08880AB0u);
    aot_gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880AB0u) goto L_08880AB0;
    return;
L_08880AB0:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880ABCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880ABCu) goto L_08880ABC;
    return;
L_08880ABC:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880AC8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880AC8u) goto L_08880AC8;
    return;
L_08880AC8:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880AD4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880AD4u) goto L_08880AD4;
    return;
L_08880AD4:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880AE0u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880AE0u) goto L_08880AE0;
    return;
L_08880AE0:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880AECu);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880AECu) goto L_08880AEC;
    return;
L_08880AEC:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880AF8u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880AF8u) goto L_08880AF8;
    return;
L_08880AF8:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880B04u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B04u) goto L_08880B04;
    return;
L_08880B04:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880B10u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B10u) goto L_08880B10;
    return;
L_08880B10:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880B1Cu);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B1Cu) goto L_08880B1C;
    return;
L_08880B1C:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880B28u);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B28u) goto L_08880B28;
    return;
L_08880B28:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880B34u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B34u) goto L_08880B34;
    return;
L_08880B34:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880B40u);
    aot_gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B40u) goto L_08880B40;
    return;
L_08880B40:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08880B4Cu);
    aot_gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B4Cu) goto L_08880B4C;
    return;
L_08880B4C:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880B58u);
    aot_gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B58u) goto L_08880B58;
    return;
L_08880B58:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880B64u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B64u) goto L_08880B64;
    return;
L_08880B64:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880B70u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B70u) goto L_08880B70;
    return;
L_08880B70:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880B7Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B7Cu) goto L_08880B7C;
    return;
L_08880B7C:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880B88u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B88u) goto L_08880B88;
    return;
L_08880B88:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880B94u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880B94u) goto L_08880B94;
    return;
L_08880B94:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880BA0u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880BA0u) goto L_08880BA0;
    return;
L_08880BA0:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880BACu);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880BACu) goto L_08880BAC;
    return;
L_08880BAC:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880BB8u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880BB8u) goto L_08880BB8;
    return;
L_08880BB8:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880BC4u);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880BC4u) goto L_08880BC4;
    return;
L_08880BC4:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880BD0u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880BD0u) goto L_08880BD0;
    return;
L_08880BD0:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880BDCu);
    aot_gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880BDCu) goto L_08880BDC;
    return;
L_08880BDC:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x08880BE8u);
    aot_gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880BE8u) goto L_08880BE8;
    return;
L_08880BE8:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880BF4u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880BF4u) goto L_08880BF4;
    return;
L_08880BF4:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C00u);
    aot_gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C00u) goto L_08880C00;
    return;
L_08880C00:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C0Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C0Cu) goto L_08880C0C;
    return;
L_08880C0C:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C18u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C18u) goto L_08880C18;
    return;
L_08880C18:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C24u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C24u) goto L_08880C24;
    return;
L_08880C24:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C30u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C30u) goto L_08880C30;
    return;
L_08880C30:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C3Cu);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C3Cu) goto L_08880C3C;
    return;
L_08880C3C:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C48u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C48u) goto L_08880C48;
    return;
L_08880C48:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C54u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C54u) goto L_08880C54;
    return;
L_08880C54:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C60u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C60u) goto L_08880C60;
    return;
L_08880C60:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C6Cu);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C6Cu) goto L_08880C6C;
    return;
L_08880C6C:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C78u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C78u) goto L_08880C78;
    return;
L_08880C78:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C84u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C84u) goto L_08880C84;
    return;
L_08880C84:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C90u);
    aot_gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C90u) goto L_08880C90;
    return;
L_08880C90:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x08880C9Cu);
    aot_gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880C9Cu) goto L_08880C9C;
    return;
L_08880C9C:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880CA8u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880CA8u) goto L_08880CA8;
    return;
L_08880CA8:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880CB4u);
    aot_gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880CB4u) goto L_08880CB4;
    return;
L_08880CB4:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880CC0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880CC0u) goto L_08880CC0;
    return;
L_08880CC0:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880CCCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880CCCu) goto L_08880CCC;
    return;
L_08880CCC:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880CD8u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880CD8u) goto L_08880CD8;
    return;
L_08880CD8:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880CE4u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880CE4u) goto L_08880CE4;
    return;
L_08880CE4:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880CF0u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880CF0u) goto L_08880CF0;
    return;
L_08880CF0:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880CFCu);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880CFCu) goto L_08880CFC;
    return;
L_08880CFC:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880D08u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880D08u) goto L_08880D08;
    return;
L_08880D08:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880D14u);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880D14u) goto L_08880D14;
    return;
L_08880D14:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880D20u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880D20u) goto L_08880D20;
    return;
L_08880D20:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880D2Cu);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880D2Cu) goto L_08880D2C;
    return;
L_08880D2C:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880D38u);
    aot_gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880D38u) goto L_08880D38;
    return;
L_08880D38:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880D44u);
    aot_gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880D44u) goto L_08880D44;
    return;
L_08880D44:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08880D50u);
    aot_gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 206u, 0x0894BFA8u>(ctx, &aot_mem) && ctx.pc == 0x08880D50u) goto L_08880D50;
    return;
L_08880D50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880D5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08880D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0326_entry, 326u, 99u, 0x0894AB98u>(ctx, &aot_mem) && ctx.pc == 0x08880D6Cu) goto L_08880D6C;
    return;
L_08880D6C:
    aot_gpr[4] = (2184u << 16u);
    aot_gpr[31] = (0x08880D78u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4552));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 84u, 0x0894B5FCu>(ctx, &aot_mem) && ctx.pc == 0x08880D78u) goto L_08880D78;
    return;
L_08880D78:
    aot_gpr[31] = (0x08880D80u);
    // nop
    goto L_08880724;
L_08880D80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880D8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880D94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08880DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0326_entry, 326u, 104u, 0x0894ACD8u>(ctx, &aot_mem) && ctx.pc == 0x08880DA4u) goto L_08880DA4;
    return;
L_08880DA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880DB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08880E14u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 165u, 0x088CBBECu>(ctx, &aot_mem) && ctx.pc == 0x08880E14u) goto L_08880E14;
    return;
L_08880E14:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08880E24u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 165u, 0x088CBBECu>(ctx, &aot_mem) && ctx.pc == 0x08880E24u) goto L_08880E24;
    return;
L_08880E24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08880E60u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 57u, 0x088FC400u>(ctx, &aot_mem) && ctx.pc == 0x08880E60u) goto L_08880E60;
    return;
L_08880E60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E7C;
      }
      goto L_08880E78;
    }
L_08880E78:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_08880E7C;
L_08880E7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(736)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08880E98u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 69u, 0x08867554u>(ctx, &aot_mem) && ctx.pc == 0x08880E98u) goto L_08880E98;
    return;
L_08880E98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(744)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08880EA8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 26u, 0x088D321Cu>(ctx, &aot_mem) && ctx.pc == 0x08880EA8u) goto L_08880EA8;
    return;
L_08880EA8:
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
L_08880EC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08880F08u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 165u, 0x088CBBECu>(ctx, &aot_mem) && ctx.pc == 0x08880F08u) goto L_08880F08;
    return;
L_08880F08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(736)));
    aot_gpr[5] = (15107u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[5] | 4719u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x08880F28u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 75u, 0x088675C4u>(ctx, &aot_mem) && ctx.pc == 0x08880F28u) goto L_08880F28;
    return;
L_08880F28:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880F3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_gpr[5] = (16180u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 65012u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880FF4;
      }
      goto L_08880FB0;
    }
L_08880FB0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08880FC0u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 165u, 0x088CBBECu>(ctx, &aot_mem) && ctx.pc == 0x08880FC0u) goto L_08880FC0;
    return;
L_08880FC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(736)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08880FDCu);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 72u, 0x0886758Cu>(ctx, &aot_mem) && ctx.pc == 0x08880FDCu) goto L_08880FDC;
    return;
L_08880FDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(744)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08880FECu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 33u, 0x088D3330u>(ctx, &aot_mem) && ctx.pc == 0x08880FECu) goto L_08880FEC;
    return;
L_08880FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 1u, 0x08881000u>(ctx, &aot_mem); return;
      }
      goto L_08880FF4;
    }
L_08880FF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(364), aot_gpr[5]);
    ctx.pc = 0x08881000u; return;
}

void recomp_unit_0124(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0124_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_124(Runtime &runtime) {
    runtime.register_generated_unit(124u, 0x08880000u, 4096u, &recomp_unit_0124, &recomp_unit_0124_entry);
    runtime.register_function(0x08880000u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880004u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880058u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880068u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880080u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888008Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088800B4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088800C8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880114u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880120u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088801C0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088801F8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880208u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880210u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888021Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880230u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880244u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888024Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880264u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880274u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888027Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880288u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880304u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888031Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880328u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880354u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880378u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888037Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880394u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888039Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088803ACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088803B4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088803C4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088803CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088803D4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088803DCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088803F4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088803FCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880408u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880414u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880418u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880438u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880464u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088804E8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088804F4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880514u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880520u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888052Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880548u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888054Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880560u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888057Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880594u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088805A4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088805ACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088805CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088805DCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880630u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880644u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880650u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880658u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880690u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880698u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088806BCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880704u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880724u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880738u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880744u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880750u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888075Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880768u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880774u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880780u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888078Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880798u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088807A4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088807B0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088807BCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088807C8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088807D4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088807E0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088807ECu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088807F8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880804u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880810u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888081Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880828u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880834u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880840u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888084Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880858u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880864u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880870u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888087Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880888u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880894u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088808A0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088808ACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088808B8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088808C4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088808D0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088808DCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088808E8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088808F4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880900u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888090Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880918u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880924u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880930u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888093Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880948u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880954u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880960u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888096Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880978u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880984u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880990u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x0888099Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088809A8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088809B4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088809C0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088809CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088809D8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088809E4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088809F0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x088809FCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A08u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A14u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A20u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A2Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A38u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A44u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A50u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A5Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A68u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A74u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A80u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A8Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880A98u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880AA4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880AB0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880ABCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880AC8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880AD4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880AE0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880AECu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880AF8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B04u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B10u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B1Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B28u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B34u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B40u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B4Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B58u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B64u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B70u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B7Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B88u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880B94u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880BA0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880BACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880BB8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880BC4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880BD0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880BDCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880BE8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880BF4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C00u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C0Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C18u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C24u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C30u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C3Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C48u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C54u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C60u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C6Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C78u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C84u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C90u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880C9Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880CA8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880CB4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880CC0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880CCCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880CD8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880CE4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880CF0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880CFCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D08u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D14u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D20u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D2Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D38u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D44u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D50u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D5Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D6Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D78u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D80u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D8Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880D94u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880DA4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880DB0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880E14u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880E24u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880E60u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880E78u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880E7Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880E98u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880EA8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880EC0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880F08u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880F28u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880F3Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880FB0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880FC0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880FDCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880FECu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x08880FF4u, &recomp_unit_0124, "recomp_unit_0124");
}
} // namespace psprecomp
