#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0084[1021] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 7, 0, 0, 0, 0, 0,
    0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0,
    0, 16, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 45, 0, 0, 46, 0, 47,
    0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0,
    72, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0,
    82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126,
    0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 133,
    0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0,
    160, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182,
    0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 193,
    0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209,
    0, 210, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226,
};
void recomp_unit_0084_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08858000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0084[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08858000;
    case 2u: goto L_08858014;
    case 3u: goto L_0885802C;
    case 4u: goto L_08858050;
    case 5u: goto L_08858058;
    case 6u: goto L_08858064;
    case 7u: goto L_08858068;
    case 8u: goto L_08858084;
    case 9u: goto L_0885808C;
    case 10u: goto L_088580A4;
    case 11u: goto L_088580C0;
    case 12u: goto L_088580D4;
    case 13u: goto L_088580E4;
    case 14u: goto L_088580F0;
    case 15u: goto L_088580F8;
    case 16u: goto L_08858104;
    case 17u: goto L_08858110;
    case 18u: goto L_08858118;
    case 19u: goto L_08858124;
    case 20u: goto L_08858134;
    case 21u: goto L_08858154;
    case 22u: goto L_08858168;
    case 23u: goto L_08858180;
    case 24u: goto L_08858190;
    case 25u: goto L_08858198;
    case 26u: goto L_088581A0;
    case 27u: goto L_088581CC;
    case 28u: goto L_088581F4;
    case 29u: goto L_08858204;
    case 30u: goto L_08858224;
    case 31u: goto L_08858230;
    case 32u: goto L_0885823C;
    case 33u: goto L_08858248;
    case 34u: goto L_08858250;
    case 35u: goto L_08858258;
    case 36u: goto L_08858260;
    case 37u: goto L_08858288;
    case 38u: goto L_08858294;
    case 39u: goto L_088582A8;
    case 40u: goto L_088582B4;
    case 41u: goto L_088582BC;
    case 42u: goto L_088582CC;
    case 43u: goto L_088582D4;
    case 44u: goto L_088582E0;
    case 45u: goto L_088582E8;
    case 46u: goto L_088582F4;
    case 47u: goto L_088582FC;
    case 48u: goto L_08858308;
    case 49u: goto L_0885831C;
    case 50u: goto L_08858328;
    case 51u: goto L_08858330;
    case 52u: goto L_0885833C;
    case 53u: goto L_08858350;
    case 54u: goto L_0885835C;
    case 55u: goto L_08858374;
    case 56u: goto L_08858388;
    case 57u: goto L_08858394;
    case 58u: goto L_0885839C;
    case 59u: goto L_088583B0;
    case 60u: goto L_088583B8;
    case 61u: goto L_088583C0;
    case 62u: goto L_088583D4;
    case 63u: goto L_088583E4;
    case 64u: goto L_08858400;
    case 65u: goto L_08858414;
    case 66u: goto L_0885842C;
    case 67u: goto L_08858434;
    case 68u: goto L_08858460;
    case 69u: goto L_08858468;
    case 70u: goto L_08858470;
    case 71u: goto L_08858478;
    case 72u: goto L_08858480;
    case 73u: goto L_0885848C;
    case 74u: goto L_08858498;
    case 75u: goto L_088584A0;
    case 76u: goto L_088584AC;
    case 77u: goto L_088584B8;
    case 78u: goto L_088584CC;
    case 79u: goto L_088584D8;
    case 80u: goto L_088584E0;
    case 81u: goto L_088584EC;
    case 82u: goto L_08858500;
    case 83u: goto L_0885850C;
    case 84u: goto L_08858514;
    case 85u: goto L_08858520;
    case 86u: goto L_08858534;
    case 87u: goto L_08858540;
    case 88u: goto L_08858548;
    case 89u: goto L_08858554;
    case 90u: goto L_08858568;
    case 91u: goto L_08858574;
    case 92u: goto L_08858588;
    case 93u: goto L_0885859C;
    case 94u: goto L_088585A8;
    case 95u: goto L_088585B0;
    case 96u: goto L_088585C4;
    case 97u: goto L_088585CC;
    case 98u: goto L_088585D4;
    case 99u: goto L_088585E8;
    case 100u: goto L_088585F4;
    case 101u: goto L_08858604;
    case 102u: goto L_08858630;
    case 103u: goto L_08858638;
    case 104u: goto L_08858648;
    case 105u: goto L_08858650;
    case 106u: goto L_08858668;
    case 107u: goto L_08858674;
    case 108u: goto L_08858688;
    case 109u: goto L_0885869C;
    case 110u: goto L_088586A8;
    case 111u: goto L_088586B0;
    case 112u: goto L_088586C4;
    case 113u: goto L_088586CC;
    case 114u: goto L_088586D4;
    case 115u: goto L_088586E0;
    case 116u: goto L_088586F4;
    case 117u: goto L_08858704;
    case 118u: goto L_08858724;
    case 119u: goto L_0885872C;
    case 120u: goto L_08858738;
    case 121u: goto L_08858740;
    case 122u: goto L_08858748;
    case 123u: goto L_08858750;
    case 124u: goto L_0885875C;
    case 125u: goto L_08858770;
    case 126u: goto L_0885877C;
    case 127u: goto L_08858784;
    case 128u: goto L_08858798;
    case 129u: goto L_088587A8;
    case 130u: goto L_088587E4;
    case 131u: goto L_088587EC;
    case 132u: goto L_088587F4;
    case 133u: goto L_088587FC;
    case 134u: goto L_08858814;
    case 135u: goto L_0885881C;
    case 136u: goto L_08858834;
    case 137u: goto L_08858840;
    case 138u: goto L_08858868;
    case 139u: goto L_0885889C;
    case 140u: goto L_088588AC;
    case 141u: goto L_088588C8;
    case 142u: goto L_088588E0;
    case 143u: goto L_088588F4;
    case 144u: goto L_088588FC;
    case 145u: goto L_08858948;
    case 146u: goto L_08858960;
    case 147u: goto L_0885897C;
    case 148u: goto L_08858990;
    case 149u: goto L_088589A4;
    case 150u: goto L_088589C0;
    case 151u: goto L_088589CC;
    case 152u: goto L_088589DC;
    case 153u: goto L_088589EC;
    case 154u: goto L_088589F4;
    case 155u: goto L_08858A04;
    case 156u: goto L_08858A24;
    case 157u: goto L_08858A50;
    case 158u: goto L_08858A6C;
    case 159u: goto L_08858A78;
    case 160u: goto L_08858A80;
    case 161u: goto L_08858A88;
    case 162u: goto L_08858A90;
    case 163u: goto L_08858AA0;
    case 164u: goto L_08858AB4;
    case 165u: goto L_08858AC4;
    case 166u: goto L_08858ACC;
    case 167u: goto L_08858AD4;
    case 168u: goto L_08858AE4;
    case 169u: goto L_08858B0C;
    case 170u: goto L_08858B18;
    case 171u: goto L_08858B30;
    case 172u: goto L_08858B3C;
    case 173u: goto L_08858B4C;
    case 174u: goto L_08858B6C;
    case 175u: goto L_08858B7C;
    case 176u: goto L_08858B88;
    case 177u: goto L_08858C08;
    case 178u: goto L_08858C18;
    case 179u: goto L_08858C2C;
    case 180u: goto L_08858C64;
    case 181u: goto L_08858C70;
    case 182u: goto L_08858C7C;
    case 183u: goto L_08858C88;
    case 184u: goto L_08858C94;
    case 185u: goto L_08858CA4;
    case 186u: goto L_08858CAC;
    case 187u: goto L_08858CB8;
    case 188u: goto L_08858CC0;
    case 189u: goto L_08858CCC;
    case 190u: goto L_08858CD8;
    case 191u: goto L_08858CE4;
    case 192u: goto L_08858CF4;
    case 193u: goto L_08858CFC;
    case 194u: goto L_08858D08;
    case 195u: goto L_08858D10;
    case 196u: goto L_08858D30;
    case 197u: goto L_08858D70;
    case 198u: goto L_08858D88;
    case 199u: goto L_08858D94;
    case 200u: goto L_08858DA0;
    case 201u: goto L_08858DC0;
    case 202u: goto L_08858E00;
    case 203u: goto L_08858E1C;
    case 204u: goto L_08858E24;
    case 205u: goto L_08858E48;
    case 206u: goto L_08858E50;
    case 207u: goto L_08858E58;
    case 208u: goto L_08858E68;
    case 209u: goto L_08858E7C;
    case 210u: goto L_08858E84;
    case 211u: goto L_08858E88;
    case 212u: goto L_08858EA4;
    case 213u: goto L_08858EE4;
    case 214u: goto L_08858F2C;
    case 215u: goto L_08858F4C;
    case 216u: goto L_08858F58;
    case 217u: goto L_08858F64;
    case 218u: goto L_08858F6C;
    case 219u: goto L_08858F84;
    case 220u: goto L_08858F94;
    case 221u: goto L_08858FA4;
    case 222u: goto L_08858FB0;
    case 223u: goto L_08858FB8;
    case 224u: goto L_08858FC8;
    case 225u: goto L_08858FDC;
    case 226u: goto L_08858FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08858000:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(544)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08858014u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x08858014u) goto L_08858014;
    return;
