#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0294[1020] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 41, 0, 0, 0, 42, 0, 0, 0,
    0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 51, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0,
    65, 0, 0, 0, 66, 0, 67, 0, 68, 69, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 0,
    0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84,
    0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 88, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0,
    0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 115, 0, 0, 0, 116, 0, 0, 117, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0,
    0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0,
    0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161,
    0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166,
    167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178,
    0, 0, 0, 179, 0, 180, 0, 181, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188,
    0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 0,
    0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 0,
    208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 217,
};
void recomp_unit_0294_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0892A000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0294[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0892A000;
    case 2u: goto L_0892A010;
    case 3u: goto L_0892A020;
    case 4u: goto L_0892A038;
    case 5u: goto L_0892A040;
    case 6u: goto L_0892A05C;
    case 7u: goto L_0892A068;
    case 8u: goto L_0892A084;
    case 9u: goto L_0892A09C;
    case 10u: goto L_0892A0B0;
    case 11u: goto L_0892A0BC;
    case 12u: goto L_0892A0D4;
    case 13u: goto L_0892A0E0;
    case 14u: goto L_0892A0F8;
    case 15u: goto L_0892A104;
    case 16u: goto L_0892A124;
    case 17u: goto L_0892A130;
    case 18u: goto L_0892A14C;
    case 19u: goto L_0892A160;
    case 20u: goto L_0892A16C;
    case 21u: goto L_0892A178;
    case 22u: goto L_0892A194;
    case 23u: goto L_0892A1A0;
    case 24u: goto L_0892A1C0;
    case 25u: goto L_0892A1D0;
    case 26u: goto L_0892A1E0;
    case 27u: goto L_0892A20C;
    case 28u: goto L_0892A238;
    case 29u: goto L_0892A240;
    case 30u: goto L_0892A248;
    case 31u: goto L_0892A27C;
    case 32u: goto L_0892A288;
    case 33u: goto L_0892A298;
    case 34u: goto L_0892A2B4;
    case 35u: goto L_0892A2C0;
    case 36u: goto L_0892A2D0;
    case 37u: goto L_0892A2D4;
    case 38u: goto L_0892A318;
    case 39u: goto L_0892A34C;
    case 40u: goto L_0892A35C;
    case 41u: goto L_0892A360;
    case 42u: goto L_0892A370;
    case 43u: goto L_0892A384;
    case 44u: goto L_0892A394;
    case 45u: goto L_0892A3A8;
    case 46u: goto L_0892A3BC;
    case 47u: goto L_0892A3D4;
    case 48u: goto L_0892A3E8;
    case 49u: goto L_0892A424;
    case 50u: goto L_0892A440;
    case 51u: goto L_0892A448;
    case 52u: goto L_0892A44C;
    case 53u: goto L_0892A460;
    case 54u: goto L_0892A470;
    case 55u: goto L_0892A4B8;
    case 56u: goto L_0892A4D4;
    case 57u: goto L_0892A4DC;
    case 58u: goto L_0892A52C;
    case 59u: goto L_0892A53C;
    case 60u: goto L_0892A54C;
    case 61u: goto L_0892A55C;
    case 62u: goto L_0892A564;
    case 63u: goto L_0892A56C;
    case 64u: goto L_0892A574;
    case 65u: goto L_0892A580;
    case 66u: goto L_0892A590;
    case 67u: goto L_0892A598;
    case 68u: goto L_0892A5A0;
    case 69u: goto L_0892A5A4;
    case 70u: goto L_0892A5B4;
    case 71u: goto L_0892A5BC;
    case 72u: goto L_0892A5C8;
    case 73u: goto L_0892A5DC;
    case 74u: goto L_0892A5E4;
    case 75u: goto L_0892A5EC;
    case 76u: goto L_0892A5F4;
    case 77u: goto L_0892A614;
    case 78u: goto L_0892A620;
    case 79u: goto L_0892A634;
    case 80u: goto L_0892A640;
    case 81u: goto L_0892A650;
    case 82u: goto L_0892A65C;
    case 83u: goto L_0892A668;
    case 84u: goto L_0892A67C;
    case 85u: goto L_0892A688;
    case 86u: goto L_0892A698;
    case 87u: goto L_0892A6A4;
    case 88u: goto L_0892A6AC;
    case 89u: goto L_0892A6B0;
    case 90u: goto L_0892A6C4;
    case 91u: goto L_0892A6E8;
    case 92u: goto L_0892A6F4;
    case 93u: goto L_0892A704;
    case 94u: goto L_0892A728;
    case 95u: goto L_0892A748;
    case 96u: goto L_0892A750;
    case 97u: goto L_0892A7A0;
    case 98u: goto L_0892A7B0;
    case 99u: goto L_0892A7B8;
    case 100u: goto L_0892A7D0;
    case 101u: goto L_0892A7E0;
    case 102u: goto L_0892A7F4;
    case 103u: goto L_0892A804;
    case 104u: goto L_0892A810;
    case 105u: goto L_0892A818;
    case 106u: goto L_0892A820;
    case 107u: goto L_0892A828;
    case 108u: goto L_0892A83C;
    case 109u: goto L_0892A84C;
    case 110u: goto L_0892A858;
    case 111u: goto L_0892A860;
    case 112u: goto L_0892A868;
    case 113u: goto L_0892A870;
    case 114u: goto L_0892A908;
    case 115u: goto L_0892A90C;
    case 116u: goto L_0892A91C;
    case 117u: goto L_0892A928;
    case 118u: goto L_0892A92C;
    case 119u: goto L_0892A948;
    case 120u: goto L_0892A954;
    case 121u: goto L_0892A958;
    case 122u: goto L_0892A96C;
    case 123u: goto L_0892A980;
    case 124u: goto L_0892A9CC;
    case 125u: goto L_0892A9DC;
    case 126u: goto L_0892AA18;
    case 127u: goto L_0892AA28;
    case 128u: goto L_0892AA38;
    case 129u: goto L_0892AA5C;
    case 130u: goto L_0892AA7C;
    case 131u: goto L_0892AA90;
    case 132u: goto L_0892AA9C;
    case 133u: goto L_0892AAA4;
    case 134u: goto L_0892AAB0;
    case 135u: goto L_0892AAB8;
    case 136u: goto L_0892AACC;
    case 137u: goto L_0892AAD8;
    case 138u: goto L_0892AAE0;
    case 139u: goto L_0892AAEC;
    case 140u: goto L_0892AAF8;
    case 141u: goto L_0892AB0C;
    case 142u: goto L_0892AB14;
    case 143u: goto L_0892AB28;
    case 144u: goto L_0892AB30;
    case 145u: goto L_0892AB48;
    case 146u: goto L_0892AB70;
    case 147u: goto L_0892AB78;
    case 148u: goto L_0892AB8C;
    case 149u: goto L_0892AB94;
    case 150u: goto L_0892ABAC;
    case 151u: goto L_0892ABB8;
    case 152u: goto L_0892ABCC;
    case 153u: goto L_0892ABEC;
    case 154u: goto L_0892AC00;
    case 155u: goto L_0892AC14;
    case 156u: goto L_0892AC38;
    case 157u: goto L_0892AC3C;
    case 158u: goto L_0892AC4C;
    case 159u: goto L_0892AC54;
    case 160u: goto L_0892AC6C;
    case 161u: goto L_0892AC7C;
    case 162u: goto L_0892AC8C;
    case 163u: goto L_0892ACA4;
    case 164u: goto L_0892ACB8;
    case 165u: goto L_0892ACF0;
    case 166u: goto L_0892ACFC;
    case 167u: goto L_0892AD00;
    case 168u: goto L_0892AD1C;
    case 169u: goto L_0892AD28;
    case 170u: goto L_0892AD2C;
    case 171u: goto L_0892AD50;
    case 172u: goto L_0892AD88;
    case 173u: goto L_0892AD98;
    case 174u: goto L_0892ADAC;
    case 175u: goto L_0892ADC8;
    case 176u: goto L_0892ADE4;
    case 177u: goto L_0892ADF0;
    case 178u: goto L_0892ADFC;
    case 179u: goto L_0892AE0C;
    case 180u: goto L_0892AE14;
    case 181u: goto L_0892AE1C;
    case 182u: goto L_0892AE20;
    case 183u: goto L_0892AE28;
    case 184u: goto L_0892AE48;
    case 185u: goto L_0892AE54;
    case 186u: goto L_0892AE60;
    case 187u: goto L_0892AE6C;
    case 188u: goto L_0892AE7C;
    case 189u: goto L_0892AE84;
    case 190u: goto L_0892AE8C;
    case 191u: goto L_0892AE94;
    case 192u: goto L_0892AEB4;
    case 193u: goto L_0892AEC0;
    case 194u: goto L_0892AECC;
    case 195u: goto L_0892AEDC;
    case 196u: goto L_0892AEE4;
    case 197u: goto L_0892AEEC;
    case 198u: goto L_0892AEF4;
    case 199u: goto L_0892AF10;
    case 200u: goto L_0892AF18;
    case 201u: goto L_0892AF20;
    case 202u: goto L_0892AF28;
    case 203u: goto L_0892AF34;
    case 204u: goto L_0892AF50;
    case 205u: goto L_0892AF58;
    case 206u: goto L_0892AF6C;
    case 207u: goto L_0892AF74;
    case 208u: goto L_0892AF80;
    case 209u: goto L_0892AF90;
    case 210u: goto L_0892AFB0;
    case 211u: goto L_0892AFBC;
    case 212u: goto L_0892AFC8;
    case 213u: goto L_0892AFD0;
    case 214u: goto L_0892AFD8;
    case 215u: goto L_0892AFE0;
    case 216u: goto L_0892AFE8;
    case 217u: goto L_0892AFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0892A000:
    aot_gpr[8] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    goto L_0892A010;
L_0892A010:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[8]);
      if (branch_taken) {
          goto L_0892A038;
      }
      goto L_0892A020;
    }