L_08858014:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(612)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(548)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885802Cu);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885802Cu) goto L_0885802C;
    return;
L_0885802C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(540)));
    aot_gpr[4] = (17280u << 16u);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08858058;
      }
      goto L_08858050;
    }
L_08858050:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08858068;
      }
      goto L_08858058;
    }
L_08858058:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08858068;
      }
      goto L_08858064;
    }
L_08858064:
    aot_gpr[4] = (0u | 255u);
    goto L_08858068;
L_08858068:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5108), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0885808C;
      }
      goto L_08858084;
    }
L_08858084:
    aot_gpr[31] = (0x0885808Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 23u, 0x08857200u>(ctx, &aot_mem) && ctx.pc == 0x0885808Cu) goto L_0885808C;
    return;
L_0885808C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088580A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-3216)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088580F8;
      }
      goto L_088580C0;
    }
L_088580C0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088580F8;
      }
      goto L_088580D4;
    }
L_088580D4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[31] = (0x088580E4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 148u, 0x08888EB4u>(ctx, &aot_mem) && ctx.pc == 0x088580E4u) goto L_088580E4;
    return;
L_088580E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088580F0u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x088580F0u) goto L_088580F0;
    return;
L_088580F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858124;
      }
      goto L_088580F8;
    }
L_088580F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858118;
      }
      goto L_08858104;
    }
L_08858104:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08858110u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08858110u) goto L_08858110;
    return;
L_08858110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858124;
      }
      goto L_08858118;
    }
L_08858118:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08858124u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08858124u) goto L_08858124;
    return;
L_08858124:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858134:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08858154u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x08858154u) goto L_08858154;
    return;
L_08858154:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08858330;
      }
      goto L_08858168;
    }
L_08858168:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(3472)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858180:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08858190u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2178)));
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 31u, 0x088D52F0u>(ctx, &aot_mem) && ctx.pc == 0x08858190u) goto L_08858190;
    return;
L_08858190:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08858260;
      }
      goto L_08858198;
    }
L_08858198:
    aot_gpr[31] = (0x088581A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 128u, 0x08888D10u>(ctx, &aot_mem) && ctx.pc == 0x088581A0u) goto L_088581A0;
    return;
L_088581A0:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2178)));
    aot_gpr[4] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-2000));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x088581CCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 108u, 0x088B7764u>(ctx, &aot_mem) && ctx.pc == 0x088581CCu) goto L_088581CC;
    return;
L_088581CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2178)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5104)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088581F4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 153u, 0x088CDC18u>(ctx, &aot_mem) && ctx.pc == 0x088581F4u) goto L_088581F4;
    return;
L_088581F4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858224;
      }
      goto L_08858204;
    }
L_08858204:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08858224u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 184u, 0x088A2CA0u>(ctx, &aot_mem) && ctx.pc == 0x08858224u) goto L_08858224;
    return;
L_08858224:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[31] = (0x08858230u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 154u, 0x088C5AB8u>(ctx, &aot_mem) && ctx.pc == 0x08858230u) goto L_08858230;
    return;
L_08858230:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[31] = (0x0885823Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 131u, 0x088D689Cu>(ctx, &aot_mem) && ctx.pc == 0x0885823Cu) goto L_0885823C;
    return;
L_0885823C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08858248u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 62u, 0x088D8428u>(ctx, &aot_mem) && ctx.pc == 0x08858248u) goto L_08858248;
    return;
L_08858248:
    aot_gpr[31] = (0x08858250u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 158u, 0x088C5AF8u>(ctx, &aot_mem) && ctx.pc == 0x08858250u) goto L_08858250;
    return;
L_08858250:
    aot_gpr[31] = (0x08858258u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088580A4;
L_08858258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088582B4;
      }
      goto L_08858260;
    }
L_08858260:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2178)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5104)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08858288u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 157u, 0x088CDC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08858288u) goto L_08858288;
    return;