L_0892A020:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(120)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0892A038;
L_0892A038:
    aot_gpr[31] = (0x0892A040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 191u, 0x08929DBCu>(ctx, &aot_mem) && ctx.pc == 0x0892A040u) goto L_0892A040;
    return;
L_0892A040:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[19] & 2u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[31] = (0x0892A05Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 78u, 0x08A49ED4u>(ctx, &aot_mem) && ctx.pc == 0x0892A05Cu) goto L_0892A05C;
    return;
L_0892A05C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x0892A068u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 74u, 0x08A49E84u>(ctx, &aot_mem) && ctx.pc == 0x0892A068u) goto L_0892A068;
    return;
L_0892A068:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 15u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (16384u << 16u);
    aot_gpr[31] = (0x0892A084u);
    aot_gpr[9] = (4096u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 82u, 0x08A49F30u>(ctx, &aot_mem) && ctx.pc == 0x0892A084u) goto L_0892A084;
    return;
L_0892A084:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[4] & 1024u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0892A160;
      }
      goto L_0892A09C;
    }
L_0892A09C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[17]);
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5756)));
      if (branch_taken) {
          goto L_0892A0BC;
      }
      goto L_0892A0B0;
    }
L_0892A0B0:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_0892A0BC;
L_0892A0BC:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_0892A0E0;
      }
      goto L_0892A0D4;
    }