L_08858288:
    aot_gpr[4] = (0u | 317u);
    aot_gpr[31] = (0x08858294u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08858294u) goto L_08858294;
    return;
L_08858294:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088582A8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088582A8u) goto L_088582A8;
    return;
L_088582A8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088582B4u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x088582B4u) goto L_088582B4;
    return;
L_088582B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885835C;
      }
      goto L_088582BC;
    }
L_088582BC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 8192u);
    aot_gpr[31] = (0x088582CCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6560));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 89u, 0x089347ACu>(ctx, &aot_mem) && ctx.pc == 0x088582CCu) goto L_088582CC;
    return;
L_088582CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088582E0;
      }
      goto L_088582D4;
    }
L_088582D4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088582E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 22u, 0x088D51E8u>(ctx, &aot_mem) && ctx.pc == 0x088582E0u) goto L_088582E0;
    return;
L_088582E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885835C;
      }
      goto L_088582E8;
    }
L_088582E8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088582F4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x088582F4u) goto L_088582F4;
    return;
L_088582F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885835C;
      }
      goto L_088582FC;
    }
L_088582FC:
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x08858308u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08858308u) goto L_08858308;
    return;
L_08858308:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0885831Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0885831Cu) goto L_0885831C;
    return;
L_0885831C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08858328u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08858328u) goto L_08858328;
    return;
L_08858328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885835C;
      }
      goto L_08858330;
    }
L_08858330:
    aot_gpr[4] = (0u | 33u);
    aot_gpr[31] = (0x0885833Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0885833Cu) goto L_0885833C;
    return;
L_0885833C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08858350u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08858350u) goto L_08858350;
    return;
L_08858350:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885835Cu);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x0885835Cu) goto L_0885835C;
    return;
L_0885835C:
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
L_08858374:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08858388u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08858388u) goto L_08858388;
    return;
L_08858388:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_088583B8;
    }
    goto L_08858394;
L_08858394:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088583D4;
      }
      goto L_0885839C;
    }
L_0885839C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088583B0u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x088583B0u) goto L_088583B0;
    return;
L_088583B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088583D4;
      }
      goto L_088583B8;
    }
L_088583B8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088583D4;
      }
      goto L_088583C0;
    }
L_088583C0:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088583D4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x088583D4u) goto L_088583D4;
    return;
L_088583D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088583E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08858400u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x08858400u) goto L_08858400;
    return;
L_08858400:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08858548;
      }
      goto L_08858414;
    }
L_08858414:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(3520)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885842C:
    aot_gpr[31] = (0x08858434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 128u, 0x08888D10u>(ctx, &aot_mem) && ctx.pc == 0x08858434u) goto L_08858434;
    return;
L_08858434:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2178)));
    aot_gpr[4] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-2000));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x08858460u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 108u, 0x088B7764u>(ctx, &aot_mem) && ctx.pc == 0x08858460u) goto L_08858460;
    return;
L_08858460:
    aot_gpr[31] = (0x08858468u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 117u, 0x088DBA88u>(ctx, &aot_mem) && ctx.pc == 0x08858468u) goto L_08858468;
    return;
L_08858468:
    aot_gpr[31] = (0x08858470u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088580A4;
L_08858470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858574;
      }
      goto L_08858478;
    }
L_08858478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858574;
      }
      goto L_08858480;
    }
L_08858480:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0885848Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 117u, 0x088DBA88u>(ctx, &aot_mem) && ctx.pc == 0x0885848Cu) goto L_0885848C;
    return;
L_0885848C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08858498u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08858498u) goto L_08858498;
    return;
L_08858498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858574;
      }
      goto L_088584A0;
    }
L_088584A0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088584ACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 117u, 0x088DBA88u>(ctx, &aot_mem) && ctx.pc == 0x088584ACu) goto L_088584AC;
    return;
L_088584AC:
    aot_gpr[4] = (0u | 100u);
    aot_gpr[31] = (0x088584B8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088584B8u) goto L_088584B8;
    return;
L_088584B8:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088584CCu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088584CCu) goto L_088584CC;
    return;
L_088584CC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088584D8u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x088584D8u) goto L_088584D8;
    return;
L_088584D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858574;
      }
      goto L_088584E0;
    }
L_088584E0:
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x088584ECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088584ECu) goto L_088584EC;
    return;
L_088584EC:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08858500u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08858500u) goto L_08858500;
    return;
L_08858500:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885850Cu);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x0885850Cu) goto L_0885850C;
    return;