L_0892A0D4:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_0892A0E0;
L_0892A0E0:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[17]);
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_0892A104;
      }
      goto L_0892A0F8;
    }
L_0892A0F8:
    aot_gpr[7] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_0892A104;
L_0892A104:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_0892A130;
      }
      goto L_0892A124;
    }
L_0892A124:
    aot_gpr[7] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_0892A130;
L_0892A130:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[31] = (0x0892A14Cu);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 70u, 0x08A49E20u>(ctx, &aot_mem) && ctx.pc == 0x0892A14Cu) goto L_0892A14C;
    return;
L_0892A14C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[21] << (aot_gpr[4] & 31u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] | 8u);
      if (branch_taken) {
          goto L_0892A1D0;
      }
      goto L_0892A160;
    }
L_0892A160:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_0892A178;
      }
      goto L_0892A16C;
    }
L_0892A16C:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0892A178;
L_0892A178:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0892A1A0;
      }
      goto L_0892A194;
    }
L_0892A194:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0892A1A0;
L_0892A1A0:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[31] = (0x0892A1C0u);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 70u, 0x08A49E20u>(ctx, &aot_mem) && ctx.pc == 0x0892A1C0u) goto L_0892A1C0;
    return;
L_0892A1C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[21] << (aot_gpr[4] & 31u));
    aot_gpr[18] = (aot_gpr[18] | 8u);
    goto L_0892A1D0;
L_0892A1D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-8476)));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-8476), aot_gpr[4]);
    goto L_0892A1E0;
L_0892A1E0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A20C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[7];
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0892A240;
      }
      goto L_0892A238;
    }
L_0892A238:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_0892A240;
L_0892A240:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) < 0;
    aot_gpr[6] = (aot_gpr[8] << 7u);
      if (branch_taken) {
          goto L_0892A2D4;
      }
      goto L_0892A248;
    }
L_0892A248:
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(5392)));
    aot_gpr[9] = (17792u << 16u);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(112)));
    aot_gpr[8] = (20224u << 16u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
        goto L_0892A288;
    }
    goto L_0892A27C;
L_0892A27C:
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0892A298;
      }
      goto L_0892A288;
    }
L_0892A288:
    aot_gpr[8] = (32768u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    goto L_0892A298;
L_0892A298:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(116)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
        goto L_0892A2C0;
    }
    goto L_0892A2B4;
L_0892A2B4:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0892A2D0;
      }
      goto L_0892A2C0;
    }
L_0892A2C0:
    aot_gpr[6] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    goto L_0892A2D0;
L_0892A2D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    goto L_0892A2D4;
L_0892A2D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-65));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A318:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] | 64u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[16] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] >> 6u);
      if (branch_taken) {
          goto L_0892A360;
      }
      goto L_0892A34C;
    }
L_0892A34C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0892A35Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A35Cu) goto L_0892A35C;
    return;
L_0892A35C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    goto L_0892A360;
L_0892A360:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A370:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0892A394u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0892A318;
L_0892A394:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[4] & 8192u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892A3E8;
      }
      goto L_0892A3A8;
    }
L_0892A3A8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (aot_gpr[4] & 1u);
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (aot_gpr[5] << (aot_gpr[8] & 31u));
      if (branch_taken) {
          goto L_0892A3D4;
      }
      goto L_0892A3BC;
    }
L_0892A3BC:
    aot_gpr[8] = (2219u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-10780)));
    aot_gpr[4] = (aot_gpr[9] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-10780), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[5] << (aot_gpr[4] & 31u));
    goto L_0892A3D4;
L_0892A3D4:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-10792)));
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-10792), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    goto L_0892A3E8;
L_0892A3E8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892A44C;
      }
      goto L_0892A424;
    }
L_0892A424:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A448;
      }
      goto L_0892A440;
    }
L_0892A440:
    aot_gpr[31] = (0x0892A448u);
    // nop
    goto L_0892A370;
L_0892A448:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    goto L_0892A44C;
L_0892A44C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A460:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[4] & 8u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A470:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[6] & 512u);
    aot_gpr[6] = (20224u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[18] = (2219u << 16u);
      if (branch_taken) {
          goto L_0892A4D4;
      }
      goto L_0892A4B8;
    }
L_0892A4B8:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (2219u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-10832)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0892A4D4;
L_0892A4D4:
    aot_gpr[31] = (0x0892A4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 191u, 0x08929DBCu>(ctx, &aot_mem) && ctx.pc == 0x0892A4DCu) goto L_0892A4DC;
    return;
L_0892A4DC:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8704));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-10800)));
    aot_gpr[4] = (aot_gpr[17] << (aot_gpr[4] & 31u));
    aot_gpr[4] = (aot_gpr[7] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-10800), aot_gpr[4]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (2u << 16u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_gpr[7] = (aot_gpr[5] & aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0892A53C;
      }
      goto L_0892A52C;
    }
L_0892A52C:
    aot_gpr[5] = (2219u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-10828)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0892A564;
      }
      goto L_0892A53C;
    }
L_0892A53C:
    aot_gpr[7] = (4u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[7]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0892A55C;
      }
      goto L_0892A54C;
    }
L_0892A54C:
    aot_gpr[5] = (2219u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-10824)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0892A564;
      }
      goto L_0892A55C;
    }
L_0892A55C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4528)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    goto L_0892A564;
L_0892A564:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0892A5A4;
      }
      goto L_0892A56C;
    }
L_0892A56C:
    aot_gpr[31] = (0x0892A574u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 87u, 0x08A39434u>(ctx, &aot_mem) && ctx.pc == 0x0892A574u) goto L_0892A574;
    return;
L_0892A574:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 129 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0892A5A0;
      }
      goto L_0892A580;
    }
L_0892A580:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
        goto L_0892A598;
    }
    goto L_0892A590;
L_0892A590:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_0892A598;
      }
      goto L_0892A598;
    }
L_0892A598:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0892A5A0;
      }
      goto L_0892A5A0;
    }
L_0892A5A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    goto L_0892A5A4;
L_0892A5A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892A5F4;
      }
      goto L_0892A5B4;
    }