L_0885850C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858574;
      }
      goto L_08858514;
    }
L_08858514:
    aot_gpr[4] = (0u | 38u);
    aot_gpr[31] = (0x08858520u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08858520u) goto L_08858520;
    return;
L_08858520:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08858534u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08858534u) goto L_08858534;
    return;
L_08858534:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08858540u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08858540u) goto L_08858540;
    return;
L_08858540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858574;
      }
      goto L_08858548;
    }
L_08858548:
    aot_gpr[4] = (0u | 35u);
    aot_gpr[31] = (0x08858554u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08858554u) goto L_08858554;
    return;
L_08858554:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08858568u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08858568u) goto L_08858568;
    return;
L_08858568:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08858574u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08858574u) goto L_08858574;
    return;
L_08858574:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858588:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0885859Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x0885859Cu) goto L_0885859C;
    return;
L_0885859C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_088585CC;
    }
    goto L_088585A8;
L_088585A8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088585F4;
      }
      goto L_088585B0;
    }
L_088585B0:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088585C4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x088585C4u) goto L_088585C4;
    return;
L_088585C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088585F4;
      }
      goto L_088585CC;
    }
L_088585CC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088585F4;
      }
      goto L_088585D4;
    }
L_088585D4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088585E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 2u, 0x0888900Cu>(ctx, &aot_mem) && ctx.pc == 0x088585E8u) goto L_088585E8;
    return;
L_088585E8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088585F4u);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x088585F4u) goto L_088585F4;
    return;
L_088585F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858604:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26012)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_08858674;
      }
      goto L_08858630;
    }
L_08858630:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858674;
      }
      goto L_08858638;
    }
L_08858638:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08858648u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(41));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 134u, 0x088DBBACu>(ctx, &aot_mem) && ctx.pc == 0x08858648u) goto L_08858648;
    return;
L_08858648:
    aot_gpr[31] = (0x08858650u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 117u, 0x088DBA88u>(ctx, &aot_mem) && ctx.pc == 0x08858650u) goto L_08858650;
    return;
L_08858650:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2178)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x08858668u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 57u, 0x088CD578u>(ctx, &aot_mem) && ctx.pc == 0x08858668u) goto L_08858668;
    return;
L_08858668:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08858674u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08858674u) goto L_08858674;
    return;
L_08858674:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858688:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0885869Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x0885869Cu) goto L_0885869C;
    return;
L_0885869C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_088586CC;
    }
    goto L_088586A8;
L_088586A8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088586F4;
      }
      goto L_088586B0;
    }
L_088586B0:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088586C4u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x088586C4u) goto L_088586C4;
    return;
L_088586C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088586F4;
      }
      goto L_088586CC;
    }
L_088586CC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088586F4;
      }
      goto L_088586D4;
    }
L_088586D4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088586E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 117u, 0x088DBA88u>(ctx, &aot_mem) && ctx.pc == 0x088586E0u) goto L_088586E0;
    return;
L_088586E0:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088586F4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x088586F4u) goto L_088586F4;
    return;
L_088586F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858704:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26012)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_08858750;
      }
      goto L_08858724;
    }
L_08858724:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858750;
      }
      goto L_0885872C;
    }
L_0885872C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858748;
      }
      goto L_08858738;
    }
L_08858738:
    aot_gpr[31] = (0x08858740u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08858740u) goto L_08858740;
    return;
L_08858740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858750;
      }
      goto L_08858748;
    }
L_08858748:
    aot_gpr[31] = (0x08858750u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08858750u) goto L_08858750;
    return;
L_08858750:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885875C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08858770u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08858770u) goto L_08858770;
    return;
L_08858770:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08858798;
      }
      goto L_0885877C;
    }
L_0885877C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858798;
      }
      goto L_08858784;
    }
L_08858784:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08858798u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x088575FCu>(ctx, &aot_mem) && ctx.pc == 0x08858798u) goto L_08858798;
    return;
L_08858798:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088587A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2884));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088587E4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088587E4u) goto L_088587E4;
    return;
L_088587E4:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08858834;
      }
      goto L_088587EC;
    }
L_088587EC:
    aot_gpr[31] = (0x088587F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 98u, 0x088579CCu>(ctx, &aot_mem) && ctx.pc == 0x088587F4u) goto L_088587F4;
    return;
L_088587F4:
    aot_gpr[31] = (0x088587FCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 81u, 0x0885A514u>(ctx, &aot_mem) && ctx.pc == 0x088587FCu) goto L_088587FC;
    return;
L_088587FC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2228)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885881C;
      }
      goto L_08858814;
    }
L_08858814:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(173), static_cast<std::uint8_t>(aot_gpr[17]));
    goto L_0885881C;
L_0885881C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(512)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x08858834u);
    aot_gpr[5] = (aot_gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 235u, 0x088B7F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08858834u) goto L_08858834;
    return;
L_08858834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08858840u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08858840u) goto L_08858840;
    return;
L_08858840:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[17]));
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
L_08858868:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    goto L_0885889C;
L_0885889C:
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[11] = (aot_gpr[10] | 0u);
    goto L_088588AC;
L_088588AC:
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(432), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(176), 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[8]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088588AC;
      }
      goto L_088588C8;
    }
L_088588C8:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0885889C;
      }
      goto L_088588E0;
    }
L_088588E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_088589A4;
      }
      goto L_088588F4;
    }
L_088588F4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5672));
    aot_gpr[11] = (2215u << 16u);
    goto L_088588FC;
L_088588FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(48)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(50)));
    aot_gpr[8] = (aot_gpr[8] << 5u);
    aot_gpr[8] = (aot_gpr[16] + aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[9] << 2u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(176), aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(48)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[16]);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(504))))));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(25244)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(3372)));
    aot_gpr[10] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08858990;
      }
      goto L_08858948;
    }
L_08858948:
    aot_gpr[2] = (aot_gpr[9] + static_cast<std::uint32_t>(3376));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[10]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_0885897C;
      }
      goto L_08858960;
    }
L_08858960:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(50)));
    aot_gpr[9] = (aot_gpr[9] << 3u);
    aot_gpr[9] = (aot_gpr[16] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(432), static_cast<std::uint8_t>(0u));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(25244)));
    goto L_0885897C;
L_0885897C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(3372)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08858948;
      }
      goto L_08858990;
    }
L_08858990:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088588FC;
      }
      goto L_088589A4;
    }
L_088589A4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 4u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08858A04;
      }
      goto L_088589C0;
    }
L_088589C0:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (0u | 1u);
    aot_gpr[17] = (2215u << 16u);
    goto L_088589CC;
L_088589CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[20] = (aot_gpr[19] << (aot_gpr[18] & 31u));
    aot_gpr[31] = (0x088589DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8436)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x0881C224u>(ctx, &aot_mem) && ctx.pc == 0x088589DCu) goto L_088589DC;
    return;
L_088589DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[20] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088589F4;
      }
      goto L_088589EC;
    }
L_088589EC:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(0u));
    goto L_088589F4;
L_088589F4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088589CC;
      }
      goto L_08858A04;
    }
L_08858A04:
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
L_08858A24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(496)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] << 3u);
      if (branch_taken) {
          goto L_08858A80;
      }
      goto L_08858A50;
    }
L_08858A50:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(432)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08858A80;
      }
      goto L_08858A6C;
    }
L_08858A6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08858A88;
      }
      goto L_08858A78;
    }
L_08858A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858A90;
      }
      goto L_08858A80;
    }
L_08858A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858AD4;
      }
      goto L_08858A88;
    }
L_08858A88:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08858AC4;
      }
      goto L_08858A90;
    }
L_08858A90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(512)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08858ACC;
      }
      goto L_08858AA0;
    }
L_08858AA0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08858AB4u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 158u, 0x0885A984u>(ctx, &aot_mem) && ctx.pc == 0x08858AB4u) goto L_08858AB4;
    return;
L_08858AB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(512)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(520), aot_gpr[4]);
      if (branch_taken) {
          goto L_08858AD4;
      }
      goto L_08858AC4;
    }
L_08858AC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08858AD4;
      }
      goto L_08858ACC;
    }
L_08858ACC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08858AD4;
L_08858AD4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858AE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2912));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08858B0Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2932));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08858B0Cu) goto L_08858B0C;
    return;
L_08858B0C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08858B18u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08858B18u) goto L_08858B18;
    return;
L_08858B18:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2884));
    aot_gpr[31] = (0x08858B30u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2956));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08858B30u) goto L_08858B30;
    return;
L_08858B30:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08858B3Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08858B3Cu) goto L_08858B3C;
    return;
L_08858B3C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858B4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08858C18;
      }
      goto L_08858B6C;
    }