L_0892A5B4:
    aot_gpr[31] = (0x0892A5BCu);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 87u, 0x08A39434u>(ctx, &aot_mem) && ctx.pc == 0x0892A5BCu) goto L_0892A5BC;
    return;
L_0892A5BC:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[2]) < 129 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0892A5EC;
      }
      goto L_0892A5C8;
    }
L_0892A5C8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
        goto L_0892A5E4;
    }
    goto L_0892A5DC;
L_0892A5DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_0892A5E4;
      }
      goto L_0892A5E4;
    }
L_0892A5E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A5EC;
      }
      goto L_0892A5EC;
    }
L_0892A5EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_0892A5F4;
L_0892A5F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[7] = (aot_gpr[17] << (aot_gpr[7] & 31u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-8480)));
      if (branch_taken) {
          goto L_0892A620;
      }
      goto L_0892A614;
    }
L_0892A614:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0892A620;
L_0892A620:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[22];
        goto L_0892A640;
    }
    goto L_0892A634;
L_0892A634:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0892A650;
      }
      goto L_0892A640;
    }
L_0892A640:
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[9] + aot_gpr[5]);
    goto L_0892A650;
L_0892A650:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_0892A668;
      }
      goto L_0892A65C;
    }
L_0892A65C:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0892A668;
L_0892A668:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[20] - aot_fpr[22];
        goto L_0892A688;
    }
    goto L_0892A67C;
L_0892A67C:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0892A698;
      }
      goto L_0892A688;
    }
L_0892A688:
    aot_gpr[6] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[6]);
    goto L_0892A698;
L_0892A698:
    aot_gpr[8] = (aot_gpr[8] & 1024u);
    if (aot_gpr[8] == 0u) {
    aot_gpr[7] = (~(aot_gpr[7] | 0u));
        goto L_0892A6AC;
    }
    goto L_0892A6A4;
L_0892A6A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
      if (branch_taken) {
          goto L_0892A6B0;
      }
      goto L_0892A6AC;
    }
L_0892A6AC:
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[7]);
    goto L_0892A6B0;
L_0892A6B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-8480), aot_gpr[4]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[18] & 128u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0892A6E8;
      }
      goto L_0892A6C4;
    }
L_0892A6C4:
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-10784)));
    aot_gpr[4] = (aot_gpr[17] << (aot_gpr[4] & 31u));
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-10784), aot_gpr[4]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (aot_gpr[18] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    goto L_0892A6E8;
L_0892A6E8:
    aot_gpr[7] = (aot_gpr[18] & 256u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[5] = (aot_gpr[5] << 16u);
        goto L_0892A750;
    }
    goto L_0892A6F4;
L_0892A6F4:
    aot_gpr[7] = (aot_gpr[18] & 8192u);
    aot_gpr[18] = (aot_gpr[17] << (aot_gpr[4] & 31u));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0892A728;
      }
      goto L_0892A704;
    }
L_0892A704:
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-10796)));
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-10796), aot_gpr[4]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] & aot_gpr[9]);
      if (branch_taken) {
          goto L_0892A748;
      }
      goto L_0892A728;
    }
L_0892A728:
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-10780)));
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-10780), aot_gpr[4]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (aot_gpr[18] & aot_gpr[9]);
    goto L_0892A748;
L_0892A748:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[5] << 16u);
    goto L_0892A750;
L_0892A750:
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8592));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-10788)));
    aot_gpr[4] = (aot_gpr[17] << (aot_gpr[4] & 31u));
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-10788), aot_gpr[4]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A7A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A7B8;
      }
      goto L_0892A7B0;
    }
L_0892A7B0:
    aot_gpr[5] = (aot_gpr[5] | 128u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_0892A7B8;
L_0892A7B8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A7D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] | 256u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A7E0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A820;
      }
      goto L_0892A7F4;
    }
L_0892A7F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[5] & 128u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0892A820;
      }
      goto L_0892A804;
    }
L_0892A804:
    aot_gpr[6] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] & 4096u);
      if (branch_taken) {
          goto L_0892A820;
      }
      goto L_0892A810;
    }
L_0892A810:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A820;
      }
      goto L_0892A818;
    }
L_0892A818:
    aot_gpr[5] = (aot_gpr[5] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_0892A820;
L_0892A820:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A828:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A868;
      }
      goto L_0892A83C;
    }
L_0892A83C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[5] & 128u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0892A868;
      }
      goto L_0892A84C;
    }
L_0892A84C:
    aot_gpr[6] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] & 4096u);
      if (branch_taken) {
          goto L_0892A868;
      }
      goto L_0892A858;
    }
L_0892A858:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A868;
      }
      goto L_0892A860;
    }
L_0892A860:
    aot_gpr[5] = (aot_gpr[5] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_0892A868;
L_0892A868:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A870:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[31]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<12u, 14u, 14u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<14u, 14u, 12u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (16192u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, 0u);
    aot_gpr[18] = (0u | 1u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0892A90C;
      }
      goto L_0892A908;
    }
L_0892A908:
    aot_gpr[18] = (0u | 0u);
    goto L_0892A90C;
L_0892A90C:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_0892A928;
      }
      goto L_0892A91C;
    }
L_0892A91C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0892A92C;
      }
      goto L_0892A928;
    }
L_0892A928:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0892A92C;
L_0892A92C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0892A954;
      }
      goto L_0892A948;
    }
L_0892A948:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0892A958;
      }
      goto L_0892A954;
    }
L_0892A954:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0892A958;
L_0892A958:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0892A9DC;
      }
      goto L_0892A96C;
    }
L_0892A96C:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[22]) || std::isnan(aot_fpr[26])) && aot_fpr[22] == aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A9CC;
      }
      goto L_0892A980;
    }
L_0892A980:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (14979u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[4] = (17323u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 42598u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16128u << 16u);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_fpr[13] = aot_fpr[14] - aot_fpr[15];
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0892AA5C;
      }
      goto L_0892A9CC;
    }
L_0892A9CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_0892AD50;
      }
      goto L_0892A9DC;
    }
L_0892A9DC:
    aot_gpr[4] = (14979u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (17323u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 42598u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[15]));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    aot_gpr[4] = (16128u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0892AA28;
      }
      goto L_0892AA18;
    }
L_0892AA18:
    aot_fpr[16] = aot_fpr[12] - aot_fpr[15];
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_fpr[22] = aot_fpr[16] / aot_fpr[14];
    aot_fpr[22] = aot_fpr[24] - aot_fpr[22];
    goto L_0892AA28;
L_0892AA28:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x0892AA38u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 173u, 0x08A2FB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892AA38u) goto L_0892AA38;
    return;
L_0892AA38:
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[16];
    aot_fpr[12] = aot_fpr[14] - aot_fpr[15];
    goto L_0892AA5C;
L_0892AA5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[31] = (0x0892AA7Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 86u, 0x08944C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0892AA7Cu) goto L_0892AA7C;
    return;
L_0892AA7C:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892AAA4;
      }
      goto L_0892AA90;
    }
L_0892AA90:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0892AA9Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 91u, 0x08944CF8u>(ctx, &aot_mem) && ctx.pc == 0x0892AA9Cu) goto L_0892AA9C;
    return;
L_0892AA9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AAB0;
      }
      goto L_0892AAA4;
    }
L_0892AAA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[18] = (0u | 0u);
    goto L_0892AAB0;
L_0892AAB0:
    aot_gpr[31] = (0x0892AAB8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 86u, 0x08944C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0892AAB8u) goto L_0892AAB8;
    return;
L_0892AAB8:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892AAE0;
      }
      goto L_0892AACC;
    }
L_0892AACC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0892AAD8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 91u, 0x08944CF8u>(ctx, &aot_mem) && ctx.pc == 0x0892AAD8u) goto L_0892AAD8;
    return;
L_0892AAD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AAEC;
      }
      goto L_0892AAE0;
    }
L_0892AAE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[18] = (0u | 0u);
    goto L_0892AAEC;
L_0892AAEC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0892AAF8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 95u, 0x08944D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0892AAF8u) goto L_0892AAF8;
    return;
L_0892AAF8:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_0892AB14;
      }
      goto L_0892AB0C;
    }
L_0892AB0C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0892AB28;
      }
      goto L_0892AB14;
    }
L_0892AB14:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_0892AB28;
    }
    goto L_0892AB28;
L_0892AB28:
    aot_gpr[31] = (0x0892AB30u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 85u, 0x08A2F634u>(ctx, &aot_mem) && ctx.pc == 0x0892AB30u) goto L_0892AB30;
    return;
L_0892AB30:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0892ABEC;
      }
      goto L_0892AB48;
    }
L_0892AB48:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<12u, 15u, 14u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_0892AB78;
      }
      goto L_0892AB70;
    }