L_08858B6C:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(26508)));
    aot_gpr[31] = (0x08858B7Cu);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(105))))));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 189u, 0x088A0C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08858B7Cu) goto L_08858B7C;
    return;
L_08858B7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(708)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08858C18;
      }
      goto L_08858B88;
    }
L_08858B88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(512)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] << (aot_gpr[6] & 31u));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(2248), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2264), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-6824), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(512)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(51)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1104)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(26508)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(5024), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(512)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08858C08u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(50)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 108u, 0x088DBA00u>(ctx, &aot_mem) && ctx.pc == 0x08858C08u) goto L_08858C08;
    return;
L_08858C08:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08858C18u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 184u, 0x088A2CA0u>(ctx, &aot_mem) && ctx.pc == 0x08858C18u) goto L_08858C18;
    return;
L_08858C18:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858C2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08858CA4;
      }
      goto L_08858C64;
    }
L_08858C64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08858C70u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(608)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08858C70u) goto L_08858C70;
    return;
L_08858C70:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08858C7Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 67u, 0x0888A478u>(ctx, &aot_mem) && ctx.pc == 0x08858C7Cu) goto L_08858C7C;
    return;
L_08858C7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08858C88u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(612)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08858C88u) goto L_08858C88;
    return;
L_08858C88:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08858C94u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 72u, 0x0888A4B0u>(ctx, &aot_mem) && ctx.pc == 0x08858C94u) goto L_08858C94;
    return;
L_08858C94:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(548), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(544), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08858D10;
      }
      goto L_08858CA4;
    }
L_08858CA4:
    aot_gpr[31] = (0x08858CACu);
    aot_gpr[19] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08858CACu) goto L_08858CAC;
    return;
L_08858CAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(612)));
      if (branch_taken) {
          goto L_08858CF4;
      }
      goto L_08858CB8;
    }
L_08858CB8:
    aot_gpr[31] = (0x08858CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08858CC0u) goto L_08858CC0;
    return;
L_08858CC0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08858CCCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 67u, 0x0888A478u>(ctx, &aot_mem) && ctx.pc == 0x08858CCCu) goto L_08858CCC;
    return;
L_08858CCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08858CD8u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(608)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08858CD8u) goto L_08858CD8;
    return;
L_08858CD8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08858CE4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 72u, 0x0888A4B0u>(ctx, &aot_mem) && ctx.pc == 0x08858CE4u) goto L_08858CE4;
    return;
L_08858CE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(544), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(548), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08858D10;
      }
      goto L_08858CF4;
    }
L_08858CF4:
    aot_gpr[31] = (0x08858CFCu);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(608)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08858CFCu) goto L_08858CFC;
    return;
L_08858CFC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08858D08u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 72u, 0x0888A4B0u>(ctx, &aot_mem) && ctx.pc == 0x08858D08u) goto L_08858D08;
    return;
L_08858D08:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(544), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(548), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08858D10;
L_08858D10:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858D30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08858D70u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2832));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08858D70u) goto L_08858D70;
    return;
L_08858D70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08858D88u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2852));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08858D88u) goto L_08858D88;
    return;
L_08858D88:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08858D94u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08858D94u) goto L_08858D94;
    return;
L_08858D94:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x08858DA0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08858DA0u) goto L_08858DA0;
    return;
L_08858DA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
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
L_08858DC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[9] = (aot_gpr[5] << 3u);
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(432)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(496)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[16] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08858E58;
      }
      goto L_08858E00;
    }
L_08858E00:
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3072));
    aot_gpr[31] = (0x08858E1Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3084));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08858E1Cu) goto L_08858E1C;
    return;
L_08858E1C:
    aot_gpr[31] = (0x08858E24u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 76u, 0x0888D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08858E24u) goto L_08858E24;
    return;
L_08858E24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (32u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(8224));
      if (branch_taken) {
          goto L_08858E50;
      }
      goto L_08858E48;
    }
L_08858E48:
    aot_gpr[17] = (129u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-32640));
    goto L_08858E50;
L_08858E50:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
      if (branch_taken) {
          goto L_08858E88;
      }
      goto L_08858E58;
    }
L_08858E58:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08858E68u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 108u, 0x088DBA00u>(ctx, &aot_mem) && ctx.pc == 0x08858E68u) goto L_08858E68;
    return;
L_08858E68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(160)));
    aot_gpr[5] = (64u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16448));
      if (branch_taken) {
          goto L_08858E84;
      }
      goto L_08858E7C;
    }