L_0892AB70:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0892AB8C;
      }
      goto L_0892AB78;
    }
L_0892AB78:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_0892AB8C;
    }
    goto L_0892AB8C;
L_0892AB8C:
    aot_gpr[31] = (0x0892AB94u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 85u, 0x08A2F634u>(ctx, &aot_mem) && ctx.pc == 0x0892AB94u) goto L_0892AB94;
    return;
L_0892AB94:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892ABB8;
      }
      goto L_0892ABAC;
    }
L_0892ABAC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_0892ABEC;
      }
      goto L_0892ABB8;
    }
L_0892ABB8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892ABEC;
      }
      goto L_0892ABCC;
    }
L_0892ABCC:
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[12] = aot_fpr[14] / aot_fpr[12];
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[12] = aot_fpr[24] - aot_fpr[12];
    aot_fpr[12] = aot_fpr[15] + aot_fpr[12];
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    goto L_0892ABEC;
L_0892ABEC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_0892AC14;
      }
      goto L_0892AC00;
    }
L_0892AC00:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0892AC14;
    }
    goto L_0892AC14;
L_0892AC14:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (15395u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892AC3C;
      }
      goto L_0892AC38;
    }
L_0892AC38:
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    goto L_0892AC3C;
L_0892AC3C:
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892ACA4;
      }
      goto L_0892AC4C;
    }
L_0892AC4C:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0892AC6C;
      }
      goto L_0892AC54;
    }
L_0892AC54:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6932)));
    aot_gpr[4] = (16948u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    goto L_0892AC6C;
L_0892AC6C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x0892AC7Cu);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x0892AC7Cu) goto L_0892AC7C;
    return;
L_0892AC7C:
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x0892AC8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x0892AC8Cu) goto L_0892AC8C;
    return;
L_0892AC8C:
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0892ACB8;
      }
      goto L_0892ACA4;
    }
L_0892ACA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_0892ACB8;
L_0892ACB8:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<16u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<12u, 16u, 14u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.execute_vfpu_vdot_ct<12u, 16u, 15u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = aot_fpr[28] / aot_fpr[22];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0892ACFC;
      }
      goto L_0892ACF0;
    }
L_0892ACF0:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0892AD00;
      }
      goto L_0892ACFC;
    }
L_0892ACFC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0892AD00;
L_0892AD00:
    aot_fpr[13] = aot_fpr[28] / aot_fpr[22];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0892AD28;
      }
      goto L_0892AD1C;
    }
L_0892AD1C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0892AD2C;
      }
      goto L_0892AD28;
    }
L_0892AD28:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0892AD2C;
L_0892AD2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[28] - aot_fpr[12];
    aot_fpr[13] = aot_fpr[28] - aot_fpr[13];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0892AD50;
L_0892AD50:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AD88:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AD98:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[6]);
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr[6]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892ADAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[5] = (aot_gpr[5] << 6u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892ADC8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(5376));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE1C;
      }
      goto L_0892ADE4;
    }
L_0892ADE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5376)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    goto L_0892ADF0;
L_0892ADF0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE14;
      }
      goto L_0892ADFC;
    }
L_0892ADFC:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892ADF0;
      }
      goto L_0892AE0C;
    }
L_0892AE0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE1C;
      }
      goto L_0892AE14;
    }
L_0892AE14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE20;
      }
      goto L_0892AE1C;
    }
L_0892AE1C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0892AE20;
L_0892AE20:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AE28:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-7472));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE8C;
      }
      goto L_0892AE48;
    }
L_0892AE48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    goto L_0892AE54;
L_0892AE54:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892AE6C;
      }
      goto L_0892AE60;
    }
L_0892AE60:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892AE84;
      }
      goto L_0892AE6C;
    }
L_0892AE6C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892AE54;
      }
      goto L_0892AE7C;
    }
L_0892AE7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE8C;
      }
      goto L_0892AE84;
    }
L_0892AE84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892AE8C;
      }
      goto L_0892AE8C;
    }
L_0892AE8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AE94:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(5568));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AEEC;
      }
      goto L_0892AEB4;
    }
L_0892AEB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5568)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    goto L_0892AEC0;
L_0892AEC0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892AEE4;
      }
      goto L_0892AECC;
    }
L_0892AECC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_0892AEC0;
      }
      goto L_0892AEDC;
    }
L_0892AEDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AEEC;
      }
      goto L_0892AEE4;
    }
L_0892AEE4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892AEEC;
      }
      goto L_0892AEEC;
    }
L_0892AEEC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AEF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0892AF10u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08A5AA04u;
    return;
L_0892AF10:
    aot_gpr[31] = (0x0892AF18u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x08A5AA24u;
    return;
L_0892AF18:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF58;
      }
      goto L_0892AF20;
    }
L_0892AF20:
    aot_gpr[31] = (0x0892AF28u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x08A5AA34u;
    return;
L_0892AF28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x0892AF34u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    ctx.pc = 0x08A5AA2Cu;
    return;
L_0892AF34:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892AF6C;
      }
      goto L_0892AF50;
    }
L_0892AF50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0892AF74;
      }
      goto L_0892AF58;
    }
L_0892AF58:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0892AF80;
      }
      goto L_0892AF6C;
    }
L_0892AF6C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_0892AF74;
L_0892AF74:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0892AF80u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = 0x08A5AA1Cu;
    return;
L_0892AF80:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AF90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0892AFB0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.pc = 0x08A5AA74u;
    return;
L_0892AFB0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892AFD0;
      }
      goto L_0892AFBC;
    }
L_0892AFBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892AFD8;
      }
      goto L_0892AFC8;
    }
L_0892AFC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0892AFE0;
      }
      goto L_0892AFD0;
    }
L_0892AFD0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892AFEC;
      }
      goto L_0892AFD8;
    }
L_0892AFD8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_0892AFE0;
L_0892AFE0:
    aot_gpr[31] = (0x0892AFE8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5AA84u;
    return;
L_0892AFE8:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    goto L_0892AFEC;
L_0892AFEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0294(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0294_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_294(Runtime &runtime) {
    runtime.register_generated_unit(294u, 0x0892A000u, 4096u, &recomp_unit_0294, &recomp_unit_0294_entry);
    runtime.register_function(0x0892A000u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A010u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A020u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A038u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A040u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A05Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A068u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A084u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A09Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A0B0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A0BCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A0D4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A0E0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A0F8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A104u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A124u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A130u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A14Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A160u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A16Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A178u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A194u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A1A0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A1C0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A1D0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A1E0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A20Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A238u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A240u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A248u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A27Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A288u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A298u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A2B4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A2C0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A2D0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A2D4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A318u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A34Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A35Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A360u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A370u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A384u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A394u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A3A8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A3BCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A3D4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A3E8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A424u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A440u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A448u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A44Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A460u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A470u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A4B8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A4D4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A4DCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A52Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A53Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A54Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A55Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A564u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A56Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A574u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A580u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A590u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A598u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A5A0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A5A4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A5B4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A5BCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A5C8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A5DCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A5E4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A5ECu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A5F4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A614u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A620u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A634u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A640u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A650u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A65Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A668u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A67Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A688u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A698u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A6A4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A6ACu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A6B0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A6C4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A6E8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A6F4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A704u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A728u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A748u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A750u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A7A0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A7B0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A7B8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A7D0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A7E0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A7F4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A804u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A810u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A818u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A820u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A828u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A83Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A84Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A858u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A860u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A868u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A870u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A908u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A90Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A91Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A928u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A92Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A948u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A954u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A958u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A96Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A980u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A9CCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892A9DCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AA18u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AA28u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AA38u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AA5Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AA7Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AA90u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AA9Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AAA4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AAB0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AAB8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AACCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AAD8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AAE0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AAECu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AAF8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AB0Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AB14u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AB28u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AB30u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AB48u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AB70u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AB78u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AB8Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AB94u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ABACu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ABB8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ABCCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ABECu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AC00u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AC14u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AC38u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AC3Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AC4Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AC54u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AC6Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AC7Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AC8Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ACA4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ACB8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ACF0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ACFCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AD00u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AD1Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AD28u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AD2Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AD50u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AD88u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AD98u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ADACu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ADC8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ADE4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ADF0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892ADFCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE0Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE14u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE1Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE20u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE28u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE48u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE54u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE60u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE6Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE7Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE84u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE8Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AE94u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AEB4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AEC0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AECCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AEDCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AEE4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AEECu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AEF4u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AF10u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AF18u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AF20u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AF28u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AF34u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AF50u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AF58u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AF6Cu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AF74u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AF80u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AF90u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AFB0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AFBCu, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AFC8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AFD0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AFD8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AFE0u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AFE8u, &recomp_unit_0294, "recomp_unit_0294");
    runtime.register_function(0x0892AFECu, &recomp_unit_0294, "recomp_unit_0294");
}
} // namespace psprecomp