L_08858E7C:
    aot_gpr[5] = (256u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08858E84;
L_08858E84:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08858E88;
L_08858E88:
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
L_08858EA4:
    aot_gpr[5] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7976));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(516), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(520), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(544), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(560), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(548), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08858EE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[30]);
    aot_gpr[30] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(2792));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[31]);
    aot_gpr[31] = (0x08858F2Cu);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08858F2Cu) goto L_08858F2C;
    return;
L_08858F2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[19] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (8192u << 16u);
      if (branch_taken) {
          goto L_08858F84;
      }
      goto L_08858F4C;
    }
L_08858F4C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08858F58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 19u, 0x088A2134u>(ctx, &aot_mem) && ctx.pc == 0x08858F58u) goto L_08858F58;
    return;
L_08858F58:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(15001) ? 1u : 0u);
      if (branch_taken) {
          goto L_08858F84;
      }
      goto L_08858F64;
    }
L_08858F64:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 15000u);
      if (branch_taken) {
          goto L_08858F84;
      }
      goto L_08858F6C;
    }
L_08858F6C:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_08858F84;
L_08858F84:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08858F94u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3104));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08858F94u) goto L_08858F94;
    return;
L_08858F94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08858FB8;
      }
      goto L_08858FA4;
    }
L_08858FA4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08858FB0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 88u, 0x088936C4u>(ctx, &aot_mem) && ctx.pc == 0x08858FB0u) goto L_08858FB0;
    return;
L_08858FB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_08858FB8;
L_08858FB8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08858FC8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3120));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08858FC8u) goto L_08858FC8;
    return;
L_08858FC8:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(568), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08858FDCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3140));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08858FDCu) goto L_08858FDC;
    return;
L_08858FDC:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(572), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08858FF0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3152));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08858FF0u) goto L_08858FF0;
    return;
L_08858FF0:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(576), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08859004u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3168));
    (void)rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0084(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0084_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_84(Runtime &runtime) {
    runtime.register_generated_unit(84u, 0x08858000u, 4096u, &recomp_unit_0084, &recomp_unit_0084_entry);
    runtime.register_function(0x08858000u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858014u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885802Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858050u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858058u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858064u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858068u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858084u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885808Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088580A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088580C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088580D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088580E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088580F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088580F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858104u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858110u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858118u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858124u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858134u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858154u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858168u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858180u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858190u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858198u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088581A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088581CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088581F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858204u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858224u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858230u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885823Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858248u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858250u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858258u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858260u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858288u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858294u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088582A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088582B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088582BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088582CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088582D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088582E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088582E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088582F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088582FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858308u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885831Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858328u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858330u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885833Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858350u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885835Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858374u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858388u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858394u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885839Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088583B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088583B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088583C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088583D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088583E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858400u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858414u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885842Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858434u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858460u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858468u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858470u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858478u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858480u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885848Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858498u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088584A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088584ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088584B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088584CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088584D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088584E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088584ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858500u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885850Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858514u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858520u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858534u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858540u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858548u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858554u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858568u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858574u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858588u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885859Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088585A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088585B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088585C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088585CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088585D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088585E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088585F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858604u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858630u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858638u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858648u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858650u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858668u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858674u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858688u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885869Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088586A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088586B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088586C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088586CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088586D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088586E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088586F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858704u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858724u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885872Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858738u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858740u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858748u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858750u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885875Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858770u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885877Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858784u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858798u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088587A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088587E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088587ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088587F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088587FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858814u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885881Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858834u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858840u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858868u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885889Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088588ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088588C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088588E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088588F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088588FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858948u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858960u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0885897Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858990u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088589A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088589C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088589CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088589DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088589ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x088589F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858A04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858A24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858A50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858A6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858A78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858A80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858A88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858A90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858AA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858AB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858AC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858ACCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858AD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858AE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858B0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858B18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858B30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858B3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858B4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858B6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858B7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858B88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858C08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858C18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858C2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858C64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858C70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858C7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858C88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858C94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858CA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858CACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858CB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858CC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858CCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858CD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858CE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858CF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858CFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858D08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858D10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858D30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858D70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858D88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858D94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858DA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858DC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858E00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858E1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858E24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858E48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858E50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858E58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858E68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858E7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858E84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858E88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858EA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858EE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858F2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858F4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858F58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858F64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858F6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858F84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858F94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858FA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858FB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858FB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858FC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858FDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08858FF0u, &recomp_unit_0084, "recomp_unit_0084");
}
} // namespace psprecomp
